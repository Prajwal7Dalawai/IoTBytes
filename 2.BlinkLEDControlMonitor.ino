// Program Combining both LED and Buzzer which works on certain Conditions
int ledPin = 13;
int state = 0;
int count;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);  //BoudRate
  digitalWrite(ledPin,LOW);
}

void onLEDOffbuzzer(){
  digitalWrite(ledPin,HIGH);
    Serial.println("LED ON");
    Serial.println("BUZZER OFF");
    delay(500);
}

void offLEDOnbuzzer(){
  digitalWrite(ledPin,LOW);
    Serial.println("LED OFF");
    Serial.println("BUZZER ONN");
    delay(500);
}

void loop() {
  // put your main code here, to run repeatedlky:
  if(Serial.available()>0){
    state =  Serial.read();
  }

  if(state == '1'){
     count = 5;
    while(count>=0){
      onLEDOffbuzzer();
      offLEDOnbuzzer();
    }
  }
  else if(state =='0'){
    digitalWrite(ledPin,LOW);
    Serial.println("LED OFF");
    Serial.println("BUZZER ONN");
  }
  delay(500);
}
