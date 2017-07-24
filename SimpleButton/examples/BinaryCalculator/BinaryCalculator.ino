#include <SimpleButton.h>

// Set up 8 Simple Buttons (I recommend using toggle switches!) connected to Digital Pins 2-9.
SimpleButton oneByte[] = { SimpleButton(2), SimpleButton(3), SimpleButton(4), SimpleButton(5), SimpleButton(6), SimpleButton(7), SimpleButton(8), SimpleButton(9) };

// Set up a momentary switch connected to pin 10 to update.
SimpleButton update = SimpleButton(10);

const char* hexDigits = "0123456789ABCDEF";

void setup()
{
	Serial.begin(9600);
	Serial.println("Enter a binary number using the toggle switches, then press the update button.");
}

void loop()
{
	// wait for the user to press the update button.
	while(!update.isPressed())
	{
		delay(100);
	}
	
	// Convert the Binary switch positions into Decimal.
	short num = 0;
	for(int i = 0; i < 8; i++)
	{
		num *= 2;
		if(oneByte[i].isPressed())
			num++;
	}
		
	// Convert the Decimal to Hex.
	char firstDigit = hexDigits[num / 16];
	char secondDigit = hexDigits[num % 16];
	
	// print the results to the command line.
	Serial.print("You have entered:  ");
	Serial.println(num);
	Serial.print("Hex:  ");
	Serial.println("0x" + firstDigit + secondDigit);
	
	delay(5000);
	
	Serial.println("Press UPDATE to see a new value");
}