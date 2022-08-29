/********************************************************************************/
/**    File Name: LCD.h                                                         */
/**                                                                             */
/**  Description: Implementation of the LED contain configuration for the module*/
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
/** aaboelno     Ahmed Abo Elnour          ITI.                                 */
/**-----------------------------------------------------------------------------*/
/**               R E V I S I O N   H I S T O R Y                               */
/**-----------------------------------------------------------------------------*/
/** Date        Version   Author       Description                              */
/** ----------  --------  ------      ------------------------------------------*/
/** 24/08/2022   0.1       aaboelno     Initial Creation                        */
/********************************************************************************/

#ifndef LCD_H
#define LCD_H

#include "LCD_cfg.h"

#define LCD_u8CLEAR      			((uint8 )0x01)
#define LCD_u8RETURN_HOME			((uint8) 0x02)
#define	LCD_u8SHIFT_CURSOR_LEFT		((uint8) 0x10)
#define LCD_u8SHIFT_CURSOR_RIGHT	((uint8) 0x14)
#define LCD_u8SHIFT_DISPLAY_LEFT	((uint8) 0x18)			
#define LCD_u8SHIFT_DISPLAY_RIGHT   ((uint8) 0x1C)



void LCD_voidInit(void) ;

tenuErrorStatus LCD_enuWriteCmd (uint8 u8LcdNumCpy , uint8 u8CmdCpy);

tenuErrorStatus LCD_enuWriteChar (uint8 u8LcdNumCpy , uint8 u8DataCpy);

tenuErrorStatus LCD_enuWriteData (uint8 u8LcdNumCpy , uint8 *  pu8DataCpy);

tenuErrorStatus LCD_enuCreateCustChar (uint8 u8LcdNumCpy , uint8 *pu8PatternCpy , uint8 u8Location) ;

tenuErrorStatus LCD_RowCol_Select(uint8 u8RowCpy, uint8 u8ColCpy);

#endif





