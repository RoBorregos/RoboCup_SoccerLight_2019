void lines()
{
  digitalRead(n1);
  digitalRead(n2);
  digitalRead(n3);
  digitalRead(n4);
  digitalRead(n5);

  if ((n1 == 0) && (n2 == 1))
  {
    if (n3 == 0 && n4 == 0 && n5 == 0)
    {
      motors(3);
    }
    else if (n3 == 0 && n4 == 0 && n5 == 1)
    {
      motors(2);
    }
    else if (n3 == 0 && n4 == 1 && n5 == 0)
    {
      motors(4);
    }
    else if (n3 == 0 && n4 == 1 && n5 == 1)
    {
      motors(4);
    }
    else if (n3 == 1 && n4 == 0 && n5 == 0)
    {
      motors(0);
    }
    else if (n3 == 1 && n4 == 0 && n5 == 1)
    {
      motors(2);
    }
  }
  else if (n1 == 1 && n2 == 0)
  {
    if (n3 == 0 && n4 == 0 && n5 == 0)
    {
      motors(6);
    }
    else if (n3 == 0 && n4 == 0 && n5 == 1)
    {
      motors(6);
    }
    else if (n3 == 0 && n4 == 1 && n5 == 0)
    {
      motors(6);
    }
    else if (n3 == 0 && n4 == 1 && n5 == 1)
    {
      motors(6);
    }
    else if (n3 == 1 && n4 == 0 && n5 == 0)
    {
      motors(6);
    }
    else if (n3 == 1 && n4 == 0 && n5 == 1)
    {
      motors(6);
    }
  }
  else if (n1 == 1 && n2 == 1) 
  {
    if (n3 == 0 && n4 == 0 && n5 == 0)
    {
      motors(6);
    }
    if (n3 == 0 && n4 == 0 && n5 == 1)
    {
      motors(6);
    }
    if (n3 == 0 && n4 == 1 && n5 == 0)
    {
      motors(6);
    }
  }
}
