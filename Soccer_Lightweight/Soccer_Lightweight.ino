#include <HTInfraredSeeker.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <math.h>

/* IRSeeker Variables */
int currentSeekerAngle = 0;
int lastDirAngle = 0;

int DirectionAngle(byte Direction)
{
  return Direction * 30 - 150;
}

/* BNO055 Variables*/
#define BNO055_SAMPLERATE_DELAY_MS (100)

Adafruit_BNO055 bno = Adafruit_BNO055();

int orientationAngle = 0;
int setPoint = 0;
const int resetSetPoint = 31;

unsigned long long angleCheckTime = 0;
unsigned long long angleFixTime = 0;

/* TSOP Variables */
const int TSOPSensor0 = 26;
const int TSOPSensor10 = 24;
int TSOPValue0 = 0;
int TSOPValue10 = 0;

/* Motors Variables */
const int motor1A = 2;
const int motor1B = 3;

const int motor2A = 4;
const int motor2B = 5;

const int motor3A = 6;
const int motor3B = 7;

const int recoil;

/* Nano Communication */
const int nanoPin1 = 52; 
const int nanoPin2 = 50;
const int nanoPin3 = 48;
const int nanoPin4 = 46;
const int nanoPin5 = 44;
bool nano1 = 0;
bool nano2 = 0;
bool nano3 = 0;
bool nano4 = 0;
bool nano5 = 0;
unsigned long long lineDelayTime = 0;

/* LED */
const int ledPin = 39;
const int ledF = 36;
const int ledR = 38;
const int ledL = 40;

/*Line loop*/
bool lineLoop = false;
unsigned long long lineTime = 0;

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

  /* LED Setup */
  pinMode(ledPin, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledL, OUTPUT);

  /* Photoresistors Setup */
  pinMode(nano1, INPUT);
  pinMode(nano2, INPUT);
  pinMode(nano3, INPUT);
  pinMode(nano4, INPUT);
  pinMode(nano5, INPUT);

  /* Seeker Setup */
  InfraredSeeker::Initialize();

  /* BNO055 Calibration Check */
  Adafruit_BNO055 BNO055;
  
  while(orientationStatus() != 3)
  {
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  Serial.println("Calibrated");

  for(int i = 0; i < 15; i++)
  {
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  orientationAngle = 0;
  delay(2000);
  sensors_event_t event;
  bno.getEvent(&event);
  setPoint = event.orientation.x;
  Serial.println(setPoint);
}

void loop()
{
  lines();
  seeker();
  angleFix();
  
  /*if(digitalRead(resetSetPoint) == HIGH)
  {
    sensors_event_t event;
    bno.getEvent(&event);
    setPoint = event.orientation.x;
  }*/
}
