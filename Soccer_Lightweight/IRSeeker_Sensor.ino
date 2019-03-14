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
    lastDirAngle = 1;
    Serial.println("In seeker 1");
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
    lastDirAngle = 1;
    Serial.println("In seeker 2");
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    motors(4);
    lastDirAngle = 1;
    Serial.println("In seeker 3");
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    motors(4);
    lastDirAngle = 1;
    Serial.println("In seeker 4");
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motors(0);
    Serial.println("In seeker 5");
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    motors(2);
    lastDirAngle = 9;
    Serial.println("In seeker 6");
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    motors(2);
    lastDirAngle = 9;
    Serial.println("In seeker 7");
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    motors(3);
    lastDirAngle = 9;
    Serial.println("In seeker 8");
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
    lastDirAngle = 9;
    Serial.println("In seeker 9");
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    motors(2);
    Serial.println("In seeker 0");
    
    /*if(seekerBackRight())
    {
      motors(4);
      Serial.println("In seeker 10");
    }
    else
    {
      motors(2);
      Serial.println("In seeker 0");
    }*/
    
    /*if(lastDirAngle == 1) //Back Left
    {
      motors(2);
      Serial.println("In seeker 0");
    }
    else if(lastDirAngle == 9) //Back Right
    {
      motors(4);
      Serial.println("In seeker 10");
    }*/
  }
}

bool seekerBackRight()
{
  if(orientationAngle < 180)
  {
    while(orientationAngle < 45)
    {
      motors(7);
      angleCheck();
    }
    motors(6);
  
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  
    while(orientationAngle > 45)
    {
      motors(8);
      angleCheck();
    }
    motors(6);
  
    if(InfraredBall.Direction == 9 || InfraredBall.Direction == 8 || InfraredBall.Direction == 7)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  else
  {
    while(orientationAngle > 315)
    {
      motors(8);
      angleCheck();
    }
    motors(6);
  
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  
    while(orientationAngle < 315)
    {
      motors(7);
      angleCheck();
    }
    motors(6);
  
    if(InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3)
    {
      return false;
    }
    else
    {
      return true;
    }
  }
}
