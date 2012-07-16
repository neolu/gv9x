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
#define MAVLINK_COMM_NUM_BUFFERS 1
#define MAVLINK_PARAMS

enum ap_var_type
{
	AP_PARAM_NONE = 0,
	AP_PARAM_INT8,
	AP_PARAM_INT16,
	AP_PARAM_INT32,
	AP_PARAM_FLOAT,
	AP_PARAM_VECTOR3F,
	AP_PARAM_VECTOR6F,
	AP_PARAM_MATRIX3F,
	AP_PARAM_GROUP
};

#include "GCS_MAVLink/include/mavlink/v1.0/mavlink_types.h"
#include "GCS_MAVLink/Mavlink_compat.h"

#include "serial.h"

extern mavlink_system_t mavlink_system;

extern void SERIAL_start_uart_send();
extern void SERIAL_end_uart_send();
extern void SERIAL_send_uart_bytes(uint8_t * buf, uint16_t len);

#define MAVLINK_START_UART_SEND(chan,len) SERIAL_start_uart_send()
#define MAVLINK_END_UART_SEND(chan,len) SERIAL_end_uart_send()
#define MAVLINK_SEND_UART_BYTES(chan,buf,len) SERIAL_send_uart_bytes(buf,len)

#include "GCS_MAVLink/include/mavlink/v1.0/ardupilotmega/mavlink.h"

#define ERROR_NUM_MODES 99

#ifdef MAVLINK_PARAMS

enum ACM_PARAMS {
	RATE_YAW_P, // Rate Yaw
	RATE_YAW_I, // Rate Yaw
	STB_YAW_P, // Stabilize Yaw
	STB_YAW_I, // Stabilize Yaw
	RATE_PIT_P, // Rate Pitch
	RATE_PIT_I, // Rate Pitch
	RATE_RLL_P, // Rate Roll
	RATE_RLL_I, // Rate Roll
	STB_PIT_P, // Stabilize Pitch
	STB_PIT_I, // Stabilize Pitch
	STB_RLL_P, // Stabilize Roll
	STB_RLL_I, // Stabilize Roll
	THR_ALT_P, // THR_BAR, // Altitude Hold
	THR_ALT_I, // THR_BAR, // Altitude Hold
	HLD_LON_P, // Loiter
	HLD_LON_I, // Loiter
	HLD_LAT_P, // Loiter
	HLD_LAT_I, // Loiter
	NAV_LON_P, // Nav WP
	NAV_LON_I, // Nav WP
	NAV_LAT_P, // Nav WP
	NAV_LAT_I, // Nav WP
	NB_PID_PARAMS, // Number of PI Parameters
	LOW_VOLT = NB_PID_PARAMS,
	VOLT_DIVIDER, //
	BATT_MONITOR, //
	BATT_CAPACITY, //
	NB_PARAMS
};
#define NB_EXTRA_PARAMS (NB_PARAMS-NB_PID_PARAMS)

#define NB_COL_PARAMS 2
#define NB_ROW_PARAMS ((NB_PARAMS+1)/NB_COL_PARAMS)

typedef struct MavlinkParam_ {
	uint8_t repeat :4;
	uint8_t valid :4;
	float value;
} MavlinkParam_t;

#endif

typedef struct Location_ {
	int32_t lat; ///< Latitude in degrees
	int32_t lon; ///< Longitude in degrees
	int32_t alt; ///< Altitude in meters
} Location_t;

typedef struct Telemetry_Data_ {
	// MESSAGE SYS_STATUS
	uint16_t drop_rate_comm;
	uint16_t voltage_battery; ///< Battery voltage, in millivolts (1 = 1 millivolt)
	uint8_t vbat_low;

	// MESSAGE HEARTBEAT
	//uint32_t custom_mode; ///< A bitfield for use for autopilot-specific flags.
	uint8_t type; ///< Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)
	uint8_t base_mode; ///< System mode bitfield, see MAV_MODE_FLAGS ENUM in mavlink/include/mavlink_types.h
	uint8_t system_status; ///< System status flag, see MAV_STATE ENUM

	// MSG ACTION / ACK
	uint8_t rcv_control_mode;
	uint8_t req_control_mode;
	int8_t ack_result;

	// GPS
	uint8_t fix_type; ///< 0-1: no fix, 2: 2D fix, 3: 3D fix. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
	uint8_t satellites_visible; ///< Number of satellites visible
	Location_t loc_current;
	uint16_t eph;
#ifdef MAVLINK09
	float hdg;
	float v; // Ground speed
#endif

#ifdef MAVLINK_PARAMS
	// Params
	MavlinkParam_t params[NB_PARAMS];
#endif

} Telemetry_Data_t;

