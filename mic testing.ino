#include <FastLED.h>

#define NUM_LEDS 30
#define LED_PIN 3
CRGB leds[NUM_LEDS];

int sensorAnalogPin = A0;
int analogValue = 0;
int nsamples = 64;
long sampleTotal = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);

  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(7);
}

void loop() {

  sampleTotal = 0;
  
  for (int i = 0; i < nsamples; i++) {
    sampleTotal += analogRead(sensorAnalogPin);
  }

  analogValue = sampleTotal / nsamples;
  Serial.println(analogValue);

  //0 1 2 3 4 5 6 7 8 9
  if (analogValue > 50) {
    leds[0] = CRGB::White;
  }
  if (analogValue > 100) {
    leds[1] = CRGB::White;
  }

  if (analogValue > 150) {
    leds[2] = CRGB::White;
  }

  if (analogValue > 200) {
    leds[3] = CRGB::White;
  }

  if (analogValue > 250) {
    leds[4] = CRGB::White;
  }

  if (analogValue > 300) {
    leds[5] = CRGB::White;
  }

  if (analogValue > 350) {
    leds[6] = CRGB::White;
  }

  if (analogValue > 400) {
    leds[7] = CRGB::White;
  }

  if (analogValue > 450) {
    leds[8] = CRGB::White;
  }

  if (analogValue > 500) {
    leds[9] = CRGB::White;
  }

  //19 18 17 16 15 14 13 12 11 10
  if (analogValue > 50) {
    leds[19] = CRGB::White;
  }

  if (analogValue > 75) {
    leds[18] = CRGB::White;
  }

  if (analogValue > 100) {
    leds[17] = CRGB::White;
  }

  if (analogValue > 125) {
    leds[16] = CRGB::White;
  }

  if (analogValue > 150) {
    leds[15] = CRGB::White;
  }

  if (analogValue > 175) {
    leds[14] = CRGB::White;
  }

  if (analogValue > 200) {
    leds[13] = CRGB::White;
  }

  if (analogValue > 225) {
    leds[12] = CRGB::White;
  }

  if (analogValue > 250) {
    leds[11] = CRGB::White;
  }

  if (analogValue > 275) {
    leds[10] = CRGB::White;
  }

  //20 21 22 23 24 25 26 27 28 29
  if (analogValue > 50) {
    leds[20] = CRGB::White;
  }
  if (analogValue > 100) {
    leds[21] = CRGB::White;
  }

  if (analogValue > 150) {
    leds[22] = CRGB::White;
  }

  if (analogValue > 200) {
    leds[23] = CRGB::White;
  }

  if (analogValue > 250) {
    leds[24] = CRGB::White;
  }

  if (analogValue > 300) {
    leds[25] = CRGB::White;
  }

  if (analogValue > 350) {
    leds[26] = CRGB::White;
  }

  if (analogValue > 400) {
    leds[27] = CRGB::White;
  }

  if (analogValue > 450) {
    leds[28] = CRGB::White;
  }

  if (analogValue > 500) {
    leds[29] = CRGB::White;
  }

  FastLED.show();

  FastLED.clear();

}
