
void setup()
{
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
  pinMode(12, INPUT_PULLUP);
}

void loop()
{
  int boton2 = digitalRead(12);

  if (boton2 == LOW) {
    analogWrite(2, 0);
    analogWrite(3, 0);
    analogWrite(4, 0);

    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);
  } else {
    int pot = analogRead(A0);
    
    int delaye = map(pot, 0, 1023, 200, 1500);

    analogWrite(2, 255);
    analogWrite(3, 0);
    analogWrite(4, 0);
    delay(delaye);
    analogWrite(2, 0);
    analogWrite(3, 0);
    analogWrite(4, 0);

    tone(11, 1000); 
    delay(100);
    noTone(11);

    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    delay(delaye);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    tone(11 ,1000); 
    delay(100);
    noTone(11);

    analogWrite(8,255);
    analogWrite(9, 0); 
    analogWrite(10, 255); 
    delay(delaye);
    analogWrite(8, 0);
    analogWrite(9, 0);
    analogWrite(10, 0);

    tone(11, 1000); 
    delay(100);
    noTone(11);
  }

 

 
}