// Telemetry data hold
extern Telemetry_Data_t telemetry_data;

#define isSAFETY_ARMED() (telemetry_data.base_mode&MAV_MODE_FLAG_SAFETY_ARMED)

extern inline uint8_t MAVLINK_CtrlMode2Action(uint8_t mode) {
	uint8_t action = mode;
	return action;
}

extern inline uint8_t MAVLINK_CtrlMode2CustomMode(uint8_t mode)
{
	uint8_t custom_mode = ERROR_NUM_MODES;
	if(telemetry_data.type == MAV_TYPE_QUADROTOR)
	{
		if (mode < ACM_NUM_MODES)
		{
			custom_mode = mode;
		}
	}
	if(telemetry_data.type == MAV_TYPE_FIXED_WING)
	{
		// TODO
	}
	return custom_mode;
}

extern inline uint8_t MAVLINK_Action2CtrlMode(uint8_t action) {
	uint8_t mode = ERROR_NUM_MODES;
	return mode;
}

void check_mavlink();
void MAVLINK_Init(void);
void menuProcMavlink(uint8_t event);
void MAVLINK10mspoll(uint16_t time);

bool isValidReqControlMode();
void MAVLINK_ReqMode(uint8_t mode, uint8_t send);
void putsMavlinkControlMode(uint8_t x, uint8_t y, uint8_t len);
void putsMavlinkSafetyArmed(uint8_t x, uint8_t y);

#ifdef MAVLINK_PARAMS
#define PARAM_NB_REPEAT 10

extern int8_t watch_mav_req_params_list;
extern uint8_t mav_req_params_nb_recv;
extern int8_t watch_mav_req_params_set;
//void refreshParams(uint8_t nb);
void putsMavlinParams(uint8_t x, uint8_t y, uint8_t idx, uint8_t att);
//void setMavlinParamsValue(uint8_t idx, float val);

inline uint8_t getIdxParam(uint8_t rowIdx, uint8_t colIdx) {
	return (rowIdx * NB_COL_PARAMS) + colIdx;
}

inline MavlinkParam_t * getParam(uint8_t idx) {
	return &telemetry_data.params[idx];
}

inline float getMavlinParamsValue(uint8_t idx) {
	return telemetry_data.params[idx].value;
}

inline uint8_t isDirtyParamsValue(uint8_t idx) {
	return telemetry_data.params[idx].repeat;
}

inline uint8_t isValidParamsValue(uint8_t idx) {
	return telemetry_data.params[idx].valid;
}

inline void refreshParams(uint8_t nb) {
	watch_mav_req_params_list = mav_req_params_nb_recv < nb ? 20 : 0; // stop timeout
}


inline float getCoefPrecis(uint8_t precis) {
	switch (precis) {
	case 1:
		return 10.0;
	case 2:
		return 100.0;
	case 3:
		return 1000.0;
	}
	return 1.0;

}

inline int16_t getMaxMavlinParamsValue(uint8_t idx) {
	int16_t max = 0;
	switch (idx) {
	case LOW_VOLT:
		max = 2500; // 25.0 Volt max
		break;
	case VOLT_DIVIDER:
		max = 900; // 7.00 Volt max
		break;
	case BATT_MONITOR:
		max = 3;
		break;
	case BATT_CAPACITY:
		max = 7000; // 7000 mAh max
		break;
	default:
		if (idx < NB_PID_PARAMS) {
			// PID
			switch (idx % NB_COL_PARAMS) {
			case 0:
				max = 1000;
				break;
			case 1:
				max = 750;
				break;
			case 2:
				max = 500;
				break;
			}
		}
		break;
	}
	return max;
}

inline uint8_t getPrecisMavlinParamsValue(uint8_t idx) {
	uint8_t precis = 2;
	switch (idx) {
	case LOW_VOLT:
		precis = 2;
		break;
	case VOLT_DIVIDER:
		precis = 2;
		break;
	case BATT_MONITOR:
		precis = 0;
		break;
	case BATT_CAPACITY:
		precis = 0;
		break;
	default:
		if (idx < NB_PID_PARAMS) {
			if (idx % NB_COL_PARAMS)
				precis = 3;
		}
		break;
	}
	return precis;
}

void lcd_outdezFloat(uint8_t x, uint8_t y, float val, uint8_t precis, uint8_t mode);
#endif

#endif

