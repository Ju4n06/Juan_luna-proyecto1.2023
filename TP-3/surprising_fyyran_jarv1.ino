
#define BUTTON_PIN  2
#define POT1_PIN  A0   
#define POT2_PIN  A1 
#define POT3_PIN  A2 
#define rgbV 3
#define rgbA 4
#define rgbR 5



int rojo = 0;
int verde = 0;
int azul = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(rgbR, OUTPUT);
  pinMode(rgbA, OUTPUT);
  pinMode(rgbV, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    Serial.println("Tiene 10 s para configurar el color del led....");
    delay(10000);
    rojo = map(analogRead(POT1_PIN), 0, 1023, 0, 255);
    verde = map(analogRead(POT2_PIN), 0, 1023, 0, 255);
    azul = map(analogRead(POT3_PIN), 0, 1023, 0, 255);
    analogWrite(rgbR , rojo);
    analogWrite(rgbV , verde);
    analogWrite(rgbA , azul);
    Serial.print("El led esta usando esta configuración de colores RGB: (");
    Serial.print(rojo);
    Serial.print("; ");
    Serial.print(azul);
    Serial.print("; ");
    Serial.print(verde);
    Serial.println(")");
  }
}
