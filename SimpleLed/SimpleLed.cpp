#include <SimpleLed.h>

SimpleLed::SimpleLed()
{
	isOn = false;
	isDigital = true;
	intensity = 255;
}

SimpleLed::SimpleLed(int pin)
{
	SimpleLed();
	this->pin = pin;
	pinMode(pin, OUTPUT);
}

void SimpleLed::on()
{
	isOn = true;
	if(this->isDigital)
	{
		digitalWrite(this->pin, HIGH);
	}
	else
	{
		analogWrite(this->pin, this->intensity);
	}
}

void SimpleLed::off()
{
	isOn = false;
	if(this->isDigital)
	{
		digitalWrite(this->pin, LOW);
	}
	else
	{
		analogWrite(this->pin, 0);
	}
}

void SimpleLed::toggle()
{
	if(this->isDigital)
	{
		isOn = !isOn;
		digitalWrite(this->pin, isOn?HIGH:LOW);
	}
}

void SimpleLed::setIntensity(float percentage)
{
	isDigital = false;
	if(percentage <= 0)  intensity = 0;
	else if(percentage > 1)  intensity = 255;
	else
	{
		intensity = (int)(255 * percentage);
	}
	
	analogWrite(this->pin, intensity);
}