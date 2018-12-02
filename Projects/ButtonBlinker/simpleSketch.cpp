#include "Arduino.h"
//#include "HardwareSerial.h"
#include "BlinkerPanel.h"
//using namespace std;

//HardwareSerial Serial1((uint32_t)1,(uint32_t)2);
#define Serial Serial1


extern void setup()
{
	pinMode(D13, OUTPUT);
	digitalWrite(D13, 1);
	delay(1000);
	digitalWrite(D13, 0);
	Serial.begin(9600);
	delay(2000);
	Serial.println("OK");
	
}

//Set LOOP_DELAY to length of time between ticks of everything (in ms)
#define LOOP_DELAY 1000

extern void loop()
{
	//Delay the loop
	delay(LOOP_DELAY);
	Serial.println("Hello world!");
	digitalWrite(D13, digitalRead(D13)^0x01);

	
}

