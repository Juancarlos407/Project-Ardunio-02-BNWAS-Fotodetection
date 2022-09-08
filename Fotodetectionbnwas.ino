
int A=9; //Led//
int foto=3; //Fotoresistencia en el pin analogo A3//
int measure=0;
int light=0;

void setup()
{
 {
  pinMode(A,OUTPUT); //declaramos los leds como salidas//
 }
}

void loop() 
{
 measure=analogRead (foto); //lectura de la fotoresistencia//
 Serial.println("Lectura ");
 Serial.println(measure);
 delay (500);
    if (measure < 1)
{ digitalWrite(A,HIGH);
delay (200);
digitalWrite(A,LOW);
delay (50);}
 
    if (measure > 1) 
  {digitalWrite(A,LOW);}
 delay (500);
}
