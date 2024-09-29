#include<Adafruit_NeoPixel.h>
#define RGB_Pin 7
#define NumPixels 10
Adafruit_NeoPixel pixels(NumPixels, RGB_Pin, NEO_RGB+NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  pixels.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<10;i++)
  pixels.clear();
  for(int i=0;i<10;i++){
    pixels.setPixelColor(i,pixels.Color(255,0,0));
    pixels.show();
  }
  delay(1000);
  for(int i=0;i<10;i++)
  pixels.clear();
  for(int i=0;i<10;i++){
    pixels.setPixelColor(i,pixels.Color(0,255,0));
    pixels.show();
  }
  delay(1000);
    for(int i=0; i< 10;i++)
    {
      pixels.clear();
    }
    for(int i=0; i< 10;i++)
    {
      pixels.setPixelColor(i,pixels.Color(0,0,255));
      pixels.show();
    }
  delay(1000);
}
