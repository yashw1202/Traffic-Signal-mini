// This code mimics the working of Traffic lights.
//i Used a big breadboard,Jumpers,leds and an arduino uno
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2,1);
  digitalWrite(7,1);
  digitalWrite(10,1);
  digitalWrite(13,1);
  
  delay(3*1000);
  digitalWrite(2,0);
  digitalWrite(3,1);
  delay(1*1000);
  digitalWrite(3,0);
  digitalWrite(4,1);
  digitalWrite(7,0);
  digitalWrite(5,1);

  delay(3*1000);
  digitalWrite(5,0);
  digitalWrite(6,1);
  delay(1*1000);
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(10,0);
  digitalWrite(8,1);

  delay(3*1000);
  digitalWrite(8,0);
  digitalWrite(9,1);
  delay(1*1000);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(13,0);
  digitalWrite(11,1);

  delay(3*1000);
  digitalWrite(11,0);
  digitalWrite(12,1);
  delay(1*1000);
  digitalWrite(12,0);
  digitalWrite(13,1);
  digitalWrite(14,0);
  digitalWrite(2,1);
  }
