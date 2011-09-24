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

#ifndef _MAVLINK_H_
#define _MAVLINK_H_

#define MAVLINK_USE_CONVENIENCE_FUNCTIONS
# define MAVLINK_COMM_NUM_BUFFERS 1
#include "include/mavlink_types.h"

#include "serial.h"

//#include "include/mavlink_helpers.h"


extern mavlink_system_t mavlink_system;

extern void SERIAL_start_uart_send();
extern void SERIAL_end_uart_send();
extern void SERIAL_send_uart_bytes(uint8_t * buf, uint16_t len);

#define MAVLINK_START_UART_SEND(chan,len) SERIAL_start_uart_send()
#define MAVLINK_END_UART_SEND(chan,len) SERIAL_end_uart_send()
#define MAVLINK_SEND_UART_BYTES(chan,buf,len) SERIAL_send_uart_bytes(buf,len)

#include "include/ardupilotmega/mavlink.h"

#define MAVLINK_PARAMS

// Control mode define from arducoper
enum CONTROL_MODE {
	STABILIZE = 0, // hold level position
	ACRO = 1, // rate control
	SIMPLE = 2, //
	ALT_HOLD = 3, // AUTO control
	AUTO = 4, // AUTO control
	GUIDED = 5, // AUTO control
	LOITER = 6, // Hold a single location
	RTL = 7, // AUTO control
	CIRCLE = 8, // AUTO control
	NUM_MODES
};

//                       0123456789012345678901234567890123456789012345678901234
//                       0     1     2     3     4     5     6     7     8     9
#define CONROL_MODE_STR "STAB  ACRO  SIMPLEALTI  WAY PTGUIDEDLOITERRTL   CIRCLE"
/*
 #define STABILIZE 0			// hold level position
 #define ACRO 1				// rate control
 #define SIMPLE 2			//
 #define ALT_HOLD 3			// AUTO control
 #define AUTO 4				// AUTO control
 #define GUIDED 5			// AUTO control
 #define LOITER 6			// Hold a single location
 #define RTL 7				// AUTO control
 #define CIRCLE 8				// AUTO control
 #define NUM_MODES 9
 */
#define ERROR_NUM_MODES 99
#define ERROR_MAV_ACTION_NB 99

#ifdef MAVLINK_PARAMS

#define NB_PID_PARAMS 12
#define NB_PID_VALUE 2
//#define NB_PARAMS_VALUES (NB_PID_PARAMS*3)
//#define PARAM_VALID 0x04
//#define PARAM_DIRTY 0x03
#define PARAM_VALID (param_status_t){0,1}
typedef struct pi_param_ {
	uint8_t repeat :4;
	uint8_t valid :4;
	float pi_value;
} pi_param_t;

struct MavlinkParam {
	pi_param_t pi_param[NB_PID_VALUE];
};

#endif

struct Location {
	float lat; ///< Latitude in degrees
	float lon; ///< Longitude in degrees
	float alt; ///< Altitude in meters
};

typedef struct Telemetry_Data_ {
	// INFOS
	uint8_t status; ///< System status flag, see MAV_STATUS ENUM
	//uint8_t mode;
	//uint8_t nav_mode;
	uint8_t control_mode; ///< System mode, see MAV_MODE ENUM in mavlink/include/mavlink_types.h
	//uint16_t load; ///< Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000
	uint8_t vbat; ///< Battery voltage, in millivolts (1 = 1 millivolt)

	// MSG ACTION / ACK
	uint8_t req_mode;
	int8_t ack_result;

	// GPS
	uint8_t fix_type; ///< 0-1: no fix, 2: 2D fix, 3: 3D fix. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
	uint8_t satellites_visible; ///< Number of satellites visible
	Location loc_current;
	float eph;
	float hdg;
	float v; // Ground speed

#ifdef MAVLINK_PARAMS
	// Params
	MavlinkParam params[NB_PID_PARAMS];
#endif

} Telemetry_Data_t;

// Telemetry data hold
extern Telemetry_Data_t telemetry_data;

