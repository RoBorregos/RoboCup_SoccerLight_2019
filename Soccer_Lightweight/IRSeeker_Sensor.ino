//NOTE! Test each case to perfect movements
void Seeker()
{
  //TSOPValue1 = digitalRead(TSOPSensor1);
  //TSOPValue2 = digitalRead(TSOPSensor2);
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 1) //Back Left
  {
    if(currentSeekerAngle != 1)
    {
      currentSeekerAngle = 1;
      motors(6);
      delay(10);
    }
    motors(3);
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    if(currentSeekerAngle != 2)
    {
      currentSeekerAngle = 2;
      motors(6);
      delay(10);
    }
    motors(3);
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    if(currentSeekerAngle != 3)
    {
      currentSeekerAngle = 3;
      motors(6);
      delay(10);
    }
    motors(4);
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    if(currentSeekerAngle != 4)
    {
      currentSeekerAngle = 4;
      motors(6);
      delay(10);
    }
    motors(5);
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    if(currentSeekerAngle != 5)
    {
      currentSeekerAngle = 5;
      motors(6);
      delay(10);
    }
    motors(0);
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    if(currentSeekerAngle != 6)
    {
      currentSeekerAngle = 6;
      motors(6);
      delay(10);
    }
    motors(1);
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    if(currentSeekerAngle != 7)
    {
      currentSeekerAngle = 7;
      motors(6);
      delay(10);
    }
    motors(2);
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    if(currentSeekerAngle != 8)
    {
      currentSeekerAngle = 8;
      motors(6);
      delay(10);
    }
    motors(3);
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    if(currentSeekerAngle != 9)
    {
      currentSeekerAngle = 9;
      motors(6);
      delay(10);
    }
    motors(3);
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    if(currentSeekerAngle != 0)
    {
      currentSeekerAngle = 0;
      motors(6);
      delay(10);
    }
    motors(6);
  }
  /*else if(TSOPValue1 > 100) //Back Left
  {
    motors(2);
  }
  else if(TSOPValue2 > 100) //Back Right
  {
    motors(4);
  }*/
}
