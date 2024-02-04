#include <Servo.h>

Servo servoMotor; // Servo motor için
const int trigPin = 10;
const int echoPin = 11;
long duration;
int distance;

void setup() {
  servoMotor.attach(9); // Servo motorun bağlı olduğu pin
  pinMode(trigPin, OUTPUT); // HC-SR04 trig pinini çıkış olarak ayarla
  pinMode(echoPin, INPUT);  // HC-SR04 echo pinini giriş olarak ayarla
  Serial.begin(9600);       // Seri haberleşmeyi başlat
}

void loop() {
  for (int i = 15; i <= 165; i += 15) { // Servo motoru 15 derecelik adımlarla hareket ettir
    servoMotor.write(i);               // Servo motoru i açısına döndür
    delay(500);                        // Servo motorun dönüşünü bekleyin
    distance = readUltrasonicDistance(trigPin, echoPin);
    Serial.print(i);                   // Açıyı seri port üzerinden gönder
    Serial.print(",");
    Serial.println(distance);          // Mesafeyi seri port üzerinden gönder
    checkDistance(distance);           // Mesafeyi kontrol et ve uyarı ver
  }

  for (int i = 165; i > 15; i -= 15) { // Servo motoru geri döndür
    servoMotor.write(i);
    delay(500);
    distance = readUltrasonicDistance(trigPin, echoPin);
    Serial.print(i);
    Serial.print(",");
    Serial.println(distance);
    checkDistance(distance);           // Mesafeyi kontrol et ve uyarı ver
  }
}

int readUltrasonicDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); // Ultrasonik sinyali gönder
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Echo pininden yankı süresini ölç
  distance = duration * 0.034 / 2;  // Mesafeyi hesapla
  return distance;
}

void checkDistance(int distance) {
  if (distance <= 10) {
    Serial.println("Tehlike!"); // Eğer mesafe 10 cm veya daha az ise uyar
  } else {
    Serial.println("Stabil");   // Aksi durumda stabil mesajını göster
  }
}

