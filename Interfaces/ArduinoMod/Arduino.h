/*
  Arduino.h - Main include file for the Arduino SDK
  Copyright (c) 2005-2013 Arduino Team.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef Arduino_h
#define Arduino_h
#include <stdint.h>
#include <stddef.h>

//using namespace std;

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

#include "STM_ArduinoPins.h"
#include "GPIO.h"
#include "ADC.h"
#include "UART.h"

//void delay(uint32_t) {};
static int millis() {return 0;};
//Extern a bunch of objects and shit here!
//extern void * memcpy(uint8_t *, const void*, size_t);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus

// Include pins variant
//#include "pins_arduino.h"

#endif // Arduino_h
