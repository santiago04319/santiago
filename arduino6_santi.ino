int temperatura = 0; //define una variable y la iguala a cero

void setup()
{
  pinMode(A1, INPUT); //define el pin a1 como entrada
  pinMode(10, OUTPUT); //define el pin 10 como salida
  pinMode(8, OUTPUT); //define el pin 8 como salida
  Serial.begin(9600); //da una velocidad de 9600 baudios

}

void loop()
{
  temperatura = -40 + 0.488155 * (analogRead(A1) - 20); //a la variable le asigna el valor de la lectura analògica del pin A1 por los factores de conversiòn
  
  if (temperatura > 35) { //si la temperatura es mayor a 35 se  ejecuta el còdigo dentro del if
    digitalWrite(10, HIGH); //prende el pin 10
    digitalWrite(8, LOW); //apaga el pin 8
  } else { //se ejecuta el còdigo dentro del else
    digitalWrite(10, LOW); //apaga el pin 10
    digitalWrite(8, HIGH); //prende el pin 8
  }
  Serial.println(temperatura); //muestra en pantalla el valor de temperatura
  delay(10); //espera de 10 segundos para volver a empezar
}
