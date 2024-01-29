const int red=9; // bunda 9.pine taktik diye oyle
const int green=10; 
const int blue =11;
const int sure=1000; // bekleme suresi 
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
   digitalWrite(red,HIGH);
   delay(sure);
   digitalWrite(red,LOW);
   digitalWrite(green,HIGH);
   delay(sure);
   digitalWrite(green,LOW);
   digitalWrite(blue,HIGH);
   delay(sure);
   digitalWrite(green,HIGH);
   digitalWrite(red,HIGH);
   delay(sure); 
   digitalWrite(green,LOW);
   digitalWrite(red,LOW);
   digitalWrite(blue,LOW);
} 
// normalde bu rgb ledi katot diye böyl yaptık ama aslinda anot diye low
// larin hepsi high highların hepsi low 




