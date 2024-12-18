// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop()
{
 analogWrite(3, 255);
 delay(3000);
  
 analogWrite(3,0);
 delay(1000);

 analogWrite(5,255);
 delay(100);
  
 digitalWrite(4,HIGH);
 digitalWrite(7,HIGH);
 delay(3000);
  
 digitalWrite(4,LOW);
 digitalWrite(7,LOW);
 delay(1000);
  
 analogWrite(10,70);
 analogWrite(11,70);
 delay(3000);
 analogWrite(10,0);
 analogWrite(11,0);
  delay(1000);
  
}