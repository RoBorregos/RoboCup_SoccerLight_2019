void BNOAngleCheck()
{
  sensors_event_t event;
  bno.getEvent(&event);
  orientationAngle = ((int(event.orientation.x) - BNOSetPoint) + 360) % 360;
  //Serial.println(orientationAngle);
}

void pixyAngleCheck()
{
  sensors_event_t event;
  bno.getEvent(&event);
  orientationAngle = ((int(event.orientation.x) - pixySetPoint) + 360) % 360;
  //Serial.println(orientationAngle);
}

/*void angleFix()
{
  pixy.ccc.getBlocks();
  if(pixy.ccc.numBlocks)
  {
    Serial.println("Pixy");
    sensors_event_t event;
    bno.getEvent(&event);
    pixySetPoint = int(event.orientation.x) + (((pixy.ccc.blocks[0].m_x / 319) * 60) - 30);
    pixyAngleCheck();
    pixyBlock = true;
  }
  else
  {
    Serial.println("BNO");
    BNOAngleCheck();
    pixyBlock = false;
  }
  
  if(millis() > angleFixTime + 15)
  {
    angleFixTime = millis();

    if(orientationAngle > 20 && orientationAngle < 340) //20 - 340
    {
      if(orientationAngle <= 180)
      {
        pixyBlock ? pixyAngleCheck() : BNOAngleCheck();
        
        while(orientationAngle > 20)
        {
          motors(8);
          pixyBlock ? pixyAngleCheck() : BNOAngleCheck();
        }
      }
      else
      {
        pixyBlock ? pixyAngleCheck() : BNOAngleCheck();
        
        while(orientationAngle < 340)
        {
          motors(7);
          pixyBlock ? pixyAngleCheck() : BNOAngleCheck();
        }
      }
  
      motors(6);
    }
  }
}*/

void angleFix()
{
  BNOAngleCheck();
  
  if(millis() > angleFixTime + 15)
  {
    angleFixTime = millis();
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();

    if(false) //InfraredBall.Direction == 5
    {
      if(orientationAngle > 15 && orientationAngle < 345 )
      {
        if(orientationAngle <= 180)
        {
          BNOAngleCheck();
          
          while(orientationAngle > 15)
          {
            motors(8);
            BNOAngleCheck();
          }
        }
        else
        {
          BNOAngleCheck();
          
          while(orientationAngle < 345)
          {
            motors(7);
            BNOAngleCheck();
          }
        }
    
        motors(6);
      }
    }
    else
    {
      if(orientationAngle > 20 && orientationAngle < 340 )
      {
        if(orientationAngle <= 180)
        {
          BNOAngleCheck();
          
          while(orientationAngle > 20)
          {
            motors(8);
            BNOAngleCheck();
          }
        }
        else
        {
          BNOAngleCheck();
          
          while(orientationAngle < 340)
          {
            motors(7);
            BNOAngleCheck();
          }
        }
    
        motors(6);
      }
    }
  }
}
