/*
 * Authors - Gerard Valade <gerard.valade@gmail.com>
 *
 * Adapted from mavlink for ardupilot
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */
#include "er9x.h"

#include "serial.h"
#include "mavlink.h"

// this might need to move to the flight software
mavlink_system_t mavlink_system = { 7, 1, 0, 0 };

//static uint8_t system_id = 7;
//static uint8_t component_id = 1;
static uint8_t target_system = 7;
static uint8_t target_component = 0;

//static mavlink_message_t mavlink_message_in;

// Mavlink message decoded Status Text
#define LEN_STATUSTEXT 15
static uint8_t mav_statustext[LEN_STATUSTEXT];
static int8_t mav_heartbeat = 0;
static int8_t watch_mav_req_id_action = 0;
static int8_t watch_mav_req_start_data_stream = 5;
static int8_t watch_mav_req_params_list = 5;
static int8_t watch_mav_req_params_set = 0;

// Telemetry data hold
Telemetry_Data_t telemetry_data;

// *****************************************************
static void MAVLINK_parse_char(uint8_t c);

#ifdef DUMP_RX_TX
#define MAX_RX_BUFFER 16
uint8_t mavlinkRxBufferCount = 0;
uint8_t mavlinkRxBuffer[MAX_RX_BUFFER];
uint8_t mav_dump_rx = 0;
void MAVLINK_rxhandler(uint8_t byte) {
	if (mav_dump_rx) {
		if (byte == MAVLINK_STX) {
			mavlinkRxBufferCount = 0;
		}
		if (mavlinkRxBufferCount < MAX_RX_BUFFER) {
			mavlinkRxBuffer[mavlinkRxBufferCount++] = byte;
		}
	}
	MAVLINK_parse_char(byte);

}
#else
void MAVLINK_rxhandler(uint8_t byte) {
	MAVLINK_parse_char(byte);
}
#endif
SerialFuncP RXHandler = MAVLINK_rxhandler;

void MAVLINK_reset(uint8_t warm_reset) {
	mav_heartbeat = 0;
	if (warm_reset && telemetry_data.status) {
		mav_statustext[0] = 0;
	}
#ifdef DUMP_RX_TX
	mavlinkRxBufferCount = 0;
	mav_dump_rx = 0;
#endif
	mavlink_status_t* p_status = mavlink_get_channel_status(MAVLINK_COMM_0);
	p_status->current_rx_seq = 0;
	p_status->current_tx_seq = 0;
	memset(&telemetry_data, 0, sizeof(telemetry_data));
	telemetry_data.control_mode = ERROR_NUM_MODES;
	telemetry_data.req_mode = ERROR_NUM_MODES;

	mav_heartbeat = 0;
	watch_mav_req_id_action = 0;
	watch_mav_req_start_data_stream = 5;
	watch_mav_req_params_list = 5;
	watch_mav_req_params_set = 0;

}

void MAVLINK_Init(void) {
	mav_statustext[0] = 0;
	MAVLINK_reset(0);
	SERIAL_Init();

}

static inline void REC_MAVLINK_MSG_ID_STATUSTEXT(const mavlink_message_t* msg) {
	//memcpy(mav_statustext, msg->payload + sizeof(uint8_t), sizeof(int8_t) * LEN_STATUSTEXT);
	//	_MAV_RETURN_int8_t_array(msg, mav_statustext, LEN_STATUSTEXT,  1);
	memcpy(mav_statustext, &_MAV_PAYLOAD(msg)[1], LEN_STATUSTEXT);
}

