#ifndef __CSP_LED
#define __CSP_LED

class SimpleLed
{
	public:
		SimpleLed();
		SimpleLed(int pin);
		void toggle();
		void on();
		void off();
		void setIntensity(float percentage);
	private:
		bool isOn;
		bool isDigital;
		int intensity;
};

#endif