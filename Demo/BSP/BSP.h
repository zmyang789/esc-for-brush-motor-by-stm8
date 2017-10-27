#ifndef __BSP_H
#define __BSP_H

#include "stm8s.h"

/***     输入捕获状态     ****/
extern uint8_t CAPTURE_STA;
#define  STA_UP    1  //在高电平捕获下降沿
#define  STA_DOWN  0  //在低电平捕获上升沿

/*****   输入捕获值    ******/
extern uint16_t CAPTURE_VAULE_H;
extern uint16_t CAPTURE_VAULE_L;

/*******  输出需要的   *******/
extern uint16_t OUT_VAULE;
extern uint16_t OUT_COUNT;
extern uint16_t MIDDLE_VAULE;

/*****     方向的     *******/
extern uint8_t OUT_DIR;
#define  FOWD    1  //正方向
#define  ANTI    0  //反方向

void Init_pwm_in(void);
void Init_pwm_out(void);







#endif