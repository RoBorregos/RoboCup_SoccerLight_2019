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


void lineLoop() 
{
 bool R =  (nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0); //combination for the right plate
 bool L =  (nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1); //combination for the left plate

  if (R == true)
  {
    lineTime = millis();
    while ((millis() <= lineTime + 500) && (L == true))
    {
      motors(4);
      delay(250);
      //R = false;
    }
  }
}

void lines()
{
  InfraredResult InfraredBall = InfraredSeeker::ReadAC();
  readLines();
  const int recoil = 100;
  
  if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 0 && nano5 == 1)
  { 
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, LOW);

   // lineLoop = true;
    //InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    
    Serial.println("1");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(3);
    }

   /* motors(6);
    while(lineLoop)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 3 || InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6 || InfraredBall.Direction == 7);
    }*/
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 0)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);

    lineLoop = true;
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();

    Serial.println("2");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(5);
    }

    /*motors(6);
    while(lineLoop)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
    }*/
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 0 && nano4 == 1 && nano5 == 1)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledL, HIGH);

    lineLoop = true;
    InfraredResult InfraredBall = InfraredSeeker::ReadAC();

    Serial.println("2");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(1);
    }

    motors(6);
    while(lineLoop)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4);
    }
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 0)
  {
    digitalWrite(ledF, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, LOW);
    
   // lineLoop = true;
    //InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    
    Serial.println("4");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(4);
    }

    /*motors(6);
    while(lineLoop)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6 || InfraredBall.Direction == 7 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
    }*/
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 0 && nano5 == 1)
  {
    digitalWrite(ledF, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledL, HIGH);
    
   // lineLoop = true;
   // InfraredResult InfraredBall = InfraredSeeker::ReadAC();
    
    Serial.println("5");
    lineDelayTime = millis();
    while(millis() < lineDelayTime + recoil)
    {
      motors(0);
    }

  /*  motors(6);
    while(lineLoop)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 0 || InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 8 || InfraredBall.Direction == 9);
    }*/
  }
  else if(nano1 == 0 && nano2 == 0 && nano3 == 1 && nano4 == 1 && nano5 == 0)
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
    }

   /* motors(6);
    while(lineLoop)
    {
      InfraredResult InfraredBall = InfraredSeeker::ReadAC(); 
      lineLoop = (InfraredBall.Direction == 1 || InfraredBall.Direction == 2 || InfraredBall.Direction == 3 || InfraredBall.Direction == 4 || InfraredBall.Direction == 5 || InfraredBall.Direction == 6);
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
