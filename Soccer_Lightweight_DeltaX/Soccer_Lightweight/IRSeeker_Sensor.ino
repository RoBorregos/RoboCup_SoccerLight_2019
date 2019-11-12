/*void seeker()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  //Serial.println(InfraredBall.Direction);
  int movementExtraTime = 75;

  if(InfraredBall.Direction == 1) //Back Left
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    lastMotorsDir = 3;
    //Serial.println("In seeker 1");
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    lastMotorsDir = 3;
    //Serial.println("In seeker 2");
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    if(millis() > seekerDirectionTime + movementExtraTime)
    {
      motors(4);
      lastDirAngle = InfraredBall.Direction;
      lastMotorsDir = 4;
      //Serial.println("In seeker 3");

      seekerDirectionTime = millis();
    }
    else
    {
      motors(lastMotorsDir);
    }
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    if(millis() > seekerDirectionTime + movementExtraTime)
    {
      motors(4);
      lastDirAngle = InfraredBall.Direction;
      lastMotorsDir = 4;
      //Serial.println("In seeker 4");

      seekerDirectionTime = millis();
    }
    else
    {
      motors(lastMotorsDir);
    }
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    if(millis() > seekerDirectionTime + movementExtraTime)
    {
      motors(0);
      lastDirAngle = InfraredBall.Direction;
      lastMotorsDir = 0;
      //Serial.println("In seeker 5");

      seekerDirectionTime = millis();
    }
    else
    {
      motors(lastMotorsDir);
    }
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    if(millis() > seekerDirectionTime + movementExtraTime)
    {
      motors(2);
      lastDirAngle = InfraredBall.Direction;
      lastMotorsDir = 2;
      //Serial.println("In seeker 6");

      seekerDirectionTime = millis();
    }
    else
    {
      motors(lastMotorsDir);
    }
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    if(millis() > seekerDirectionTime + movementExtraTime)
    {
      motors(2);
      lastDirAngle = InfraredBall.Direction;
      lastMotorsDir = 2;
      //Serial.println("In seeker 7");

      seekerDirectionTime = millis();
    }
    else
    {
      motors(lastMotorsDir);
    }
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    lastMotorsDir = 3;
    //Serial.println("In seeker 8");
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    lastMotorsDir = 3;
    //Serial.println("In seeker 9");
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    if(lastDirAngle < 5) //Right Forward
    {
      motors(2);
      lastMotorsDir = 2;
      //Serial.println("In seeker 0");
    }
    else if(lastDirAngle > 5) //Left Forward
    {
      motors(4);
      lastMotorsDir = 4;
      //Serial.println("In seeker 10");
    }
  }
}*/

/*void seeker()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  //Serial.println(InfraredBall.Direction);
  int movementExtraTime = 150;

  if(InfraredBall.Direction == 1) //Back Left
  {
    if(millis() > seekerDirectionTime + movementExtraTime)
    {
      motors(3);
      lastDirAngle = InfraredBall.Direction;
      //Serial.println("In seeker 1");

      seekerDirectionTime = millis();
    }
    
    
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 1");
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 2");
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    motors(4);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 3");
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    motors(4);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 4");
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motors(0);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 5");
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    motors(2);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 6");
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    motors(2);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 7");
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 8");
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
    lastDirAngle = InfraredBall.Direction;
    //Serial.println("In seeker 9");
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    if(lastDirAngle < 5) //Right Forward
    {
      motors(2);
      //Serial.println("In seeker 0");
    }
    else if(lastDirAngle > 5) //Left Forward
    {
      motors(4);
      //Serial.println("In seeker 10");
    }
  }
}*/

void seeker()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  //Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 1) //Back Left
  {
    motors(3);
    //Serial.println("In seeker 1");
  }
  else if(InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
    //Serial.println("In seeker 2");
  }
  else if(InfraredBall.Direction == 3) //Front Left
  {
    motors(4);
    //Serial.println("In seeker 3");
  }
  else if(InfraredBall.Direction == 4) //Front Left
  {
    motors(4);
    //Serial.println("In seeker 4");
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motors(0);
    //Serial.println("In seeker 5");
  }  
  else if(InfraredBall.Direction == 6) //Front Right
  {
    motors(2);
    //Serial.println("In seeker 6");
  }
  else if(InfraredBall.Direction == 7) //Front Right
  {
    motors(2);
    //Serial.println("In seeker 7");
  }
  else if(InfraredBall.Direction == 8) //Back Right
  {
    motors(3);
    //Serial.println("In seeker 8");
  }
  else if(InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
    //Serial.println("In seeker 9");
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    lineCase = readLines();
    while(seekerDirection == 0 && lineCase == 0)
    {
      motors(2);

      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      seekerDirection = InfraredBall.Direction;
      lines();
    }

    if(lineCase != 0)
    {
      motors(4);
      delay(250);
      
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      while(seekerDirection == 0)
      {
        motors(3);
        
        lines();
        angleFix();
        InfraredResult InfraredBall = InfraredSeeker::ReadAC();
        seekerDirection = InfraredBall.Direction;
      }

      motors(6);
    }
  }
}
