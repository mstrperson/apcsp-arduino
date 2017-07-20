#ifndef __CSP_LED
#define __CSP_LED

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

class SimpleLed
{
	public:
		SimpleLed();
		SimpleLed(int pin);
		void toggle();
		void on();
		void off();
		void setIntensity(float percentage);
	private:
		int pin;
		bool isOn;
		bool isDigital;
		int intensity;
};

#endif