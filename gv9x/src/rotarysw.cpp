/*
 * Author - Gerard Valade
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#include "er9x.h"
#include "menus.h"
#include "rotarysw.h"

#define CTIME_ROTARY_ANIM 500
uint16_t rotarySwChanged = 0;
//int16_t rotarySwAnimTimer = 0;
int8_t rotarySwIdx = -1;
int8_t rotarySwLastPPMVal = 0;

void putsRotarySwPos(uint8_t x, uint8_t y, uint8_t idx, uint8_t att) {
	lcd_putcAtt(x, y, 'P', att);
	lcd_putcAtt(x + FW, y, '1' + idx, att);
}

#ifdef MAVLINK
extern void putsMavlinkControlMode(uint8_t x, uint8_t y, uint8_t control_mode, uint8_t attr, uint8_t len);
extern void putsMavlinkControlMode(uint8_t x, uint8_t y, uint8_t len);
extern void MAVLINK_ReqMode(uint8_t mode);
#endif

void putsRotarySw(uint8_t x, uint8_t y, uint8_t idx, uint8_t attr, uint8_t len) {
#ifdef MAVLINK
	if (g_model.rotarySw[idx].type & ROTARY_TYPE_MAVLINK) {
		putsMavlinkControlMode(x, y, g_model.rotarySw[idx].type & 0x0f, attr, len);
	} else if (g_model.rotarySw[idx].type & ROTARY_TYPE_PPM) {
		for (uint8_t i = 0; i < 4; i++) {
			char c = g_model.rotarySw[idx].name[i];
			lcd_putcAtt(x + i * FW, y, c, attr);
		}
	} else {
		for (uint8_t i = 0; i < len; i++) {
			lcd_putcAtt(x + i * FW, y, '-', attr);
		}
	}
#else
	for (uint8_t i = 0; i < 4; i++) {
		char c = g_model.rotarySw[idx].name[i];
		lcd_putcAtt(x + i * FW, y, c, attr);
	}
#endif
}

void setRotarySwIdx(int8_t idx) {
	if (rotarySwIdx != idx) {
		rotarySwIdx = idx;
		if (rotarySwIdx >= 0) {
			rotarySwChanged = (get_tmr10ms() >> 3) + 3;
#ifdef MAVLINK
			if (g_model.rotarySw[rotarySwIdx].type & ROTARY_TYPE_MAVLINK) {
				MAVLINK_ReqMode(g_model.rotarySw[rotarySwIdx].type & 0x0f);
			}
#endif
		}
	}
}

extern int16_t s_timerVal;
void animRotarySw(uint8_t x) {

	uint16_t s_time = get_tmr10ms() >> 3;// 80ms time unit
	uint8_t att1 = 0;

	if (s_timerState != TMR_OFF) {
		att1 = DBLSIZE | (s_timerState == TMR_BEEPING ? BLINK : 0);
		putsTime(x + 14 * FW - 2, FH * 2, s_timerVal, att1, att1);
	}

	if (rotarySwIdx >= 0 && g_model.rotarySw[rotarySwIdx].type & ROTARY_TYPE_PPM) {
		uint8_t swToggle = (s_time < rotarySwChanged);
		att1 = swToggle ? INVERS : 0;
		putsRotarySw(x + 4 * FW, 2 * FH, rotarySwIdx, att1 | NO_UNIT, 6);
	} else {
		putsMavlinkControlMode(x + 4 * FW, 2 * FH, 6);
	}

	static uint8_t display_vbat_unit = 0;
	s_time = s_time >> 5; // 2560ms time unit
	switch (s_time & 0x03) { // 1/3 display time
	case 0:
		display_vbat_unit = 0;
		lcd_putsnAtt(x + 4 * FW, 3 * FH, PSTR("ExpExFFneMedCrs") + 3 * g_model.trimInc, 3, 0);
		lcd_putsnAtt(x + 8 * FW - FW / 2, 3 * FH, PSTR("   TTm") + 3 * g_model.thrTrim, 3, 0);
		break;
	default:
		display_vbat_unit = 1;
		break;
	}

	s_time = telemetry_data.status ? (s_time >> 1) : 0; // 640ms 1280ms time unit
	switch (s_time & 0x01) { // 1/2 time display time
	case 0:
		att1 = (g_vbat100mV < g_eeGeneral.vBatWarn ? BLINK : 0);
		putsVBat(x + 4 * FW, 2 * FH, att1 | NO_UNIT | DBLSIZE);
		if (display_vbat_unit) {
			lcd_putcAtt(x + 4 * FW, 3 * FH, 'V', 0);
			if (s_timerState != TMR_OFF) {
				putsTmrMode(x + 7 * FW - FW / 2, 3 * FH, 0);
			}
		}
		break;

	default:
		// att1 = (telemetry_data.vbat < g_eeGeneral.vMavBatWarn ? BLINK : 0);
		att1 = (telemetry_data.vbat_low ? BLINK : 0);
		lcd_outdezAtt(x + 4 * FW, 2 * FH, telemetry_data.vbat, att1 | PREC1 | DBLSIZE);
		if (display_vbat_unit) {
			lcd_putsnAtt(x + 4 * FW, 3 * FH, PSTR("MAVLNK"), 6, 0);
		}
		break;
	}
}
