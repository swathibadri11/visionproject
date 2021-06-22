
#include <Adafruit_NeoPixel.h>
#define PIN 6
#define PIN1 5
#define NUMPIXELS 240
#define NUMPIXELS1 40

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(NUMPIXELS1, PIN1, NEO_GRB + NEO_KHZ800);
    

void setup() {
  // put your setup code here, to run once:
  strip.setBrightness(20);
   strip.begin();
    strip.show();
     strip1.setBrightness(50);
   strip1.begin();
    strip1.show();
}

void loop() {
  // put your main code here, to run repeatedly:
//turning on pin number 1  
strip1.setPixelColor(20,0,255,255);
strip1.show();
delay(5000);
uint16_t i;
uint16_t j,t;
 strip.setPixelColor(150,0,255,0); // set 12:00
    strip.show();
    delay(2000);
strip.setPixelColor(150,0,0,0);
 strip.show();   
     strip.setPixelColor(170,0,255,255);//set 1:00
    strip.show();
    delay(2000);
    strip.setPixelColor(170,0,0,0);
    strip.show();
     strip.setPixelColor(194,0,255,255); // set 2:00
    strip.show();
    delay(2000);
    strip.setPixelColor(194,0,0,0);
    strip.show();
    strip.setPixelColor(209,0,255,0); // set 3:00
    strip.show();
    delay(2000);
    strip.setPixelColor(209,0,0,0);
    strip.show();
     strip.setPixelColor(220,0,255,255); //set 4:00
    strip.show();
    delay(2000);
   strip.setPixelColor(220,0,0,0);
   strip.show();

 strip.setPixelColor(11,0,255,255); // set 5:00
    strip.show();
    delay(2000);
    strip.setPixelColor(11,0,0,0);
    strip.show();
    strip.setPixelColor(29,0,255,0); //set 6:00
    strip.show();
    delay(2000);
    strip.setPixelColor(29,0,0,0);
    strip.show();
    strip.setPixelColor(47,0,255,255);//set 7:00
    strip.show();
    delay(2000);
    strip.setPixelColor(47,0,0,0);
    strip.show();
    strip.setPixelColor(75,0,255,255); // set 8:00
    strip.show();
    delay(2000);
    strip.setPixelColor(75,0,0,0);
    strip.show();
  strip.setPixelColor(88,0,255,0); //set 9:00
    strip.show();
    delay(2000);
    strip.setPixelColor(88,0,0,0);
    strip.show();
  strip.setPixelColor(100,0,255,255); // set 10:00
    strip.show();
    delay(2000);
    strip.setPixelColor(100,0,0,0);
    strip.show();
     strip.setPixelColor(132,0,255,255); //set 11:00
    strip.show();
    delay(2000);
   strip.setPixelColor(132,0,0,0);
    strip.show();



}
