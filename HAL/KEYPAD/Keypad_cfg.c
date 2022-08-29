


tstrKeypadCfg KEYPAD_astrPinCfg [KEYPAD_MAX_NUM] = 
{
	{
		/* Input Pins*/
		{
		DIO_u8_PIN_7, DIO_u8_PIN_8 ,
		DIO_u8_PIN_9, DIO_u8_PIN_10
		}
		,
		/* Output Pins*/
		{
		DIO_u8_PIN_0, DIO_u8_PIN_12 ,
		DIO_u8_PIN_1, DIO_u8_PIN_14 
		}
		,
		KEYPAD0_u8INPUT_PINS_NUM
		,
		KEYPAD0_u8OUTPUT_PINS_NUM
		,
		
		
	},
	{
		/* Input Pins*/
		{
		DIO_u8_PIN_17, DIO_u8_PIN_18 ,
		DIO_u8_PIN_19, DIO_u8_PIN_19
		}
		,
		/* Output Pins*/
		{
		DIO_u8_PIN_21, DIO_u8_PIN_22 ,
		DIO_u8_PIN_23, DIO_u8_PIN_24 ,
		DIO_u8_PIN_25, DIO_u8_PIN_26
		},
		KEYPAD1_u8INPUT_PINS_NUM
		,
		KEYPAD1_u8OUTPUT_PINS_NUM
		,
		
		
	}
};