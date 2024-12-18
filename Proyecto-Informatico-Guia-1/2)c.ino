// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  analogWrite(3,0);
  analogWrite(5,255);
  analogWrite(6,255);
  delay(300);
  analogWrite(3,0);
  analogWrite(5,150);
  analogWrite(6,150);
  delay(300);
  analogWrite(3,0);
  analogWrite(5,50);
  analogWrite(6,50);
  delay(300);
  analogWrite(3,255);
  analogWrite(5,0);
  analogWrite(6,0);
  delay(300);
  analogWrite(3,150);
  analogWrite(5,0);
  analogWrite(6,0);
  delay(300);
  analogWrite(3,50);
  analogWrite(5,0);
  analogWrite(6,0);
  delay(300);
  analogWrite(3,255);
  analogWrite(5,0);
  analogWrite(6,255);
  delay(300);
  analogWrite(3,150);
  analogWrite(5,0);
  analogWrite(6,150);
  delay(300);
  analogWrite(3,50);
  analogWrite(5,0);
  analogWrite(6,50);
}