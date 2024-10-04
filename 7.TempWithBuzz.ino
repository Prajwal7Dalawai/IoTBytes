const int groundPin = A0; //Pin-3
const int powerpin = A2;  //Pin-1
int tempPin = A1; //Pin-2
const int LEDPin = 10;
const int BuzzerPin = 7;

float tempC;
float reading;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(groundPin,OUTPUT);
  pinMode(powerpin,OUTPUT);
  pinMode(LEDPin,OUTPUT);
  pinMode(BuzzerPin,OUTPUT);
  digitalWrite(groundPin,LOW);
  digitalWrite(LEDPin,LOW);
  digitalWrite(BuzzerPin,LOW);
  digitalWrite(powerpin,HIGH);
  analogReference(INTERNAL);
  }

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(tempPin);
  tempC = reading/9.31;
  Serial.println("Temperature: ");
  Serial.println(tempC);
  if(tempC > 30.0){
    digitalWrite(BuzzerPin,HIGH);
    digitalWrite(LEDPin,HIGH);
  }
  delay(1000);
}
