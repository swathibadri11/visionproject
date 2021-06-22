

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
int i = 65;
char c,v ;
int j;
Adafruit_SSD1306 display(4);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3c);
  display.setTextSize(2);
  display.setTextColor(WHITE,BLACK);
  
}
void loop() {
static int count = 0;
while ( i < 91) { 
display.clearDisplay();
display.drawRoundRect(0,0,127,32,8,WHITE);
display.setCursor(30,10);
j = random(67,91);
v = random(65,67);
if (i%6 == 0) {
  display.setTextColor(WHITE,BLACK);
  c = v;
} else 
{
  display.setTextColor(BLACK,WHITE); 
 c = j;
}
display.print(c);

display.display();
//delay(2000);
delay(30);

//c = 32;
//display.print("*");

i++; 
display.clearDisplay();
display.display();


delay(50);
}// end of while 

if (i == 92) {
  exit;
}// end if 

} // end of loop 
/*display.clearDisplay();
display.drawRoundRect(0,0,127,32,8,WHITE);
display.setCursor(30,10);
display.print(count); 
display.display();
count ++;
if (count > 9999) {
  count = 0;
}
delay(100);
}
*/
  


