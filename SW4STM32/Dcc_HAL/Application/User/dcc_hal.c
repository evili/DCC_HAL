/*
 * dcc_hal.c
 *
 *  Created on: 01/09/2016
 *      Author: evili
 */


#include <stdio.h>
#include <stdarg.h>
#include "dcc_hal.h"
#include "usart.h"

int serial_print(const char *format, ...) {
	va_list argptr;
	va_start(argptr,format);
	int np = vsnprintf(serial_out, SERIAL_LINE, format, argptr);
	if(np > 0) {
		HAL_StatusTypeDef uart_status;
		uart_status = HAL_UART_Transmit(&huart2, serial_out, np, SERIAL_TIMEOUT);
		if(uart_status==HAL_OK)
			return np;
	}
	return -1;
}
