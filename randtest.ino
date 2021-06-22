#include <Adafruit_NeoPixel.h>
#define PIN1 4
#define NUMPIXELS1 40

#define PIN 6
#define NUMPIXELS 240
long randnum;
int i = 1;
int j = 30;
//uint32_t randcolor;
//4 strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
//dotstar
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(NUMPIXELS1, PIN1, NEO_GRB + NEO_KHZ800);

// random test done in 9th January
uint32_t green = strip.Color(0,255,128); 
uint32_t red = strip.Color(255,0,0);
uint32_t blue = strip.Color(102,102,255);
uint32_t orangered = strip.Color(255,69,0);
uint32_t gold= strip.Color(255,215,0);
uint32_t randcolor;
void setup() {
  // put your setup code here, to run once:
  strip.setBrightness(150);
 strip.begin();
 strip.show();

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(3000);
while (i < 49) {
  if (i%11 == 0) {
   
   ledblinktest(j,red); 
   j = j + 60;
  } else {
  randtest1();
  }
 i++;
 
}// end while
if (i == 49) {
  exit; 
 }

}


void ledblinktest(int i,uint32_t color) {
  
strip.setPixelColor(i,color); 
strip.show();
delay(90);
strip.setPixelColor(i,0,0,0);
strip.show(); 
delay(900);
}
void randtest1() {
  
  
  randnum = random(7,237);
  randcolor = strip.Color(random(0,253),random(0,255),random(0,255));
    ledblinktest(randnum,randcolor);
  
  
}