static inline void REC_MAVLINK_MSG_ID_SYS_STATUS(const mavlink_message_t* msg) {
	mavlink_sys_status_t sys_status;
	mavlink_msg_sys_status_decode(msg, &sys_status);

	uint8_t mode = mavlink_msg_sys_status_get_mode(msg);
	uint8_t nav_mode = mavlink_msg_sys_status_get_nav_mode(msg);
	telemetry_data.control_mode = MAVLINK_NavMode2CtrlMode(mode, nav_mode);
	//telemetry_data.mode = mode;
	//telemetry_data.nav_mode = nav_mode;

	telemetry_data.status = mavlink_msg_sys_status_get_status(msg);
	//telemetry_data.load = mavlink_msg_sys_status_get_load(msg);
	telemetry_data.vbat = mavlink_msg_sys_status_get_vbat(msg) / 100;
}

static inline void REC_MAVLINK_MSG_ID_GPS_RAW(const mavlink_message_t* msg) {
	telemetry_data.fix_type = mavlink_msg_gps_raw_get_fix_type(msg);
	telemetry_data.loc_current.lat = mavlink_msg_gps_raw_get_lat(msg);
	telemetry_data.loc_current.lon = mavlink_msg_gps_raw_get_lon(msg);
	telemetry_data.loc_current.alt = mavlink_msg_gps_raw_get_alt(msg);
	telemetry_data.eph = mavlink_msg_gps_raw_get_eph(msg);
	telemetry_data.hdg = mavlink_msg_gps_raw_get_hdg(msg);
	telemetry_data.v = mavlink_msg_gps_raw_get_v(msg);
}

static inline void REC_MAVLINK_MSG_ID_GPS_STATUS(const mavlink_message_t* msg) {
	telemetry_data.satellites_visible = mavlink_msg_gps_status_get_satellites_visible(msg);
}

static inline void REC_MAVLINK_MSG_ID_ACTION_ACK(const mavlink_message_t* msg) {
	uint8_t ack_action = mavlink_msg_action_ack_get_action(msg);
	telemetry_data.ack_result = mavlink_msg_action_ack_get_result(msg);
	uint8_t *ptr = mav_statustext;
	if (!telemetry_data.ack_result)
		*ptr++ = 'N';
	*ptr++ = 'A';
	*ptr++ = 'C';
	*ptr++ = 'K';
	*ptr++ = ' ';
	*ptr++ = ack_action / 10 + '0';
	*ptr++ = ack_action % 10 + '0';
	*ptr++ = 0;
}

#ifdef MAVLINK_PARAMS
prog_char *getParamId(uint8_t idx) {
	prog_char *mav_params_id[NB_PID_PARAMS] = { //
					//
									PSTR("RATE_YAW"), // Rate Yaw
									PSTR("STB_YAW"), // Stabilize Yaw
									PSTR("RATE_PIT"), // Rate Pitch
									PSTR("STB_PIT"), // Stabilize Pitch
									PSTR("RATE_RLL"), // Rate Roll
									PSTR("STB_RLL"), // Stabilize Roll
									PSTR("THR_HOLD"), // PSTR("THR_BAR"), // Altitude Hold
									PSTR("XTRACK"), //  Crosstrak Correction
									PSTR("HLD_LON"), // Loiter
									PSTR("HLD_LAT"), // Loiter
									PSTR("NAV_LON"), // Nav WP
									PSTR("NAV_LAT"), // Nav WP
					};

	return mav_params_id[idx];
}

void setMavlinParamsValue(uint8_t idx, uint8_t subIdx, int16_t val) {
	if (val != telemetry_data.params[idx].pi_param[subIdx].pi_value) {
		telemetry_data.params[idx].pi_param[subIdx].pi_value = val;
		telemetry_data.params[idx].pi_param[subIdx].repeat = 3;
		uint8_t link_idx = NB_PID_PARAMS;
		switch (idx) {
		case RATE_PIT:
		case STB_PIT:
			link_idx = idx + 2;
			break;
		case RATE_RLL:
		case STB_RLL:
			link_idx = idx - 2;
			break;
		case HLD_LON:
		case NAV_LON:
			link_idx = idx + 1;
			break;
		case HLD_LAT:
		case NAV_LAT:
			link_idx = idx - 1;
			break;
		default:
			break;
		}
		if (link_idx < NB_PID_PARAMS) {
			telemetry_data.params[link_idx].pi_param[subIdx].pi_value = val;
			telemetry_data.params[link_idx].pi_param[subIdx].repeat = 3;
		}
		watch_mav_req_params_set = 4; // 1;
	}
}

