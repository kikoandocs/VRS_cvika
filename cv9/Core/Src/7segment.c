/*
 * 7segment.c
 *
 *  Created on: 13. 12. 2021
 *      Author: kikoa
 */

#include "7segment.h"
#include "math.h"

void resetSegment(void) {
	LL_GPIO_SetOutputPin(segA_GPIO_Port, segA_Pin);
	LL_GPIO_SetOutputPin(segB_GPIO_Port, segB_Pin);
	LL_GPIO_SetOutputPin(segC_GPIO_Port, segC_Pin);
	LL_GPIO_SetOutputPin(segD_GPIO_Port, segD_Pin);
	LL_GPIO_SetOutputPin(segE_GPIO_Port, segE_Pin);
	LL_GPIO_SetOutputPin(segF_GPIO_Port, segF_Pin);
	LL_GPIO_SetOutputPin(segG_GPIO_Port, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}

void resetDigts(void) {
	LL_GPIO_ResetOutputPin(digt1_GPIO_Port, digt1_Pin);
	LL_GPIO_ResetOutputPin(digt2_GPIO_Port, digt2_Pin);
	LL_GPIO_ResetOutputPin(digt3_GPIO_Port, digt3_Pin);
	LL_GPIO_ResetOutputPin(digt4_GPIO_Port, digt4_Pin);
	LL_GPIO_ResetOutputPin(digt5_GPIO_Port, digt5_Pin);
}
void setDigt1(void) {
	LL_GPIO_SetOutputPin(digt1_GPIO_Port, digt1_Pin);
	LL_GPIO_ResetOutputPin(digt2_GPIO_Port, digt2_Pin);
	LL_GPIO_ResetOutputPin(digt3_GPIO_Port, digt3_Pin);
	LL_GPIO_ResetOutputPin(digt4_GPIO_Port, digt4_Pin);
	LL_GPIO_ResetOutputPin(digt5_GPIO_Port, digt5_Pin);
}
void setDigt2(void) {
	LL_GPIO_SetOutputPin(digt2_GPIO_Port, digt2_Pin);
	LL_GPIO_ResetOutputPin(digt1_GPIO_Port, digt1_Pin);
	LL_GPIO_ResetOutputPin(digt3_GPIO_Port, digt3_Pin);
	LL_GPIO_ResetOutputPin(digt4_GPIO_Port, digt4_Pin);
	LL_GPIO_ResetOutputPin(digt5_GPIO_Port, digt5_Pin);
}
void setDigt3(void) {
	LL_GPIO_SetOutputPin(digt3_GPIO_Port, digt3_Pin);
	LL_GPIO_ResetOutputPin(digt1_GPIO_Port, digt1_Pin);
	LL_GPIO_ResetOutputPin(digt2_GPIO_Port, digt2_Pin);
	LL_GPIO_ResetOutputPin(digt4_GPIO_Port, digt4_Pin);
	LL_GPIO_ResetOutputPin(digt5_GPIO_Port, digt5_Pin);
}
void setDigt4(void) {
	LL_GPIO_SetOutputPin(digt4_GPIO_Port, digt4_Pin);
	LL_GPIO_ResetOutputPin(digt1_GPIO_Port, digt1_Pin);
	LL_GPIO_ResetOutputPin(digt2_GPIO_Port, digt2_Pin);
	LL_GPIO_ResetOutputPin(digt3_GPIO_Port, digt3_Pin);
	LL_GPIO_ResetOutputPin(digt4_GPIO_Port, digt4_Pin);
	LL_GPIO_ResetOutputPin(digt5_GPIO_Port, digt5_Pin);
}
void setDigt5(void) {
	LL_GPIO_SetOutputPin(digt5_GPIO_Port, digt5_Pin);
	LL_GPIO_ResetOutputPin(digt1_GPIO_Port, digt1_Pin);
	LL_GPIO_ResetOutputPin(digt2_GPIO_Port, digt2_Pin);
	LL_GPIO_ResetOutputPin(digt3_GPIO_Port, digt3_Pin);
	LL_GPIO_ResetOutputPin(digt4_GPIO_Port, digt4_Pin);
}
void set_(void) {
	// _ = 0001000
	LL_GPIO_SetOutputPin(segA_GPIO_Port, segA_Pin);
	LL_GPIO_SetOutputPin(segB_GPIO_Port, segB_Pin);
	LL_GPIO_SetOutputPin(segC_GPIO_Port, segC_Pin);
	LL_GPIO_ResetOutputPin(segD_GPIO_Port, segD_Pin);
	LL_GPIO_SetOutputPin(segE_GPIO_Port, segE_Pin);
	LL_GPIO_SetOutputPin(segF_GPIO_Port, segF_Pin);
	LL_GPIO_SetOutputPin(segG_GPIO_Port, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setA(void) {
	// A = 1110111
	LL_GPIO_ResetOutputPin(segA_GPIO_Port, segA_Pin);
	LL_GPIO_ResetOutputPin(segB_GPIO_Port, segB_Pin);
	LL_GPIO_ResetOutputPin(segC_GPIO_Port, segC_Pin);
	LL_GPIO_SetOutputPin(segD_GPIO_Port, segD_Pin);
	LL_GPIO_ResetOutputPin(segE_GPIO_Port, segE_Pin);
	LL_GPIO_ResetOutputPin(segF_GPIO_Port, segF_Pin);
	LL_GPIO_ResetOutputPin(segG_GPIO_Port, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setB(void) {
	// b = 0011111
	LL_GPIO_SetOutputPin(segA_GPIO_Port, segA_Pin);
	LL_GPIO_SetOutputPin(segB_GPIO_Port, segB_Pin);
	LL_GPIO_ResetOutputPin(segC_GPIO_Port, segC_Pin);
	LL_GPIO_ResetOutputPin(segD_GPIO_Port, segD_Pin);
	LL_GPIO_ResetOutputPin(segE_GPIO_Port, segE_Pin);
	LL_GPIO_ResetOutputPin(segF_GPIO_Port, segF_Pin);
	LL_GPIO_ResetOutputPin(segG_GPIO_Port, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setC(void) {
	// C = 1001110
	LL_GPIO_ResetOutputPin(segA_GPIO_Port, segA_Pin);
	LL_GPIO_SetOutputPin(segB_GPIO_Port, segB_Pin);
	LL_GPIO_SetOutputPin(segC_GPIO_Port, segC_Pin);
	LL_GPIO_ResetOutputPin(segD_GPIO_Port, segD_Pin);
	LL_GPIO_ResetOutputPin(segE_GPIO_Port, segE_Pin);
	LL_GPIO_ResetOutputPin(segF_GPIO_Port, segF_Pin);
	LL_GPIO_SetOutputPin(segG_GPIO_Port, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setD(void) {
	// D = 0111101
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setE(void) {
	// E = 1001111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setF(void) {
	// F = 1000111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setG(void) {
	// G = 1011110
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setH(void) {
	// H = 0110111
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setI(void) {
	// I = 0000110
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setJ(void) {
	// J = 0111100
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setK(void) {
	// K = 1010111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setL(void) {
	// L = 0001110
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setM(void) {
	// M = 1010101
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setN(void) {
	// N = 0010101
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setO(void) {
	// O = 1111110
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setP(void) {
	// P = 1100111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setQ(void) {
	// Q = 1110011
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setR(void) {
	// R= 0000101
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setS(void) {
	// S = 1011011
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setT(void) {
	// T = 0001111
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setU(void) {
	// U = 0111110
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setV(void) {
	// V = 0011100
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setW(void) {
	// W = 1011100
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setX(void) {
	// X = 0010011
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setY(void) {
	// Y = 0111011
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setZ(void) {
	// Z = 1101101
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set0(void) {
	// 0 = 1111110
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set1(void) {
	// 1 = 0110000
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set2(void) {
	// 2 = 1101101
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set3(void) {
	// 3 = 1111001
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set4(void) {
	// 4 = 0110011
	LL_GPIO_SetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set5(void) {
	// 5 = 1011011
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set6(void) {
	// 6 = 1011111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set7(void) {
	// 7 = 1110000
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_SetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set8(void) {
	// 8 = 1111111
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void set9(void) {
	// 9 = 1111011
	LL_GPIO_ResetOutputPin(GPIOA, segA_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segB_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segC_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segD_Pin);
	LL_GPIO_SetOutputPin(GPIOA, segE_Pin);
	LL_GPIO_ResetOutputPin(GPIOA, segF_Pin);
	LL_GPIO_ResetOutputPin(GPIOB, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void setMinus(void) {
	LL_GPIO_SetOutputPin(segA_GPIO_Port, segA_Pin);
	LL_GPIO_SetOutputPin(segB_GPIO_Port, segB_Pin);
	LL_GPIO_SetOutputPin(segC_GPIO_Port, segC_Pin);
	LL_GPIO_SetOutputPin(segD_GPIO_Port, segD_Pin);
	LL_GPIO_SetOutputPin(segE_GPIO_Port, segE_Pin);
	LL_GPIO_SetOutputPin(segF_GPIO_Port, segF_Pin);
	LL_GPIO_ResetOutputPin(segG_GPIO_Port, segG_Pin);
	LL_GPIO_SetOutputPin(segDP_GPIO_Port, segDP_Pin);
}
void num2seg(int8_t number) {
	switch (number) {
	case 0:
		set0();
		break;
	case 1:
	case -1:
		set1();
		break;
	case 2:
	case -2:
		set2();
		break;
	case 3:
	case -3:
		set3();
		break;
	case 4:
	case -4:
		set4();
		break;
	case 5:
	case -5:
		set5();
		break;
	case 6:
	case -6:
		set6();
		break;
	case 7:
	case -7:
		set7();
		break;
	case 8:
	case -8:
		set8();
		break;
	case 9:
	case -9:
		set9();
		break;
	default:
		break;
	}
}
void writeToDisplay(uint8_t activeParam, uint8_t activeChar, float value) {
	switch (activeParam) {
	case 0:
		writeTemp(activeChar, value);
		break;
	case 1:
		writeHum(activeChar, value);
		break;
	case 2:
		writeBar(activeChar, value);
		break;
	case 3:
		writeAlt(activeChar, value);
		break;
	default:
		break;
	}
}
void writeTemp(uint8_t activeChar, float value) {
	//TEMP_xx.x
	if (value >= 100) {
		value = 99.9;
	} else if (value <= -100) {
		value = -99.9;
	}
	int16_t val = value * 10;
	int8_t digits[3];
	for (uint8_t i = 0; i < 3; i++) {
		digits[i] = val % 10;
		val /= 10;
	}
	switch (activeChar) {
	case 0:
		setT();
		break;
	case 1:
		setE();
		break;
	case 2:
		setM();
		break;
	case 3:
		setP();
		break;
	case 4:
		set_();
		break;
	case 5:
		if (value < 0) {
			setMinus();
		} else {
			num2seg(digits[2]);
		}
		break;
	case 6:
		if (value < 0) {
			num2seg(digits[2]);
		} else {
			num2seg(digits[1]);
			LL_GPIO_ResetOutputPin(segDP_GPIO_Port, segDP_Pin);
		}
		break;
	case 7:
		if (value < 0) {
			num2seg(digits[1]);
			LL_GPIO_ResetOutputPin(segDP_GPIO_Port, segDP_Pin);
		} else {
			num2seg(digits[0]);
		}
		break;
	case 8:
		num2seg(digits[0]);
		break;
	default:
		break;
	}
}
void writeHum(uint8_t activeChar, float value) {
	//HUM_xx
	if (value >= 100) {
		value = 99.9;
	} else if (value <= 0) {
		value = 0;
	}
	uint8_t val = value;
	int8_t digits[2];
	for (uint8_t i = 0; i < 2; i++) {
		digits[i] = val % 10;
		val /= 10;
	}
	switch (activeChar) {
	case 0:
		setH();
		break;
	case 1:
		setU();
		break;
	case 2:
		setM();
		break;
	case 3:
		set_();
		break;
	case 4:
		num2seg(digits[1]);
		break;
	case 5:
		num2seg(digits[0]);
		break;
	default:
		break;
	}
}
void writeBar(uint8_t activeChar, float value) {
	//BAR_xxxx.xx
	if (value >= 10000) {
		value = 9999.99;
	} else if (value <= 0) {
		value = 0;
	}
	uint32_t val = value * 100;
	int8_t digits[6];
	for (uint8_t i = 0; i < 6; i++) {
		digits[i] = val % 10;
		val /= 10;
	}
	switch (activeChar) {
	case 0:
		setB();
		break;
	case 1:
		setA();
		break;
	case 2:
		setR();
		break;
	case 3:
		set_();
		break;
	case 4:
		num2seg(digits[5]);
		break;
	case 5:
		num2seg(digits[4]);
		break;
	case 6:
		num2seg(digits[3]);
		break;
	case 7:
		num2seg(digits[2]);
		LL_GPIO_ResetOutputPin(segDP_GPIO_Port, segDP_Pin);
		break;
	case 8:
		num2seg(digits[1]);
		break;
	case 9:
		num2seg(digits[0]);
		break;
	default:
		break;
	}
}
void writeAlt(uint8_t activeChar, float value) {
	//ALT_xxxx.x
	if (value >= 10000) {
		value = 9999.9;
	} else if (value <= 0) {
		value = 0;
	}
	uint32_t val = value * 10;
	int8_t digits[5];
	for (uint8_t i = 0; i < 5; i++) {
		digits[i] = val % 10;
		val /= 10;
	}
	switch (activeChar) {
	case 0:
		setA();
		break;
	case 1:
		setL();
		break;
	case 2:
		setT();
		break;
	case 3:
		set_();
		break;
	case 4:
		num2seg(digits[4]);
		break;
	case 5:
		num2seg(digits[3]);
		break;
	case 6:
		num2seg(digits[2]);
		break;
	case 7:
		num2seg(digits[1]);
		LL_GPIO_ResetOutputPin(segDP_GPIO_Port, segDP_Pin);
		break;
	case 8:
		num2seg(digits[0]);
		break;
	default:
		break;
	}
}
