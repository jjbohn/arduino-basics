#define LED 9
int i = 0;

void setup()
{
	pinMode(LED, OUTPUT);
}

void loop()
{
	for (i = 0; i < 255; i++) {
		analogWrite(LED, i);
		delay(10);
	}

	while (i--) {
		analogWrite(LED, i);
		delay(10);
	}
}