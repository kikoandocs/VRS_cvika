/*
 * 7segment.h
 *
 *  Created on: 13. 12. 2021
 *      Author: kikoa
 */
#include "main.h"

#ifndef INC_7SEGMENT_H_
#define INC_7SEGMENT_H_



#endif /* INC_7SEGMENT_H_ */

void resetSegment(void);
void resetDigts(void);
void setDigt1(void);
void setDigt2(void);
void setDigt3(void);
void setDigt4(void);
void setDigt5(void);

void set_(void);
void setA(void);
void setB(void);
void setC(void);
void setD(void);
void setE(void);
void setF(void);
void setG(void);
void setH(void);
void setI(void);
void setJ(void);
void setK(void);
void setL(void);
void setM(void);
void setN(void);
void setO(void);
void setP(void);
void setQ(void);
void setR(void);
void setS(void);
void setT(void);
void setU(void);
void setV(void);
void setW(void);
void setX(void);
void setY(void);
void setZ(void);

void set0(void);
void set1(void);
void set2(void);
void set3(void);
void set4(void);
void set5(void);
void set6(void);
void set7(void);
void set8(void);
void set9(void);

void num2seg(uint8_t number);
void writeToDisplay(uint8_t activeParam, uint8_t activeChar, float value);
void writeTemp(uint8_t activeChar, float value);
void writeHum(uint8_t activeChar, float value);
void writeBar(uint8_t activeChar, float value);
void writeAlt(uint8_t activeChar, float value);
