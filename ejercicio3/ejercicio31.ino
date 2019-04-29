int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int sonido = 9;
int velocidad = 300;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(sonido, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(velocidad); 
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(velocidad); 
  
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(velocidad);
  
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(sonido,HIGH);
  delay(velocidad);
  
  digitalWrite(led4,LOW);
  tone(sonido, 440);
  noTone(sonido);
  delay(velocidad);
  
}