#ifndef __CSP_NEOPIXEL_ARRAY_STATE
#define __CSP_NEOPIXEL_ARRAY_STATE

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

#include "FastLED.h"

class NeopixelArrayState
{
	public:
		NeopixelArrayState(int rows, int columns);
		
	private:
		CRGB** leds;
};

#endif