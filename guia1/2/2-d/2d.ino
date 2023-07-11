#define LEDR 3
#define LEDB 5
#define LEDG 6
#define LEDR2 11
#define LEDB2 10
#define LEDG2 9
#define potenciometro A0
int lectura = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(LEDG, OUTPUT);
    
  pinMode(LEDR2, OUTPUT);
  pinMode(LEDB2, OUTPUT);
  pinMode(LEDG2, OUTPUT);
 
}

void loop() {
lectura = analogRead(0);
Serial.println(lectura);
  
analogWrite(LEDR,0);
analogWrite(LEDB,255);
analogWrite(LEDG,255);
delay(lectura);

analogWrite(LEDR,0);
analogWrite(LEDB,0);
analogWrite(LEDG,0);
delay(lectura);
  
  
analogWrite(LEDR2,255);
analogWrite(LEDB2,255);
analogWrite(LEDG2,0);
delay(lectura);
 
analogWrite(LEDR2,0);
analogWrite(LEDB2,0);
analogWrite(LEDG2,0);
delay(lectura);


  
}