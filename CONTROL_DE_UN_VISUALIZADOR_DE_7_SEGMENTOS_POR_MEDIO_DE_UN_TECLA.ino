/*
Fundacion Kinal
Centro Educativo Tecnico Laboral
Electronica
Grado: Quinto
Seccion: A
Cuerso: Taller de Electronica Digital y Reparacion de
Computadoras I
Nombre: Jose Sebastian Bocaletti Aguilar
Carnet: 2022235
*/
#include <Keypad.h>
#define COLUMNAS 4
#define FILAS 4
#define pina 10
#define pinb 11
#define pinc 12
#define pind 14
#define pine 15
#define pinf 16
#define ping 17


char keys[FILAS ][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};


byte pines_filas[FILAS] = {9,8,7,6};
byte pines_columnas[COLUMNAS] = {5,4,3,2};

Keypad teclado = Keypad( makeKeymap(keys), pines_filas, pines_columnas, FILAS,COLUMNAS);

void setup() {
Serial.begin(9600);
pinMode(pina, OUTPUT);
pinMode(pinb, OUTPUT);
pinMode(pinc, OUTPUT);
pinMode(pind, OUTPUT);
pinMode(pine, OUTPUT);
pinMode(pinf, OUTPUT);
pinMode(ping, OUTPUT);

}

void loop() 
{
 char tecla = teclado.getKey();
  if (tecla != NO_KEY) {
  switch(tecla)
  {
    case '0':
      
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);
    delay(500);
    
    break;
    case '1':
    
    digitalWrite(pina, LOW);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, LOW);
    delay(500);
    
    break;
    case '2':
      
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(500);
      
    break;
    case '3':
      
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(500);
  
    break;
    case '4':
     
    digitalWrite(pina, LOW);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break;
    case '5':
    
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
     
    break;
    case '6':
    
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break;
    case '7':

    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, LOW);
    delay(500);
    
    break;
    case '8':
  
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    break;
    case '9':
    
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, LOW);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break;
    case 'A':
    
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, LOW);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break;
    case 'B':
    
    digitalWrite(pina, LOW);
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break;
    case 'C':
    
    digitalWrite(pina, LOW);
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break; 
    case 'D':
    
    
    digitalWrite(pina, LOW);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, LOW);
    digitalWrite(ping, HIGH);
    delay(500);
  
    break;
    case '*':
    
      digitalWrite(pina, HIGH);
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    
    break;
    case '#':
    
     digitalWrite(pina, HIGH);
    digitalWrite(pinb, LOW);
    digitalWrite(pinc, LOW);
    digitalWrite(pind, LOW);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, HIGH);
    delay(500);
    
    break;  
    case NO_KEY:
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW);    
    break;
}
 
    
}
    else 
    digitalWrite(pina, HIGH);
    digitalWrite(pinb, HIGH);
    digitalWrite(pinc, HIGH);
    digitalWrite(pind, HIGH);
    digitalWrite(pine, HIGH);
    digitalWrite(pinf, HIGH);
    digitalWrite(ping, LOW); 
}
