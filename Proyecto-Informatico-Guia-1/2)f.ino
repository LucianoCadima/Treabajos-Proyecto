void setup()
{
  pinMode( 3 , OUTPUT );
  pinMode( A0 , INPUT );
}

void loop()
{
  int potValue = analogRead(A0);
  int delayTime = map(potValue, 0, 1023, 200, 10000);
  analogWrite( 3 , 255 );
  delay(delayTime / 2);
  analogWrite( 3 , 0 );
  delay(delayTime / 2);
}