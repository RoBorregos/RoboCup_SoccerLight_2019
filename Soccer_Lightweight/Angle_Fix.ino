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
    if(orientationAngle > 30 && orientationAngle < 330) //20 - 340
    {
      if(orientationAngle <= 180)
      {
        motors(8);
        while(orientationAngle > 30)
        {
          angleCheck();
        }
      }
      else
      {
        motors(7);
        while(orientationAngle < 330)
        {
          angleCheck();
        }
      }
  
      motors(6);
    }
  }
}
