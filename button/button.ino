#define LED 13
#define BUTTON 7

int val = 0;
int oldVal = 0;
int state = 0;

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
    	delay(100);
    }

    oldVal = val;

    if (state) {
        digitalWrite(LED, 5);
        delay(1);
    } else {
        digitalWrite(LED, LOW);
        delay(50);
    }
}
