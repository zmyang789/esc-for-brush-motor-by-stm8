#ifndef __BSP_H
#define __BSP_H

#include "stm8s.h"

/***     ���벶��״̬     ****/
extern uint8_t CAPTURE_STA;
#define  STA_UP    1  //�ڸߵ�ƽ�����½���
#define  STA_DOWN  0  //�ڵ͵�ƽ����������

/*****   ���벶��ֵ    ******/
extern uint16_t CAPTURE_VAULE_H;
extern uint16_t CAPTURE_VAULE_L;

/*******  �����Ҫ��   *******/
extern uint16_t OUT_VAULE;
extern uint16_t OUT_COUNT;
extern uint16_t MIDDLE_VAULE;

/*****     �����     *******/
extern uint8_t OUT_DIR;
#define  FOWD    1  //������
#define  ANTI    0  //������

void Init_pwm_in(void);
void Init_pwm_out(void);







#endif