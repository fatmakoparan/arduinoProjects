void setup() {
 pinMode(10,OUTPUT);
 pinMode(9,OUTPUT);

}

void loop() {
   digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
   delay(200);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
   delay(200);

}
