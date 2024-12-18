void setup()
{
  pinMode(3, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() 
{
  int potVal = analogRead(A0);
  int frequency = map(potVal, 0, 1023, 20, 20000);
  tone(3, frequency);
}