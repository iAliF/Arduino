// Led Pins
const int leds[] = {4, 5, 6, 7}; // Pins
const int ledsCount = 4; // Leds count
int currentLed = 0; // where to start

void setup() {
  for (int i = 0; i < ledsCount; i++) {
    pinMode(leds[i], OUTPUT);
  }
}


void loop() {
  digitalWrite(leds[currentLed == 0 ? ledsCount - 1 : currentLed - 1], LOW);
  digitalWrite(leds[currentLed], HIGH);

  currentLed = currentLed == ledsCount - 1 ? 0 : currentLed + 1;

  delay(100);
}
