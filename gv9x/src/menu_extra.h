#ifdef ADD_EXTRA_MENU

#include "er9x.h"

#ifdef MENU_ROTARY_SW
void menuProcRotarySwitches(uint8_t event) {
	MENU("ROTARY SWITCHES", menuTabModel, e_RotarySwitches, NUM_ROTARY_SW + 1, {0, 5 /*repeated*/});

	uint8_t y = 0;
	uint8_t k = 0;
	int8_t sub = mstate2.m_posVert - 1;
	uint8_t subSub = mstate2.m_posHorz;

	evalOffset(sub, 6);

	switch (event) {
		case EVT_KEY_REPT(KEY_LEFT):
		case EVT_KEY_FIRST(KEY_LEFT):
		if (!s_editMode) {
			if (mstate2.m_posHorz == 4)
			mstate2.m_posHorz = 1;
		} else if (subSub > 1 && subSub < 5) {
			mstate2.m_posHorz--;
		}
		break;
		case EVT_KEY_REPT(KEY_RIGHT):
		case EVT_KEY_FIRST(KEY_RIGHT):
		if (!s_editMode) {
			if (mstate2.m_posHorz == 2)
			mstate2.m_posHorz = 5;
		} else if (subSub > 0 && subSub < 4) {
			mstate2.m_posHorz++;
		}
		break;
	}
#define PPM_VALUE 1
#define MAVLINK_VALUE 2
	for (uint8_t i = 0; i < 7; i++) { // 8 lines
		y = (i + 1) * FH;
		k = i + s_pgOfs;
		if (k == NUM_ROTARY_SW)
		break;
		RotarySwChannelData *rd = &g_model.rotarySw[k];
		putsRotarySwPos(0, y, k, 0);
		for (uint8_t j = 0; j < 3; j++) { // 3 columns
			uint8_t attr = 0;
			uint8_t type = (rd->type >> 6) & 0x03;
			uint8_t val = type == 1 ? rd->val : (type == 2 ? rd->type & 0x0f : 0);
			switch (j) {

				case 0:
				attr = ((sub == k && subSub == 0) ? (s_editMode ? BLINK : INVERS) : 0);
#ifdef MAVLINK
				lcd_putsnAtt(5 * FW, y, PSTR("offppmmav") + 3 * type, 3, attr);
				if (attr && (s_editMode || p1valdiff)) {
					CHECK_INCDEC_H_MODELVAR(event, type, 0, 2);
					rd->type = (rd->type & 0x0f) | (type << 6);
				}
#else
				lcd_putsnAtt(5 * FW, y, PSTR("offon") + 3 * rd->type, 3, attr);
				if (attr && (s_editMode || p1valdiff)) {
					CHECK_INCDEC_H_MODELVAR(event, rd->type, 0, 1);
				}
#endif
				break;

				case 1:
#ifdef MAVLINK
				attr = 0;
				if ((sub == k && subSub >= 1) && (subSub <= 4 || type == MAVLINK_VALUE)) {
					attr = s_editMode ? BLINK : INVERS;
				}
				putsRotarySw(10 * FW, y, k, (s_editMode ? 0 : attr), 6);
				if (attr && (s_editMode || p1valdiff)) {
					switch (type) {
						case PPM_VALUE: {
							char v = char2idx(rd->name[subSub - 1]);
							//if (p1valdiff || event == EVT_KEY_FIRST(KEY_DOWN) || event == EVT_KEY_FIRST(KEY_UP) || event == EVT_KEY_REPT(
							//								KEY_DOWN) || event == EVT_KEY_REPT(KEY_UP))
							CHECK_INCDEC_H_MODELVAR(event, v, 0, NUMCHARS - 1);
							v = idx2char(v);
							rd->name[subSub - 1] = v;
							lcd_putcAtt((9 + subSub) * FW, y, v, INVERS);
						}
						break;
						case MAVLINK_VALUE:
						CHECK_INCDEC_H_MODELVAR(event, val, 0, 8);
						rd->type = val | ROTARY_TYPE_MAVLINK;
						break;
					}
				}
#else
				attr = ((sub == k && subSub >= 1 && subSub <= 4) ? (s_editMode ? BLINK : INVERS) : 0);
				putsRotarySw(10 * FW, y, k, (s_editMode ? 0 : attr), 6);
				if (attr && (s_editMode || p1valdiff)) {
					char v = char2idx(rd->name[subSub - 1]);
					//	if (p1valdiff || event == EVT_KEY_FIRST(KEY_DOWN) || event == EVT_KEY_FIRST(KEY_UP) || event
					//				== EVT_KEY_REPT(KEY_DOWN) || event == EVT_KEY_REPT(KEY_UP))
					CHECK_INCDEC_H_MODELVAR(event, v, 0, NUMCHARS - 1);
					v = idx2char(v);
					rd->name[subSub - 1] = v;
					lcd_putcAtt((9 + subSub) * FW, y, v, INVERS);
				}
#endif
				break;
				case 2:
				attr = ((sub == k && subSub == 5) ? (s_editMode ? BLINK : INVERS) : 0);
#ifdef MAVLINK
				if (attr && (s_editMode || p1valdiff)) {
					switch (type) {
						case PPM_VALUE:
						CHECK_INCDEC_H_MODELVAR(event, val, -125, 125);
						rd->val = val;
						break;
						case MAVLINK_VALUE:
						CHECK_INCDEC_H_MODELVAR(event, val, 0, 8);
						rd->type = val | ROTARY_TYPE_MAVLINK;
						break;
					}
				}
				if (type) {
					if (type == MAVLINK_VALUE) {
						val = MAVLINK_CtrlMode2Action(val);
						if (val == ERROR_MAV_ACTION_NB) type = 0;
					}
				}
				if(type) {
					lcd_outdezAtt(20 * FW, y, val, attr);
				} else {
					lcd_putcAtt(19 * FW, y, '-', attr);
				}
#else
				lcd_outdezAtt(20 * FW, y, rd->val, attr);
				if (attr && (s_editMode || p1valdiff)) {
					CHECK_INCDEC_H_MODELVAR(event, rd->val, -125, 125);
				}
#endif

				break;
			}
		}
	}
}
#endif
extern int8_t watch_mav_req_params_list;
void menuProcMavlinkParams(uint8_t event) {
	MENU("MAV PI", menuTabModel, e_MavlinkParams, NB_PID_PARAMS-1, {0, 1 /*repeated*/});

	uint8_t y = 0;
	uint8_t k = 0;
	int8_t sub = mstate2.m_posVert - 1;
	uint8_t subSub = mstate2.m_posHorz;

	evalOffset(sub, 6);

	switch (event) {
		case EVT_ENTRY:
		if (watch_mav_req_params_list == -1) {
			watch_mav_req_params_list = 1;
		}
		break;
		/*case EVT_KEY_REPT(KEY_LEFT):
		 case EVT_KEY_FIRST(KEY_LEFT):
		 break;
		 case EVT_KEY_REPT(KEY_RIGHT):
		 case EVT_KEY_FIRST(KEY_RIGHT):
		 break;
		 */
	}

	for (uint8_t i = 0; i < 7; i++) { // 8 lines
		y = (i + 1) * FH;
		k = i + s_pgOfs;
		if (k == NB_PID_PARAMS) break;
		uint8_t attr = ((sub == k) ? (isValidParamsValue(k, subSub) ? 0 : INVERS) : 0);
		putsMavlinParams(0, y, k, subSub, attr);
		//uint8_t idx = getIdxMavlinParams(k, subSub);
		//lcd_outdezNAtt(4 * FWNUM, y, k,0, 3);
		//lcd_outdezNAtt(8 * FWNUM, y, idx,0, 3);
		if (isValidParamsValue(k, subSub)) {
			//uint8_t x = 18 * FW;
			uint8_t x = 14 * FW;
			attr = ((sub == k) ? (s_editMode ? BLINK : INVERS) : 0);
			//putsMavlinParamsValue(x, y, idx, attr);
			float value = getMavlinParamsValue(k, subSub);
			int16_t ival = subSub == 0 ? (int16_t) (value * 100.00) : (int16_t) (value * 1000.00);
			//lcd_outdezAtt(x, y, val, attr | PREC2);
			lcd_outdezFloat(x, y, value, 3, attr);

			if (attr && (s_editMode || p1valdiff)) {
				int16_t max = getMaxMavlinParamsValue(k, subSub);
				//lcd_outdezNAtt(4 * FWNUM, y,max,0, 3);
				ival = checkIncDec16(event, ival, 0, max, 0);
				value = subSub == 0 ? ((float) ival/ 100.00 + 0.005) : ((float) ival/ 1000.00 + 0.0005);
				setMavlinParamsValue(k, subSub, value);
				//lcd_outdezNAtt(7 * FWNUM, y,val,0, 3);
			}
			lcd_putcAtt(20*FW, y, isDirtyParamsValue(k, subSub) ? '*' : ' ', 0);
		}
	}
}

#endif
