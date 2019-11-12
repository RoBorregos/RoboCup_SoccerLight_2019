int readLines()
{
  //nano1 = digitalRead(nanoPin1);
  //nano2 = digitalRead(nanoPin2);
  nano3 = digitalRead(nanoPin3);
  nano4 = digitalRead(nanoPin4);
  nano5 = digitalRead(nanoPin5);
  
  /*Serial.print(nano1);
  Serial.print(" ");
  Serial.print(nano2);
  Serial.print(" ");
  Serial.print(nano3);
  Serial.print(" ");
  Serial.print(nano4);
  Serial.print(" ");
  Serial.print(nano5);
  Serial.println();*/

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
  pixy.ccc.getBlocks();
  const int lineReturnTime = 650;
  
  if(lineCase == 1)
  { 
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);
    Serial.println("1");
    
    motors(6);
    lineDelayTime = millis();
    /*while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(3);
      angleFix();
    }*/
    while(millis() < lineDelayTime + lineReturnTime)
    {
      if(pixy.ccc.numBlocks)
      {
        for(int i = 0; i < pixy.ccc.numBlocks; i++)
        {
          if(pixy.ccc.blocks[i].m_signature == 1)
          {
            pixyBlockY = pixy.ccc.blocks[i].m_y;
            pixyBlockY > 110 ? motors(3) : motors(0);
            break;
          }
        }
      }
      else
      {
        pixyBlockY > 110 ? motors(3) : motors(0);
      }
      angleFix();
    }
  }
  else if(lineCase == 2)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    Serial.println("2");
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      if(pixy.ccc.numBlocks)
      {
        for(int i = 0; i < pixy.ccc.numBlocks; i++)
        {
          if(pixy.ccc.blocks[i].m_signature == 1)
          {
            pixyBlockY = pixy.ccc.blocks[i].m_y;
            pixyBlockY > 110 ? motors(4) : motors(5);
            break;
          }
        }
      }
      else
      {
        pixyBlockY > 110 ? motors(4) : motors(5);
      }
      angleFix();
    }
  }
  else if(lineCase == 3)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);
    Serial.println("3");
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      if(pixy.ccc.numBlocks)
      {
        for(int i = 0; i < pixy.ccc.numBlocks; i++)
        {
          if(pixy.ccc.blocks[i].m_signature == 1)
          {
            pixyBlockY = pixy.ccc.blocks[i].m_y;
            pixyBlockY > 110 ? motors(2) : motors(1);
            break;
          }
        }
      }
      else
      {
        pixyBlockY > 110 ? motors(2) : motors(1);
      }
      angleFix();
    }
  }
  else if(lineCase == 4)
  {
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    Serial.println("4");
    
    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(4);
      angleFix();
    }
  }
  else if(lineCase == 5)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, HIGH);
    Serial.println("5");

    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(0);
      angleFix();
    }
  }
  else if(lineCase == 6)
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, HIGH);
    digitalWrite(ledL, HIGH);
    Serial.println("6");

    motors(6);
    lineDelayTime = millis();
    while(millis() < lineDelayTime + lineReturnTime)
    {
      motors(2);
      angleFix();
    }
  }
  else
  {
    digitalWrite(ledR, LOW);
    digitalWrite(ledF, LOW);
    digitalWrite(ledL, LOW);
    
    //Serial.println("Nothing");
  }
}
