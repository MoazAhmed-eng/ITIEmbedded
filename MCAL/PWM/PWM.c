#include "Std_types.h"
#include "bitManipulation.h"


#include "DIO.h"


#include "TIM0.h"

#include "PWM.h"
#include "PWM_cfg.h"
#include "PWM_priv.h"


uint8 u8PwmNumGlob ; 
void PWM_voidPwmOv(void)
{
	u32PwmCounter++;
	if(u32PwmCounter == u32TimeHighCount)
	{
		DIO_enuWritePin(DIO_u8_PIN_0 , DIO_u8LOW);
	}
	if(u32PwmCounter == u32TotalCounts)
	{
		u32PwmCounter = 0;
		DIO_enuWritePin(DIO_u8_PIN_0 , DIO_u8HIGH);
	}
}

void PWM_voidInit(void)
{
	switch(PWM_u8NUM)
	{
		case PWM_TIMER_0: 

			TIM0_voidInit();
			

		break;
		
		case PWM_TIMER_1:

			TIM1_voidInit();

			
		break;
		
		case PWM_TIMER_2:

			TIM2_voidInit();

		break;
		
	}

}
void PWM_voidPwmEnable(void)
{

	switch(PWM_u8NUM)
	{
		case PWM_TIMER_0: 
			switch(PWM_u8MODE)
			{
				case PWM_CTC_MODE : 
					TIM0_voidEnableOVFIntterrupt();
				break;
				
				case PWM_OV_MODE :
					TIM0_voidEnableCTCIntterrupt();
				break;
			}
		break;
	
		case PWM_TIMER_1:

			switch(PWM_u8MODE)
			{
				case PWM_CTC_MODE : 
					TIM1_voidEnableOVFIntterrupt();
				break;
				
				case PWM_OV_MODE :
					TIM1_voidEnableCTCIntterrupt();
				break;
			}
		break;
	
		case PWM_TIMER_2:
			switch(PWM_u8MODE)
			{
				case PWM_CTC_MODE : 
					TIM2_voidEnableOVFIntterrupt();
				break;
				
				case PWM_OV_MODE :
					TIM2_voidEnableCTCIntterrupt();
				break;
			}
		break;
	}
}
void PWM_voidPwmDisable(uint8 u8PwmNumCpy)
{
	switch(PWM_u8NUM)
	{
		case PWM_TIMER_0: 
			switch(PWM_u8MODE)
			{
				case PWM_CTC_MODE : 
					TIM0_voidDisableOVFIntterrupt();
				break;
				
				case PWM_OV_MODE :
					TIM0_voidDisableCTCIntterrupt();
				break;
			}
		break;
	
		case PWM_TIMER_1:

			switch(PWM_u8MODE)
			{
				case PWM_CTC_MODE : 
					TIM1_voidDisableOVFIntterrupt();
				break;
				
				case PWM_OV_MODE :
					TIM1_voidDisableCTCIntterrupt();
				break;
			}
		break;
	
		case PWM_TIMER_2:
			switch(PWM_u8MODE)
			{
				case PWM_CTC_MODE : 
					TIM2_voidDisableOVFIntterrupt();
				break;
				
				case PWM_OV_MODE :
					TIM2_voidDisableCTCIntterrupt();
				break;
			}
		break;
	}
		
	}
}
void PWM_voidSetFrequencyDuty(uint8 u8PwmNumCpy, uint8 u8FrequencyCpy, uint8 u8DutyCpy)
{
	uint32  u32PwmCounter;
	uint32  u32TimeHighCount;
	uint32  u32TotalCounts; 
	uint32  u32TimerTickLoc ; 
	uint32  u32PeriodicTimeLoc = (1 / u8FrequencyCpy)*1000000;
	uint32  u32TimeLowCount ;
	uint32  u32TimerOverFlow ; 
	switch(PWM_astrCfg[u8CntrLoc].u8TimerNumber)
	{
		case PWM_TIMER_0 :
			u32TimerTickLoc = TIM0_TICK_TIME;
			u32TimerOverFlow = pow(2,TIM0_RESOLUTION) * u32TimerTickLoc;
			u32TotalCounts = u32PeriodicTimeLoc / u32TimerOverFlow;
			u32TimeHighCount = f32DutyCpy * u32TotalCounts;
			u32TimeLowCount =  u32TotalCounts - u32TimeHighCount;
			switch(PWM_astrCfg[u8PwmNumCpy].u8OperationMode)
			{
				case PWM_CTC_MODE:
					if(u32PeriodicTimeLoc < u32TimerOverFlow)
					{
						
					}
					else if (u32PeriodicTimeLoc > u32TimerOverFlow)
					{
						
					}
					else
					{
						
					}		
				break;
				
				case PWM_OV_MODE:
					PWM_voidPwmEnable(u8PwmNumCpy);
					TIM0_voidSetOvfCallback(PWM_voidPwmOv(u32TimeHighCount,u32TotalCounts,PWM_astrCfg[u8CntrLoc].u8OutputPin));
					
				break;
			}
		break;
	}
}