void motors(int n)
{
  int power = 255;
  
  if(n == 0) //Forward
  {
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, 0);
  }  
  else if(n == 1) //Right Forward
  {
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
  }
  else if(n == 2) //Right Backward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
  }
  else if(n == 3) //Back
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, 0);
  }
  else if(n == 4) //Left Backward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
  }
  else if(n == 5) //Left Forward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
  }
  else if(n == 6) //Stop
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, 0);
  }
  else if(n == 7) //Clockwise Rotation
  {
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
  }
  else if(n == 8) //Counterclockwise Rotation
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
  }
  else if(n == 9) //Right Forward Corner
  {    
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power * cos(3.14159 / 6));
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power * cos(3.14159 / 6));
  }
  else if(n == 10) //Right Corner
  {    
    analogWrite(motor1A, power * cos(3.14159 / 6));
    analogWrite(motor1B, 0);
    analogWrite(motor2A, power * cos(3.14159 / 6));
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
  }
  else if(n == 11) //Right Backward Corner
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power * cos(3.14159 / 6));
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power * cos(3.14159 / 6));
  }
  else if(n == 12) //Left Backward Corner
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, power * cos(3.14159 / 6));
    analogWrite(motor2B, 0);
    analogWrite(motor3A, power * cos(3.14159 / 6));
    analogWrite(motor3B, 0);
  }
  else if(n == 13) //Left Corner
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power * cos(3.14159 / 6));
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power * cos(3.14159 / 6));
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
  }
  else if(n == 14) //Left Forward Corner
  {    
    analogWrite(motor1A, power * cos(3.14159 / 6));
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, power * cos(3.14159 / 6));
    analogWrite(motor3B, 0);
  }
}
