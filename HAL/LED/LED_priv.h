/************************************************************************************************/
/**    File Name: LED_priv.h                                                    				*/
/**                                                                             				*/
/**  Description: Implementation of the LED contain Some definitions musn't be edited by user   */
/**---------------------------------------------------------------------------------------------*/
/**  CODING LANGUAGE :  C                                                       				*/
/**  TARGET          :  Atmega 32                                               				*/
/**---------------------------------------------------------------------------------------------*/
/**               C O P Y R I G H T                                             				*/
/**---------------------------------------------------------------------------------------------*/
/** Copyright (c) 2022 by ITI .       All rights reserved.                      				*/
/**                                                                             				*/
/** This software is copyright protected and proprietary to ITI.                                */                                    				*/
/**---------------------------------------------------------------------------------------------*/
/**               A U T H O R   I D E N T I T Y                                 				*/
/**---------------------------------------------------------------------------------------------*/
/** ShortName    Name                      Company                              				*/
/** --------     ---------------------     -----------------------------------------------------*/
/** mahmed       Moaz Ahmed Mohamed        ITI.                                 				*/
/**---------------------------------------------------------------------------------------------*/
/**               R E V I S I O N   H I S T O R Y                               				*/
/**---------------------------------------------------------------------------------------------*/
/** Date        Version   Author       Description                              				*/
/** ----------  --------  ------      ----------------------------------------------------------*/
/** 21/08/2022   0.1      mahmed       Initial Creation                          				*/
/************************************************************************************************/

#ifndef  LED_PRIV_H
#define  LED_PRIV_H


#define LED_u8NORMAL  ((uint8) 0xAA)
#define LED_u8REVERSE ((uint8) 0x55)


typedef struct
{
	uint8 u8DioPinMap  ;
	uint8 u8LedModeConc;
}tstrPinMappingCfg;

extern tstrPinMappingCfg LED_astrLedPinMapping[LED_MAX_NUM];


#endif