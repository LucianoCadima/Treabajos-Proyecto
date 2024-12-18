const int boton = 1;
int val = 0;
int cont = 0;
int old_val = 0;

void setup()
{
  pinMode( 2 , INPUT );
  pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT );
  pinMode( 5 , OUTPUT );
}

void loop()
{
  val = digitalRead( 2 );
  if ( (val == HIGH) && (old_val == LOW) ){
  cont = 1+cont;
  delay(10);
  }
  old_val = val;
  if ( cont == 1 ){
   digitalWrite( 3 , HIGH );
   digitalWrite( 4 , HIGH );
   digitalWrite( 5 , HIGH );
  }  
  if ( cont == 2 ){
   digitalWrite( 3 , LOW );
   digitalWrite( 4 , LOW );
   digitalWrite( 5 , LOW );
  }
  if ( cont == 3 ){
   digitalWrite( 3 , HIGH );
   digitalWrite( 4 , LOW );
   digitalWrite( 5 , LOW );
  }
  if ( cont == 4 ){
   digitalWrite( 3 , LOW );
   digitalWrite( 4 , HIGH );
   digitalWrite( 5 , LOW );
  }
  if ( cont == 5 ){
   digitalWrite( 3 , LOW );
   digitalWrite( 4 , LOW );
   digitalWrite( 5 , HIGH );
  }
  if (cont ==6){
    digitalWrite( 3 , HIGH );
   digitalWrite( 4 , HIGH );
   digitalWrite( 5 , HIGH );
  }
}