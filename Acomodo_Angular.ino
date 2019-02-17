void acomodoAngular()
{
  if (millis() > tiempo + 100)
  {
    tiempo = millis();
  
    /*sensors_event_t event; 
    bno.getEvent(&event);
    angulo = event.orientation.x;*/
  }
}

void acomodoMotor()
{
  acomodoAngular();

  //Falta ver si en algun punto te da angulos negativos
  
  if(angulo > 15 && angulo < 345)
  {
    if(angulo <= 180)
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
