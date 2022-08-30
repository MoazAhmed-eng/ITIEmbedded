/********************************************************************************/
/**    File Name: Motor.c                                                       */
/**                                                                             */
/**  Description: Implementation of the MOTOR contain implem. functions  	    */
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
#include "MOTOR_cfg.h"
#include "MOTOR_priv.h"

void MOTOR_u8voidCheck(void)
{
	uint8 u8CntrLoc ; 
	uint8 u8ReadLoc ;
	for(u8CntrLoc = 0 u8CntrLoc < MOTOR_MAX_NUM ; u8CntrLoc++)
	{
		DIO_enuReadPinDir(MOTOR_astrCfg[u8CntrLoc].u8VccPinMapping,&u8ReadLoc);
		if(u8ReadLoc == DIO_u8OUTPUT)
		{
			MOTOR_astrCfg[u8CntrLoc].u8InitializationState = INIT_PASSED;
		}
		else
		{
			MOTOR_astrCfg[u8CntrLoc].u8InitializationState = INIT_FAILED;

		}
		switch(MOTOR_astrCfg[u8CntrLoc].u8InitializationState)
		{
			case INIT_PASSED: 
				DIO_enuReadPinDir(MOTOR_astrCfg[u8CntrLoc].u8GndPinMapping,&u8ReadLoc);
				if(u8ReadLoc == DIO_u8OUTPUT)
				{
					MOTOR_astrCfg[u8CntrLoc].u8InitializationState = INIT_PASSED;
				}
				else
				{
					MOTOR_astrCfg[u8CntrLoc].u8InitializationState = INIT_FAILED;
		
				}
			break;
			case INIT_FAILED:
			break;
			default:
			break;
		}
		
	}
}

void MOTOR_voidInit(void)
{
	MOTOR_u8voidCheck();
	uint8 u8CntrLoc ; 
	for(u8CntrLoc = 0 u8CntrLoc < MOTOR_MAX_NUM ; u8CntrLoc++)
	{
		if(MOTOR_astrCfg[u8CntrLoc].u8InitializationState == INIT_PASSED)
		{
			switch(MOTOR_astrCfg[u8CntrLoc].u8InitialMode)
			{
				case MOTOR_NORMAL_MODE:
					DIO_enuWritePin(MOTOR_astrCfg[u8CntrLoc].u8VccPinMapping,DIO_u8HIGH);
					DIO_enuWritePin(MOTOR_astrCfg[u8CntrLoc].u8GndPinMapping,DIO_u8LOW);
				break;
				case MOTOR_REVERSE_MODE:
					DIO_enuWritePin(MOTOR_astrCfg[u8CntrLoc].u8VccPinMapping,DIO_u8LOW);
					DIO_enuWritePin(MOTOR_astrCfg[u8CntrLoc].u8GndPinMapping,DIO_u8HIGH);
				break;
				case MOTOR_STOP_MODE:
					DIO_enuWritePin(MOTOR_astrCfg[u8CntrLoc].u8VccPinMapping,DIO_u8LOW);
					DIO_enuWritePin(MOTOR_astrCfg[u8CntrLoc].u8GndPinMapping,DIO_u8LOW);
				break;
			}
		}
		else
		{
			
		}
	}
	
	
}

tenuErrorStatus MOTOR_enuSetMode(uint8 u8MotorNumCpy, uint8 u8ModeCpy)
{
	tenuErrorStatus enuErrorStateLoc = E_OK ;
	
	if(u8MotorNumCpy < MOTOR_MAX_NUM)
	{
		if(MOTOR_astrCfg[u8CntrLoc].u8InitializationState == INIT_PASSED)
		{
			switch(u8ModeCpy)
			{
				case MOTOR_NORMAL_MODE:
					DIO_enuWritePin(MOTOR_astrCfg[u8MotorNumCpy].u8VccPinMapping,DIO_u8HIGH);
					DIO_enuWritePin(MOTOR_astrCfg[u8MotorNumCpy].u8GndPinMapping,DIO_u8LOW);
				break;
				case MOTOR_REVERSE_MODE:
					DIO_enuWritePin(MOTOR_astrCfg[u8MotorNumCpy].u8VccPinMapping,DIO_u8LOW);
					DIO_enuWritePin(MOTOR_astrCfg[u8MotorNumCpy].u8GndPinMapping,DIO_u8HIGH);
				break;
				case MOTOR_STOP_MODE:
					DIO_enuWritePin(MOTOR_astrCfg[u8MotorNumCpy].u8VccPinMapping,DIO_u8LOW);
					DIO_enuWritePin(MOTOR_astrCfg[u8MotorNumCpy].u8GndPinMapping,DIO_u8LOW);
				break;
				default:
				enuErrorStateLoc = E_NOK_CONFIG_PARM_ERROR;
				break;
			}
		}
		else if(MOTOR_astrCfg[u8CntrLoc].u8InitializationState == INIT_FAILED)
		{
			enuErrorStateLoc = E_NOK;
		}
		else
		{
			enuErrorStateLoc = E_NOK_CONFIG_PARM_ERROR;
		}
	}
	else
	{
		enuErrorStateLoc = E_NOK_PARAM_OUT_OF_RANGE;
	}

	
	return enuErrorStateLoc;
}