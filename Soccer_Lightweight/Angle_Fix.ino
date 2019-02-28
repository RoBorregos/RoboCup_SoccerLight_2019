void angleCheck()
{
  if (millis() > angleCheckTime + 100)
  {
    angleCheckTime = millis();

    sensors_event_t event;
    bno.getEvent(&event);
    orientationAngle = event.orientation.x;
  }
}

void angleFix()
{
  angleCheck();

  //NOTE! Check for negative angles
  if(orientationAngle > 15 && orientationAngle < 345)
  {
    if(orientationAngle <= 180)
    {
      motores_encendidos(8);    
    }
    else
    {      
      motores_encendidos(7);      
    }

    delay(2);
  }
}
