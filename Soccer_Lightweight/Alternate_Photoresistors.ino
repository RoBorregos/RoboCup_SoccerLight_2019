int readLines()
{
  nano1 = digitalRead(nanoPin1);
  nano2 = digitalRead(nanoPin2);
  nano3 = digitalRead(nanoPin3);
  nano4 = digitalRead(nanoPin4);
  nano5 = digitalRead(nanoPin5);
  
 /* Serial.print(nano1);
  Serial.print(" ");
  Serial.print(nano2);
  Serial.print(" ");
  Serial.print(nano3);
  Serial.print(" ");
  Serial.print(nano4);
  Serial.print(" ");
  Serial.print(nano5);
  Serial.println();*/

  if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1) //Front
  {
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
    return 1;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0) //Right
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    return 2;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1) //Left
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);
    return 3;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0) //Front-Right
  {
    return 4;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1) //Right-Left
  {
    return 5;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0) //Front-Left
  {
    return 6;
  }
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
  return 0;
}


/*void lineLoop() 
{
  lineCase = readLines();
  const int recoil = 500;

 bool R = (lineCase == 2); //combination for the right plate
 bool L = (lineCase == 3); //combination for the left plate

  if (R == true)
  {
    lineTime = millis();
    while ((millis() <= lineTime + recoil) && (L == true))
    {
      motors(4);
      delay(250);
      //R = false;
    }
  }
}*/

void lines()
{
  int recoil = 350; //500
  antlineCase = lineCase;
  lineCase = readLines();
  antlineDelayTime = lineDelayTime;
  lineDelayTime = millis(); 
 
  if (lineCase == 2) //Right // Definir que los movimientos acaben cuando deje de leer líneas
  {
    while (millis() <= lineDelayTime + recoil) 
   {
    motors(4);
   }
    if ((antlineCase != lineCase) && ((lineDelayTime - antlineDelayTime) < recoil)) //If a plate of photoresistors change in a small range of time
    {
      //Definir la placa frontal como 'neutral' y que solo se base en la palca opuesta
      lineCase;
      antlineCase;
      motors(4);
      delay(350);
    }
  }
  
 else if (lineCase == 3) //Left
  {
    while (millis() <= lineDelayTime + recoil)
   {
    motors(2);
   }
    if ((antlineCase != lineCase) && ((lineDelayTime - antlineDelayTime) < 500)) //If a plate of photoresistors change in a small range of time
    {
      lineCase;
      antlineCase;
      motors(2);
      delay(350);
    }
  }
  
  else if (lineCase == 1) //Front
  {
   while (millis() <= lineDelayTime + recoil)
   {
    motors(3);
   }
  }

 
}
