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
//#undef  DUMP_RX_TX

// this might need to move to the flight software
//static
mavlink_system_t mavlink_system = { 7, 1, 0, 0 };

// Mavlink message decoded Status Text
#define LEN_STATUSTEXT 15
static uint8_t mav_statustext[LEN_STATUSTEXT];
static int8_t mav_heartbeat = 0;
static int8_t mav_heartbeat_recv = 0;
static int8_t watch_mav_req_mode = 0;
static int8_t watch_mav_req_start_data_stream = 15;
static uint8_t data_stream_start_stop = 0;
int8_t watch_mav_req_params_list = 5;
#ifdef MAVLINK_PARAMS
uint8_t mav_req_params_nb_recv = 0;
#endif
int8_t watch_mav_req_params_set = 0;

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
	if (warm_reset && telemetry_data.system_status) {
		mav_statustext[0] = 0;
	}
#ifdef DUMP_RX_TX
	mavlinkRxBufferCount = 0;
	mav_dump_rx = 0;
#endif

	mavlink_status_t* p_status = mavlink_get_channel_status(MAVLINK_COMM_0);
	p_status->parse_state = MAVLINK_PARSE_STATE_UNINIT;
	memset(&telemetry_data, 0, sizeof(telemetry_data));
	telemetry_data.rcv_control_mode = ERROR_NUM_MODES;
	telemetry_data.req_control_mode = ERROR_NUM_MODES;

	mav_heartbeat = 0;
	mav_heartbeat_recv = 0;
	watch_mav_req_mode = 0;
	watch_mav_req_start_data_stream = 15;
	watch_mav_req_params_list = 5;
	watch_mav_req_params_set = 0;
	data_stream_start_stop = 0;
}

void MAVLINK_Init(void) {
	mav_statustext[0] = 0;
	MAVLINK_reset(0);
	SERIAL_Init();
}

static inline void REC_MAVLINK_MSG_ID_HEARTBEAT(const mavlink_message_t* msg) {
	telemetry_data.type = mavlink_msg_heartbeat_get_type(msg);
	telemetry_data.system_status = mavlink_msg_heartbeat_get_system_status(msg);
	telemetry_data.base_mode = mavlink_msg_heartbeat_get_base_mode(msg);
	telemetry_data.rcv_control_mode = mavlink_msg_heartbeat_get_custom_mode(msg);
	if (isValidReqControlMode()) {
		watch_mav_req_mode = 0;
	}
}

static inline void REC_MAVLINK_MSG_ID_STATUSTEXT(const mavlink_message_t* msg) {
	//	_MAV_RETURN_int8_t_array(msg, mav_statustext, LEN_STATUSTEXT,  1);
	memcpy(mav_statustext, &_MAV_PAYLOAD(msg)[1], LEN_STATUSTEXT);
}

static inline void REC_MAVLINK_MSG_ID_SYS_STATUS(const mavlink_message_t* msg) {
	mavlink_sys_status_t sys_status;
	mavlink_msg_sys_status_decode(msg, &sys_status);

	telemetry_data.drop_rate_comm = mavlink_msg_sys_status_get_drop_rate_comm(msg);
	telemetry_data.voltage_battery = mavlink_msg_sys_status_get_voltage_battery(msg) / 100; // Voltage * 10

#ifdef MAVLINK_PARAMS
	telemetry_data.vbat_low = (getMavlinParamsValue(BATT_MONITOR) > 0)
					&& (((float) telemetry_data.voltage_battery / 10.0) < getMavlinParamsValue(LOW_VOLT))
					&& (telemetry_data.voltage_battery > 50);
#endif
}

static inline void REC_MAVLINK_MSG_ID_GPS_RAW(const mavlink_message_t* msg) {
	telemetry_data.fix_type = mavlink_msg_gps_raw_int_get_fix_type(msg);
	telemetry_data.loc_current.lat = mavlink_msg_gps_raw_int_get_lat(msg) / 1.0e7;
	telemetry_data.loc_current.lon = mavlink_msg_gps_raw_int_get_lon(msg) / 1.0e7;
	telemetry_data.loc_current.alt = mavlink_msg_gps_raw_int_get_alt(msg) / 1000.0;
	telemetry_data.eph = mavlink_msg_gps_raw_int_get_eph(msg);
	telemetry_data.satellites_visible = mavlink_msg_gps_raw_int_get_satellites_visible(msg);
#ifdef MAVLINK09
	telemetry_data.hdg = mavlink_msg_gps_raw_get_hdg(msg);
	telemetry_data.v = mavlink_msg_gps_raw_get_v(msg);
#endif
}

