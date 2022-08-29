

#ifndef KEYPAD_PRIV_H
#define KEYPAD_PRIV_H

typedef struct
{
	uint8 au8InputPins[KEYPAD_u8INPUT_PINS_MAX_NUM];
	uint8 au8OutputPins[KEYPAD_u8OUTPUT_PINS_MAX_NUM];
	uint8 u8InputPinNum;
	uint8 u8OutputPinNum;
	uint8 u8BufferRead;
}tstrKeypadCfg;

extern tstrKeypadCfg KEYPAD_astrPinCfg [KEYPAD_MAX_NUM];

#endif