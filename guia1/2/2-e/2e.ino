int Rojo = 11;
int Verde = 10;
int Azul = 9;

int pot0 = A0;
int pot1 = A1;
int pot2 = A2;

int valorsensor0 = 0;
int valorsensor1 = 0;
int valorsensor2 = 0;

float divisionR;
float divisionV;
float divisionA;

void setup()
{
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  float Constante = (float) 255 / 1023;
  valorsensor0 = analogRead(pot2);
  valorsensor1 = analogRead(pot1);
  valorsensor2 = analogRead(pot0);
  
  divisionR = Constante * valorsensor0;
  divisionV = Constante * valorsensor1;
  divisionA = Constante * valorsensor2;
  
  color(divisionR,divisionV, divisionA);
}

void color(int rojo, int verde, int azul)
{
  analogWrite(Rojo, 255-rojo);
  analogWrite(Verde, 255-verde);
  analogWrite(Azul, 255-azul);
}