#ifdef MAVLINK_PARAMS
static prog_char *getParamId(uint8_t idx) {
	switch (idx) {
	case RATE_YAW_P:
	case RATE_YAW_I:
		return PSTR("RATE_YAW"); // Rate Yaw
	case STB_YAW_P:
	case STB_YAW_I:
		return PSTR("STB_YAW"); // Stabilize Yaw

	case RATE_PIT_P:
	case RATE_PIT_I:
		return PSTR("RATE_PIT"); // Rate Yaw
	case RATE_RLL_P:
	case RATE_RLL_I:
		return PSTR("RATE_RLL"); // Rate Yaw

	case STB_PIT_P:
	case STB_PIT_I:
		return PSTR("STB_PIT");
	case STB_RLL_P:
	case STB_RLL_I:
		return PSTR("STB_RLL"); // Stabilize Yaw

	case THR_ALT_P: // THR_BAR, // Altitude Hold
	case THR_ALT_I: // THR_BAR, // Altitude Hold
		return PSTR("THR_ALT");
		//
		case HLD_LON_P:
		case HLD_LON_I:
		return PSTR("HLD_LON"); // Loiter

		case HLD_LAT_P:
		case HLD_LAT_I:
		return PSTR("HLD_LAT");// Loiter
//
		case NAV_LON_P:
		case NAV_LON_I:
		return PSTR("NAV_LON"); // Nav WP;
		//
		case NAV_LAT_P:
		case NAV_LAT_I:
		return PSTR("NAV_LAT");// Nav WP;

	case LOW_VOLT:
		return PSTR("LOW_VOLT"); // Battery low voltage
	case VOLT_DIVIDER: //
		return PSTR("VOLT_DIVIDER"); //
	case BATT_MONITOR: //
		return PSTR("BATT_MONITOR"); //
	case BATT_CAPACITY: //
		return PSTR("BATT_CAPACITY");

	default:
		return PSTR("");
		break;
	}

}

void putsMavlinParams(uint8_t x, uint8_t y, uint8_t idx, uint8_t att) {
	if (idx < NB_PARAMS) {
		const prog_char * s = getParamId(idx);
		char c;
		while ((c = pgm_read_byte(s++))) {
			lcd_putcAtt(x, y, (c == '_' ? ' ' : c), 0);
			x += FW;
		}
		if (isPID_PARAM(idx)) {
			x = 11 * FW;
			uint8_t colIdx = idx % NB_COL_PARAMS;
			lcd_putcAtt(x, y, "PI"[colIdx], att);
		}
	}
}

static inline void setParamValue(char *id, float value) {
	char *p_id;
	for (int8_t idx = 0; idx < NB_PARAMS; idx++) {
		prog_char * s = getParamId(idx);
		p_id = id;
		while (1) {
			char c1 = pgm_read_byte(s++);
			if (!c1) {
				// Founded if ended with 0
				uint8_t founded = !*p_id;
				if (isPID_PARAM(idx)) {
					// skip '_'
					p_id++;
					// PID only P&I
					switch (*p_id++) {
					case 'P':
						// Founded if ended with 0
						founded = !*p_id;
						break;
					case 'I':
						// Founded if ended with 0
						founded = !*p_id;
						idx++;
						break;
					default:
						founded = 0;
						break;
					}
				}
				// test end of string char == 0 and a valid PI
				if (founded) {
					MavlinkParam_t *param = getParam(idx);
					param->repeat = 0;
					param->valid = 1;
					param->value = value;
					mav_req_params_nb_recv++;
					refreshParams(NB_PARAMS - 5);
				}
				if (isPID_PARAM(idx)) {
					return;
				}
			} else if (c1 != *p_id++) {
				break;
			}
		}
		if (isPID_PARAM(idx)) {
			// Skip I Parameter from PID
			idx++;
		}
	}
}
static inline void REC_MAVLINK_MSG_ID_PARAM_VALUE(const mavlink_message_t* msg) {
	mavlink_param_value_t param_value;
	mavlink_msg_param_value_decode(msg, &param_value);
	char *id = param_value.param_id;
	setParamValue(id, param_value.param_value);
}

