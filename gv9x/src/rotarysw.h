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

#ifndef rotarysw_h
#define rotarysw_h
#include "myeeprom.h"

extern int8_t rotarySwIdx;
extern int8_t rotarySwLastPPMVal;

extern void putsRotarySwPos(uint8_t x, uint8_t y, uint8_t idx1, uint8_t att);
extern void putsRotarySw(uint8_t x, uint8_t y, uint8_t idx, uint8_t attr, uint8_t len);
extern void setRotarySwIdx(int8_t idx);
extern void setRotarySwDisplay(int8_t idx);
extern void animRotarySw(uint8_t x);
extern void menuProcRotarySwitches(uint8_t event);

inline void init_rotary_sw() {
	setRotarySwIdx(-1); // Reinit sw roll idx
	for (uint8_t i = 0; i < NUM_ROTARY_SW; i++) {
		for (uint8_t j = 0; j < sizeof(g_model.rotarySw[i].name); j++) // makes sure name is valid
		{
			uint8_t idx = char2idx(g_model.rotarySw[i].name[j]);
			g_model.rotarySw[i].name[j] = idx2char(idx);
		}
	}
}
inline int8_t find_rotary_sw_pos(uint8_t srcRaw, uint8_t swTog, uint8_t swOn) {
	if ((swOn && swTog) || rotarySwIdx == -1) { // toggle switch on
		int8_t idx = rotarySwIdx;
		int8_t inc = srcRaw == MIX_INC_ROTARY_SW ? 1 : -1;
		for (uint8_t k = 0; k < NUM_ROTARY_SW; k++) { // find first enable slot
			idx = (idx + inc) & 0x7; // do modulo 8
			if (g_model.rotarySw[idx].type & 0xf0) {
				setRotarySwIdx(idx);
				return idx;
			}
		}
		setRotarySwIdx(-1);
	}
	return rotarySwIdx;
}

inline int8_t get_rotary_value() {
	if (g_model.rotarySw[rotarySwIdx].type & ROTARY_TYPE_PPM) {
		rotarySwLastPPMVal = g_model.rotarySw[rotarySwIdx].val;
	}
	return rotarySwLastPPMVal;
}

#endif

