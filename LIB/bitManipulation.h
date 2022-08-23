/**********************************************/
/* Description :  bit manipulation STD lib    */
/* Author      :  Moaz Ahmed Mohamed          */
/* Date        :  17/8/2022    v0.1           */
/* Version     :  0.1V    Initial Creation    */
/**********************************************/
#ifndef BIT_MANIPULATION_H
#define BIT_MANIPULATION_H

#define SET_BIT(Reg , BitNum) (Reg) |=  (1 << (BitNum))
#define CLR_BIT(Reg , BitNum) (Reg) &= ~(1 << (BitNum))
#define TGL_BIT(Reg , BitNum) (Reg) ^=  (1 << (BitNum))
#define GET_BIT(Reg , BitNum) (((Reg) >> (BitNum)) & (0x01))


#endif