#ifndef __CSP_SERIAL_READER
#define __CSP_SERIAL_READER

#if defined(ARDUINO) && ARDUINO >= 100
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

class SerialReader
{
  public:
    SerialReader();
    String readLine();
    int readInt();
    float readFloat();
	void setUpdateInterval(int ms);
  private:
    int UPDATE_INTERVAL = 100; //ms
};

#endif