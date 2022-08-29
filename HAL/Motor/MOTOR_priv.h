/********************************************************************************/
/**    File Name: Motor_priv.h                                                  */
/**                                                                             */
/**  Description: Contains some used datatypes, macros but for developer   	    */
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


#ifndef MOTOR_PRIV_H
#define MOTOR_PRIV_H

#define INIT_PASSED		((uint8)	0x01)		
#define INIT_FAILED     ((uint8)	0x00)


typedef struct 
{
	uint8 u8VccPinMapping;
	uint8 u8GndPinMapping;
	uint8 u8InitialMode;
	uint8 u8InitializationState;
}tstrMotorCfg;

extern tstrMotorCfg MOTOR_astrCfg [MOTOR_MAX_NUM];




#endif