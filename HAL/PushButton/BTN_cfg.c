

#include "Std_types.h"
#include "bitManipulation.h"
#include "DIO.h"
#include "BTN.h"
#include "BTN_cfg.h"
#include "BTN_priv.h"



tstrBtnCfg BTN_tstr [BTN_MAX_NUM] = 
{
	{
		PULL_UP , 	DIO_u8_PIN_26
	}
	,
	{
		PULL_UP , 	DIO_u8_PIN_1
	}
	,
	{
		PULL_DOWN , DIO_u8_PIN_2
	}
};
