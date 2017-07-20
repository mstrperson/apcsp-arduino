#include <SimpleButton.h>

SimpleButton::SimpleButton()
{
	// nashi yo
}

SimpleButton::SimpleButton(int pin)
{
	this->pin = pin;
	pinMode(pin, INPUT_PULLUP);
	digitalWrite(pin, HIGH);
}

bool SimpleButton::isPressed()
{
	return digitalRead(pin) == LOW;
}