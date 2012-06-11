#define LED 11

int i = 0;

void setup()
{
	pinMode(LED, OUTPUT);
}

void loop()
{

	while (i++ <= 255) {
		analogWrite(LED, i);
		delay(5);
	}

	while (i--) {
		analogWrite(LED, i);
		delay(10);
	}
}