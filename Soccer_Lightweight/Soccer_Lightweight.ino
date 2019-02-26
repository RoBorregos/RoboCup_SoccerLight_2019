#include <HTInfraredSeeker.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

/* BNO055 Variables*/
#define BNO055_SAMPLERATE_DELAY_MS (100)

Adafruit_BNO055 bno = Adafruit_BNO055();

int angulo = 0;
unsigned long long tiempo = 0;

/* TSOP Variables */
/*const int IRSensor = ;
int IRValor = 0;*/

/* Photoresistors Variables */
int pinLDR = 0;
int valorLDR = 0;  
//int LD = 8;

/* Motors Variables */
const int motor1A = 6;
const int motor1B = 7;

const int motor2A = 8;
const int motor2B = 9;

const int motor3A = 10;
const int motor3B = 11;

/* Seeker Program */
int DirectionAngle(byte Direction)
{
  return Direction * 30 - 150;
}

void setup()
{
  Serial.begin(9600);

  /* BNO055 Setup */
  if(!bno.begin())
  {
    Serial.print("Ooops, no BNO055 detected ...");
  }
  delay(1);
  bno.setExtCrystalUse(true);
  
  /* Motors Setup */
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  pinMode(motor3A, OUTPUT);
  pinMode(motor3B, OUTPUT);

  /* Photoresistors Setup */
  pinMode(LD, OUTPUT);
  digitalWrite(LD, LOW);
  /*pinMode(IRSensor, INPUT);*/

  /* Seeker Setup */
  InfraredSeeker::Initialize();
}

void loop()
{
  Seeker();
}