void putsMavlinParams(uint8_t x, uint8_t y, uint8_t idx, uint8_t subIdx, uint8_t att) {
	const prog_char * s = getParamId(idx);
	char c;
	while ((c = pgm_read_byte(s++))) {
		if (c == '_')
			c = ' ';
		lcd_putcAtt(x, y, c, 0);
		x += FW;
	}
	x = 11 * FW;
	lcd_putcAtt(x, y, "PI"[subIdx], att);
}

static inline void setParamValue(int8_t *id, float value) {
	int8_t *p_id;
	for (int8_t idx = 0; idx < NB_PID_PARAMS; idx++) {
		prog_char * s = getParamId(idx);
		p_id = id;
		while (1) {
			char c1 = pgm_read_byte(s++);
			if (!c1) {
				// Founded !
				p_id++;
				uint8_t subIdx = (uint8_t) -1;
				switch (*p_id) {
				case 'P':
					subIdx = 0;
					break;
				case 'I':
					subIdx = 1;
					break;
				}
				if (subIdx != (uint8_t) -1) {
					telemetry_data.params[idx].pi_param[subIdx].repeat = 0;
					telemetry_data.params[idx].pi_param[subIdx].valid = 1;
					telemetry_data.params[idx].pi_param[subIdx].pi_value = (float) (value * 100.00);
				}
				return;
			} else if (c1 != *p_id++) {
				break;
			}
		}
	}
}

static inline void REC_MAVLINK_MSG_ID_PARAM_VALUE(const mavlink_message_t* msg) {
	mavlink_param_value_t param_value;
	mavlink_msg_param_value_decode(msg, &param_value);
	if (param_value.param_index != (uint16_t) -1) {
		watch_mav_req_params_list = 0;
	}
	setParamValue(param_value.param_id, param_value.param_value);
}
#endif

static inline void handleMessage(mavlink_message_t* p_rxmsg) {
	switch (p_rxmsg->msgid) {
	case MAVLINK_MSG_ID_HEARTBEAT:
		mav_heartbeat = 7; // 499ms display '*'
		break;
	case MAVLINK_MSG_ID_STATUSTEXT:
		REC_MAVLINK_MSG_ID_STATUSTEXT(p_rxmsg);
		beepWarn1();
		break;
	case MAVLINK_MSG_ID_SYS_STATUS:
		REC_MAVLINK_MSG_ID_SYS_STATUS(p_rxmsg);
		watch_mav_req_start_data_stream = 57;
		break;
	case MAVLINK_MSG_ID_GPS_RAW:
		REC_MAVLINK_MSG_ID_GPS_RAW(p_rxmsg);
		break;
	case MAVLINK_MSG_ID_GPS_STATUS:
		REC_MAVLINK_MSG_ID_GPS_STATUS(p_rxmsg);
		break;
	case MAVLINK_MSG_ID_ACTION_ACK:
		REC_MAVLINK_MSG_ID_ACTION_ACK(p_rxmsg);
		watch_mav_req_id_action = 0;
		beepWarn1();
		break;
#ifdef MAVLINK_PARAMS
	case MAVLINK_MSG_ID_PARAM_VALUE:
		REC_MAVLINK_MSG_ID_PARAM_VALUE(p_rxmsg);
		break;
#endif

	}

}

