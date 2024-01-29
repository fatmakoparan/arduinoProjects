const int analogGiris=A0;
//gerilim bolucu 
void setup() {
  pinMode(analogGiris,INPUT);
  Serial.begin(9600); 
}

void loop() {
  int deger=analogRead(analogGiris);
  Serial.println("deger: ");// println deki ln bi alt satirdaki degeri almaya yariyor
  Serial.println(deger); //degiskenlerde tirnak konmaz stringlerde konur
  delay(1000);
}
// potansiyometre ayarli direnc demek.Bu kodla onu da calistirabiliriz
//potansiyometerenin orta bacagi hareketli kismiydi. 
//sol ve sag bacagi arasindaki direnc 10k
//orta bacak ise direnc uzerinde sola,saga hareket ettirdigin zaman
// 0 dan 10 k ya kadar deger aliyor A0 a baglaniyor
// bacaktan birini(sag) + ya (5v) digeri GND ye veriliyor
 