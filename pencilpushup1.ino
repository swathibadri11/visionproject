#include <Adafruit_NeoPixel.h>

#define PIN 6
#define NUMPIXELS 60
int i = 0;
long randnum;
uint32_t randcolor;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

uint32_t magenta = strip.Color(255, 0, 255);  
uint32_t green = strip.Color(0,255,128);   
uint32_t blue = strip.Color(102,102,255);
uint32_t orangered = strip.Color(255,69,0);
uint32_t gold= strip.Color(255,215,0);
uint32_t white= strip.Color(255,255,255);
uint32_t darkgrey= strip.Color(169,169,169);



void setup() {
  // put your setup code here, to run once:
strip.setBrightness(20);
 strip.begin();
 strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
  while (i < 3) {
for (int i = 7; i < 38 ; i = i +1) {
  if (i%2 == 1) {
  ledblink(i,green);
  } else {
    ledblink(i,magenta);
  }
}
eblink();
for (int i = 37;i> 6; i = i-1) {
 if (i%2 == 1) {
  ledblink(i,green);
  } else {
    ledblink(i,magenta);
  } 
} 
//randtest();
i++;

  }// end of while
  if (i == 3) {
    exit;
  }// end of if 
}

void ledblink(int i,uint32_t color) {
  
strip.setPixelColor(i,color); 
strip.show();
delay(1000);
strip.setPixelColor(i,0,0,0);
strip.show(); 

}
void ledblinktest(int i,uint32_t color) {
  
strip.setPixelColor(i,color); 
strip.show();
delay(50);
strip.setPixelColor(i,0,0,0);
strip.show(); 
delay(1000);
}
void randtest() {
  randnum = random(7,34);
 // uint32_t randcolor= strip.Color(random(1,255,169,169);
  ledblinktest(randnum,white);
}


void eblink() {

strip.setPixelColor(37,255,0,0); 
strip.show();
strip.setPixelColor(36,255,0,0);
strip.show();
delay(3000);
strip.setPixelColor(37,0,0,0);
strip.setPixelColor(36,0,0,0);
strip.show();
}

