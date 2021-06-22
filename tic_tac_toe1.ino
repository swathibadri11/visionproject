#include <Adafruit_NeoPixel.h>

#define PIN1 4

#define NUMPIXELS1 40
#define PIN 6

#define NUMPIXELS 240

int i = 0;

    
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
// strip is the 4 black strips
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
// strip 1 dot star neopixel strip
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(NUMPIXELS1, PIN1, NEO_GRB + NEO_KHZ800);
uint32_t magenta = strip.Color(255, 0, 255);  
//uint32_t green1 = strip1.Color(0,255,0); 
uint32_t green = strip.Color(0,255,128);   
uint32_t blue = strip.Color(102,102,255);
uint32_t orangered = strip.Color(255,69,0);
uint32_t gold= strip.Color(255,215,0);
uint32_t aqua= strip.Color(0,255,255);
// green shades
uint32_t forestgreen = strip.Color(34,139,34);
uint32_t palegreen= strip.Color(152,251,152);
uint32_t medseagreen = strip.Color(60,179,113);
uint32_t olive = strip.Color(128,129,0);
// orange shades
uint32_t coral = strip.Color(255,127,80);
uint32_t tomato = strip.Color(255,99,71);
// red
uint32_t crimson = strip.Color(220,20,60);
uint32_t brown = strip.Color(165,42,42);
uint32_t rosybrown = strip.Color(188,143,143);

// blue shades 
uint32_t deepskyblue = strip.Color(0,191,255);
uint32_t blueviolet = strip.Color(138,43,226);
uint32_t dodgerblue = strip.Color(30,144,25);

// black and grey
uint32_t black = strip.Color(0,0,0);
uint32_t grey = strip.Color(128,128,128);


void setup() {
  // put your setup code here, to run once:
// 4 outer strips
 strip.setBrightness(100);
 strip.begin();
 strip.show();
// dot star neopixel
 strip1.setBrightness(100);
 strip1.begin();
 strip1.show();
}

void loop() {
  greenstart();
  while ( i < 1) {
 for (int j = 0; j < 5; j = j + 1) {
 clockwise();
 eblink(); 
 }
 for (int j = 0; j < 5; j = j + 1) {
 anticlockwise();
  eblink();
 }
for (int j = 1;j < 4; j = j + 1) { 
tictactoe();
 eblink();
}
for (int j = 0; j < 5; j = j +1){
infinity();
 eblink();
}
for (int j = 0; j < 5; j = j +1){
nsew();
eblink();
}
 
 
  i++;
  } // end while
  if (i == 1) {
    exit;
  }
  
}

//************************************** infinity  *************
void infinity() {
// left circle 
ledblink1(24,blue);
ledblink1(25,blue);
for (int i = 27;i<30; i++) {
ledblink1(i,blue);
}// end of for 
for (int i = 31;i<36; i++) {
ledblink1(i,blue);
}
for (int i = 37;i<40; i++) {
ledblink1(i,blue);
}
ledblink1(21,blue);

// right circle 
ledblink1(4,magenta);
ledblink1(5,magenta);


for (int i = 7;i<9; i++) {
  ledblink1(i,magenta);
}
for (int i = 10;i<15; i++) {
  ledblink1(i,magenta);
}
for (int i = 17;i<20; i++) {
  ledblink1(i,magenta);
}
 ledblink1(1,magenta);

}// end og infinity function




// **************************tic tac toe function **********************
void tictactoe() {
 ledblink(146,medseagreen);
for (int i = 25;i > 19 ; i= i -2) {
  ledblink1(i,green);
}

ledblink(34,palegreen);
ledblink(153,forestgreen);

for (int i = 6;i > 0 ; i= i -2) {
 ledblink1(i,green);

}

//
ledblink(27,palegreen);

ledblink(101,forestgreen);

ledblink1(31,blue);

 
ledblink1(25,blue);

ledblink1(5,blue);
ledblink1(11,blue);

ledblink(200,blue);
ledblink(84,blue);


//
ledblink1(34,blue);
 
ledblink1(22,blue);
 
ledblink1(2,blue);

ledblink1(14,blue);

ledblink(218,blue);

} // end of tic tac toe function 

// *************************** Clock ******************
void clockwise() {
 ledblink(150,blue);
 ledblink(165,magenta);
 
 
 ledblink(195,green);
 ledblink(210,magenta);
 ledblink(225,aqua);
 ledblink(15,blue);
 ledblink(30,magenta);
 ledblink(45,green);
 ledblink(75,magenta);
 ledblink(90,aqua);
 ledblink(105,blue);
 ledblink(135,magenta); 
 ledblink(150,aqua);
}

void anticlockwise() {
 ledblink(150,blue);
 ledblink(135,magenta);
 ledblink(105,blue);
 ledblink(90,aqua);
 ledblink(75,magenta);
 ledblink(45,green);
 ledblink(30,magenta);
 ledblink(15,blue);
 ledblink(225,aqua);
 ledblink(210,magenta);
 ledblink(195,green);
 ledblink(165,magenta);
 ledblink(150,blue);
 
}
//********************* north south east west **********************************

void nsew() {
  ledblink(150,green);
  ledblink(30,green);
  
  ledblink(210,magenta);
  ledblink(91,magenta);

  ledblink(176,magenta);
  ledblink(64,magenta);
  
  ledblink(124,green);
  ledblink(234,green);
  
}

void greenstart() {

strip1.setPixelColor(24,0,255,0); 
strip1.show();
strip1.setPixelColor(4,0,255,0);
strip1.show();
delay(3000);
strip1.setPixelColor(4,0,0,0);
strip1.setPixelColor(24,0,0,0);
strip1.show();
}

void eblink() {

strip1.setPixelColor(24,165,42,42); 
strip1.show();
strip1.setPixelColor(4,165,42,42);
strip1.show();
delay(3000);
strip1.setPixelColor(4,0,0,0);
strip1.setPixelColor(24,0,0,0);
strip1.show();
}

void palming() {
 strip1.setPixelColor(24,255,0,0); 
strip1.show();
strip1.setPixelColor(4,255,0,0);
strip1.show();
delay(60000);
strip1.setPixelColor(4,0,0,0);
strip1.setPixelColor(24,0,0,0);
strip1.show(); 
}
void ledblink(int i,uint32_t color) {
  
strip.setPixelColor(i,color); 
strip.show();
delay(1000);
strip.setPixelColor(i,0,0,0);
strip.show(); 
}


void ledblink1(int i,uint32_t color) {
strip1.setPixelColor(i,color); 
strip1.show();
delay(1000);
strip1.setPixelColor(i,0,0,0);
strip1.show(); 
}

