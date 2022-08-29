

#ifndef BUZZER_H
#define BUZZER_H



#define GND_CONNECTED		((uint8)	0x00)	
#define VCC_CONNECTED       ((uint8)	0x01)

#define BUZZ_ACTIVATE		((uint8)	0x01)
#define BUZZ_DEACTIVATE	    ((uint8)	0x00)






/* Description: Activating or Deactivating Specific Buzzer by pointing to its number*/
tenuErrorStatus BUZZ_ModeSelect(uint8 u8BuzzNumCpy, uint8 u8BuzzMode);



#endif