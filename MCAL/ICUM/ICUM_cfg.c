#include "Std_types.h"

#include "EXTINT0.h"
#include "EXTINT1.h"

#include "TIM0.h"
#include "TIM2.h"

#include "ICUM.h"
#include "ICUM_cfg.h"
#include "ICUM_priv.h"





tstrIcuCfg ICUM_apfConfigSet[2]=
{
	/* Varient 1*/
	{
		EXTINT0_voidSetCallBack , TIM0_voidSetOvfCallback,
		TIM0_u16GetCntrValue    , EXTINT0_voidSetSenseValue,
		256                     , 8000000
	
	
	},
	
	
	/* Varient 2*/
	{
		EXTINT1_voidSetCallBack , TIM2_voidSetOvfCallback   ,
		TIM2_u16GetCntrValue    , EXTINT1_voidSetSenseValue ,
		256                     , 1000000
	}	
};


