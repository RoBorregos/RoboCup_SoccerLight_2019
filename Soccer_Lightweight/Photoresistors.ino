void linesTest()
{
  nano1 = digitalRead(nanoPin1);
  nano2 = digitalRead(nanoPin2);
  nano3 = digitalRead(nanoPin3);
  nano4 = digitalRead(nanoPin4);
  nano5 = digitalRead(nanoPin5);

  Serial.print(nano1);
  Serial.print(nano2);
  Serial.print(nano3);
  Serial.print(nano4);
  Serial.println(nano5);

  /*if(nano1 == 0 && nano2 == 1 && nano3 == 0 && nano4 == 0 && nano5 == 0)
  {
    Serial.println("Oooh, yeah!!");
  }
  else
  {
    Serial.println("oh, noo...");
  }*/
}

void lines()
{
  nano1 = digitalRead(nanoPin1);
  nano2 = digitalRead(nanoPin2);
  nano3 = digitalRead(nanoPin3);
  nano4 = digitalRead(nanoPin4);
  nano5 = digitalRead(nanoPin5);

  if ((nano1 == 0) && (nano2 == 1))
  {
    if (nano3 == 0 && nano4 == 0 && nano5 == 0)
    {
      motors(3);
      Serial.println("blablabla");
    }
    /*else if (nano3 == 0 && nano4 == 0 && nano5 == 1)
    {
      motors(2);
    }
    else if (nano3 == 0 && nano4 == 1 && nano5 == 0)
    {
      motors(4);
    }
    else if (nano3 == 0 && nano4 == 1 && nano5 == 1)
    {
      motors(4);
    }
    else if (nano3 == 1 && nano4 == 0 && nano5 == 0)
    {
      motors(0);
    }
    else if (nano3 == 1 && nano4 == 0 && nano5 == 1)
    {
      motors(2);
    }*/
  }
  /*else if (nano1 == 1 && nano2 == 0)
  {
    if (nano3 == 0 && nano4 == 0 && nano5 == 0)
    {
      motors(6);
    }
    else if (nano3 == 0 && nano4 == 0 && nano5 == 1)
    {
      motors(6);
    }
    else if (nano3 == 0 && nano4 == 1 && nano5 == 0)
    {
      motors(6);
    }
    else if (nano3 == 0 && nano4 == 1 && nano5 == 1)
    {
      motors(6);
    }
    else if (nano3 == 1 && nano4 == 0 && nano5 == 0)
    {
      motors(6);
    }
    else if (nano3 == 1 && nano4 == 0 && nano5 == 1)
    {
      motors(6);
    }
  }
  else if (nano1 == 1 && nano2 == 1) 
  {
    if (nano3 == 0 && nano4 == 0 && nano5 == 0)
    {
      motors(6);
    }
    if (nano3 == 0 && nano4 == 0 && nano5 == 1)
    {
      motors(6);
    }
    if (nano3 == 0 && nano4 == 1 && nano5 == 0)
    {
      motors(6);
    }
  }*/
}
