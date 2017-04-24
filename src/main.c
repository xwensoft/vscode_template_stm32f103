//
// This file is part of the GNU ARM Eclipse distribution.
// Copyright (c) 2014 Liviu Ionescu.
//
#include "stm32f10x.h"

int
main(int argc, char* argv[])
{
  SystemInit();

  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

  // At this stage the system clock should have already been configured
  // at high speed.
  GPIO_InitTypeDef gpio_init_struct;
  gpio_init_struct.GPIO_Pin = GPIO_Pin_2;
  gpio_init_struct.GPIO_Mode = GPIO_Mode_Out_PP;
  gpio_init_struct.GPIO_Speed = GPIO_Speed_10MHz;
  GPIO_Init(GPIOD, &gpio_init_struct);

  GPIO_ResetBits(GPIOD, GPIO_Pin_2);
  
  // Infinite loop
  while (1)
    {
       // Add your code here.
    }
}

// ----------------------------------------------------------------------------
