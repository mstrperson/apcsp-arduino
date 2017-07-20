#include <SerialReader.h>

SerialReader::SerialReader()
{
}

/*
 *  Sets the delay interval in miliseconds.
 *  Used in the readLine method as the delay for buffering.
 */
void SerialReader::setUpdateInterval(int ms)
{
	UPDATE_INTERVAL = ms;
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

/*
 *  Reads a line from the Serial buffer and then converts it to an integer.
 *  if a non-integer character is detected, returns 0.
 */
int SerialReader::readInt()
{
	int output = 0;
	String str = this->readLine();
	
	for(int i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		
		if(ch < '0' || ch > '9')
		{
			return 0;
		}
		
		output *= 10;
		output += (int)(ch - '0');
	}
	
	return output;
}