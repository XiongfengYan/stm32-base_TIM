/**
  ******************************************************************************
  * @file    main.c
  * @author  fire
  * @version V1.0
  * @date    2015-xx-xx
  * @brief   控制多彩流水灯
  ******************************************************************************
  * @attention
  *
  * 实验平台:秉火  STM32 F429 开发板 
  * 论坛    :http://www.chuxue123.com
  * 淘宝    :http://firestm32.taobao.com
  *
  ******************************************************************************
  */
#include "stm32f4xx.h"
#include "bsp_led.h"
#include "bsp_basic_tim.h"



int main(void)
{
	/* LED 端口初始化 */
	LED_GPIO_Config();
	
	BASIC_TIMx_Config();
	while (1)
	{

	}
}


// 那程序改成使用 TIM7


/*********************************************END OF FILE**********************/

