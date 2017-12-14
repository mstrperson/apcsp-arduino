#include <ESC.h>

ESC::ESC(int pin)
{
	pinNumber = pin;
	pwmFrequency = 470;
	myESC.attach(pin);
}

ESC::ESC(int pin, int freq)
{
	pinNumber = pin;
	pwmFrequency = freq;
	myESC.attach(pin);
}

ESC::setMax(int max)
{
	MAX_SIGNAL = max;
}

ESC::setMin(int min)
{
	MIN_SIGNAL = min;
}

void ESC::setNeutral(int n)
{
	NEUTRAL = n;
}

// Requires Serial.
void ESC::calibrate()
{
	// TODO: write a calibrate system.
}

void ESC::setSpeed(float power)
{
	if(power == 0)
		myESC.writeMicroseconds(NEUTRAL);
	else if(power >= 1)
		myESC.writeMicroseconds(MAX_SIGNAL);
	else if(power <= -1)
		myESC.writeMicroseconds(MIN_SIGNAL);
	
	else if(power > 0)
		myESC.writeMicroseconds(calculateForward(power));
	else
		myESC.writeMicroseconds(calculateReverse(power));
		
}

int ESC::calculateForward(float power)
{
	int diff = MAX_SIGNAL - NEUTRAL;
	return NEUTRAL + (int)(power * diff);
}

int ESC::calculateReverse(float power)
{
	int diff = NEUTRAL - MIN_SIGNAL;
	return NEUTRAL + (int)(power * diff);
}