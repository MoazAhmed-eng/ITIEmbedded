
#ifndef BUZZER_PRIV_H
#define BUZZER_PRIV_H



#define TWO_MODE_PINS_CONNECTED		((uint8)	0x00)
#define GND_MODE_PIN_CONNECTED       ((uint8)	0x01)
#define VCC_MODE_PIN_CONNECTED       ((uint8)	0x02)

typedef struct 
{
	uint8 PositivePin	;
	uint8 NegativePin	;
	uint8 OperationMode	;
}tstrBuzzCfg;

extern tstrBuzzCfg Buzz_astrcfg[BUZZER_MAX_NUM];


#endif