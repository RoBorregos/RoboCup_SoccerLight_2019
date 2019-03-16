void angleCheck()
{
  sensors_event_t event;
  bno.getEvent(&event);
  orientationAngle = ((int(event.orientation.x) - setPoint) + 360) % 360;

 // Serial.println(orientationAngle);
}

void angleFix()
{
  angleCheck();

  if(millis() > angleFixTime + 15)
  {
    angleFixTime = millis();

    //NOTE! Check for negative angles
    if(orientationAngle > 25 && orientationAngle < 335) //20 - 340
    {
      if(orientationAngle <= 180)
      {
        angleCheck();
        
        while(orientationAngle > 100)
        {
          motors(8);
          angleCheck();
        }
        
        while(orientationAngle > 25 && orientationAngle <= 100)
        {
          halfMotors(8);
          angleCheck();
        }
      }
      else
      {
        angleCheck();
        
        while(orientationAngle < 260)
        {
          motors(7);
          angleCheck();
        }

        while(orientationAngle < 335 && orientationAngle >= 260)
        {
          halfMotors(7);
          angleCheck();
        }
      }
  
      motors(6);
    }
  }
}
