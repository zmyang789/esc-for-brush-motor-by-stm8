#include "task.h"
#include "math.h"
#include "stdlib.h"

/******
�Ƚ�����
�Ƚϲ���ֵ��������ֵ
ÿ����һ������һ��
�õ����������뷽��
******/
void compare_task(void)
{
  if(CAPTURE_VAULE_H<MIDDLE_VAULE+500 && CAPTURE_VAULE_H>MIDDLE_VAULE-500){
    if(CAPTURE_VAULE_H<MIDDLE_VAULE+50 && CAPTURE_VAULE_H>MIDDLE_VAULE-50)
      OUT_VAULE=0;
    else
      OUT_VAULE = abs(CAPTURE_VAULE_H - MIDDLE_VAULE)/10;    
    }
    
  else if(CAPTURE_VAULE_H>MIDDLE_VAULE+500 && CAPTURE_VAULE_H<MIDDLE_VAULE+1000)
    OUT_VAULE=50;
  else if(CAPTURE_VAULE_H<MIDDLE_VAULE-500 && CAPTURE_VAULE_H>MIDDLE_VAULE-1000)
    OUT_VAULE=50;
  else
    OUT_VAULE=0;
  
  
  if(CAPTURE_VAULE_H>MIDDLE_VAULE)
    OUT_DIR=FOWD;
  else
    OUT_DIR=ANTI;
  
}
/*********
�������
��·IO������H��
��TIM4����ж��е���

***********/

void out_task(void)
{
  OUT_COUNT++;
  if(OUT_DIR == FOWD){
    GPIO_WriteLow(GPIOD,GPIO_PIN_2);
    if(OUT_COUNT < OUT_VAULE) 
      GPIO_WriteHigh(GPIOD,GPIO_PIN_3);
    else 
      GPIO_WriteLow(GPIOD,GPIO_PIN_3);   
  }
  else{
    GPIO_WriteLow(GPIOD,GPIO_PIN_3);
    if(OUT_COUNT < OUT_VAULE) 
      GPIO_WriteHigh(GPIOD,GPIO_PIN_2);
    else 
      GPIO_WriteLow(GPIOD,GPIO_PIN_2);   
  }
  
  if(OUT_COUNT>50)
    OUT_COUNT=0;
    
}



