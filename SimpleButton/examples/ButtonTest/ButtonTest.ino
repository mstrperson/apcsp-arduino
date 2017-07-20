#include <SimpleButton.h>

SimpleButton A;

void setup()
{
	// Attach button to pin 4.
	A = SimpleButton(4);
	
	Serial.begin(9600);
}

void loop()
{
	if(A.isPressed())
	{
		Serial.println("Pressed!");
	}
	
	delay(100);
}