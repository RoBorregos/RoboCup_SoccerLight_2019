/*#include <PixySPI_SS.h>
#include <PixyI2C.h>
#include <Pixy.h>
#include <TPixy.h>
#include <PixyUART.h>*/

#include <Adafruit_BNO055.h>
#include <LiquidCrystal_I2C.h>
#include <Pixy2.h>
#include <HTInfraredSeeker.h>
#include <Wire.h>

#define BNO055_SAMPLERATE_DELAY_MS (100)
Adafruit_BNO055 bno = Adafruit_BNO055();

LiquidCrystal_I2C lcd(0x27,16,2);

int DirectionAngle(byte Direction)
{
  return Direction * 30 - 150;
}

const int com = A0;
const int s0 = 9;
const int s1 = 8;
const int s2 = 7;
const int pr8 = A1;
const int pr9 = A2;
const int pr10 = A3;
const int pr11 = A4;
const int pr12 = A5;
const int pr13 = A6;
const int pr14 = A7;
int PRs[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
const int ledPin = 39;

bool BNOStart = true;
bool LCDStart = true;
bool pixy1Start = true;
bool pixy2Start = true;
bool seekerStart = true;

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  //BNOCalibration();
  //LCDCalibration();
  //PRCalibration();
  //pixy1Calibration();
  pixy2Calibration();
  //seekerCalibration();
}
