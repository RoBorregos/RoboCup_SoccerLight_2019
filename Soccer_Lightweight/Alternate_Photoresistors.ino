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
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    return 4;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1) //Right-Left
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, HIGH);
    return 5;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0) //Front-Left
  {
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);
    return 6;
  }
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
  return 0;
}

void updateLine() 
{
  prevLineCase = lineCase;
  lineCase = readLines();
  prevLineDelayTime = lineDelayTime;
  lineDelayTime = millis(); 
}

void lines()
{
  updateLine();
  int lineReturnTime = 500; //500

  if((prevLineCase != lineCase) && ((lineDelayTime - prevLineDelayTime) < lineReturnTime)) //If a plate of photoresistors changes in a small range of time
  {
   //Definir la placa frontal como 'neutral' y que solo se base en la palca opuesta
   lineCase = prevLineCase;
  }
  else if(lineCase == 1) //Front
  {
    while(millis() <= lineDelayTime + lineReturnTime)
    {
      motors(3);
    }
  }
  else if(lineCase == 2) //Right // Definir que los movimientos acaben cuando deje de leer líneas
  {
    while(millis() <= lineDelayTime + lineReturnTime) 
    {
      motors(4);
    }
  }
  else if(lineCase == 3) //Left
  {
    while(millis() <= lineDelayTime + lineReturnTime)
    {
      motors(2);
    }
    /*if((prevLineCase != lineCase) && ((lineDelayTime - prevLineDelayTime) < 500)) //If a plate of photoresistors changes in a small range of time
    {
      lineCase;
      prevLineCase;
      motors(2);
      delay(350);
    }*/
  }
}
