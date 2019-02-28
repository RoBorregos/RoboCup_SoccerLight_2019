//NOTE! Test each case to perfect movements
void Seeker()
{
  //TSOPValue1 = digitalRead(TSOPSensor1);
  //TSOPValue2 = digitalRead(TSOPSensor2);
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 1 || InfraredBall.Direction == 2) //Back Left
  {
    motors(3);
  }
  else if(InfraredBall.Direction == 3 || InfraredBall.Direction == 4) //Front Left
  {
    motors(4);
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motors(0);
  }  
  else if(InfraredBall.Direction == 6 || InfraredBall.Direction == 7) //Front Right
  {
    motors(2);
  }
  else if(InfraredBall.Direction == 8 || InfraredBall.Direction == 9) //Back Right
  {
    motors(3);
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    motors(3);    
  }
  /*else if(TSOPValue1 > 100) //Back Left
  {
    motors(2);
  }
  else if(TSOPValue2 > 100) //Back Right
  {
    motors(4);
  }*/
}
