// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  analogWrite(3,255);
  delay(1000);
  analogWrite(5,200);
  delay(1000);
  analogWrite(6,150);
  delay(1000);
  analogWrite(9,100);
  delay(1000);
  analogWrite(10,0);
   
  delay(1000);
  
  analogWrite(3,0);
  delay(1000);
  analogWrite(5,0);
  delay(1000);
  analogWrite(6,0);
  delay(1000);
  analogWrite(9,0);
  delay(1000);
  analogWrite(10,0);
  
  delay(1000);
  
  analogWrite(3,0);
  delay(1000);
  analogWrite(5,100);
  delay(1000);
  analogWrite(6,150);
  delay(1000);
  analogWrite(9,200);
  delay(1000);
  analogWrite(10,250);
  
  delay(1000);
}