#ifdef ADD_EXTRA_MENU

#include "er9x.h"

#ifdef MENU_ROTARY_SW
void menuProcRotarySwitches(uint8_t event) {
	MENU("ROTARY SWITCHES", menuTabModel, e_RotarySwitches, NUM_ROTARY_SW + 1, {0, 2 /*repeated*/});

	uint8_t y = 0;
	uint8_t k = 0;
	int8_t sub = mstate2.m_posVert - 1;
	uint8_t subSub = mstate2.m_posHorz;
	evalOffset(sub, 6);
	/*
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
	 */

	for (uint8_t i = 0; i < 7; i++) { // 8 lines
		y = (i + 1) * FH;
		k = i + s_pgOfs;
		if (k == NUM_ROTARY_SW)
		break;

		RotarySwChannelData *rd = &g_model.rotarySw[k];
		uint8_t type = rd->typeRotary;
		uint8_t num = rd->numMode;
		uint8_t val;

		putsRotarySwPos(0, y, k, 0);
		for (uint8_t j = 0; j < 3; j++) { // 3 columns
			uint8_t attr = ((sub == k && subSub == j) ? (s_editMode ? BLINK : INVERS) : 0);
			switch (j) {

				case 0:
				//attr = ((sub == k && subSub == 0) ? (s_editMode ? BLINK : INVERS) : 0);
#ifdef MAVLINK
				lcd_putsnAtt(3 * FW, y, PSTR("offppmmav") + 3 * type, 3, attr);
				if (attr && (s_editMode || p1valdiff)) {
					CHECK_INCDEC_H_MODELVAR(event, type, 0, 2);
					rd->typeRotary = type;
				}
#else
				lcd_putsnAtt(3 * FW, y, PSTR("offon") + 3 * rd->typeRotary, 3, attr);
				if (attr && (s_editMode || p1valdiff)) {
					CHECK_INCDEC_H_MODELVAR(event, rd->typeRotary, 0, 1);
				}
#endif
				break;

				case 1:
				//attr = ((sub == k && subSub == 1) ? (s_editMode ? BLINK : INVERS) : 0);
				putsControlMode(8 * FW, y, num, attr, 6);
				if (attr && (s_editMode || p1valdiff)) {
					CHECK_INCDEC_H_MODELVAR(event, num, 0, (NUM_MODES-1));
					rd->numMode = num;
				}
				break;

				case 2:
				//attr = ((sub == k && subSub == 2) ? (s_editMode ? BLINK : INVERS) : 0);
				val = g_model.modesVal[num];
				if (attr && (s_editMode || p1valdiff)) {
					switch (type) {
						case ROTARY_TYPE_MAVLINK:
						CHECK_INCDEC_H_MODELVAR(event, num, 0, (NUM_MODES-1));
						rd->numMode = num;
						break;
						default:
						CHECK_INCDEC_H_MODELVAR(event, val, -125, 125);
						g_model.modesVal[num] = val;
						break;

					}
				}
#ifdef MAVLINK
				if (type == ROTARY_TYPE_MAVLINK) {
					val = MAVLINK_CtrlMode2Action(num);
					if (val == ERROR_MAV_ACTION_NB) {
						lcd_putcAtt(19 * FW, y, '-', attr);
						break;;
					}
				}
#endif
				lcd_outdezAtt(20 * FW, y, ((int8_t)val), attr);
				break;
			}
		}
	}
}
#endif

#ifdef MAVLINK
extern int8_t watch_mav_req_params_list;
void menuProcMavlinkParams(uint8_t event) {
	MENU("MAV PARAMS", menuTabModel, e_MavlinkParams, NB_ROW_PARAMS+1, {0, (NB_COL_PARAMS-1) /*repeated*/});

	uint8_t y = 0;
	uint8_t k = 0;
	int8_t sub = mstate2.m_posVert - 1;
	uint8_t subSub = mstate2.m_posHorz;

	evalOffset(sub, 6);

	for (uint8_t i = 0; i < 7; i++) { // 8 lines
		y = (i + 1) * FH;
		k = i + s_pgOfs;
		uint8_t idx = getIdxParam(k, subSub);
		if (idx >= NB_PARAMS) break;

		uint8_t attr = ((sub == k) ? (isValidParamsValue(idx) ? 0 : INVERS) : 0);
		putsMavlinParams(0, y, idx, attr);
		if (isValidParamsValue(idx)) {
			uint8_t x = 16 * FW;
			if (idx == BATT_CAPACITY) x += 2 * FW;
			attr = ((sub == k) ? (s_editMode ? BLINK : INVERS) : 0);
			float value = getMavlinParamsValue(idx);
			uint8_t precis = getPrecisMavlinParamsValue(idx);
			lcd_outdezFloat(x, y, value, precis, attr);

			if (attr && (s_editMode || p1valdiff)) {
				float coef = getCoefPrecis(precis);
				int16_t max = getMaxMavlinParamsValue(idx);
				int16_t ival = (uint16_t)(value * coef);

				int16_t ivalnew = checkIncDec16(event, ival, 0, max, 0);
				if (ivalnew != ival) {
					value = ((float) ivalnew+0.5) / coef;
					setMavlinParamsValue(idx, value);
				}
			}
			lcd_putcAtt(20*FW, y, isDirtyParamsValue(idx) ? '*' : ' ', 0);
		}
	}
}
#endif
#endif
