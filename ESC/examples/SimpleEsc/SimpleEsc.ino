#include <ESC.h>

// ESC with data on pin 9.
ESC esc = ESC(9);
float power = 0f;
bool increase = true;

void setup()
{
	
}

void loop()
{
	esc.setSpeed(power);
	
	if(increase)
	{
		power += 0.1;
		if(power >= 1f)
			increase = false;
	}
	else
	{
		power -= 0.1;
		if(power <= -1f)
			increase = true;
	}
	
	delay(500);
}