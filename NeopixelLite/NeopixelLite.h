#ifndef __CSP_NEOPIXEL_LITE
#define __CSP_NEOPIXEL_LITE

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

#include "FastLED.h"

class NeopixelLite
{
	public:
		NeopixelLite();
		void AddNeopixelString(int pin, int count);
		void SetColor(int row, int col, CRGB color);
		void SetRowColor(int row, CRGB color);
		NeopixelArrayState SaveState();
		void LoadState(NeopixelArrayState &state);
		void update();
	private:
		NeopixelArrayState currentState;
		
};

#endif