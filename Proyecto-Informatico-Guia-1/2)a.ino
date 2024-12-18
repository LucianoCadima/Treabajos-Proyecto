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
  analogWrite(5,200);
  analogWrite(6,150);
  analogWrite(9,100);
  analogWrite(10,50);
   
}