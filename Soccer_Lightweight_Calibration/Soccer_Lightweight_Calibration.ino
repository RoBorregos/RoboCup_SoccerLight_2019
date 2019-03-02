#include <Adafruit_BNO055.h>
#include <HTInfraredSeeker.h>
#include <Wire.h>

#define BNO055_SAMPLERATE_DELAY_MS (100)
Adafruit_BNO055 bno = Adafruit_BNO055();

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

bool BNOStart = true;
bool seekerStart = true;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  /*BNOCalibration();
  PRCalibration();*/
  seekerCalibration();
}
