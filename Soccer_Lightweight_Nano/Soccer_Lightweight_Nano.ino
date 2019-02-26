
//MUX OUTPUT
const int Com = 1; 

//MUX INPUT
int s0 = 0;
int s1 = 0;
int s2 = 0;

//Variables for the MUX function 
bool a, b, c;

//Pins of the FR
int fr8 = A0;// Placa 2
int fr9 = A1; //Placa 2
int fr10 = A2; // Placa 3 
int fr11 = A3;
int fr12 = A4;
int fr13 = A5;
int fr14 = A6;
int i;

//Array of the MUX
int fotos[14] = {0, 0, 0, 0, 0, 0, 0, 0};

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
