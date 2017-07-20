#include <ThreeColorLed.h>

ThreeColorLed::ThreeColorLed()
{
	isOn = false;
}

ThreeColorLed::ThreeColorLed(int redPin, int greenPin, int bluePin)
{
	this->redPin 	= redPin;
	this->greenPin 	= greenPin;
	this->bluePin 	= bluePin;
	
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	
	off();
}

void ThreeColorLed::off()
{
	analogWrite(redPin, 0);
	analogWrite(greenPin, 0);
	analogWrite(bluePin, 0);
	isOn = false;
}

void ThreeColorLed::on()
{
	analogWrite(redPin, red);
	analogWrite(greenPin, green);
	analogWrite(bluePin, blue);
	isOn = true;
}

void ThreeColorLed::toggle()
{
	isOn = !isOn;
	if(isOn) on();
	else off();
}

void ThreeColorLed::setColor(short r, short g, short b)
{
	red = r;
	green = g;
	blue = b;
	
	on();
}

void ThreeColorLed::setColor(String hex)
{
	
	hex.toLowerCase();
	if(hex[0] == '#')
		hex = hex.substring(1);
	else if(hex[1] == 'x')
		hex = hex.substring(2);
	
	if(!isValidColor(hex))
	{
		off();
		return;
	}
	
	red 	= hexToShort(hex[0], hex[1]);
	green 	= hexToShort(hex[2], hex[3]);
	blue 	= hexToShort(hex[4], hex[5]);
	
	on();
}

short ThreeColorLed::hexToShort(char a, char b)
{
	short s = 0;
	if(a >= '0' && a <= '9')
		s += a - '0';
	else if( a >= 'a' && a <= 'f')
		s += 10 + a - 'a';
	
	s *= 16;
	
	if(b >= '0' && b <= '9')
		s += b - '0';
	else if( b >= 'a' && b <= 'f')
		s += 10 + b - 'a';
		
	return s;
}

bool ThreeColorLed::isValidColor(String hex)
{	
	if(hex.length() != 6) return false;
	
	for(int i = 0; i < 6; i++)
	{
		if((hex[i] < '0' || hex[i] > '9') && (hex[i] < 'a' || hex[i] > 'f'))
			return false;
	}
	
	return true;
}