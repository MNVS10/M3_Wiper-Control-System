#include "stm32f4xx.h"
#include "stm32f4xx_hal.h"
#define GPIOD_BASE_ADDR 0x40020C00
#define GPIOA_BASE_ADDR 0x40020000
#define RCC_BASE_ADDR 0x40023800
#define RCC_AHB1ENR_OFFSET 0x30
#define RCC_AHB1ENR *(volatile long *)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET)
#define GPIOD_ODR_OFFSET 0x14
#define GPIOD_ODR *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_ODR_OFFSET)
#define GPIOA_IDR_OFFSET 0x10
#define GPIOA_IDR *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_IDR_OFFSET)
#define GPIOD_MODE_OFFSET 0x00
#define GPIOD_MODE *(volatile long *)(GPIOD_BASE_ADDR + GPIOD_MODE_OFFSET)
#define GPIOA_MODE_OFFSET 0x00
#define GPIOA_MODE *(volatile long *)(GPIOA_BASE_ADDR + GPIOA_MODE_OFFSET)

int main()
{
int b=0;
RCC_AHB1ENR |= (1<<3)|(1<<0);
GPIOD_MODE = 0;
GPIOA_MODE = 0;
GPIOA_IDR |= 1<<3;
GPIOD->MODER |= GPIO_MODER_MODER12_0;
GPIOD->MODER |= GPIO_MODER_MODER13_0;
GPIOD->MODER |= GPIO_MODER_MODER14_0;
GPIOD->MODER |= GPIO_MODER_MODER15_0;


while(1)
{
if((GPIOA_IDR & 0x01) == 1)
{
b++;
}
if(b>0)
   {
b=0;

while(1)
{
	trace_puts("Button LONG Press");
	GPIOD_ODR |= 1<<14;
	HAL_Delay(1000);

	trace_puts("Button SHORT Press");
	GPIOD->BSRR = 1<<15;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(15+16);

	GPIOD->BSRR = 1<<15;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(1000);
	GPIOD->BSRR = 1<<(15+16);


	trace_puts("Button SHORT Press");
	GPIOD->BSRR = 1<<15;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(15+16);

	GPIOD->BSRR = 1<<15;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(15+16);

	GPIOD->BSRR = 1<<15;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(250);
	GPIOD->BSRR = 1<<(15+16);

	trace_puts("Button SHORT Press");
	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);


	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);


	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);


	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<13;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(13+16);
	GPIOD->BSRR = 1<<12;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(12+16);
	GPIOD->BSRR = 1<<15;
	HAL_Delay(125);
	GPIOD->BSRR = 1<<(15+16);

	trace_puts("Button LONG Press");
	GPIOD->BSRR = 1<<(14+16);
	HAL_Delay(1000);


}
   }




}
return 0;
}
