/*
INICIALIZAR EL PROGRAMA YA QUE ELE VALOR DE CADA FOTORESISTENCIA SEA EL VALOR INICIAL DE LA FOTO Y AGREGARLE UN RANGO
*/

//Communication pins for the Arduino Mega
const int comPin1 = 2;
const int comPin2 = 3;
const int comPin3 = 4;
const int comPin4 = 5;
const int comPin5 = 6;

//MUX OUTPUT
const int com = A0;

//MUX INPUT
const int s0 = 9;
const int s1 = 8;
const int s2 = 7;

//Pins of the PR
const int pr8 = A1;
const int pr9 = A2;
const int pr10 = A3;
const int pr11 = A4;
const int pr12 = A5;
const int pr13 = A6;
const int pr14 = A7;

//Array of the MUX
int PRs[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void setup()
{
  //Initialize Communication
  Serial.begin(9600);

  //Set Pins to input (HIGH, LOW)
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);

  //Set Com to OUTPUT
  pinMode(com, INPUT);
} 

void loop()
{
  linea();
Serial.print(PRs[2]);
Serial.print(" ");
Serial.println(PRs[3]);

}
