



tstrBuzzCfg Buzz_astrcfg[BUZZER_MAX_NUM] = 
{
		/* !Comment: Mode Options --> TWO_MODE_PINS_CONNECTED OR
									  GND_MODE_PIN_CONNECTED  OR
									  VCC_CONNECTED
		*/
		/* Buzzer Number 0*/
	{
		/* Positive Pin Mapping*/
		DIO_u8_PIN_0, 
		/* Negative Pin Mapping*/
		DIO_u8_PIN_1 ,
		/* Mode Selection */
		TWO_MODE_PINS_CONNECTED
	}
	,
		/* Buzzer Number 1*/
	{
		/* Positive Pin Mapping*/
		DIO_u8_PIN_2,
		/* Negative Pin Mapping*/
		GND_CONNECTED, 
		/* Mode Selection */
		GND_MODE_PIN_CONNECTED
	}
	,
		/* Buzzer Number 2*/
	{
		/* Positive Pin Mapping*/
		VCC_CONNECTED,
		/* Negative Pin Mapping*/
		DIO_u8_PIN_3, 
		/* Mode Selection */
		VCC_MODE_PIN_CONNECTED
	}
};