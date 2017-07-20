#ifndef __CSP_THREE_COLOR_LED
#define __CSP_THREE_COLOR_LED

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

class ThreeColorLed
{
	public:
		ThreeColorLed();
		ThreeColorLed(int redPin, int greenPin, int bluePin);
		void setColor(short r, short g, short b);
		void setColor(String hex);
		void off();
		void on();
		void toggle();
	private:
		bool isOn;
		int redPin, bluePin, greenPin;
		short red, green, blue;
		bool isValidColor(String hex);
		short hexToShort(char a, char b);
};

#endif