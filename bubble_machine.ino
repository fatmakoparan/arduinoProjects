#include <Servo.h>

Servo baloncukServo;

void setup() {
 baloncukServo.attach(9);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);

}

void loop() {
  for(int i=0; i<=5;i++)
  {
    //sabunlu suyun içinde 5 derecelik donus yapıp 5 6 kez donecek
    baloncukServo.write(60);
    delay(100);
    baloncukServo.write(65);
    delay(100);
  }
  baloncukServo.write(150);
  delay(100);
  digitalWrite(5,LOW);
  digitalWrite(4, HIGH);
  analogWrite(3,120);//120 PWM hizinda 
  delay(2000);
  digitalWrite(4,LOW);
}
