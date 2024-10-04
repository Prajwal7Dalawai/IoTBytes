const int groundPin = A0; //Pin-3
const int powerpin = A2;  //Pin-1
int tempPin = A1; //Pin-2

float tempC;
float reading;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(groundPin,OUTPUT);
  pinMode(powerpin,OUTPUT);
  digitalWrite(groundPin,LOW);
  digitalWrite(powerpin,HIGH);
  analogReference(INTERNAL);
  }

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(tempPin);
  tempC = reading/9.31;
  Serial.println("Temperature: ");
  Serial.println(tempC);
  delay(1000);
}
