#ifndef BLINKINO_H
#define BLINKINO_H

#include "../Middlewares/Arduino-STM32/Arduino.h"

class ArduinoSketch
{
public:
ArduinoSketch(void) {};
    void setup(); 
    void loop(); 
	void serialEvent();
};
#endif
