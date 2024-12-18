const int buttonPin = 2;       
const int potPin = A0;         
const int numLeds = 5;        
const int ledPins[numLeds][3] = {{3, 4, 5}, {6, 7, 8}, {9, 10, 11}, {12, 13, A1}, {A2, A3, A4}};  
int ledIndex = 0;              
int brightness = 0;            
int fadeAmount = 5;            
int speed = 100;               
bool sequenceRunning = false;  

void setup() {
  
  pinMode(buttonPin, INPUT_PULLUP);
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i][0], OUTPUT);
    pinMode(ledPins[i][1], OUTPUT);
    pinMode(ledPins[i][2], OUTPUT);
  }
}

void loop() {
 
  if (digitalRead(buttonPin) == LOW && !sequenceRunning) {
    sequenceRunning = true;
    ledIndex = 0;
    brightness = 0;
  }

  if (sequenceRunning) {
    speed = map(analogRead(potPin), 0, 1023, 10, 500); 
    
    brightness += fadeAmount;
    if (brightness <= 0 || brightness >= 255) {
      fadeAmount = -fadeAmount;
      ledIndex = (ledIndex + 1) % numLeds; 
    }
    
    analogWrite(ledPins[ledIndex][0], brightness);
    analogWrite(ledPins[ledIndex][1], brightness);
    analogWrite(ledPins[ledIndex][2], brightness);
    delay(speed); 
  }
}