/*
INICIALIZAR EL PROGRAMA YA QUE ELE VALOR DE CADA FOTORESISTENCIA SEA EL VALOR INICIAL DE LA FOTO Y AGREGARLE UN RANGO

*/
//MUX OUTPUT
const int Com = A0; 

//MUX INPUT
int s0 = 0;
int s1 = 0;
int s2 = 0;

//Variables for the MUX function 
bool a, b, c;

//Pins of the PR
int pr8 = A1;
int pr9 = A2; 
int pr10 = A3; 
int pr11 = A4;
int pr12 = A5;
int pr13 = A6;
int pr14 = A7;
int i;

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
    pinMode(Com, INPUT);
    
      } 

  void loop() 
  {

    
      }
