void readLines()
{
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
}


void lines()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  readLines();
 int recoil = 30;
  /*if ((nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0) && ((InfraredBall.Direction == 6) || (InfraredBall.Direction == 7)) && !(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)) 
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
}*/
  
  if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)
  { 
    Serial.println("1");
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
    motors(3);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0)
  {
    lineLoop = (InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
    InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
    Serial.println("2");
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    motors(5);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      
    }
    while (lineLoop == true)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
      motors(6);
    } 
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1)
  {
    lineLoop = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4);
    InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
    Serial.println("3");
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);
    motors(1);
    lineDelayTime = millis();
     
   while(millis() < lineDelayTime + recoil)
    {
     
    }
   
    while (lineLoop == true)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4);
      motors(6);
    } 
  
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0)
  {
    Serial.println("4");
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    motors(4);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1)
  {
    Serial.println("5");
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, HIGH);
    motors(0);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      lines();
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0)
  {
    Serial.println("6");
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, HIGH);
    motors(2);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      lines();
    }
  }
  else
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, LOW);
    Serial.println("Nothing");
  }
}
