#define LED 9
#define BUTTON 7

int val = 0;
int oldVal = 0;
int state = 0;
int brightness = 128;
unsigned long startTime = 0;

void setup()
{
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop()
{
	val = digitalRead(BUTTON);

	if (val == HIGH && oldVal != val) {
		state = 1 - state;
		startTime = millis();
		delay(30);
	}

	if (val == HIGH && oldVal == val) {
		unsigned long duration = millis() - startTime;
		if (state == 1 && duration > 250) {
			brightness++;
			delay(5);

			if (brightness >= 255) {
				brightness = 0;
			}
		} else {
			brightness = 255;
		}
	}

	oldVal = val;

	if (state == 1) {
		analogWrite(LED, brightness);
	} else {
		analogWrite(LED, 0);
	}
}