#include <HTInfraredSeeker.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

/*BNO055*/
int angulo = 0;
unsigned long long tiempo = 0;

/*TSOP  */
/*const int IRSensor = ;
int IRValor = 0;*/

/*Motor 1*/
const int motor1A = 6;
const int motor1B = 7;

/*Motor 2*/
const int motor2A = 8;
const int motor2B = 9;

/*Motor 3*/
const int motor3A = 10;
const int motor3B = 11;

/*/////////////////////////////Fotoresistencias//////////////////////*/
int pinLDR = 0;
int valorLDR = 0;  
//int LD = 8;

/*////////////////////PROGRAMACIÓN DEL SEEKER////////////////////////*/
int DirectionAngle(byte Direction)
{
  return Direction * 30 - 150;
}

/*Adafruit_BNO055 bno = Adafruit_BNO055(55);*/

void setup()
{
  Serial.begin(9600);
  
  InfraredSeeker::Initialize();
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  pinMode(motor3A, OUTPUT);
  pinMode(motor3B, OUTPUT);

  pinMode(LD, OUTPUT);
  digitalWrite(LD, LOW);
  /*pinMode(IRSensor, INPUT);*/

  /*bno.setExtCrystalUse(true);*/
}

void loop()
{
  Seeker();
}
