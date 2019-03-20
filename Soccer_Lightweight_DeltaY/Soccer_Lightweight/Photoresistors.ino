int readLines()
{
  //nano1 = digitalRead(nanoPin1);
  //nano2 = digitalRead(nanoPin2);
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
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, LOW);
    return 1;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0)
  {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, LOW);
    return 2;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1)
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, HIGH);
    return 3;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0)
  {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, LOW);
    return 4;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1)
  {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, HIGH);
    return 5;
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0)
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, HIGH);
    return 6;
  }

  digitalWrite(ledR, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledL, LOW);
  return 0;
}


void lines()
{
  lineCase = readLines();
  blocks = pixy.getBlocks();
  const int lineReturnTime = 500;
  
  if(lineCase == 1)
  { 
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
    Serial.println("1");

    if(millis() < lineRepetitionsTime[1] + (lineReturnTime * 1.25))
    {
      lineRepetitions[1]++;
    }
    else
    {
      lineRepetitions[1] = 0;
    }
    lineRepetitionsTime[1] = millis();
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(3);
      angleFix();
    }

    /*if(lineRepetitions[1] == 3)
    {
      ballOutside = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      
      while(ballOutside)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        ballOutside = (InfraredBall.Direction == 3 || InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6 || InfraredBall.Direction == 7);
        angleFix();
      }

      lineRepetitions[1] = 0;
    }*/
  }
  else if(lineCase == 2)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    Serial.println("2");

    if(millis() < lineRepetitionsTime[2] + (lineReturnTime * 1.25))
    {
      lineRepetitions[2]++;
    }
    else
    {
      lineRepetitions[2] = 0;
    }
    lineRepetitionsTime[2] = millis();
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      if(blocks)
      {
        pixy.blocks[0].x > 30 ? motors(4) : motors(5);
      }
      else
      {
        motors(4);
      }
      angleFix();
    }

    /*if(lineRepetitions[2] == 3)
    {
      ballOutside = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      
      while(ballOutside)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        ballOutside = (InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
        angleFix();
      }

      lineRepetitions[2] = 0;
    }*/
  }
  else if(lineCase == 3)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);
    Serial.println("3");

    if(millis() < lineRepetitionsTime[3] + (lineReturnTime * 1.25))
    {
      lineRepetitions[3]++;
    }
    else
    {
      lineRepetitions[3] = 0;
    }
    lineRepetitionsTime[3] = millis();
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      if(blocks)
      {
        pixy.blocks[0].y > 30 ? motors(2) : motors(1);
      }
      else
      {
        motors(2);
      }
      angleFix();
    }

    /*if(lineRepetitions[3] == 3)
    {
      ballOutside = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      
      while(ballOutside)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        ballOutside = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4);
        angleFix();
      }

      lineRepetitions[3] = 0;
    }*/
  }
  else if(lineCase == 4)
  {
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    Serial.println("4");

    if(millis() < lineRepetitionsTime[4] + (lineReturnTime * 1.25))
    {
      lineRepetitions[4]++;
    }
    else
    {
      lineRepetitions[4] = 0;
    }
    lineRepetitionsTime[4] = millis();
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(4);
      angleFix();
    }

    /*if(lineRepetitions[4] == 3)
    {
      ballOutside = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      
      while(ballOutside)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        ballOutside = (InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
        angleFix();
      }

      lineRepetitions[4] = 0;
    }*/
  }
  else if(lineCase == 5)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, HIGH);
    Serial.println("5");

    if(millis() < lineRepetitionsTime[5] + (lineReturnTime * 1.25))
    {
      lineRepetitions[5]++;
    }
    else
    {
      lineRepetitions[5] = 0;
    }
    lineRepetitionsTime[5] = millis();

    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(0);
      angleFix();
    }

    /*if(lineRepetitions[5] == 3)
    {
      ballOutside = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      
      while(ballOutside)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        ballOutside = (InfraredBall.Direction == 0 || InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
        angleFix();
      }

      lineRepetitions[5] = 0;
    }*/
  }
  else if(lineCase == 6)
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, HIGH);
    Serial.println("6");

    if(millis() < lineRepetitionsTime[6] + (lineReturnTime * 1.25))
    {
      lineRepetitions[6]++;
    }
    else
    {
      lineRepetitions[6] = 0;
    }
    lineRepetitionsTime[6] = millis();

    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(2);
      angleFix();
    }

    /*if(lineRepetitions[6] == 3)
    {
      ballOutside = true;
      InfraredResult InfraredBall = InfraredSeeker::ReadAC();
      motors(6);
      
      while(ballOutside)
      {
        InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
        ballOutside = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6);
        angleFix();
      }

      lineRepetitions[6] = 0;
    }*/
  }
  else
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, LOW);
    
    Serial.println("Nothing");
  }
}
