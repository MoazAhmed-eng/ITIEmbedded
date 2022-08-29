

#ifndef KEYPAD_H
#define KEYPAD_H


#define "Keypad_cfg.h"


typedef struct
{
	uint16 u16PressedKey[];
}tstrPressedKey;

void KEYPAD_voidInit(void);

tenuErrorStatus KEYPAD_enuGetPressedKey(uint8 u8KeyPadNumCpy , uint16 * pu16PressedKeyCpy);


#endif