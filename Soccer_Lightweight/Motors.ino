void motors(int dir, int wait)
{
  int power = 1023;
  
  if(dir == 0) //Forward
  {
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, 0);
    delay(wait);
  }  
  else if(dir == 1) //Right Forward
  {
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
    delay(wait);
  }
  else if(dir == 2) //Right Backward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
    delay(wait);
  }
  else if(dir == 3) //Back
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 4) //Left Backward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 5) //Left Forward
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 6) //Stop
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 7) //Clockwise Rotation
  {
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 8) //Counterclockwise Rotation
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
    delay(wait);
  }
  else if(dir == 9) //Right Forward Corner
  {    
    analogWrite(motor1A, power);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power * cos(3.14159 / 6));
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power * cos(3.14159 / 6));
    delay(wait);
  }
  else if(dir == 10) //Right Corner
  {    
    analogWrite(motor1A, power * cos(3.14159 / 6));
    analogWrite(motor1B, 0);
    analogWrite(motor2A, power * cos(3.14159 / 6));
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power);
    delay(wait);
  }
  else if(dir == 11) //Right Backward Corner
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power * cos(3.14159 / 6));
    analogWrite(motor2A, power);
    analogWrite(motor2B, 0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B, power * cos(3.14159 / 6));
    delay(wait);
  }
  else if(dir == 12) //Left Backward Corner
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power);
    analogWrite(motor2A, power * cos(3.14159 / 6));
    analogWrite(motor2B, 0);
    analogWrite(motor3A, power * cos(3.14159 / 6));
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 13) //Left Corner
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, power * cos(3.14159 / 6));
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power * cos(3.14159 / 6));
    analogWrite(motor3A, power);
    analogWrite(motor3B, 0);
    delay(wait);
  }
  else if(dir == 14) //Left Forward Corner
  {    
    analogWrite(motor1A, power * cos(3.14159 / 6));
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B, power);
    analogWrite(motor3A, power * cos(3.14159 / 6));
    analogWrite(motor3B, 0);
    delay(wait);
  }
}
