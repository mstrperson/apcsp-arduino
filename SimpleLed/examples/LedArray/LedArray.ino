#include <SimpleLed.h>

SimpleLed leds[4] = { SimpleLed(3), SimpleLed(4), SimpleLed(5), SimpleLed(6) };
float intensity[4] = { 0.1, 0.2, 0.3, 0.4 };

SimpleLed blinky = SimpleLed(7);

void setup()
{
	blinky.on();
}

void loop()
{
	for(int i = 0; i < 4; i++)
	{
		leds[i].setIntensity(intensity[i]);
		intensity[i] += 0.1;
		if(intensity[i] > 1)  intensity[i] = 0;
	}
	
	blinky.toggle();
	
	delay(100);
}