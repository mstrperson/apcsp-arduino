#include <SerialReader.h>

SerialReader reader = SerialReader();

void setup()
{
  Serial.begin(9600);
  Serial.println("Enter two integers to add.");
  Serial.print("x = ");
  int x = reader.readInt();
  Serial.println(x);
  Serial.print("y = ");
  int y = reader.readInt();
  Serial.println(y);
  Serial.println(x+y);
}

void loop()
{
}