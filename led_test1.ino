
#include <Adafruit_NeoPixel.h>
#define PIN 6
#define NUMPIXELS 20

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
  strip.setBrightness(20);
   strip.begin();
    strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
//turning on pin number 1  
/*strip.setPixelColor(0, 0, 255, 0); // set it to green 
strip.show();
delay(5000);
//turning off pin number 1 
strip.setPixelColor(0, 0, 0, 0);
strip.show();
//delay(5000);

//turning off pin number 11 
strip.setPixelColor(5, 0, 255, 0); // set it to green 
strip.show();
delay(5000);
//turning off pin number 11 
strip.setPixelColor(5, 0, 0, 0);
strip.show();
//delay(5000);
// delay(10000);
//turning on pin number  
strip.setPixelColor(10, 0, 255, 0); // set it to green 
strip.show();
delay(5000);
//turning off pin number  
strip.setPixelColor(10, 0, 0, 0);
strip.show();
//delay(5000);
strip.setPixelColor(15, 0, 255, 0); // set it to green 
strip.show();
delay(5000);
//turning off pin number  
strip.setPixelColor(15, 0, 0, 0);
strip.show();
strip.setPixelColor(20, 0, 255, 0); // set it to green 
strip.show();
delay(5000);
//turning off pin number  
strip.setPixelColor(20, 0, 0, 0);
strip.show();
*/
uint16_t i;
uint16_t j,t;
for ( i = 0; i < 20;i=i+1) {
   j = 255;
   t = i%7;
   if (t==0) {
    strip.setPixelColor(i, j, j, 0); // green
   } else if (t ==1) {
    strip.setPixelColor(i, 0, j, 0);// red
   } else if(t == 2) {
    strip.setPixelColor(i, 0 , 0, j);
   }else if(t == 3) {
    strip.setPixelColor(i, 75, 0, 130);
   }else if(t == 4) {
    strip.setPixelColor(i, 148 , 0, 211);
   }else if(t == 5) {
    strip.setPixelColor(i, j, 127, 0);
   } else if (t == 6) {
    strip.setPixelColor(i, j, 0, 0);
   }
    
    
    strip.show();
    delay(2000);
  
    strip.setPixelColor(i, 0, 0, 0);
    strip.show();  
}


 for ( i = 20; i > 0; i=i-1) {
    strip.setPixelColor(i, 0, 255, 0); // set it to green 
    strip.show();
    delay(2000);
  
    strip.setPixelColor(i, 0, 0, 0);
    strip.show();  
}


}
