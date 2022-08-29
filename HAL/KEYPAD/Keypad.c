

static tenuErrorStatus KEYPAD_enuWriteSequence(uint8 u8KeyPadNumCpy , uint8 u8SequenceNumCpy);

void KEYPAD_voidInit(void)
{
	/* all keypad */
	/* output 1111*/
	/* pullup activate*/
	
	uint8 u8CntrLoc ; 
	uint8 u8CtnrInputLoc ; 
	uint8 u8CtnrOutputLoc ; 
	for(u8CntrLoc = 0; u8CntrLoc < KEYPAD_MAX_NUM ; u8CntrLoc++)
	{
		
		for(u8CtnrInputLoc = 0 ; u8CtnrInputLoc < KEYPAD_astrPinCfg[u8CntrLoc].u8InputPinNum ; u8CtnrInputLoc++ )
		{
			DIO_enuPullWrite(KEYPAD_astrPinCfg[u8CntrLoc].au8InputPins[u8CtnrInputLoc] , DIO_u8HIGH);
		}
		for(u8CtnrOutputLoc = 0 ; u8CtnrOutputLoc < KEYPAD_astrPinCfg[u8CntrLoc].u8OutputPinNum ; u8CtnrOutputLoc++)
		{
			DIO_enuWritePin(KEYPAD_astrPinCfg[u8CntrLoc].au8OutputPins[u8CtnrInputLoc] , DIO_u8HIGH);
		}
		
	}
	
	
}

tenuErrorStatus KEYPAD_enuGetPressedKey(uint8 u8KeyPadNumCpy , uint16 * pu16PressedKeyCpy)
{
	
	tenuErrorStatus enuReturnStateLoc = E_OK ;
	uint8 u8BufferLoc;
	uint8 u8CntrLoc ; 
	uint16 u16CntrSwitchLoc = 0;
	uint16 u16NumbSwitchLoc ;
	uint8 u8BufferSize ; 
	uint32 u32Buffer2Loc = 0;
	*pu16PressedKeyCpy = 0xFF;
	if(pu16PressedKeyCpy != NULL_PTR)
	{
		
		if(u8KeyPadNumCpy < KEYPAD_MAX_NUM)
		{
			for(u8CntrLoc = 0 ; u8CntrLoc < KEYPAD_astrPinCfg[u8KeyPadNumCpy].u8OutputPinNum; u8CntrLoc++)
			{
				KEYPAD_enuWriteSequence(u8KeyPadNumCpy,u8CntrLoc);
				KEYPAD_voidReadSequence(u8KeyPadNumCpy,KEYPAD_astrPinCfg[u8KeyPadNumCpy].u8aOutputPins);
				switch(u8CntrLoc)
				{
					
				}
			}
		}
		else
		{
			enuReturnStateLoc = E_NOK_PARAM_OUT_OF_RANGE ;
		}
		
	}
	else
	{
		enuReturnStateLoc = E_NOK_PARAM_NULL_POINTER ;
	}
	
	
	return enuReturnStateLoc;
}



static tenuErrorStatus KEYPAD_enuWriteSequence(uint8 u8KeyPadNumCpy , uint8 u8SequenceNumCpy)
{
	tenuErrorStatus enuReturnStateLoc = E_OK ;
	uint8 u8CntrLoc ; 
	//0111 SEQ0
	//1011 SEQ1
	//1101 SEQ2
	//1110 SEQ3
	if(u8SequenceNumCpy < KEYPAD_astrPinCfg[u8KeyPadNumCpy].u8OutputPinNum)
	{
		for(u8CntrLoc = 0; u8CntrLoc < KEYPAD_astrPinCfg[u8KeyPadNumCpy].u8OutputPinNum ; u8CntrLoc++)
		{
			if(u8CntrLoc == u8SequenceNumCpy)
			{
				DIO_enuPullWrite(KEYPAD_astrPinCfg[u8KeyPadNumCpy].au8OutputPins[u8CntrLoc],DIO_u8LOW);
			}
			
			else
			{
				DIO_enuPullWrite(KEYPAD_astrPinCfg[u8KeyPadNumCpy].au8OutputPins[u8CntrLoc],DIO_u8HIGH);
			}
		}
	}
	else
	{
		enuReturnStateLoc = E_NOK_PARAM_OUT_OF_RANGE;
	}
	
	
	return enuReturnStateLoc;
	
}

void KEYPAD_voidReadSequence(uint8 u8KeyPadNumCpy ,  uint8 * u8ReadBuffer)
{
	uint8 u8CntrLoc ; 
	uint8 u8BufferLoc = 0;
	*u8ReadBuffer = 0;
	for(u8CntrLoc = 0; u8CntrLoc < KEYPAD_astrPinCfg[u8KeyPadNumCpy].u8InputPinNum ; u8CntrLoc++)
	{
		DIO_enuReadPin(KEYPAD_astrPinCfg[u8KeyPadNumCpy].au8InputPins[u8CntrLoc],&u8BufferLoc);
		*u8ReadBuffer |= u8BufferLoc << u8Cntr;
	}
	
}















