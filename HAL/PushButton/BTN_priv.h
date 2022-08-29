
#ifndef BTN_PRIV_H
#define BTN_PRIV_H


typedef struct
{
	uint8 Mode; // Push UP/DOWN
	uint8 PinMap;
}tstrBtnCfg;

extern tstrBtnCfg BTN_tstr[BTN_MAX_NUM];



#endif