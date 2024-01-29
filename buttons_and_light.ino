const int ledPin=9;
const int buttonPin=10;
const int buttonPin2=11;
void setup() {
  pinMode(ledPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(buttonPin2,INPUT);
}

void loop() {
   int deger=digitalRead(buttonPin);
   int deger2=digitalRead(buttonPin2);
   if(deger==HIGH)
    digitalWrite(ledPin,HIGH);
   else if(deger2==HIGH)
    digitalWrite(ledPin,LOW);
}
 //bu devrede bir tusa basıyorken aciliyor diger tusa basilinca kapaniyor
 //fakat ayni tusla acma ve kapama mevcut degil 