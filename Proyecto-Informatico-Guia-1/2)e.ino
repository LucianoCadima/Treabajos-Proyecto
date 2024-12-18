// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  analogWrite(3,analogRead(A0));
  analogWrite(5,analogRead(A1));
  analogWrite(6,analogRead(A2));
}