#include <ThreeColorLed.h>
#include <SerialReader.h>

SerialReader reader;
ThreeColorLed led = ThreeColorLed(3, 4, 5);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println("Enter a hexadecimal color value:");
	led.setColor(reader.readLine());
	delay(250);
}

