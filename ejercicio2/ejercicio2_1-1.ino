// the setup routine runs once when you press reset:
int velocidad = 500;
void setup() {
  // initialize the digital pin as an output.
	
  /*se le otorga a la variable i los valores de los pines
  correspondientes a cada led*/
  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i=11 ; i <= 13 ; i++)
  {
       digitalWrite( i , HIGH) ;
       delay (velocidad) ;
       digitalWrite( i , LOW);
       delay (velocidad) ;
    if(velocidad > 75){
    	velocidad -= 25;
    }
  }
}
