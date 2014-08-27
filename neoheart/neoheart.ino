#include <Adafruit_NeoPixel.h>

#define PIN 1

Adafruit_NeoPixel strip = Adafruit_NeoPixel(3, PIN, NEO_GRB + NEO_KHZ800);
   
int greeno;
int redo;
int blueo;

void setup() {
  strip.begin();
  strip.show(); 
}
void loop() {  
  // all pixels show the same color:
  redo =random(255);
  greeno = random(255);
  blueo = random (255);
      strip.setPixelColor(0, redo, greeno, blueo);
      strip.setPixelColor(1, redo, greeno, blueo);
      strip.setPixelColor(2, redo, greeno, blueo);
      
      strip.show();
      delay (20);
      
   int x = 3;
   for (int ii = 1 ; ii <252 ; ii = ii = ii + x){
     strip.setBrightness(ii);
     strip.show();              
     delay(5);
    }
    
    x = 3;
   for (int ii = 252 ; ii > 3 ; ii = ii - x){
     strip.setBrightness(ii);
     strip.show();              
     delay(3);
     }
   delay(10);
   
   x = 6;
  for (int ii = 1 ; ii <255 ; ii = ii = ii + x){
     strip.setBrightness(ii);
     strip.show();              
     delay(2);  
     }
   x = 6;
   for (int ii = 255 ; ii > 1 ; ii = ii - x){
     strip.setBrightness(ii);
     strip.show();              
     delay(3);
   }
  delay (50);   
}
