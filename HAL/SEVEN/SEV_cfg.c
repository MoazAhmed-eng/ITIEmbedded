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

#include "Std_types.h"

#include "DIO.h"


#include "SEV_cfg.h"
#include "SEV_priv.h" 



tstrSevPinMappingCfg SEV_astrPinMapping [SEV_MAX_NUM] = 
{
	{{DIO_u8_PIN_0,DIO_u8_PIN_2,DIO_u8_PIN_5,DIO_u8_PIN_6,DIO_u8_PIN_7,DIO_u8_PIN_8,DIO_u8_PIN_9},
	
	DIO_u8_PIN_31,
	SEV_u8COMMON_CATHODE
	},
	{{DIO_u8_PIN_12,DIO_u8_PIN_13,DIO_u8_PIN_14,DIO_u8_PIN_15,DIO_u8_PIN_16,DIO_u8_PIN_17,DIO_u8_PIN_18},
	
	DIO_u8_PIN_30,
	SEV_u8COMMON_CATHODE
	}
	
};