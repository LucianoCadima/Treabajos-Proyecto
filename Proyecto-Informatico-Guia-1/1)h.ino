int boton = 1;
int val = 0;
int state = 0;
int old_val = 0;
void setup()
{
  pinMode( 5 , INPUT_PULLUP);
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
}

void loop()
{
  val = digitalRead( 5 );
  if ( (val == LOW) && (old_val == HIGH) )
  {
  state = 1+state;
  delay(10);
  }  
  old_val = val;
  if ( state == 1 )
  {
  digitalWrite( 2 , HIGH );
  digitalWrite( 3 , LOW );  // ROJO
  digitalWrite( 4 , LOW );
  }  
  if ( state == 2 )
  {
  digitalWrite( 2 , LOW );
  digitalWrite( 3 , LOW );  //SE APAGA EL LED
  digitalWrite( 4 , LOW );
  }  
  if ( state == 3 ){
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , HIGH ); //CIAN
   digitalWrite( 4 , HIGH );
  }
  if ( state == 4 ){
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //SE APAGA EL LED
   digitalWrite( 4 , LOW );
  }
  if ( state == 5 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //VERDE
   digitalWrite( 4 , HIGH );
  }
  if ( state == 6 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //SE APAGA EL LED
   digitalWrite( 4 , LOW );
  }
  if ( state == 7 )
  {
   digitalWrite( 2 , HIGH );
   digitalWrite( 3 , HIGH ); //MAGENTA
   digitalWrite( 4 , LOW );
  }
  if ( state == 8 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //SE APAGA EL LED
   digitalWrite( 4 , LOW );
  }
  if ( state == 9 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , HIGH ); //AZUL
   digitalWrite( 4 , LOW );
  }
  if ( state == 10 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //SE APAGA EL LED
   digitalWrite( 4, LOW );
  }
  if ( state == 11 )
  {
   digitalWrite( 2 , HIGH );
   digitalWrite( 3 , HIGH ); //BLANCO
   digitalWrite( 4 , HIGH );
  }
  if ( state == 12 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //SE APAGA EL LED
   digitalWrite( 4 , LOW );
  }
  if ( state == 13 )
  {
   digitalWrite( 2 , HIGH );
   digitalWrite( 3 , LOW );  //AMARILLO
   digitalWrite( 4 , HIGH );
  }
  if ( state == 14 )
  {
   digitalWrite( 2 , LOW );
   digitalWrite( 3 , LOW ); //SE APAGA EL LED
   digitalWrite( 4 , LOW ); 
  }
 }