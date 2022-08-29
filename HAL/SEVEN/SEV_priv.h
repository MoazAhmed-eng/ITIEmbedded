/********************************************************************************/
/**    File Name: LED.h                                                         */
/**                                                                             */
/**  Description: Implementation of the LED contain interfaces for the module   */
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
/** 22/08/2022   0.1      mahmed       Initial Creation                         */
/********************************************************************************/


#define SEV_PRIV_H
#ifndef SEV_PRIV_H

#define SEV_u8Led_NUM			((uint8) 7)
#define SEV_u8COMMON_ANODE		((uint8) 0)
#define SEV_u8COMMON_CATHODE	((uint8) 1)	
#define SEV_u8WRITE_MAX_NUM		((uint8) 10)

typedef struct
{
	uint8 u8SevPins[SEV_u8Led_NUM]; // a b c d e f g 
	uint8 u8SevCommonPin ; // the common pin in the 7 segments display
	uint8 u8SevCon ;  // commoncathode or common anode
}tstrSevPinMappingCfg;

extern tstrSevPinMappingCfg SEV_astrPinMapping [SEV_MAX_NUM];

typedef struct
{
	uint8 u8Sev_pin_A : 1;
	uint8 u8Sev_pin_B : 1;
	uint8 u8Sev_pin_C : 1;
	uint8 u8Sev_pin_D : 1;
	uint8 u8Sev_pin_E : 1;
	uint8 u8Sev_pin_F : 1;
	uint8 u8Sev_pin_G : 1;
}tstrbfSevPinValueParam;



#endif