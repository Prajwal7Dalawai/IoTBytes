#include<Adafruit_NeoPixel.h>
#include<Ultrasonic.h>
#define RGB_Pin 7
#define NumPixels 10
const int trigPin = 2;
const int echoPin = 4;

Adafruit_NeoPixel pixels(NumPixels, RGB_Pin, NEO_RGB+NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
  pixels.begin();
  pixels.clear();
  Serial.begin(9600);
}

long microsecondsToInches(long microseconds)
{
 // According to Parallax's datasheet for the PING))), there are
 // 73.746 microseconds per inch (i.e. sound travels at 1130 feet per
 // second).  This gives the distance travelled by the ping, outbound
 // and return, so we divide by 2 to get the distance of the obstacle.
 // See: http://www.parallax.com/dl/docs/prod/acc/28015-PING-v1.3.pdf
 return microseconds / 74 / 2;
}


void loop() {
  // put your main code here, to run repeatedly:
  long inches,duration;
  pinMode(trigPin, OUTPUT);
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 // Read the signal from the sensor: a HIGH pulse whose duration is the time (in microseconds) from the sending of the ping to the reception of its echo off of an object.
 pinMode(echoPin, INPUT);
 duration = pulseIn(echoPin, HIGH);
 // convert the time into a distance
 inches = microsecondsToInches(duration);
 Serial.println(inches);
 if(inches<5){
  for(int i=0;i<10;i++)
  pixels.clear();
  for(int i=0;i<10;i++){
    pixels.setPixelColor(i,pixels.Color(255,0,0));
    pixels.show();
  }
  delay(1000);
 }
 if(inches>5 && inches<=7){
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
 if(inches>7){
  for(int i=0;i<10;i++)
  pixels.clear();
  for(int i=0;i<10;i++){
    pixels.setPixelColor(i,pixels.Color(0,255,0));
    pixels.show();
  }
  delay(1000);
}
 }

  
