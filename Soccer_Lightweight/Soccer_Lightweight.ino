#include <HTInfraredSeeker.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>

/* BNO055 Variables*/
#define BNO055_SAMPLERATE_DELAY_MS (100)

Adafruit_BNO055 bno = Adafruit_BNO055();

int orientationAngle = 0;
unsigned long long angleCheckTime = 0;

/* TSOP Variables */
//const int IRSensor = ;
//int IRValue = 0;

/* Motors Variables */
const int motor1A = 2;
const int motor1B = 3;

const int motor2A = 4;
const int motor2B = 5;

const int motor3A = 6;
const int motor3B = 7;

/*Pins for Nano Communication*/
const int n1 = 52; 
const int n2 = 50;
const int n3 = 48;
const int n4 = 46;
const int n5 = 44;

/* LED */
const int ledPin = 12;

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
  //pinMode(LD, OUTPUT);
  //digitalWrite(LD, LOW);
  //pinMode(IRSensor, INPUT);

  /* Seeker Setup */
  InfraredSeeker::Initialize();

  /* BNO055 Calibration Check */
  while(!Adafruit_BNO055::isFullyCalibrated())
  {
    orientationStatus(); 
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(500);
  }

  for(int i = 0; i < 5; ; i++)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}

void loop()
{
  Seeker();
}
