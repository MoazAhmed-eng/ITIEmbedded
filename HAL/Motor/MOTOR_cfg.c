/********************************************************************************/
/**    File Name: Motor_cfg.c                                                   */
/**                                                                             */
/**  Description: Implementation of the MOTOR contain user-configurations  	    */
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


#include "Std_types.h"
#include "DIO.h"

#include "MOTOR.h"
#include "MOTOR_priv.h"




tstrMotorCfg MOTOR_astrCfg [MOTOR_MAX_NUM] = 
{
	{
		/* VCC Pin*/	/* GND Pin*/	/*Initial Mode*/
		DIO_u8_PIN_0 , DIO_u8_PIN_1, MOTOR_NORMAL_MODE , 0xFF
	}
	,
	{
		/* VCC Pin*/	/* GND Pin*/	/*Initial Mode*/
		DIO_u8_PIN_2 , DIO_u8_PIN_3, MOTOR_REVERSE_MODE , 0xFF
	}
	,
	{
		/* VCC Pin*/	/* GND Pin*/	/*Initial Mode*/
		DIO_u8_PIN_4 , DIO_u8_PIN_5, MOTOR_STOP_MODE , 0xFF
	}
	
};










