#ifndef __APCSP_ESC
#define __APCSP_ESC

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

#include <Servo.h>


class ESC
{
	public:
		ESC(int pin);
		ESC(int pin, int freq);
		
		void setMax(int max);
		void setMin(int min);
		void setNeutral(int n);
		
		void calibrate();
		
		void setSpeed(float percentage);
		
	private:
		int pinNumber;
		int pwmFrequency;
		
		int MAX_SIGNAL = 2300;
		int NEUTRAL = 1400;
		int MIN_SIGNAL = 400;
		
		Servo myESC; 
		
		int calculateForward(float power);
		int calculateReverse(float power);
};

#endif