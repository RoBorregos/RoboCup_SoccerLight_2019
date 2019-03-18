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

void angleFix()
{
  if(millis() > angleFixTime + 15)
  {
    angleFixTime = millis();

    pixy.ccc.getBlocks();
    if(pixy.ccc.numBlocks)
    {
      sensors_event_t event;
      bno.getEvent(&event);
      pixySetPoint = int(event.orientation.x) + (((pixy.ccc.blocks[0].m_x / 319) * 60) - 30);
    }

    if(orientationAngle > 20 && orientationAngle < 340) //20 - 340
    {
      if(orientationAngle <= 180)
      {
        pixy.ccc.numBlocks ? pixyAngleCheck() : BNOAngleCheck();
        
        while(orientationAngle > 20)
        {
          motors(8);
          pixy.ccc.numBlocks ? pixyAngleCheck() : BNOAngleCheck();
        }
      }
      else
      {
        pixy.ccc.numBlocks ? pixyAngleCheck() : BNOAngleCheck();
        
        while(orientationAngle < 340)
        {
          motors(7);
          pixy.ccc.numBlocks ? pixyAngleCheck() : BNOAngleCheck();
        }
      }
  
      motors(6);
    }
  }
}
