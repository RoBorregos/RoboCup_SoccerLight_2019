/*int readLines()
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

  if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)
  {
    return 1;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0)
  {
    return 2;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1)
  {
    return 3;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0)
  {
    return 4;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1)
  {
    return 5;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0)
  {
    return 6;
  }

  return 0;
}


void lines()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  lineCase = readLines();
  const int recoil = 500;
  
  if(lineCase == 1)
  { 
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
    
    Serial.println("1");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(3);
      angleFix();
    }
    
    if(millis() < lineRepetitionsTime[1] + (recoil * 1.25))
    {
      lineRepetitions[1]++;
    }
    else
    {
      lineRepetitions[1] = 0;
    }
    lineRepetitionsTime[1] = millis();

    if(lineRepetitions[1] == 3)
    {
      lineLoop = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      while(lineLoop)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        lineLoop = (InfraredBall.Direction == 3 || InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6 || InfraredBall.Direction == 7);
        angleFix();
      }
    }
  }
  else if(lineCase == 2)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);

    Serial.println("2");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(5);
      angleFix();
    }

    if(millis() < lineRepetitionsTime[2] + (recoil * 1.25))
    {
      lineRepetitions[2]++;
    }
    else
    {
      lineRepetitions[2] = 0;
    }
    lineRepetitionsTime[2] = millis();

    if(lineRepetitions[2] == 3)
    {
      lineLoop = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      while(lineLoop)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        lineLoop = (InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
        angleFix();
      }
    }
  }
  else if(lineCase == 3)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);

    Serial.println("3");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(1);
      angleFix();
    }

    if(millis() < lineRepetitionsTime[3] + (recoil * 1.25))
    {
      lineRepetitions[3]++;
    }
    else
    {
      lineRepetitions[3] = 0;
    }
    lineRepetitionsTime[3] = millis();

    if(lineRepetitions[3] == 3)
    {
      lineLoop = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      while(lineLoop)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        lineLoop = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4);
        angleFix();
      }
    }
  }
  else if(lineCase == 4)
  {
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
       
    Serial.println("4");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(4);
      angleFix();
    }

    if(millis() < lineRepetitionsTime[4] + (recoil * 1.25))
    {
      lineRepetitions[4]++;
    }
    else
    {
      lineRepetitions[4] = 0;
    }
    lineRepetitionsTime[4] = millis();

    if(lineRepetitions[4] == 3)
    {
      lineLoop = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      while(lineLoop)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        lineLoop = (InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
        angleFix();
      }
    }
  }
  else if(lineCase == 5)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, HIGH);
    
    Serial.println("5");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(0);
      angleFix();
    }

    if(millis() < lineRepetitionsTime[5] + (recoil * 1.25))
    {
      lineRepetitions[5]++;
    }
    else
    {
      lineRepetitions[5] = 0;
    }
    lineRepetitionsTime[5] = millis();

    if(lineRepetitions[5] == 3)

    {
      lineLoop = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      while(lineLoop)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        lineLoop = (InfraredBall.Direction == 0 || InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
        angleFix();
      }
    }
  }
  else if(lineCase == 6)
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, HIGH);
    

    //lineLoop = true;
    //InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    
    Serial.println("6");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(2);
      angleFix();
    }

    if(millis() < lineRepetitionsTime[6] + (recoil * 1.25))
    {
      lineRepetitions[6]++;
    }
    else
    {
      lineRepetitions[6] = 0;
    }
    lineRepetitionsTime[6] = millis();

    if(lineRepetitions[6] == 3)
    {
      lineLoop = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      while(lineLoop)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        lineLoop = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6);
        angleFix();
      }
    }
  }
  else
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, LOW);
    
    Serial.println("Nothing");
  }
}*/
