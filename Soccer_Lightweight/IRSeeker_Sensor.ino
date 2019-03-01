//NOTE! Test each case to perfect movements
void seeker()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  //TSOPValue1 = digitalRead(TSOPSensor1);
  //TSOPValue2 = digitalRead(TSOPSensor2);
  Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 1) //Back Left
  {
    motors(3);
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    motors(4);
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    motors(13);
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motors(0);
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    motors(10);
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    motors(2);
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    motors(3);
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    motors(6);
    /*if(TSOPValue1 > 100) //Back Left
    {
      motors(2);
    }
    else if(TSOPValue2 > 100) //Back Right
    {
      motors(4);
    }*/
  }
}
