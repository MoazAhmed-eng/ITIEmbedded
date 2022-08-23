/********************************************************************************/
/**    File Name: LED_cfg.c                                                     */
/**                                                                             */
/**  Description: Implementation of the LED contain User-Input Configurations   */
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
/** 23/08/2022   0.1      mahmed       Initial Creation                        */
/********************************************************************************/



#include "Std_types.h"

#include "DIO.h"
#include "LED_cfg.h"
#include "LED_priv.h"



tstrPinMappingCfg LED_astrLedPinMapping[LED_MAX_NUM] = 
{
	{DIO_u8_PIN_18 , LED_u8NORMAL },
	{DIO_u8_PIN_23 , LED_u8NORMAL },
	{DIO_u8_PIN_27 , LED_u8NORMAL },
	{DIO_u8_PIN_22 , LED_u8REVERSE},
	{DIO_u8_PIN_22 , LED_u8NORMAL }
	
};