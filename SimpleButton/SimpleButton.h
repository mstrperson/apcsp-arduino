#ifndef __CSP_BUTTON
#define __CSP_BUTTON

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

class SimpleButton
{
	public:
		SimpleButton();
		SimpleButton(int pin);
		bool isPressed();
	private:
		int pin;
};


#endif