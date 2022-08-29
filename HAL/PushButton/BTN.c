
uint8 u8BtnEnableBypass 	;
uint8 BTN_u8ReadPinBypass   ;

void BTN_voidInit(void)
{
	uint8 u8CntrLoc ; 
	for(u8CntrLoc = 0 ; u8CntrLoc < BTN_MAX_NUM ; u8CntrLoc++)
	{
		DIO_enuPullWrite(BTN_tstr[u8CntrLoc].PinMap,BTN_tstr[u8CntrLoc].Mode);
		DIO_enuWritePinDir(BTN_tstr[u8CntrLoc].PinMap,DIO_INPUT);
	}
}

tenuErrorStatus  BTN_IsPressed(uint8 u8BtnNumCpy , uint8 * u8pBtnPressedCpy)
{
	tenuErrorStatus enuReturnStautsLoc = E_OK;
	uint8 u8BufferLoc ; 
	if(u8pBtnPressedCpy != NULL_PTR)
	{
		if(u8BtnNumCpy < BTN_MAX_NUM)
		{
			switch(BTN_tstr[u8BtnNumCpy].Mode)
			{
				case PULL_UP:
					DIO_enuReadPin(BTN_tstr[u8BtnNumCpy].PinMap,&u8BufferLoc);
					if(u8BufferLoc == 0)
					{
						*u8pBtnPressedCpy = 1;
					}
					else
					{
						*u8pBtnPressedCpy = 0;
					}
				break;
				
				case PULL_DOWN:
					#ifdef TEST_MODE_ON
					if(u8BtnEnableBypass == 1)
					{
						*u8pBtnPressedCpy = BTN_u8ReadPinBypass;
					}
					
					else
					{
					#endif
						DIO_enuReadPin(BTN_tstr[u8BtnNumCpy].PinMap,u8pBtnPressedCpy);
					#ifdef	TEST_MODE_ON
					}
					#endif
				break;
				
				default: 
				enuReturnStautsLoc = E_NOK_CONFIG_PARM_ERROR ;
				break;
				
				
			}
		}
		else
		{
			enuReturnStautsLoc = E_NOK_PARAM_OUT_OF_RANGE;
		}
	}
	else
	{
		enuReturnStautsLoc = E_NOK_PARAM_NULL_POINTER;
	}
	return enuReturnStautsLoc;
}