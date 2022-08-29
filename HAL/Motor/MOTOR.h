/********************************************************************************/
/**    File Name: Motor.h                                                       */
/**                                                                             */
/**  Description: Implementation of the MOTOR contain Prototypes functions  	*/
/**-----------------------------------------------------------------------------*/
/**  CODING LANGUAGE :  C                                                       */
/**  TARGET          :  Atmega 32                                               */
/**-----------------------------------------------------------------------------*/
/**               C O P Y R I G H T                                             */
/**-----------------------------------------------------------------------------*/
/** Copyright (c) 2022 by ITI .       All rights reserved.                      */
/**                                                                             */
/** This software is copyright protected and proprietary                        */
/** to ITI.                                                                     */
/**-----------------------------------------------------------------------------*/
/**               A U T H O R   I D E N T I T Y                                 */
/**-----------------------------------------------------------------------------*/
/** ShortName    Name                      Company                              */
/** --------     ---------------------     -------------------------------------*/
/** mahmed       Moaz Ahmed Mohamed        ITI.                                 */
/**-----------------------------------------------------------------------------*/
/**               R E V I S I O N   H I S T O R Y                               */
/**-----------------------------------------------------------------------------*/
/** Date        Version   Author       Description                              */
/** ----------  --------  ------      ------------------------------------------*/
/** 29/08/2022   0.1      mahmed       Initial Creation                         */
/********************************************************************************/


#ifndef MOTOR_H
#define MOTOR_H

#include "MOTOR_cfg.h"

#define MOTOR_NORMAL_MODE		((uint8)	0x00)
#define MOTOR_REVERSE_MODE      ((uint8)	0x01)
#define MOTOR_STOP_MODE         ((uint8)	0x02)




uint8 MOTOR_u8InitCheck(void);

void MOTOR_voidInit(void);

tenuErrorStatus MOTOR_enuSetMode(uint8 u8MotorNumCpy, uint8 u8ModeCpy);



#endif