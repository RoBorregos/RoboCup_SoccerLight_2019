/******************************/
/*         Variables          */
/******************************/

//Communication-to-ArduinoMega Variables
const int comPin1 = 4;
const int comPin2 = 5;
const int comPin3 = 6;

const int led = 13;

//Multiplexer Variables
const int com = A0;
const int s0 = 9;
const int s1 = 8;
const int s2 = 7;

//Photoresistors Variables
int PRs[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int PRRanges[15];

const int pr8 = A1;
const int pr9 = A2;
const int pr10 = A3;
const int pr11 = A4;
const int pr12 = A5;
const int pr13 = A6;
const int pr14 = A7;

//Line Algorithm Variables
bool loopcase = false;

void setup()
{
  //Initialize serial communication
  Serial.begin(9600);

  //Setup multiplexer pins
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(com, INPUT);
  
  pinMode(led, OUTPUT);

  //Setup Communication-to-ArduinoMega pins
  pinMode(comPin1, OUTPUT);
  pinMode(comPin2, OUTPUT);
  pinMode(comPin3, OUTPUT);
} 

void loop()
{
  /*--************************************************************
   * 
   *  --
   *  
   **************************************************************/
  
  PR_Combinations();
}