#endif

static inline void handleMessage(mavlink_message_t* p_rxmsg) {
	if (mav_heartbeat < 0)
		mav_heartbeat = 0;

	switch (p_rxmsg->msgid) {
	case MAVLINK_MSG_ID_HEARTBEAT:
		REC_MAVLINK_MSG_ID_HEARTBEAT(p_rxmsg);
		mav_heartbeat = 3; // 450ms display '*'
		mav_heartbeat_recv = 1;
		break;
	case MAVLINK_MSG_ID_STATUSTEXT:
		REC_MAVLINK_MSG_ID_STATUSTEXT(p_rxmsg);
		audioDefevent(AUDIO_WARNING1);
		break;
	case MAVLINK_MSG_ID_SYS_STATUS:
		REC_MAVLINK_MSG_ID_SYS_STATUS(p_rxmsg);
		watch_mav_req_start_data_stream = 20;
		break;
	case MAVLINK_MSG_ID_GPS_RAW_INT:
		REC_MAVLINK_MSG_ID_GPS_RAW(p_rxmsg);
		break;
#ifdef MAVLINK_PARAMS
	case MAVLINK_MSG_ID_PARAM_VALUE:
		REC_MAVLINK_MSG_ID_PARAM_VALUE(p_rxmsg);
		break;
#endif

	}

}

/**
 * Optimize for small
 */
static uint8_t get_MAVLINK_MESSAGE_CRC(uint8_t idx) {
	switch (idx) {
	case MAVLINK_MSG_ID_HEARTBEAT: // 0
		return 50;
	case MAVLINK_MSG_ID_SYS_STATUS: // 1
		return 124;
	case MAVLINK_MSG_ID_GPS_RAW_INT: // 24
		return 24;
		//case MAVLINK_MSG_ID_GPS_STATUS: // 25
		//return 23;
#ifdef MAVLINK_PARAMS
	case MAVLINK_MSG_ID_PARAM_VALUE: // 22
		return 220;
	case MAVLINK_MSG_ID_STATUSTEXT: // 253
		return 83; //
#endif
	}
	return 0;
}

