void seekerCalibration()
{ 
  if(seekerStart)
  {
    Serial.println("HiTechnic IRSeeker V2");
    Serial.println();
    Serial.println();
    Serial.println("Dir\tAngle\tStrength");
    Serial.println();
    InfraredSeeker::Initialize();
    seekerStart = false;
  }
 
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  Serial.print(InfraredBall.Direction);
  Serial.print("\t");
  Serial.print(DirectionAngle(InfraredBall.Direction));
  Serial.print("\t");
  Serial.print(InfraredBall.Strength);
  Serial.println();
  if(InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
