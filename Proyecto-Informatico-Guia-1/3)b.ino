int potValue = 0;
bool buttonState = false;
bool lastButtonState = false;
bool ledState = false;


void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(A0, INPUT);
}

void loop() 
{
  
  buttonState = digitalRead(5);
  
  if (buttonState != lastButtonState) 
  {
    if (buttonState == LOW) 
    {
      ledState = !ledState;
    }
    delay(50); 
  }
  lastButtonState = buttonState;
  
  if (ledState) 
  {
    
    potValue = analogRead(A0);

    int redValue = map(potValue, 0, 341, 0, 255);     
    int blueValue = map(potValue, 682, 1023, 0, 255); 
    int greenValue = map(potValue, 341, 682, 0, 255); 
    

    analogWrite(2, redValue);
    analogWrite(3, blueValue); 
    analogWrite(4, greenValue);
    
  } else {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
}