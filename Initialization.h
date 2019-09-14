/*
 * Initialization.h
 *
 *  Created on: Apr 16, 2019
 *      Author: ahmed
 */

#ifndef INITIALIZATION_H_
#define INITIALIZATION_H_
#include"stdbool.h"
#include "stdint.h"

#define  DIGITAL_PINS                    (0x1F)
#define  INITIALIZE_TO_ZERO              (0)
#define  SYSTICK_ENABLE                  (5)
#define  SYSTEM_CLK_SPEED_KHZ            (16000-1)
#define  SYSTEM_TICK_MS                  (20)
#define  TIME_OUT                        (bool)(NVIC_ST_CTRL_R&0x10000)
#define  TIME_PER_PERIOD                 (SYSTEM_CLK_SPEED_KHZ*SYSTEM_TICK_MS)
extern void PortF_Init(void);
void PortE_Init(void);
void PortB_Init(void);
extern void SYS(void);
extern bool checkStatus(void);



#endif /* INITIALIZATION_H_ */
