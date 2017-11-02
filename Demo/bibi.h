#ifndef __BIBI_H
#define __BIBI_H

#include "stm8s.h"

void delay_t(uint16_t x);

void bi(uint8_t n);
void bibi(uint8_t tone,uint8_t time);


void bibi_start(void);
void bibi_cali_1(void);
void bibi_cali_2(void);
#endif