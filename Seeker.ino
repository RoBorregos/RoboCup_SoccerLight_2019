/*
 * Prueba los diferentes casos uno por uno para perfeccionar los movimientos 
 * Usa motores_apagados
 * 
 */


void Seeker()
{
  /*IRValor = digitalRead(IRSensor);*/
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  Serial.println(InfraredBall.Direction);

  if(InfraredBall.Direction == 5) //Adelante
  {
    motores_encendidos(0); // 0 
  }  
  else if(InfraredBall.Direction == 6 || InfraredBall.Direction == 7) //Derecha Arriba
  {
    motores_encendidos(2); // 2
  }
  else if(InfraredBall.Direction == 8 || InfraredBall.Direction == 9) //Derecha Abajo
  {
    motores_encendidos(3); // 3
  }
  else if(InfraredBall.Direction == 1 || InfraredBall.Direction == 2) //Izquierda Abajo
  {
    motores_encendidos(3); // 3
  }
  else if(InfraredBall.Direction == 3 || InfraredBall.Direction == 4) //Izquierda Arriba
  {
    motores_encendidos(4); // 4
  }
  else if (InfraredBall.Direction == 0) //Atras
  {
    motores_encendidos(3);    
  }
}
