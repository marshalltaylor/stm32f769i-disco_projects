#include "WProgram.h"
//#include "pins_arduino.h"

// An abstract class 
class ArduinoInstance 
{    
    // Data members of class 
public: 
	ArduinoInstance(void) {};
    // Pure Virtual Function 
    virtual void setup(void) = 0; 
    virtual void loop(void) = 0; 
    
   /* Other members */
}; 
