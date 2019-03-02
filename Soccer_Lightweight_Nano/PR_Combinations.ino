void communicationToMega(bool a, bool b, bool c, bool d, bool e)
{
  digitalWrite(comPin1, a);
  digitalWrite(comPin2, b);
  digitalWrite(comPin3, c);
  digitalWrite(comPin4, d);
  digitalWrite(comPin5, e);
}

void PR_Combinations()
{
  linea();
  int range = 850;
  Serial.print("In PR_Combinations");

  /*int plate1 = 0;
  for(int i = 0; i < 5; i++)
  {
    if(PRs[i] > range)
    {
      plate1 += PRs[i];
    }
  }

  int plate2 = 0;
  for(int i = 5; i < 10; i++)
  {
    if(PRs[i] > range)
    {
      plate2 += PRs[i];
    }
  }

  int plate3 = 0;
  for(int i = 10; i < 15; i++)
  {
    if(PRs[i] > range)
    {
      plate3 += PRs[i];
    }
  }

  if(plate1 < 2 && plate2 < 2 && plate3 < 2)
  {
    communicationToMega(0, 0, 0, 0, 0);
    Serial.println(" 0");
  }
  else if(plate1 >= 2 && plate2 < 2 && plate3 < 2)
  {
    communicationToMega(0, 0, 0, 0, 1);
    Serial.println(" 1");
  }
  else if(plate1 < 2 && plate2 >= 2 && plate3 < 2)
  {
    communicationToMega(0, 0, 0, 1, 0);
    Serial.println(" 2");
  }
  else if(plate1 < 2 && plate2 < 2 && plate3 >= 2)
  {
    communicationToMega(0, 0, 0, 1, 1);
    Serial.println(" 3");
  }
  else if(plate1 >= 2 && plate2 >= 2 && plate3 < 2)
  {
    communicationToMega(0, 0, 1, 0, 0);
    Serial.println(" 4");
  }
  else if(plate1 < 2 && plate2 >= 2 && plate3 >= 2)
  {
    communicationToMega(0, 0, 1, 0, 1);
    Serial.println(" 5");
  }
  else if(plate1 >= 2 && plate2 < 2 && plate3 >= 2)
  {
    communicationToMega(0, 0, 1, 1, 0);
    Serial.println(" 6");
  }*/

  
  if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 0, 0);
    Serial.println(" 0");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 0, 0);
    Serial.println(" 4");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 0, 1);
    Serial.println(" 5");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 1, 0);
    Serial.println(" 6");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 0, 1);
    Serial.println(" 1");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 1, 0);
    Serial.println(" 2");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 1, 1);
    Serial.println(" 3");
  }
  
  }
