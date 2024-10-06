#include<Adafruit_NeoPixel.h>
#define RGB_Pin 7
#define NumPixels 10
#define buzzerPin 11
Adafruit_NeoPixel pixels(NumPixels, RGB_Pin, NEO_RGB+NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  pixels.clear();
  pinMode(buzzerPin,OUTPUT);
  digitalWrite(buzzerPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzerPin,HIGH); //Doesn't Rings when colour is green
  for(int i=0;i<10;i++)
  pixels.clear();
  for(int i=0;i<10;i++){
    pixels.setPixelColor(i,pixels.Color(255,0,0));
    pixels.show();
  }
  delay(1000);

  digitalWrite(buzzerPin,LOW);
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
