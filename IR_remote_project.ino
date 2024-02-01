#include <IRemote.h>

int sensorPin=2;
int redPin=5;
int greenPin=6;
int bluePin=9;

byte red,green,blue;

IRrecv sensor(sensorPin);
decode_results deger;
void setup() {
 sensor.enableIRIn();
 pinMode (redPin,OUTPUT);
 pinMode (redPin,OUTPUT);
 pinMode (redPin,OUTPUT);
 Serial.begin(9600);
}

void loop() {
   if(sensor.decode(&deger))
   {
    Serial.print("Tuş kodu: ");
    Serial.prinln(deger.value, HEX);
    sensor.resume();

   if(deger.value == 0xFFA25D)
     red=red+32;
   if(deger.value == 0xFF629D)
     red=red-32;
   if(deger.value== 0xFF22DD)
     green == green+32;
   if(deger.value == 0xFF02FD)
     green == green-32;
   if(deger.value == 0xFFE01F)
     blue=blue+32;
   if(deger.value == 0xFFA857)
     blue=blue-32;
   if(deger.value == 0xFF38C7)
     blue=0,green=0,red=0;
     analogWrite(redPin,red);
     analogWrite(greenPin,green);
     analogWrite(bluePin,blue);
    
   }
   delay(10);
}
