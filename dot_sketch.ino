
#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 20
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
strip.setBrightness(20);
   strip.begin();
    strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
strip.setPixelColor(15, 0, 255, 0); // set it to green 
strip.show();

strip.setPixelColor(5, 0, 255, 255); // set it to green 
strip.show();
}

