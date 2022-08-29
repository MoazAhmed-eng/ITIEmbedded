
#ifndef BTN_H
#define BTN_H

#define PULL_UP 	((uint8) 0x01)

#define PULL_DOWN	((uint8) 0x00)

void BTN_voidInit(void);

tenuErrorStatus  BTN_IsPressed(uint8 u8BtnNumCpy , uint8 * u8BtnPressed);

#endif
