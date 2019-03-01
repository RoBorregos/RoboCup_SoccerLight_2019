void lines()
{
  digitalRead(nano1);
  digitalRead(nano2);
  digitalRead(nano3);
  digitalRead(nano4);
  digitalRead(nano5);

  if ((nano1 == 0) && (nano2 == 1))
  {
    if (nano3 == 0 && nano4 == 0 && nano5 == 0)
    {
      motors(3);
    }
    else if (nano3 == 0 && nano4 == 0 && nano5 == 1)
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
    }
  }
  else if (nano1 == 1 && nano2 == 0)
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
  }
}
