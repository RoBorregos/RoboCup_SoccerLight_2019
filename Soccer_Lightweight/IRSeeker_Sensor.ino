//NOTE! Test each case to perfect movements
void Seeker()
{
  /*IRValue = digitalRead(IRSensor);*/
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 1 || InfraredBall.Direction == 2) //Back left
  {
    motores_encendidos(3);
  }
  else if(InfraredBall.Direction == 3 || InfraredBall.Direction == 4) //Front left
  {
    motores_encendidos(4);
  }
  else if(InfraredBall.Direction == 5) //Front
  {
    motores_encendidos(0);
  }  
  else if(InfraredBall.Direction == 6 || InfraredBall.Direction == 7) //Front right
  {
    motores_encendidos(2);
  }
  else if(InfraredBall.Direction == 8 || InfraredBall.Direction == 9) //Back left
  {
    motores_encendidos(3);
  }
  else if(InfraredBall.Direction == 0) //Back
  {
    motores_encendidos(3);    
  }
}
