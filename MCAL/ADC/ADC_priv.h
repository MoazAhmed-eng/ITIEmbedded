#ifndef ADC_PRIV_H
#define ADC_PRIV_H

#define AVCC   0
#define AREF   1 
#define V2_56  2



#define ADC_LEFT    0
#define ADC_RIGHT   1

/* Need to add all param for ADC_CHANNEL_NUMs */
#define ADC_CHANNEL_NUM_0         		0
#define ADC_CHANNEL_NUM_1         		1
#define ADC_CHANNEL_NUM_2         		2
#define ADC_CHANNEL_NUM_3         		3
#define ADC_CHANNEL_NUM_4         		4
#define ADC_CHANNEL_NUM_5         		5
#define ADC_CHANNEL_NUM_6         		6
#define ADC_CHANNEL_NUM_7         		7
#define ADC_CHANNEL_DIF_0_0_10X   		8
#define ADC_CHANNEL_DIF_1_0_10X			9
#define ADC_CHANNEL_DIF_0_0_200X		10
#define ADC_CHANNEL_DIF_1_0_200X		11
#define ADC_CHANNEL_DIF_2_2_10X			12
#define ADC_CHANNEL_DIF_3_2_10X			13
#define ADC_CHANNEL_DIF_2_2_200X		14
#define ADC_CHANNEL_DIF_3_2_200X		15
#define ADC_CHANNEL_DIF_0_1_1X			16
#define ADC_CHANNEL_DIF_1_1_1X			17
#define ADC_CHANNEL_DIF_2_1_1X			18
#define ADC_CHANNEL_DIF_3_1_1X			19
#define ADC_CHANNEL_DIF_4_1_1X			20
#define ADC_CHANNEL_DIF_5_1_1X			21
#define ADC_CHANNEL_DIF_6_1_1X			22
#define ADC_CHANNEL_DIF_7_1_1X			23
#define ADC_CHANNEL_DIF_0_2_1X			24
#define ADC_CHANNEL_DIF_1_2_1X			25
#define ADC_CHANNEL_DIF_2_2_1X			26
#define ADC_CHANNEL_DIF_3_2_1X			27
#define ADC_CHANNEL_DIF_4_2_1X			28
#define ADC_CHANNEL_DIF_5_2_1X			29





#define AUTO_TRIGGIR_DISABLE    0
#define AUTO_TRIGGIR_ENABLE     1

#define FREE_RUNNING_MODE          0x00
#define ANALOG_COMP_SOURCE         0x20
#define EXTINT0_REQUEST_SOURCE     0x40 
#define TIM0_COMPARE_MATCH_SOURCE  0x60 
#define TIM0_OVERFLOW_SOURCE       0x80 
#define TIMB_COMPARE_MATCH_SOURCE  0xA0 
#define TIM1_OVERFLOW_SOURCE       0xC0 
#define TIM1_ICU_SOURCE            0xE0 

#define DIVISION_ON_2           1
#define DIVISION_ON_4           2
#define DIVISION_ON_8           3
#define DIVISION_ON_16          4
#define DIVISION_ON_32          5
#define DIVISION_ON_64          6
#define DIVISION_ON_128         7

#define SFIOR  *((volatile uint8*) 0x50)
#define ADMUX  *((volatile uint8*) 0x27)
#define ADCSRA *((volatile uint8*) 0x26)
#define ADCH   *((volatile uint8*) 0x25)
#define ADCL   *((volatile uint8*) 0x24)

#endif

