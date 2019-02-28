void motors(int n)
{
  if(n == 0) //Forward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 120);
    analogWrite(motor2A, 120);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,0);
  }  
  else if(n == 1) //Right Forward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 120);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,120);
  }
  else if(n == 2) //Right Backward
  {
    analogWrite(motor1A, 120);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,120);
  }
  else if(n == 3) //Back
  {
    analogWrite(motor1A, 120);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,120);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,0);
  }
  else if(n == 4) //Left Backward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,120);
    analogWrite(motor3A, 120);
    analogWrite(motor3B,0);
  }
  else if(n == 5) //Left Forward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 120);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 120);
    analogWrite(motor3B,0);
  }
  else if(n == 6) //Stop
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,0);
  }
  else if(n == 7) //Clockwise Rotation
  {
    analogWrite(motor1A, 120);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 120);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 120);
    analogWrite(motor3B,0);
  }
  else if(n == 8) //Counterclockwise Rotation
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 120);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,120);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,120);
  }
}
