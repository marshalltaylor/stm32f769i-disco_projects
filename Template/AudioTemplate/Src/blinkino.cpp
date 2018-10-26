#include "blinkino.h"
/*
  Serial Event example

 When new serial data arrives, this sketch adds it to a String.
 When a newline is received, the loop prints the string and
 clears it.

 A good test for this is to try it with a GPS receiver
 that sends out NMEA 0183 sentences.

 Created 9 May 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/SerialEvent

 */

//PORT//:String inputString = "";         // a string to hold incoming data
boolean stringComplete = false;  // whether the string is complete

void ArduinoSketch::setup() {
  // initialize serial:
//PORT//:  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
//PORT//:  inputString.reserve(200);
}

void ArduinoSketch::loop() {
  // print the string when a newline arrives:
  if (stringComplete) {
//PORT//:    Serial.println(inputString);
    // clear the string:
//PORT//:    inputString = "";
    stringComplete = false;
  }
}

/*
  SerialEvent occurs whenever a new data comes in the
 hardware serial RX.  This routine is run between each
 time loop() runs, so using delay inside loop can delay
 response.  Multiple bytes of data may be available.
 */
void ArduinoSketch::serialEvent() {
//PORT//:  while (Serial.available()) {
    // get the new byte:
//PORT//:    char inChar = (char)Serial.read();
    // add it to the inputString:
//PORT//:    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
//PORT//:    if (inChar == '\n') {
//PORT//:      stringComplete = true;
//PORT//:    }
//PORT//:  }
}

