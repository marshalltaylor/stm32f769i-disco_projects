#ifndef WProgram_h
#define WProgram_h

#include <stdlib.h>
#include <string.h>
#include <math.h>

// some libraries and sketches depend on this
// AVR stuff, assuming Arduino.h or WProgram.h
// automatically includes it...
//PORT//://#include <avr/pgmspace.h>
//PORT//:#include <avr/interrupt.h>

//PORT//:#include "avr_functions.h"
#include "wiring.h"
//PORT//:#include "HardwareSerial.h"

#define DMAMEM __attribute__ ((section(".dmabuffers"), used))
#define FASTRUN __attribute__ ((section(".fastrun"), noinline, noclone ))

#ifdef __cplusplus

//PORT//:#include "avr_emulation.h"
//PORT//:#include "usb_serial.h"
//PORT//:#include "usb_seremu.h"
//PORT//:#include "usb_keyboard.h"
//PORT//:#include "usb_mouse.h"
//PORT//:#include "usb_joystick.h"
//PORT//:#include "usb_midi.h"
//PORT//:#include "usb_rawhid.h"
//PORT//:#include "usb_flightsim.h"
//PORT//:#include "usb_mtp.h"
//PORT//:#include "usb_audio.h"
//PORT//:#include "usb_touch.h"
//PORT//:#include "usb_undef.h" // do not allow usb_desc.h stuff to leak to user programs
//PORT//:
//PORT//:#include "WCharacter.h"
//PORT//:#include "WString.h"
//PORT//:#include "elapsedMillis.h"
//PORT//:#include "IntervalTimer.h"

//PORT//:uint16_t makeWord(uint16_t w);
//PORT//:uint16_t makeWord(byte h, byte l);
//PORT//:
//PORT//:#define word(...) makeWord(__VA_ARGS__)
//PORT//:
//PORT//:unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout = 1000000L);
//PORT//:
//PORT//:void tone(uint8_t pin, uint16_t frequency, uint32_t duration = 0);
//PORT//:void noTone(uint8_t pin);
//PORT//:
//PORT//:// WMath prototypes
//PORT//:int32_t random(void);
//PORT//:uint32_t random(uint32_t howbig);
//PORT//:int32_t random(int32_t howsmall, int32_t howbig);
//PORT//:void randomSeed(uint32_t newseed);
//PORT//:void srandom(uint32_t newseed);
//PORT//:long map(long, long, long, long, long);

#include "pins_arduino.h"

#endif // __cplusplus


// Fast memcpy
#if defined(__MK20DX128__) || defined(__MK20DX256__) || defined(__MK64FX512__) || defined(__MK66FX1M0__)
#ifdef __cplusplus
extern "C" {
extern void *memcpy (void *dst, const void *src, size_t count);
}
#else
extern void *memcpy (void *dst, const void *src, size_t count);
#endif
#endif


#endif // WProgram_h
