/*
 * dcc_hal.h
 *
 *  Created on: 01/09/2016
 *      Author: evili
 */

#ifndef APPLICATION_USER_DCC_HAL_H_
#define APPLICATION_USER_DCC_HAL_H_

#include <stdint.h>

#define SERIAL_LINE 80u

#define SERIAL_TIMEOUT 500u

unsigned char serial_in[SERIAL_LINE];
unsigned char serial_out[SERIAL_LINE];

int serial_print(const char *format, ...);


#endif /* APPLICATION_USER_DCC_HAL_H_ */
