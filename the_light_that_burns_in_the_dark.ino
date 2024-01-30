const int ledPin=9;
const int LDRpin=A0;
void setup() {
  pinMode(ledPin,OUTPUT);  
}

void loop() {
  int deger =analogRead(LDRpin);
  if(deger<900)
   digitalWrite(ledPin,HIGH);
   else
   digitalWrite(ledPin,LOW);
}