static void MAVLINK_parse_char(uint8_t c) {
	/*
	 default message crc function. You can override this per-system to
	 put this data in a different memory segment
	 */
#undef MAVLINK_MESSAGE_CRC
#if MAVLINK_CRC_EXTRA
#ifndef MAVLINK_MESSAGE_CRC
#define MAVLINK_MESSAGE_CRC(msgid) get_MAVLINK_MESSAGE_CRC(msgid)
#endif
#endif

	mavlink_message_t* rxmsg = mavlink_get_channel_buffer(MAVLINK_COMM_0);
	mavlink_status_t* status = mavlink_get_channel_status(MAVLINK_COMM_0); ///< The current decode status
//int bufferIndex = 0;

	// status->msg_received = 0;

	switch (status->parse_state) {
	case MAVLINK_PARSE_STATE_UNINIT:
	case MAVLINK_PARSE_STATE_IDLE:
		if (c == MAVLINK_STX) {
			status->parse_state = MAVLINK_PARSE_STATE_GOT_STX;
			rxmsg->len = 0;
			rxmsg->magic = c;
			mavlink_start_checksum(rxmsg);
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_STX:
		//if (status->msg_received
		/* Support shorter buffers than the
		 default maximum packet size */
#if (MAVLINK_MAX_PAYLOAD_LEN < 255)
		|| c > MAVLINK_MAX_PAYLOAD_LEN
#endif
		/*		) {
		 status->buffer_overrun++;
		 status->parse_error = 1;
		 status->msg_received = 0;
		 status->parse_state = MAVLINK_PARSE_STATE_IDLE;
		 } else */{
		// NOT counting STX, LENGTH, SEQ, SYSID, COMPID, MSGID, CRC1 and CRC2
		rxmsg->len = c;
		status->packet_idx = 0;
		mavlink_update_checksum(rxmsg, c);
		status->parse_state = MAVLINK_PARSE_STATE_GOT_LENGTH;
	}
		break;

	case MAVLINK_PARSE_STATE_GOT_LENGTH:
		rxmsg->seq = c;
		mavlink_update_checksum(rxmsg, c);
		status->parse_state = MAVLINK_PARSE_STATE_GOT_SEQ;
		break;

	case MAVLINK_PARSE_STATE_GOT_SEQ:
		rxmsg->sysid = c;
		mavlink_update_checksum(rxmsg, c);
		status->parse_state = MAVLINK_PARSE_STATE_GOT_SYSID;
		break;

	case MAVLINK_PARSE_STATE_GOT_SYSID:
		rxmsg->compid = c;
		mavlink_update_checksum(rxmsg, c);
		status->parse_state = MAVLINK_PARSE_STATE_GOT_COMPID;
		break;

	case MAVLINK_PARSE_STATE_GOT_COMPID:
		rxmsg->msgid = c;
		mavlink_update_checksum(rxmsg, c);
		if (rxmsg->len == 0) {
			status->parse_state = MAVLINK_PARSE_STATE_GOT_PAYLOAD;
		} else {
			status->parse_state = MAVLINK_PARSE_STATE_GOT_MSGID;
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_MSGID:
		_MAV_PAYLOAD_NON_CONST(rxmsg)[status->packet_idx++] = (char) c;
		mavlink_update_checksum(rxmsg, c);
		if (status->packet_idx == rxmsg->len) {
			status->parse_state = MAVLINK_PARSE_STATE_GOT_PAYLOAD;
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_PAYLOAD:
#if MAVLINK_CRC_EXTRA
		mavlink_update_checksum(rxmsg, MAVLINK_MESSAGE_CRC(rxmsg->msgid));
#endif
		if (c != (rxmsg->checksum & 0xFF)) {
			// Check first checksum byte
			status->parse_error = 2;
			//status->msg_received = 0;
			status->parse_state = MAVLINK_PARSE_STATE_IDLE;
			if (c == MAVLINK_STX) {
				status->parse_state = MAVLINK_PARSE_STATE_GOT_STX;
				rxmsg->len = 0;
				mavlink_start_checksum(rxmsg);
			}
		} else {
			status->parse_state = MAVLINK_PARSE_STATE_GOT_CRC1;
			_MAV_PAYLOAD_NON_CONST(rxmsg)[status->packet_idx] = (char) c;
		}
		break;

	case MAVLINK_PARSE_STATE_GOT_CRC1:
		if (c != (rxmsg->checksum >> 8)) {
			// Check second checksum byte
			status->parse_error = 3;
		} else {
			// Successfully got message
			//status->msg_received = 1;
			status->parse_state = MAVLINK_PARSE_STATE_IDLE;
			_MAV_PAYLOAD_NON_CONST(rxmsg)[status->packet_idx + 1] = (char) c;
//	memcpy(r_message, rxmsg, sizeof(mavlink_message_t));

			handleMessage(rxmsg);

		}
		break;
	}
	// Error occur
	if (status->parse_error) {
#ifdef DEBUG
		uint8_t *ptr = mav_statustext;
		*ptr++ = 'I';
		*ptr++ = 'D';
		*ptr++ = ' ';
		*ptr++ = rxmsg->msgid / 10 + '0';
		*ptr++ = rxmsg->msgid % 10 + '0';
		*ptr++ = ' ';
		*ptr++ = 'E';
		*ptr++ = 'R';
		*ptr++ = ' ';
		*ptr++ = status->parse_error + '0';
		*ptr = 0;
#endif

		status->parse_state = MAVLINK_PARSE_STATE_IDLE;
		if (c == MAVLINK_STX) {
			status->parse_state = MAVLINK_PARSE_STATE_GOT_STX;
			mavlink_start_checksum(rxmsg);
		}
		status->parse_error = 0;

	}
	/*bufferIndex++;
	 // If a message has been sucessfully decoded, check index
	 if (status->msg_received == 1)
	 {
	 //while(status->current_seq != rxmsg->seq)
	 //{
	 //	status->packet_rx_drop_count++;
	 //               status->current_seq++;
	 //}
	 status->current_rx_seq = rxmsg->seq;
	 // Initial condition: If no packet has been received so far, drop count is undefined
	 if (status->packet_rx_success_count == 0) status->packet_rx_drop_count = 0;
	 // Count this packet as received
	 status->packet_rx_success_count++;
	 }

	 //	r_mavlink_status->current_rx_seq = status->current_rx_seq+1;
	 //	r_mavlink_status->packet_rx_success_count = status->packet_rx_success_count;
	 //	r_mavlink_status->packet_rx_drop_count = status->parse_error;
	 //	status->parse_error = 0;
	 //	return status->msg_received;

	 */
}

#if 0

static void MAVLINK_parse_char(uint8_t c) {
	static mavlink_message_t m_mavlink_message;
	static mavlink_status_t m_mavlink_status;

	mavlink_message_t *p_rxmsg = &m_mavlink_message; ///< The currently decoded message
	mavlink_status_t *p_status = &m_mavlink_status;///< The current decode status

	if (mavlink_parse_char(MAVLINK_COMM_0, c, p_rxmsg, p_status)) {

		handleMessage(p_rxmsg);
	}
}

#endif

#ifdef MAVLINK_PARAMS
static inline void MAVLINK_msg_param_request_list_send() {
	mavlink_channel_t chan = MAVLINK_COMM_0;
	mavlink_msg_param_request_list_send(chan, mavlink_system.sysid, mavlink_system.compid);
}

static inline void MAVLINK_msg_param_set(uint8_t idx) {
	prog_char* s = getParamId(idx);
	char param_id[15];
	char *p = param_id;
	while (1) {
		char c = pgm_read_byte(s++);
		if (!c) {
			if (isPID_PARAM(idx)) {
				*p++ = '_';
				uint8_t colIdx = idx % NB_COL_PARAMS;
				// PID only PI
				*p++ = "PI"[colIdx];
			}
			*p++ = 0;
			break;
		}
		*p++ = c;
	}
	//float param_value = ((float) telemetry_data.params[idx].pi_param[subIdx].pi_value / 100.00 + 0.005);
	float param_value = getParam(idx)->value;

	mavlink_channel_t chan = MAVLINK_COMM_0;
	uint8_t param_type = 0; // TODO
	mavlink_msg_param_set_send(chan, mavlink_system.sysid, mavlink_system.compid, param_id, param_value, param_type);
}
#endif

static inline void MAVLINK_msg_request_data_stream_pack_send(uint8_t req_stream_id, uint16_t req_message_rate,
				uint8_t start_stop) {
	mavlink_channel_t chan = MAVLINK_COMM_0;
	mavlink_msg_request_data_stream_send(chan, mavlink_system.sysid, mavlink_system.compid, req_stream_id, req_message_rate,
					start_stop);
}

static inline void MAVLINK_msg_set_mode_send(uint32_t custom_mode) {
	mavlink_channel_t chan = MAVLINK_COMM_0;
	uint8_t base_mode = MAV_MODE_FLAG_CUSTOM_MODE_ENABLED;
	mavlink_msg_set_mode_send(chan, mavlink_system.sysid, base_mode, custom_mode);
}

void MAVLINK10mspoll(uint8_t count) {
	switch (count) {
	case 2: // MAVLINK_MSG_ID_SET_MODE
		if (watch_mav_req_mode > 0) {
			watch_mav_req_mode--;
			// Repeat if is not ack : 150ms*0x07
			if (watch_mav_req_mode & 0x07) {
				uint32_t custom_mode = MAVLINK_CtrlMode2CustomMode(telemetry_data.req_control_mode);
				if (custom_mode != ERROR_NUM_MODES) {
					MAVLINK_msg_set_mode_send(custom_mode);
				}
			}
		}
		if (telemetry_data.ack_result < 5) {
			if (telemetry_data.ack_result > 0) {
				telemetry_data.ack_result++;
			}
		}
		break;

#ifdef MAVLINK_PARAMS
	case 4: // MAVLINK_MSG_ID_PARAM_REQUEST_LIST
		if (watch_mav_req_params_list > 0) {
			watch_mav_req_params_list--;
			if (watch_mav_req_params_list == 0) {
				mav_req_params_nb_recv = 0;
				MAVLINK_msg_param_request_list_send();
				watch_mav_req_params_list = 20;
			}
		}
		break;
#endif

	case 6: // MAVLINK_MSG_ID_REQUEST_DATA_STREAM
		if (watch_mav_req_start_data_stream > 0) {
			watch_mav_req_start_data_stream--;
			if (watch_mav_req_start_data_stream == 0) {
				uint8_t req_stream_id = MAV_DATA_STREAM_EXTENDED_STATUS;
				uint16_t req_message_rate = 2;

				MAVLINK_msg_request_data_stream_pack_send(req_stream_id, req_message_rate, data_stream_start_stop);
				watch_mav_req_start_data_stream = 20;
				data_stream_start_stop = 1; // maybe start next time
			}
		}
		break;

#ifdef MAVLINK_PARAMS
	case 8: // MAVLINK_MSG_ID_PARAM_SET
		if (watch_mav_req_params_set > 0) {
			watch_mav_req_params_set--;
			if (watch_mav_req_params_set == 0) {
				for (uint8_t idx = 0; idx < NB_PARAMS; idx++) {
					if (getParam(idx)->repeat) {
						getParam(idx)->repeat--;
						MAVLINK_msg_param_set(idx);
						watch_mav_req_params_set = 3; // 300ms
						return;
					}
				}
			}
		}
		break;
#endif

	default:
		return;
	}
}

void check_mavlink() {
	uint16_t tmr10ms = get_tmr10ms();
	uint8_t count = tmr10ms & 0x0f; // 15*10ms
	if (!count) {
		if (mav_heartbeat > -30) {
			mavlink_system.sysid = g_eeGeneral.mavTargetSystem;
			mav_heartbeat--;

			if (mav_heartbeat == -30) {
				MAVLINK_reset(1);
			}
			SERIAL_startTX();
		}
	}
	if (mav_heartbeat_recv && !IS_TX_BUSY) {
		MAVLINK10mspoll(count);
	}
}

// Start of Mavlink menus <<<<<<<<<<<<<<<<<<<<<<<<<<<
void DisplayScreenIndex(uint8_t index, uint8_t count, uint8_t attr);

enum mavlink_menu_ {
	MENU_INFO = 0, //
	MENU_GPS, //
#ifdef DUMP_RX_TX
	MENU_DUMP_RX, //
	MENU_DUMP_TX,//
#endif
	MAX_MAVLINK_MENU
} MAVLINK_menu = MENU_INFO;

inline mavlink_menu_ operator++(mavlink_menu_ &eDOW, int) {
	int i = static_cast<int>(eDOW);
	i++;
	if (i < MAX_MAVLINK_MENU) {
		eDOW = static_cast<mavlink_menu_>(i);
	}
	return eDOW;
}

inline mavlink_menu_ operator--(mavlink_menu_ &eDOW, int) {
	int i = static_cast<int>(eDOW);
	if (i > 0) {
		eDOW = static_cast<mavlink_menu_>(--i);
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
			val = abs(val);
			x1 -= FWNUM;
			lcd_putcAtt(x1, y, '-', mode);
		}
		if (precis) {
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
}

bool isValidReqControlMode() {
	if (telemetry_data.req_control_mode < NUM_MODES) {
		if (telemetry_data.req_control_mode != telemetry_data.rcv_control_mode) {
			return false;
		}
	}
	return true;
}

void putsMavlinkControlMode(uint8_t x, uint8_t y, uint8_t len) {
	if (telemetry_data.system_status) {
		uint8_t attr = 0;
		uint8_t mode = telemetry_data.rcv_control_mode;
		if (telemetry_data.req_control_mode < NUM_MODES) {

			if (telemetry_data.req_control_mode != telemetry_data.rcv_control_mode) {
				attr = INVERS;
				switch (telemetry_data.ack_result) {
				case 5:
					audioDefevent(AUDIO_ERROR);
					telemetry_data.req_control_mode = NUM_MODES;
					break;
				default:
					//mode = telemetry_data.req_control_mode;
					break;
				}
			}
		}
		putsControlMode(x, y, mode, attr, len);
	}
}

void MAVLINK_ReqMode(uint8_t mode, uint8_t send) {
	telemetry_data.req_control_mode = mode;
	telemetry_data.ack_result = 0;
	if (send) {
		watch_mav_req_mode = 0x43;
	}
}

void putsMavlinkSafetyArmed(uint8_t x, uint8_t y) {
	uint8_t idx = isSAFETY_ARMED() ? 0 : 6;
	lcd_putsnAtt(x, y, PSTR("ARMED DISARM") + idx, 6, 0);
}


void putsGpsStatus(uint8_t x, uint8_t y) {
	lcd_putsnAtt(x, y, PSTR("GPS"), 3, 0);
	uint8_t fix_type = telemetry_data.fix_type;
	if (fix_type <= 3) {
		lcd_putsnAtt(x + 4 * FW, y, PSTR("___NO OK FIX") + 3 * fix_type, 3, 0);
	}
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

	if (telemetry_data.system_status) {
		lcd_putsnAtt(x1, y, PSTR("MOTO"), 4, 0);
		putsMavlinkSafetyArmed(x2, y);
		y += FH;
		if (!isValidReqControlMode()) {
			lcd_putsnAtt(x1, y, PSTR("REQ"), 3, 0);
			putsControlMode(x2, y, telemetry_data.req_control_mode, 0, 6);
			y += FH;
		}
		lcd_putsnAtt(x1, y, PSTR("MODE"), 4, 0);
		putsMavlinkControlMode(x2, y, 6);

		y += FH;
		lcd_putsnAtt(x1, y, PSTR("BATT"), 4, 0);
		lcd_outdezNAtt(xnum, y, telemetry_data.voltage_battery, PREC1, 5);

		y += FH;
		lcd_putsnAtt(x1, y, PSTR("DROP"), 4, 0);
		lcd_outdezAtt(xnum, y, telemetry_data.drop_rate_comm, 0);

	}

}

void menuProcMavlinkGPS(void) {
	mav_title(PSTR("GPS"), MAVLINK_menu);

	uint8_t x1, x2, xnum, y;
	x1 = FW;
	x2 = 5 * FW + FWNUM;
	xnum = 5 * FW + 3 * FWNUM;
	y = FH;

	putsGpsStatus(x1, y);
/*
	lcd_putsnAtt(x1, y, PSTR("GPS"), 3, 0);
	uint8_t fix_type = telemetry_data.fix_type;
	if (fix_type <= 3) {
		lcd_putsnAtt(x2, y, PSTR("___NO OK FIX") + 3 * fix_type, 3, 0);
	} else {
		lcd_outdezNAtt(xnum, y, fix_type, 0, 3);
	}
	*/
	lcd_putsnAtt(x2 + 5 * FW, y, PSTR("SAT"), 3, 0);
	lcd_outdezNAtt(x2 + 8 * FW + 3 * FWNUM, y, telemetry_data.satellites_visible, 0, 2);

//	if (telemetry_data.fix_type > 0) {
	y += FH;
	lcd_putsnAtt(0, y, PSTR("HDOP"), 4, 0);
	lcd_outdezFloat(xnum, y, telemetry_data.eph, 2);

	y += FH;
	lcd_putsnAtt(0, y, PSTR("COOR"), 4, 0);
	lcd_outdezFloat(xnum, y, telemetry_data.loc_current.lat, 4);

	lcd_outdezFloat(xnum + 10 * FWNUM, y, telemetry_data.loc_current.lon, 4);

	y += FH;
	lcd_putsnAtt(x1, y, PSTR("ALT"), 3, 0);
	lcd_outdezFloat(xnum, y, telemetry_data.loc_current.alt, 2);

	/*
	 y += FH;
	 lcd_putsnAtt(x1, y, PSTR("HDG"), 3, 0);
	 lcd_outdezFloat(xnum, y, telemetry_data.hdg, 2);

	 y += FH;
	 lcd_putsnAtt(x1, y, PSTR("V"), 1, 0);
	 lcd_outdezFloat(xnum, y, telemetry_data.v, 2);
	 */
	//}
}

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
		bufferLen = serialTxBufferCount;
		ptr = ptrTxISR;
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

