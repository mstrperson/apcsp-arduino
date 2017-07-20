# SerialReader
Simple encapsulation of reading standard data types from the Serial connection on the Arduino.
## `String readLine()`
Read a string from Serial.
## `int readInt()`
Read an integer from Serial.  
## `long readLong()`
Read a long integer from Serial.  
If an invalid Character is detected, this method returns zero.
## `float readFloat()`
Read a float from Serial.  
If an invalid character is deteceted, this method returns zero.
## `double readDouble()`
Read a double from Serial.  
If an invalid character is deteceted, this method returns zero.