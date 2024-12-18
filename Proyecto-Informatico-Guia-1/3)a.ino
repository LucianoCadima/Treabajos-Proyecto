// C++ code
const int buzzerPin = 6;
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
 int frequency = map(buzzerPin , 0, 1023, 10, 100);
 analogWrite(3,255);
 delay(50);
 analogWrite(3,0);
 delay(50);
 analogWrite(5,255);
 delay(50);
 analogWrite(5,0); 
 delay(50);
 tone(buzzerPin, frequency);
}