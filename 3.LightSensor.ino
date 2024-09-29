// Program to implement LDR sensor
int sensorPin = A0;    
unsigned int sensorValue = 0;  
int threshold = 500;

void setup(){
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue < threshold) 
  digitalWrite(13, HIGH);   
  else 
  digitalWrite(13, LOW); 
}