#if 0
static void MAVLINK_parse_char(uint8_t c) {
	mavlink_message_t msg;
	mavlink_status_t status;
	if (mavlink_parse_char(MAVLINK_COMM_0, c, &msg, &status)) {
		handleMessage(&msg);
	}
}
#endif
static void MAVLINK_parse_char(uint8_t c) {

	static mavlink_message_t m_mavlink_message;
	static mavlink_message_t* p_rxmsg = &m_mavlink_message; ///< The currently decoded message
	mavlink_status_t* p_status = mavlink_get_channel_status(MAVLINK_COMM_0); ///< The current decode status

	// Initializes only once, values keep unchanged after first initialization
	//mavlink_parse_state_initialize(p_status);

	//p_status->msg_received = 0;

	switch (p_status->parse_state) {
	case MAVLINK_PARSE_STATE_UNINIT:
	case MAVLINK_PARSE_STATE_IDLE:
		if (c == MAVLINK_STX) {
			p_status->parse_state = MAVLINK_PARSE_STATE_GOT_STX;
			mavlink_start_checksum(p_rxmsg);
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_STX:
		// NOT counting STX, LENGTH, SEQ, SYSID, COMPID, MSGID, CRC1 and CRC2
		p_rxmsg->len = c;
		p_status->packet_idx = 0;
		mavlink_update_checksum(p_rxmsg, c);
		p_status->parse_state = MAVLINK_PARSE_STATE_GOT_LENGTH;
		break;

	case MAVLINK_PARSE_STATE_GOT_LENGTH:
		p_rxmsg->seq = c;
		mavlink_update_checksum(p_rxmsg, c);
		p_status->parse_state = MAVLINK_PARSE_STATE_GOT_SEQ;
		break;

	case MAVLINK_PARSE_STATE_GOT_SEQ:
		p_rxmsg->sysid = c;
		mavlink_update_checksum(p_rxmsg, c);
		p_status->parse_state = MAVLINK_PARSE_STATE_GOT_SYSID;
		break;

	case MAVLINK_PARSE_STATE_GOT_SYSID:
		p_rxmsg->compid = c;
		mavlink_update_checksum(p_rxmsg, c);
		p_status->parse_state = MAVLINK_PARSE_STATE_GOT_COMPID;
		break;

	case MAVLINK_PARSE_STATE_GOT_COMPID:
		p_rxmsg->msgid = c;
		mavlink_update_checksum(p_rxmsg, c);
		if (p_rxmsg->len == 0) {
			p_status->parse_state = MAVLINK_PARSE_STATE_GOT_PAYLOAD;
		} else if (p_rxmsg->len < MAVLINK_MAX_PAYLOAD_LEN) {
			p_status->parse_state = MAVLINK_PARSE_STATE_GOT_MSGID;
		} else {
			p_status->parse_state = MAVLINK_PARSE_STATE_UNINIT;
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_MSGID:
		_MAV_PAYLOAD(p_rxmsg)[p_status->packet_idx++] = (char) c;
		mavlink_update_checksum(p_rxmsg, c);
		if (p_status->packet_idx == p_rxmsg->len) {
			p_status->parse_state = MAVLINK_PARSE_STATE_GOT_PAYLOAD;
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
		if (c != (p_rxmsg->checksum & 0xFF)) {
			// Check first checksum byte
			p_status->parse_error = 3;
		} else {
			p_status->parse_state = MAVLINK_PARSE_STATE_GOT_CRC1;
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_CRC1:
		if (c != (p_rxmsg->checksum >> 8)) {
			// Check second checksum byte
			p_status->parse_error = 4;
		} else {
			// Successfully got message
			if (mav_heartbeat < 0)
				mav_heartbeat = 0;
			p_status->current_rx_seq = p_rxmsg->seq;
			//p_status->msg_received = 1;
			p_status->parse_state = MAVLINK_PARSE_STATE_IDLE;
			//memcpy(r_message, p_rxmsg, sizeof(mavlink_message_t));

			handleMessage(p_rxmsg);
		}
		break;
	}
	// Error occur
	if (p_status->parse_error) {
		p_status->parse_state = MAVLINK_PARSE_STATE_IDLE;
		if (c == MAVLINK_STX) {
			p_status->parse_state = MAVLINK_PARSE_STATE_GOT_STX;
			mavlink_start_checksum(p_rxmsg);
		}
		p_status->parse_error = 0;

	}
	// If a message has been sucessfully decoded, check index
	/*
	 if (p_status->msg_received == 1) {
	 p_status->current_rx_seq = p_rxmsg->seq;
	 p_status->packet_rx_success_count++;
	 }
	 */

	//r_mavlink_status->current_rx_seq = p_status->current_rx_seq + 1;
	//r_mavlink_status->packet_rx_success_count = p_status->packet_rx_success_count;
	//r_mavlink_status->packet_rx_drop_count = p_status->parse_error;
	//p_status->parse_error = 0;
	//return p_status->msg_received;
}

#ifdef MAVLINK_PARAMS
static inline void MAVLINK_msg_param_request_list_send() {
	mavlink_msg_param_request_list_send(MAVLINK_COMM_0, target_system, target_component);
}

static inline void MAVLINK_msg_param_set(uint8_t idx, uint8_t subIdx) {

	prog_char* s = getParamId(idx);
	int8_t buf[15];
	int8_t *p = buf;
	while (1) {
		char c = pgm_read_byte(s++);
		if (!c) {
			*p++ = '_';
			*p++ = "PI"[subIdx];
			*p++ = 0;
			break;
		}
		*p++ = c;
	}
	float param_value = ((float) telemetry_data.params[idx].pi_param[subIdx].pi_value / 100.00 + 0.005);

	mavlink_msg_param_set_send(MAVLINK_COMM_0, target_system, target_component, buf, param_value);
}
#endif

static inline void MAVLINK_msg_request_data_stream_pack_send(uint8_t req_stream_id, uint16_t req_message_rate,
				uint8_t start_stop) {
	mavlink_msg_request_data_stream_send(MAVLINK_COMM_0, target_system, target_component, req_stream_id, req_message_rate,
					start_stop);
}

static inline void MAVLINK_msg_action_pack_send(uint8_t action) {
	mavlink_msg_action_send(MAVLINK_COMM_0, target_system, target_component, action);
}

void MAVLINK10mspoll(uint16_t time) {

	uint8_t count = time & 0xf; // 15*10ms
	if (count && IS_TX_BUSY)
		return;
	switch (count) {
	case 0:
		if (mav_heartbeat > -29) {
			mav_heartbeat--;

			if (mav_heartbeat == -28) {
				MAVLINK_reset(1);
			}
			SERIAL_startTX();
		}
		break;
	case 2:
		if (watch_mav_req_id_action > 0) {
			watch_mav_req_id_action--;
			// Repeat 4 times is not ack : 70ms*0x1f
			if ((watch_mav_req_id_action & 0x1f) == 0 && telemetry_data.req_mode < NUM_MODES) {
				uint8_t action = MAVLINK_CtrlMode2Action(telemetry_data.req_mode);
				MAVLINK_msg_action_pack_send(action);
				uint8_t *ptr = mav_statustext;
				*ptr++ = 'R';
				*ptr++ = 'Q';
				*ptr++ = ' ';
				*ptr++ = action / 10 + '0';
				*ptr++ = action % 10 + '0';
				*ptr++ = 0;
			}
		}
		break;
	case 4:
		if (watch_mav_req_start_data_stream > 0) {
			watch_mav_req_start_data_stream--;
			if (watch_mav_req_start_data_stream == 0) {
				uint8_t req_stream_id = 2;
				uint16_t req_message_rate = 1;
				uint8_t start_stop = 1;
				MAVLINK_msg_request_data_stream_pack_send(req_stream_id, req_message_rate, start_stop);
				watch_mav_req_start_data_stream = 57;
			}
		}
		break;
	case 6:
		if (watch_mav_req_params_list > 0) {
			watch_mav_req_start_data_stream--;
			if (watch_mav_req_params_list == 0) {
				MAVLINK_msg_param_request_list_send();
				watch_mav_req_params_list = 57;
			}
		}
		break;

	case 8:
		if (watch_mav_req_params_set > 0) {
			watch_mav_req_params_set--;
			if (watch_mav_req_params_set == 0) {
				for (uint8_t i = 0; i < NB_PID_PARAMS; i++) {
					for (uint8_t j = 0; j < 3; j++) {
						if (telemetry_data.params[i].pi_param[j].repeat) {
							telemetry_data.params[i].pi_param[j].repeat--;
							MAVLINK_msg_param_set(i, j);
							watch_mav_req_params_set = 2; // 300ms
							return;
						}
					}
				}
			}
		}
		break;

	default:
		return;
	}
}

// Start of Mavlink menus <<<<<<<<<<<<<<<<<<<<<<<<<<<
void DisplayScreenIndex(uint8_t index, uint8_t count, uint8_t attr);

enum mavlink_menu_ {
	MENU_INFO = 0,//
	MENU_GPS,//
#ifdef MAVLINK_PARAMS_1
	MENU_PARAM,//
#endif
#ifdef DUMP_RX_TX
	MENU_DUMP_RX, //
	MENU_DUMP_TX, //
#endif
	MAX_MAVLINK_MENU
} MAVLINK_menu = MENU_INFO;

inline mavlink_menu_ operator++(mavlink_menu_ &eDOW, int) {
	int i = static_cast<int> (eDOW);
	i++;
	if (i < MAX_MAVLINK_MENU) {
		eDOW = static_cast<mavlink_menu_> (i);
	}
	return eDOW;
}

inline mavlink_menu_ operator--(mavlink_menu_ &eDOW, int) {
	int i = static_cast<int> (eDOW);
	if (i > 0) {
		eDOW = static_cast<mavlink_menu_> (--i);
	}
	return eDOW;
}

void mav_title(const prog_char * s, uint8_t index) {
	lcd_putsAtt(0, 0, PSTR("MAVLINK"), INVERS);
	lcd_putsAtt(10 * FW, 0, s, 0);
	DisplayScreenIndex(index, MAX_MAVLINK_MENU, INVERS);
	lcd_putcAtt(8 * FW, 0, (mav_heartbeat > 0) ? '*' : ' ', 0);
}

void lcd_outdezFloat(uint8_t x, uint8_t y, float val, uint8_t precis, uint8_t mode = 0) {
	char c;
	int16_t lnum = val;
	uint8_t x1 = x;
	val -= lnum;

	int8_t i = 0;
	lnum = abs(lnum);
	for (; i < 4; i++) {
		c = (lnum % 10) + '0';
		x1 -= FWNUM;
		lcd_putcAtt(x1, y, c, mode);
		lnum /= 10;
		if (lnum == 0) {
			break;
		}
	}
	if (lnum != 0) {
		// Error number too big
		x1 = x;
		for (i = 0; i < 4; i++) {
			x1 -= FW;
			lcd_putcAtt(x1, y, '?', mode);
		}
	} else {
		if (val < 0) {
			val = -val;
			x1 -= FWNUM;
			lcd_putcAtt(x1, y, '-', mode);
		}
		lcd_putcAtt(x, y, '.', mode);

		for (i = 0; i < precis; i++) {
			val *= 10;
			int a = val;
			c = a + '0';
			x += FWNUM;
			lcd_putcAtt(x, y, c, mode);
			val -= a;
		}
	}
}

void putsMavlinkControlMode(uint8_t x, uint8_t y, uint8_t control_mode, uint8_t attr, uint8_t len) {
	if (control_mode < NUM_MODES) {
		lcd_putsnAtt(x, y, PSTR(CONROL_MODE_STR) + 6 * control_mode, len, attr);
	} else {
		for (uint8_t i = 0; i < len; i++) {
			lcd_putcAtt(x, y, '-', attr);
		}
	}
}

void putsMavlinkControlMode(uint8_t x, uint8_t y, uint8_t len) {
	if (telemetry_data.status) {
		uint8_t attr = 0;
		uint8_t mode = telemetry_data.control_mode;
		if (telemetry_data.req_mode < NUM_MODES) {
			mode = telemetry_data.req_mode;
			switch (telemetry_data.ack_result) {
			case 0:
				attr = BLINK;
				break;
			case 1:
				if (telemetry_data.req_mode != telemetry_data.control_mode) {
					attr = INVERS;
				}
				break;
			default:
				attr = INVERS;
				break;
			}
		}
		putsMavlinkControlMode(x, y, mode, attr, len);
	}
}

void MAVLINK_ReqMode(uint8_t mode) {
	telemetry_data.req_mode = mode;
	telemetry_data.ack_result = -1;
	watch_mav_req_id_action = 0x43;
}

void menuProcMavlinkInfos(void) {

	mav_title(PSTR("INFOS"), MAVLINK_menu);

	uint8_t x1, x2, xnum, y;
	x1 = FW;
	x2 = 7 * FW;
	xnum = x2 + 5 * FWNUM;
	y = FH;

	uint8_t * ptr = mav_statustext;
	for (uint8_t j = 0; j < LEN_STATUSTEXT; j++) {
		if (*ptr == 0) {
			lcd_putcAtt(x1, y, ' ', 0);
		} else {
			lcd_putcAtt(x1, y, *ptr++, 0);
		}
		x1 += FW;
	}
	x1 = FW;
	y += FH;

	if (telemetry_data.status) {
		lcd_putsnAtt(x1, y, PSTR("MODE"), 4, 0);
		putsMavlinkControlMode(x2, y, 6);

		y += FH;
		lcd_putsnAtt(x1, y, PSTR("BATT"), 4, 0);
		lcd_outdezNAtt(xnum, y, telemetry_data.vbat, PREC1, 5);
		//lcd_outdezFloat(xnum, y, (float) telemetry_data.vbat / 100.0, 3);
	}

}

void menuProcMavlinkGPS(void) {
	mav_title(PSTR("GPS"), MAVLINK_menu);

	uint8_t x1, x2, xnum, y;
	x1 = FW;
	x2 = 5 * FW + FWNUM;
	xnum = 5 * FW + 3 * FWNUM;
	y = FH;

	lcd_putsnAtt(x1, y, PSTR("GPS"), 3, 0);
	uint8_t fix_type = telemetry_data.fix_type;
	if (fix_type <= 3) {
		lcd_putsnAtt(x2, y, PSTR("  NO2D3D") + 2 * fix_type, 2, 0);
	} else {
		lcd_outdezNAtt(xnum, y, fix_type, 0, 3);
	}
	lcd_putsnAtt(x2 + 5 * FW, y, PSTR("SAT"), 3, 0);
	lcd_outdezNAtt(x2 + 8 * FW + 3 * FWNUM, y, telemetry_data.satellites_visible, 0, 2);

	if (telemetry_data.fix_type > 1) {
		y += FH;
		lcd_putsnAtt(0, y, PSTR("HDOP"), 4, 0);
		lcd_outdezFloat(xnum, y, telemetry_data.eph, 2);

		y += FH;
		lcd_putsnAtt(0, y, PSTR("COOR"), 4, 0);
		lcd_outdezFloat(xnum, y, telemetry_data.loc_current.lat, 5);

		//	y += FH;
		//	lcd_putsnAtt(x1, y, PSTR("LON"), 3, 0);
		lcd_outdezFloat(xnum + 10 * FWNUM, y, telemetry_data.loc_current.lon, 5);

		y += FH;
		lcd_putsnAtt(x1, y, PSTR("ALT"), 3, 0);
		lcd_outdezFloat(xnum, y, telemetry_data.loc_current.alt, 2);

		y += FH;
		lcd_putsnAtt(x1, y, PSTR("HDG"), 3, 0);
		lcd_outdezFloat(xnum, y, telemetry_data.hdg, 2);

		y += FH;
		lcd_putsnAtt(x1, y, PSTR("V"), 1, 0);
		lcd_outdezFloat(xnum, y, telemetry_data.v, 2);
	}
}

#ifdef MAVLINK_PARAMS_1
void menuProcMavlinkPARAM(uint8_t event) {
	mav_title(PSTR("PARAMS"), MAVLINK_menu);

	uint8_t x1, xnum, y;
	x1 = 0;
	xnum = 12 * FW + 3 * FWNUM;
	y = FH;

	for (uint8_t i = 0; i < NB_PARAMS; i++) {
		if (telemetry_data.params[i].status & PARAM_VALID) {
			putsMavlinParams(x1, y, i, 0);
			lcd_outdezFloat(xnum, y, telemetry_data.params[i].value, 3);
			y += FH;
		}
	}
}
#endif

#ifdef DUMP_RX_TX

void lcd_outhex2(uint8_t x, uint8_t y, uint8_t val) {
	x += FWNUM * 2;
	for (int i = 0; i < 2; i++) {
		x -= FWNUM;
		char c = val & 0xf;
		c = c > 9 ? c + 'A' - 10 : c + '0';
		lcd_putcAtt(x, y, c, c >= 'A' ? CONDENSED : 0);
		val >>= 4;
	}
}

void menuProcMavlinkDump(uint8_t event) {
	uint8_t x = 0;
	uint8_t y = FH;
	uint16_t count = 0;
	uint16_t bufferLen = 0;
	uint8_t *ptr = NULL;
	switch (MAVLINK_menu) {
		case MENU_DUMP_RX:
		mav_dump_rx = 1;
		mav_title(PSTR("RX"), MAVLINK_menu);
		bufferLen = mavlinkRxBufferCount;
		ptr = mavlinkRxBuffer;
		break;

		case MENU_DUMP_TX:
		mav_title(PSTR("TX"), MAVLINK_menu);
		bufferLen = serialTxISRIndex;
		ptr = serialTxBuffer;
		break;
		default:
		break;
	}
	for (uint16_t var = 0; var < bufferLen; var++) {
		uint8_t byte = *ptr++;
		lcd_outhex2(x, y, byte);
		x += 2 * FW;
		count++;
		if (count > 8) {
			count = 0;
			x = 0;
			y += FH;
			if (y == (6 * FH))
			break;
		}
	}
}
#endif

void menuProcMavlink(uint8_t event) {

	switch (event) // new event received, branch accordingly
	{
	case EVT_ENTRY:
		MAVLINK_menu = MENU_INFO;
		break;

	case EVT_KEY_FIRST(KEY_UP):
		MAVLINK_menu--;
		break;
	case EVT_KEY_FIRST(KEY_DOWN):
		MAVLINK_menu++;
		break;
	case EVT_KEY_FIRST(KEY_MENU):
	case EVT_KEY_FIRST(KEY_EXIT):
		//MAVLINK_Quit();
		chainMenu(menuProc0);
		break;
	}

	switch (MAVLINK_menu) {
	case MENU_INFO:
		menuProcMavlinkInfos();
		break;
	case MENU_GPS:
		menuProcMavlinkGPS();
		break;
#ifdef MAVLINK_PARAMS_1
		case MENU_PARAM:
		menuProcMavlinkPARAM(event);
		break;
#endif
#ifdef DUMP_RX_TX
		case MENU_DUMP_TX:
		case MENU_DUMP_RX:
		menuProcMavlinkDump(event);
		break;
#endif
	default:
		break;
	}

}

