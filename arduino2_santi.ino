#define V1  4
#define A1  3
#define R1  2
#define V2  7
#define A2  6
#define R2  5
//Le define un nombre a los pines 

void setup()
{
  pinMode(2, OUTPUT);//define el pin 2 como salida
  pinMode(3, OUTPUT);//define el pin 3 como salida 
  pinMode(4, OUTPUT);//define el pin 4 como salida 
  pinMode(5, OUTPUT);//define el pin 5 como salida 
  pinMode(6, OUTPUT);//define el pin 6 como salida 
  pinMode(7, OUTPUT);//define el pin 7 como salida 
}

void loop()
{
  digitalWrite(V1, HIGH);//hace que v1 se encienda 
  digitalWrite(R2, HIGH);//hace que r2 se encienda 
  delay(10000); // espera 10 segundos 
  digitalWrite(V1,LOW);//hace que v1 se apague 
  
  digitalWrite(A1,HIGH);//hace que a1 se encienda
  delay(2000); //espera 2 segundos
  digitalWrite(A1,LOW);//hace que a1 se apague
  
  digitalWrite(R2,LOW);//hace que r2 se apague
  digitalWrite(V2,HIGH);//hace que v2 se encienda
  digitalWrite(R1,HIGH);//hace que r1 se encienda
  delay(10000);//espera 10 segundos
  
  digitalWrite(V2,LOW);//hace que v2 se apague
  digitalWrite(A2,HIGH);//hace que a2 se encienda
  delay(2000);//espera 2 segundos 
  digitalWrite(A2,LOW);//hace que a2 se apague
  digitalWrite(R1,LOW);//hace que r1 se apague
  
  
  
}
