void setup()
{
  pinMode(3, INPUT); //define el pin 3 como entrada
  pinMode(2, OUTPUT); //define el pin 2 como salida
  pinMode(1, OUTPUT); //define el pin 1 como salida
}

void loop()
{
  if (digitalRead(3) == HIGH) { //pone como condición para ejecutar las líneas de abajo, que el pin 3 esté en alto
    digitalWrite(2, HIGH); // ejecuta si la condición es verdadera, prende el pin 2
    digitalWrite(1, LOW); // ejecuta si la condición es verdadera, apaga el pin 1
  } else { //ejecuta esta parte del código
    digitalWrite(2, LOW); //ejecuta si la condición es falsa y apaga el pin 2
    digitalWrite(1, HIGH); //ejecuta si la condición es falsa y  prende el pin 1
  }
  delay(10); // espera de 10 segundos 
}
