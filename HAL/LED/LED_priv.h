
#ifndef  LED_PRIV_H
#define  LED_PRIV_H


#define LED_u8NORMAL  ((uint8) 0xAA)
#define LED_u8REVERSE ((uint8) 0x55)


typedef struct
{
	uint8 u8DioPinMap  ;
	uint8 u8LedModeConc;
}tstrPinMappingCfg;

extern tstrPinMappingCfg LED_astrLedPinMapping[LED_MAX_NUM];


#endif
