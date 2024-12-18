// C++ code


void setup()
{
  pinMode(12,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(2,INPUT);//
  Serial.begin(9600);
}
//
void loop()
{
  if (digitalRead(2) == LOW)
  	{
  
    digitalWrite( 12 , HIGH);
    delay(500);
  	}
	if (digitalRead(2) == LOW)
    {
    digitalWrite( 3 , HIGH );
    delay(500);
    }
  	if (digitalRead(2) == LOW)
  	{
    digitalWrite( 4 , HIGH );
    delay(500);
    }
	if (digitalRead(2) == LOW)
  	{
    digitalWrite( 5 , HIGH );
    delay(500);
	}
  	if (digitalRead(2) == LOW)
  	{
    digitalWrite( 6 , HIGH );
    delay(500);
    }
	if (digitalRead(2) == LOW)
    {
    digitalWrite( 7 , HIGH );
    delay(500);
    }
    if (digitalRead(2) == LOW)
  	{
    digitalWrite( 8 , HIGH );
    delay(500);
    }
  	if (digitalRead(2) == LOW)
  	{
    digitalWrite( 9 , HIGH );
    delay(500);
    }
	if (digitalRead(2) == LOW)
  	{
    digitalWrite( 10 , HIGH );
    delay(500);
    }
  	if (digitalRead(2) == LOW)
  	{
    digitalWrite( 11 , HIGH );
    delay(500);
    
    

    digitalWrite( 3 , LOW );
    digitalWrite( 4 , LOW );
    digitalWrite( 5 , LOW );
    digitalWrite( 6 , LOW );
    digitalWrite( 7 , LOW );
    digitalWrite( 8 , LOW );
    digitalWrite( 9 , LOW );
    digitalWrite( 10 , LOW );
    digitalWrite( 11 , LOW );
    digitalWrite( 12 , LOW );
    delay(500);
    }
}

 
