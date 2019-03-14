void angleCheck()
{
  if(millis() > angleCheckTime + 15)
  {
    angleCheckTime = millis();

    sensors_event_t event;
    bno.getEvent(&event);
    orientationAngle = ((int(event.orientation.x) - setPoint) + 360) % 360;
  }
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
        motors(8);
      }
      else
      {
        motors(7);
      }
  
      delayMicroseconds(500);
    }
  }
}
