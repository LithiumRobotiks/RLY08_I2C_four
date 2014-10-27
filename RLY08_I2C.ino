//Incluir librería Wire
#include <Wire.h>
//Colocar la dirección del RLY08
#define direccion1 0x38 //para 0x70 default
#define direccion2 0x39  //para 0x72
#define direccion3 0x3A
#define direccion4 0x3B
int retardo=500;

void setup()
{
  Serial.begin(9600);
  Wire.begin();
  Serial.println("Inicio de comunicacion");
 Serial.println("Iniciar switcheo? S/N?"); 
}

void loop()
{
 while(Serial.available())
  {
    char c=Serial.read();
    
    if(c == 'S')
    {
      switcheo();
      delay(retardo);
  
      Wire.beginTransmission(direccion1);
      Wire.write(1);
      Wire.write(0x00);
      Wire.endTransmission();
      Wire.beginTransmission(direccion2);
      Wire.write(1);
      Wire.write(0x00);
      Wire.endTransmission();
      Wire.beginTransmission(direccion3);
      Wire.write(1);
      Wire.write(0x00);
      Wire.endTransmission();
      Wire.beginTransmission(direccion4);
      Wire.write(1);
      Wire.write(0x00);
      Wire.endTransmission();
    }
    
  }
}

void switcheo (){
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x01);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x01);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x02);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x02);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x04);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x04);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x08);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x08);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x10);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x10);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x20);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x20);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x40);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x40);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x80);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x80);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  //Segunda vuelta ////////////////////////////////////////////////////////////////////////////////////////////
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x01);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x01);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x02);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x02);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x04);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x04);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x08);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x08);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x10);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x10);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x20);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x20);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x40);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x40);
  Wire.endTransmission();
  
  delay(retardo);
  
  Wire.beginTransmission(direccion1);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion2);
  Wire.write(1);
  Wire.write(0x80);
  Wire.endTransmission();
  Wire.beginTransmission(direccion3);
  Wire.write(1);
  Wire.write(0x00);
  Wire.endTransmission();
  Wire.beginTransmission(direccion4);
  Wire.write(1);
  Wire.write(0x80);
  Wire.endTransmission();
}
