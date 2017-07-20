#include <SerialReader.h>

void setup()
{
	SerialReader reader = SerialReader();
}

void loop()
{
	String ln = reader.readLine();
	Serial.println(ln);
}