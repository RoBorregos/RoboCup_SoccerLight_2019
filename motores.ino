void motores_encendidos(int n)
{
  if(n == 0) //Adelante
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 120);
    analogWrite(motor2A, 120);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,0);
  }  
  else if(n == 1) //Derecha Arriba
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 120);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,120);
  }
  else if(n == 2) //Derecha Abajo
  {
    analogWrite(motor1A, 120);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,120);
  }
  else if(n == 3) //Atras
  {
    analogWrite(motor1A, 120);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,120);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,0);
  }
  else if(n == 4) //Izquierda Abajo
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,120);
    analogWrite(motor3A, 120);
    analogWrite(motor3B,0);
  }
  else if(n == 5) //Izquierda Adelante
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 120);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 120);
    analogWrite(motor3B,0);
  }
  else if(n == 6) //Motores Apagados
  {
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,0);
  }
  else if(n == 7) //Vuelta Derehca 360ª
  {
    analogWrite(motor1A, 120);
    analogWrite(motor1B, 0);
    analogWrite(motor2A, 120);
    analogWrite(motor2B,0);
    analogWrite(motor3A, 120);
    analogWrite(motor3B,0);
  }
  else if(n == 8) //Vuelta Izquierda 360ª
  {    
    analogWrite(motor1A, 0);
    analogWrite(motor1B, 120);
    analogWrite(motor2A, 0);
    analogWrite(motor2B,120);
    analogWrite(motor3A, 0);
    analogWrite(motor3B,120);
  }
}
