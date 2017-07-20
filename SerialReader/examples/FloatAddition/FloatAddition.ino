#include <SerialReader.h>

SerialReader reader = SerialReader();

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter two floats to add.");
  Serial.print("x = ");
  float x = reader.readFloat();
  Serial.println(x);
  Serial.print("y = ");
  float y = reader.readFloat();
  Serial.println(y);
  Serial.println(x+y);
}

void loop()
{
}