#include <Adafruit_DotStar.h>
#define DATAPIN    6
//#define CLOCKPIN   5
Adafruit_DotStar strip = Adafruit_DotStar(20, DATAPIN,DOTSTAR_BRG);

  
void setup() {
  // put your setup code here, to run once:
strip.begin(); // Initialize pins for output
  strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:
strip.setPixelColor(15, 0, 255, 0); // set it to green 
strip.show();

strip.setPixelColor(5, 0, 255, 255); // set it to green 
strip.show();
}
