int ledPin = 13;
int buzzerPin = 12;
unsigned int sensorPin = A0;
int sensorValue = 0;
int threshold = 500;
void setup() {;
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  if(sensorValue<threshold){
    digitalWrite(bezzerPin,LOW);
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(ledPin,LOW);
  }
}