extern inline uint8_t MAVLINK_NavMode2CtrlMode(uint8_t mode, uint8_t nav_mode) {

	uint8_t control_mode = ERROR_NUM_MODES;
	switch (mode) {
	case MAV_MODE_AUTO:
		switch (nav_mode) {
		case MAV_NAV_HOLD: // ACM
		case MAV_NAV_LOITER: // APM
			control_mode = LOITER;
			break;
		case MAV_NAV_WAYPOINT:
			control_mode = AUTO;
			break;
		case MAV_NAV_RETURNING:
			control_mode = RTL;
			break;
		}
		break;
	case MAV_MODE_GUIDED:
		control_mode = GUIDED;
		break;
	default:
		if (mode >= 100) {
			control_mode = mode - 100;
		}
		break;
	}
	return control_mode;
}

extern inline uint8_t MAVLINK_CtrlMode2Action(uint8_t mode) {
	uint8_t action = ERROR_MAV_ACTION_NB;
	switch (mode) {
	case STABILIZE:
		action = MAV_ACTION_SET_MANUAL;
		break;
		/*
		 case ACRO:
		 action = 0;
		 break;
		 case SIMPLE:
		 action = 0;
		 break;
		 case ALT_HOLD:
		 action = 0;
		 break;*/
	case AUTO:
		action = MAV_ACTION_SET_AUTO;
		break;
		/*case GUIDED:
		 action = 0;
		 break;*/
	case LOITER:
		action = MAV_ACTION_LOITER;
		break;
	case RTL:
		action = MAV_ACTION_RETURN;
		break;
		/*case CIRCLE:
		 action = 0;
		 break;*/
	default:
		break;
	}
	return action;
}

extern inline uint8_t MAVLINK_Action2CtrlMode(uint8_t action) {
	uint8_t mode = ERROR_NUM_MODES;
	switch (action) {
	case MAV_ACTION_SET_MANUAL:
		mode = STABILIZE;
		break;
		/*
		 case ACRO:
		 action = 0;
		 break;
		 case SIMPLE:
		 action = 0;
		 break;
		 case ALT_HOLD:
		 action = 0;
		 break;*/
	case MAV_ACTION_SET_AUTO:
		mode = AUTO;
		break;
		/*case GUIDED:
		 action = 0;
		 break;*/
	case MAV_ACTION_LOITER:
		mode = LOITER;
		break;
	case MAV_ACTION_RETURN:
		mode = RTL;
		break;
		/*case CIRCLE:
		 action = 0;
		 break;*/
	default:
		break;
	}
	return action;
}

void MAVLINK_Init(void);
void menuProcMavlink(uint8_t event);
void MAVLINK10mspoll(uint16_t time);

#ifdef MAVLINK_PARAMS

void putsMavlinParams(uint8_t x, uint8_t y, uint8_t idx, uint8_t subIdx, uint8_t att);
void setMavlinParamsValue(uint8_t idx, uint8_t subIdx, float val);

inline float getMavlinParamsValue(uint8_t idx, uint8_t subIdx) {
	return telemetry_data.params[idx].pi_param[subIdx].pi_value;
}
inline uint8_t isDirtyParamsValue(uint8_t idx, uint8_t subIdx) {
	return telemetry_data.params[idx].pi_param[subIdx].repeat;
}
inline uint8_t isValidParamsValue(uint8_t idx, uint8_t subIdx) {
	return subIdx < 2 ? telemetry_data.params[idx].pi_param[subIdx].valid : 0;
}

enum ACM_PARAMS{
	RATE_YAW, // Rate Yaw
	STB_YAW, // Stabilize Yaw
	RATE_PIT, // Rate Pitch
	STB_PIT, // Stabilize Pitch
	RATE_RLL, // Rate Roll
	STB_RLL, // Stabilize Roll
	THR_HOLD, // THR_BAR, // Altitude Hold
	XTRACK, //  Crosstrak Correction
	HLD_LON, // Loiter
	HLD_LAT, // Loiter
	NAV_LON, // Nav WP
	NAV_LAT, // Nav WP
};
/*
 * 									PSTR("RATE_YAW"), // Rate Yaw
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
 *
 */

inline uint16_t getMaxMavlinParamsValue(uint8_t idx, uint8_t subIdx) {
	return subIdx == 1 ? 1000 : 750;
}

void lcd_outdezFloat(uint8_t x, uint8_t y, float val, uint8_t precis, uint8_t mode);
#endif

#endif

