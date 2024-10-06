int sensorPin = A0;
int buzzerPin = 7;
unsigned int sensorvalue = 0;
int threshold = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorvalue = analogRead(sensorPin);
  if(sensorvalue<threshold)
  digitalWrite(buzzerPin,LOW);
  else
  digitalWrite(buzzerPin,HIGH);
}
