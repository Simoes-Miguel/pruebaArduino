#include <Servo.h>                    // Incluir la librería Servo
Servo servo1;                         // Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;
int posicion = 0;
int pin = 9;
int boton = 2;

/*estos booleanos sirven para definir 
que movimiento hace el servo*/
bool del = true;
bool atr = false;


void setup()
{
        servo1.attach(pin) ;             
  		// Conectar servo1 al pin 9
  		pinMode(boton, INPUT);
}

void loop()
{	
  servo1.write(posicion);
  while(digitalRead(boton) == HIGH){
    if(angulo == 180){
      del = false;
      atr = true;
    }
    if(angulo == 0){
      del = true;
      atr = false;
    }
    
    if(del == true){
    	angulo +=1 ;
        posicion = angulo;
      	servo1.write(angulo);
    	delay(25);
    }
    
    if(atr == true){
    	angulo -=1 ;
        posicion = angulo;
     	 servo1.write(angulo);
    	delay(25);
    }
  }
  
}