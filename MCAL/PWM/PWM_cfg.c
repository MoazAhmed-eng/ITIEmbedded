

#ifndef PWM_CFG_H
#define PWM_CFG_H

#include "Std_types.h"
#include "bitManipulation.h"


#include "DIO.h"



#include "PWM_cfg.h"
#include "PWM_priv.h"

tstrPwmCfg PWM_astrCfg [PWM_MAX_NUM] = 
{
	{
		PWM_TIMER_0
		,
		DIO_u8_PIN_1
		,
		PWM_CTC_MODE
		,
		0xFF
	}
};



#endif