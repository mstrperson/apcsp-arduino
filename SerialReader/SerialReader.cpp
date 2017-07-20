#include <SerialReader.h>

SerialReader::SerialReader()
{
}

/*
 *  Waits for text to be available in the serial buffer.
 *  Then reads the full buffer into a String, one byte at a time.
 */
String SerialReader::readLine()
{
	String line = "";
	while(!Serial.available())
	{
		delay(UPDATE_INTERVAL);
	}
	// wait for buffering.
	delay(UPDATE_INTERVAL);
	
	while(Serial.available())
	{
		line += (char)Serial.read();
	}
	
	return line;
}