

#ifndef PWM_H
#define PWM_H


void PWM_voidInit(void);
void PWM_voidPwmEnable(void)
void PWM_voidPwmDisable(uint8 u8PwmNumCpy);
void PWM_voidSetFrequencyDuty(uint8 u8PwmNumCpy, uint8 u8FrequencyCpy, uint8 u8DutyCpy);

#endif