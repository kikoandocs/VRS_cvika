/*
 * 7segment.c
 *
 *  Created on: 13. 12. 2021
 *      Author: kikoa
 */

#include "7segment.h"

void resetSegment(void){
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}

void resetDigts(void){
	 LL_GPIO_ResetOutputPin(GPIOA, digt1_Pin|digt2_Pin|digt3_Pin|digt4_Pin|digt5_Pin);
}
void setDigt1(void){
	LL_GPIO_SetOutputPin(GPIOA, digt1_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, digt2_Pin|digt3_Pin|digt4_Pin|digt5_Pin);
}
void setDigt2(void){
	LL_GPIO_SetOutputPin(GPIOA, digt2_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, digt1_Pin|digt3_Pin|digt4_Pin|digt5_Pin);
}
void setDigt3(void){
	LL_GPIO_SetOutputPin(GPIOA, digt3_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, digt1_Pin|digt2_Pin|digt4_Pin|digt5_Pin);
}
void setDigt4(void){
	LL_GPIO_SetOutputPin(GPIOA, digt4_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, digt1_Pin|digt2_Pin|digt3_Pin|digt5_Pin);
}
void setDigt5(void){
	LL_GPIO_SetOutputPin(GPIOA, digt5_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, digt1_Pin|digt2_Pin|digt3_Pin|digt4_Pin);
}
void set_(void){
	// _ = 0001000
		LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setA(void){
	// A = 1110111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setB(void){
	// b = 0011111
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setC(void){
	// C = 1001110
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setD(void){
	// D = 0111101
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setE(void){
	// E = 1001111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setF(void){
	// F = 1000111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setG(void){
	// G = 1011110
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setH(void){
	// H = 0110111
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setI(void){
	// I = 0000110
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setJ(void){
	// J = 0111100
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setK(void){
	// K = 1010111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setL(void){
	// L = 0001110
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setM(void){
	// M = 1010101
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setN(void){
	// N = 0010101
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setO(void){
	// O = 1111110
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setP(void){
	// P = 1100111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setQ(void){
	// Q = 1110011
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setR(void){
	// R= 0000101
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setS(void){
	// S = 1011011
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setT(void){
	// T = 0001111
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setU(void){
	// U = 0111110
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setV(void){
	// V = 0011100
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setW(void){
	// W = 1011100
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void setX(void){
	// X = 0010011
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setY(void){
	// Y = 0111011
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void setZ(void){
	// Z = 1101101
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set0(void){
	// 0 = 1111110
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void set1(void){
	// 1 = 0110000
		LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void set2(void){
	// 2 = 1101101
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set3(void){
	// 3 = 1111001
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set4(void){
	// 4 = 0110011
		LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set5(void){
	// 5 = 1011011
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set6(void){
	// 6 = 1011111
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set7(void){
	// 7 = 1110000
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
}
void set8(void){
	// 8 = 1111111
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
void set9(void){
	// 9 = 1111011
		LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
		LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
		LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
		LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
}
