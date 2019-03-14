void angleCheck()
{
  if(millis() > angleCheckTime + 15)
  {
    angleCheckTime = millis();

    sensors_event_t event;
    bno.getEvent(&event);
    orientationAngle = ((int(event.orientation.x) - setPoint) + 360) % 360;

    Serial.println(orientationAngle);
  }
}

void angleFix()
{
  angleCheck();

  if(millis() > angleFixTime + 15)
  {
    angleFixTime = millis();

    //NOTE! Check for negative angles
    if(orientationAngle > 20 && orientationAngle < 340) //20 - 340
    {
      if(orientationAngle <= 180)
      {
        while(orientationAngle > 30)
        {
          motors(8);
          angleCheck();
        }
      }
      else
      {
        while(orientationAngle < 330)
        {
          motors(7);
          angleCheck();
        }
      }
  
      delayMicroseconds(1);
    }
  }
}
