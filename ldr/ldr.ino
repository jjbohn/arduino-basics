#include <math.h>

#define LED 3

int val = 0;

void setup()
{
	pinMode(LED, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	val = analogRead(0)/4;
	analogWrite(LED, val);
	delay(50);
}