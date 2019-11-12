void seekerCalibration()
{
  /*Seeker Calibration********************************************
   * 
   *  This is the calibration function for the NXT IRSeeker sensor.
   *  The setup initializes the sensor.
   *  The rest of the body reads and then prints the direction, angle and strength of an infrared signal.
   *  It also turns on an LED if the direction is between 4 and 6.
   *  
   **************************************************************/

  //Setup
  if(seekerStart)
  {
    Serial.println("HiTechnic IRSeeker V2");
    Serial.println();
    Serial.println();
    Serial.println("Dir\tAngle\tStrength");
    Serial.println();
    InfraredSeeker::Initialize();
    seekerStart = false;
  }

  //Read infrared signal and print its direction, angle, and strength
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  Serial.print(InfraredBall.Direction);
  Serial.print("\t");
  Serial.print(DirectionAngle(InfraredBall.Direction));
  Serial.print("\t");
  Serial.print(InfraredBall.Strength);
  Serial.println();

  //Turn LED on if direction is between 4 and 6
  if(InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
