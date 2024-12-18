const int potPinR = A0;     
const int potPinB = A1;     
const int potPinG = A2;     

int buttonState = 0;        
int lastButtonState = 0;    
bool ledOn = false;         

void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(digitalRead(2));

 
  if (buttonState == HIGH && lastButtonState == LOW) {
    if (!ledOn) {
      Serial.println("Tiene 5 s para configurar el color del led....");
      delay(5000); 

      
      int redValue = analogRead(potPinR);
      int blueValue = analogRead(potPinB);
      int greenValue = analogRead(potPinG);

      
      redValue = map(redValue, 0, 1023, 0, 255);
      blueValue = map(blueValue, 0, 1023, 0, 255);
      greenValue = map(greenValue, 0, 1023, 0, 255);

      
      analogWrite(3, redValue);
      analogWrite(5, blueValue);
      analogWrite(6, greenValue);

      Serial.print("El led esta usando esta configuración de colores RGB: ");
      Serial.print("(");
      Serial.print(redValue);
      Serial.print("; ");
      Serial.print(greenValue);
      Serial.print("; ");
      Serial.print(blueValue);
      Serial.println(")");

      
      delay(5000);

      
      analogWrite(3, 0);
      analogWrite(5, 0);
      analogWrite(6, 0);

      ledOn = true;
    } else {
      
      ledOn = false;
    }
  }

  
  lastButtonState = buttonState;
}