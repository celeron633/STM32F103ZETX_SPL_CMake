#include <stdint.h>
#include "stm32f10x.h"

int main(void)
{
	// init the clock of GPIOB in APB2
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_GPIOC, ENABLE);
	
	// init GPIO ports
	GPIO_InitTypeDef gpio;
	gpio.GPIO_Mode = GPIO_Mode_Out_PP;
	gpio.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_5;
	gpio.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &gpio);
	
	GPIO_InitTypeDef gpio2;
	gpio2.GPIO_Mode = GPIO_Mode_Out_PP;
	gpio2.GPIO_Pin = GPIO_Pin_0;
	gpio2.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &gpio2);
	
	// trun on all led at start
	GPIO_ResetBits(GPIOB, GPIO_Pin_0);
	GPIO_ResetBits(GPIOB, GPIO_Pin_1);
	GPIO_ResetBits(GPIOB, GPIO_Pin_5);
	
	while (1) {
		
	}

	return 0;
}
