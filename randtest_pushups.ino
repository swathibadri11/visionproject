#include <Adafruit_NeoPixel.h>
#define PIN 6

#define NUMPIXELS 60
long randnum;
int i = 0;
//uint32_t randcolor;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t green = strip.Color(0,255,128); 
uint32_t red = strip.Color(255,0,0);
uint32_t blue = strip.Color(102,102,255);
uint32_t orangered = strip.Color(255,69,0);
uint32_t gold= strip.Color(255,215,0);
uint32_t randcolor ;
void setup() {
  // put your setup code here, to run once:
  strip.setBrightness(40);
 strip.begin();
 strip.show();

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
while (i < 47) {
  randtest();
 i++;
 
}// end while
if (i == 46) {
  exit; 
 }

}


void ledblinktest(int i,uint32_t color) {
  
strip.setPixelColor(i,color); 
strip.show();
//delay(100);
strip.setPixelColor(i,0,0,0);
strip.show(); 
delay(1000);
}
void randtest() {
  randnum = random(7,39);
  randcolor = strip.Color(random(0,169),random(0,255),random(0,245));
    ledblinktest(randnum,randcolor);
  

  
}
