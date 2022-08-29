



/* Description: Activating or Deactivating Specific Buzzer by pointing to its number*/
tenuErrorStatus BUZZ_ModeSelect(uint8 u8BuzzNumCpy, uint8 u8BuzzMode)
{
	tenuErrorStatus enuErrorStateLoc = E_OK ;
	if(u8BuzzNumCpy < BUZZER_MAX_NUM)
	{
		if(u8BuzzMode == BUZZ_ACTIVATE)
		{
			switch(Buzz_astrcfg[u8BuzzNumCpy].OperationMode)
			{
				case TWO_MODE_PINS_CONNECTED: 
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].PositivePin,DIO_u8HIGH);
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].NegativePin,DIO_u8LOW);
				break;
				case GND_MODE_PIN_CONNECTED:
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].PositivePin,DIO_u8HIGH);
				break;
				case VCC_MODE_PIN_CONNECTED:
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].NegativePin,DIO_u8LOW);
				break;
				default:
					enuErrorStateLoc = E_NOK_CONFIG_PARM_ERROR;
				break;
			}
		}
		else if(u8BuzzMode == BUZZ_DEACTIVATE)
		{
			switch(Buzz_astrcfg[u8BuzzNumCpy].OperationMode)
			{
				case TWO_MODE_PINS_CONNECTED: 
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].PositivePin,DIO_u8LOW);
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].NegativePin,DIO_u8LOW);
				break;
				case GND_MODE_PIN_CONNECTED:
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].PositivePin,DIO_u8LOW);
				break;
				case VCC_MODE_PIN_CONNECTED:
					DIO_enuWritePin(Buzz_astrcfg[u8BuzzNumCpy].NegativePin,DIO_u8HIGH);
				break;
				default:
					enuErrorStateLoc = E_NOK_CONFIG_PARM_ERROR;
				break;
			}
		}
		else
		{
			enuErrorStateLoc = E_NOK_CONFIG_PARM_ERROR;
		}
	}
	else
	{
		enuErrorStateLoc = E_NOK_PARAM_OUT_OF_RANGE;
	}
	
	
	return enuErrorStateLoc;
}