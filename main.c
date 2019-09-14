/*
 * main.c
 */
#include <string.h>
#include "stdint.h"
#include"tm4c123gh6pm.h"
#include"scheduler.h"
#include"Initialization.h"
#include"stdbool.h"
#include"stdio.h"
#include"Tasks.h"


int main(void) {
	PortF_Init();
	PortE_Init();
	PortB_Init();
	 SYS();

	

	while(1)
	{


		schedule();
	}


//	return 0;
}
