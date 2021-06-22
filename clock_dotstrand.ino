
#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 40

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
    

void setup() {
  // put your setup code here, to run once:
//  uint16_t i;
//uint16_t j,t;
  strip.setBrightness(160);
   strip.begin();
    strip.show();
}
int i = 0;
void loop() {
  // put your main code here, to run repeatedly:
//turning on pin number 1  

 strip.setPixelColor(20,0,255,0); // set 12:00
    strip.show();
    delay(2000);
strip.setPixelColor(20,0,0,0);
 strip.show();   
     strip.setPixelColor(23,0,255,255);//set 11:00
    strip.show();
    delay(2000);
    strip.setPixelColor(23,0,0,0);
    strip.show();
     strip.setPixelColor(25,0,255,255); // set 10:00
    strip.show();
    delay(2000);
    strip.setPixelColor(25,0,0,0);
    strip.show();
    strip.setPixelColor(27,0,255,0); // set 9:00
    strip.show();
    delay(2000);
    strip.setPixelColor(27,0,0,0);
    strip.show();
     strip.setPixelColor(30,0,255,255); //set 8:00
    strip.show();
    delay(2000);
   strip.setPixelColor(30,0,0,0);
   strip.show();

 strip.setPixelColor(32,0,255,255); // set 7:00
    strip.show();
    delay(2000);
    strip.setPixelColor(32,0,0,0);
    strip.show();
    strip.setPixelColor(6,0,255,0); //set 6:00
    strip.show();
    delay(2000);
    strip.setPixelColor(6,0,0,0);
    strip.show();
    strip.setPixelColor(9,0,255,255);//set 5:00
    strip.show();
    delay(2000);
    strip.setPixelColor(9,0,0,0);
    strip.show();
    strip.setPixelColor(12,0,255,255); // set 4:00
    strip.show();
    delay(2000);
    strip.setPixelColor(12,0,0,0);
    strip.show();
  strip.setPixelColor(14,0,255,0); //set 3:00
    strip.show();
    delay(2000);
    strip.setPixelColor(14,0,0,0);
    strip.show();
  strip.setPixelColor(16,0,255,255); // set 2:00
    strip.show();
    delay(2000);
    strip.setPixelColor(16,0,0,0);
    strip.show();
     strip.setPixelColor(18,0,255,255); //set 1:00
    strip.show();
    delay(2000);
   strip.setPixelColor(18,0,0,0);
    strip.show();
 
void reverseclock();
   
  
}

void reverseclock() {
strip.setPixelColor(16,0,255,255); //set 11:00
    strip.show();
    delay(2000);
   strip.setPixelColor(16,0,0,0);
    strip.show();
 strip.setPixelColor(14,0,255,255); // set 10:00
    strip.show();
    delay(2000);
    strip.setPixelColor(14,0,0,0);
    strip.show();
    strip.setPixelColor(12,0,255,0); //set 9:00
    strip.show();
    delay(2000);
    strip.setPixelColor(12,0,0,0);
    strip.show(); 
}


