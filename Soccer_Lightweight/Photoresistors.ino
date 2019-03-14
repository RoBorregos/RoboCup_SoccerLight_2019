void lines()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  
  nano1 = digitalRead(nanoPin1);
  nano2 = digitalRead(nanoPin2);
  nano3 = digitalRead(nanoPin3);
  nano4 = digitalRead(nanoPin4);
  nano5 = digitalRead(nanoPin5);
  
  Serial.print(nano1);
  Serial.print(" ");
  Serial.print(nano2);
  Serial.print(" ");
  Serial.print(nano3);
  Serial.print(" ");
  Serial.print(nano4);
  Serial.print(" ");
  Serial.print(nano5);
  Serial.println();

  if ((nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0) && ((InfraredBall.Direction == 6) || (InfraredBall.Direction == 7)) && !(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)) 
  {
    motors(6);
    delay(100);
    motors(0);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }

    InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    nano1 = digitalRead(nanoPin1);
    nano2 = digitalRead(nanoPin2);
    nano3 = digitalRead(nanoPin3);
    nano4 = digitalRead(nanoPin4);
    nano5 = digitalRead(nanoPin5);
  }

  else if ((nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0) && ((InfraredBall.Direction == 4) || (InfraredBall.Direction == 3)) && !(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)) 
  {
    motors(6);
    delay(100);
    motors(0);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }

    InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    nano1 = digitalRead(nanoPin1);
    nano2 = digitalRead(nanoPin2);
    nano3 = digitalRead(nanoPin3);
    nano4 = digitalRead(nanoPin4);
    nano5 = digitalRead(nanoPin5);
  }
  
  if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)
  {
    Serial.println("1");
    motors(3);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0)
  {
    Serial.println("2");
    motors(5);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1)
  {
    Serial.println("3");
    motors(1);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0)
  {
    Serial.println("4");
    motors(4);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1)
  {
    Serial.println("5");
    motors(0);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0)
  {
    Serial.println("6");
    motors(2);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + 250)
    {
      lines();
    }
  }
  else
  {
    Serial.println("Nothing");
  }
}
