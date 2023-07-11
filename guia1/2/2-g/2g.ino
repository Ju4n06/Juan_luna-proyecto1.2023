/*EJEMPLO DE PRACTICA No. 9 Potenciómetro y buzzer*/

int salidaBuzzer =9;//Pin salida buzzer
int potenciometro = A0;// Pin de entrada potenciómetro
float lectura;//Lectura de potenciometro

//Frecuencias a las que osila el sonido
int FreqMin = 100; 
int FreqMax = 1000;

void setup() {
  pinMode(salidaBuzzer, OUTPUT);
  pinMode(potenciometro, INPUT);
}

void loop() {
  lectura = analogRead(potenciometro);
  float frecuencia = map(lectura, 0, 1023, FreqMin, FreqMax);
  tone (salidaBuzzer, frecuencia);
  delay(500);
}