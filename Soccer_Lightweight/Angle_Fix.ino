void angleCheck()
{
  sensors_event_t event;
  bno.getEvent(&event);
  orientationAngle = ((int(event.orientation.x) - setPoint) + 360) % 360;
  //Serial.println(orientationAngle);
}

void angleFix()
{
  angleCheck();

  if(millis() > angleFixTime + 15)
  {
    angleFixTime = millis();

    if(orientationAngle > 20 && orientationAngle < 340) //20 - 340
    {
      if(orientationAngle <= 180)
      {
        angleCheck();
        
        while(orientationAngle > 20)
        {
          motors(8);
          angleCheck();
        }
      }
      else
      {
        angleCheck();
        
        while(orientationAngle < 340)
        {
          motors(7);
          angleCheck();
        }
      }
  
      motors(6);
    }
  }
}
