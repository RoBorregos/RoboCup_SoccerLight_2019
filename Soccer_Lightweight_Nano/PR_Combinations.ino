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

  lines();
  int range = 825;
  Serial.print("In PR_Combinations");
  
  if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 0, 0);
    //digitalWrite(led, LOW);
    Serial.println(" 0");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 0, 1);
    //digitalWrite(led, HIGH);
    Serial.println(" 1");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 1, 0);
    //digitalWrite(led, HIGH);
    Serial.println(" 2");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 1, 1);
    //digitalWrite(led, HIGH);
    Serial.println(" 3");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 0, 0);
    //digitalWrite(led, HIGH);
    Serial.println(" 4");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 0, 1);
    //digitalWrite(led, HIGH);
    Serial.println(" 5");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 1, 0);
    //digitalWrite(led, HIGH);
    //Serial.println(" 6");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    Serial.println(" 6");
  }
  
  
  /*if((PRs[0] > PRRanges[0] * range || PRs[1] > PRRanges[1] * range || PRs[2] > PRRanges[2] * range || PRs[3] > PRRanges[3] * range || PRs[4] > PRRanges[4] * range) && !(PRs[5] > PRRanges[5] * range || PRs[6] > PRRanges[6] * range || PRs[7] > PRRanges[7] * range || PRs[8] > PRRanges[8] * range || PRs[9] > PRRanges[9] * range) && !(PRs[10] > PRRanges[10] * range || PRs[11] > PRRanges[11] * range || PRs[12] > PRRanges[12] * range || PRs[13] > PRRanges[13] * range || PRs[14] > PRRanges[14] * range))
  {
    communicationToMega(0, 0, 0, 0, 1);
    //digitalWrite(led, HIGH);
    Serial.println(" 1");
  }
  else if(!(PRs[0] > PRRanges[0] * range || PRs[1] > PRRanges[1] * range || PRs[2] > PRRanges[2] * range || PRs[3] > PRRanges[3] * range || PRs[4] > PRRanges[4] * range) && (PRs[5] > PRRanges[5] * range || PRs[6] > PRRanges[6] * range || PRs[7] > PRRanges[7] * range || PRs[8] > PRRanges[8] * range || PRs[9] > PRRanges[9] * range) && !(PRs[10] > PRRanges[10] * range || PRs[11] > PRRanges[11] * range || PRs[12] > PRRanges[12] * range || PRs[13] > PRRanges[13] * range || PRs[14] > PRRanges[14] * range))
  {
    communicationToMega(0, 0, 0, 1, 0);
    //digitalWrite(led, HIGH);
    Serial.println(" 2");
  }
  else if(!(PRs[0] > PRRanges[0] * range || PRs[1] > PRRanges[1] * range || PRs[2] > PRRanges[2] * range || PRs[3] > PRRanges[3] * range || PRs[4] > PRRanges[4] * range) && !(PRs[5] > PRRanges[5] * range || PRs[6] > PRRanges[6] * range || PRs[7] > PRRanges[7] * range || PRs[8] > PRRanges[8] * range || PRs[9] > PRRanges[9] * range) && (PRs[10] > PRRanges[10] * range || PRs[11] > PRRanges[11] * range || PRs[12] > PRRanges[12] * range || PRs[13] > PRRanges[13] * range || PRs[14] > PRRanges[14] * range))
  {
    communicationToMega(0, 0, 0, 1, 1);
    //digitalWrite(led, HIGH);
    Serial.println(" 3");
  }
  else if((PRs[0] > PRRanges[0] * range || PRs[1] > PRRanges[1] * range || PRs[2] > PRRanges[2] * range || PRs[3] > PRRanges[3] * range || PRs[4] > PRRanges[4] * range) && (PRs[5] > PRRanges[5] * range || PRs[6] > PRRanges[6] * range || PRs[7] > PRRanges[7] * range || PRs[8] > PRRanges[8] * range || PRs[9] > PRRanges[9] * range) && !(PRs[10] > PRRanges[10] * range || PRs[11] > PRRanges[11] * range || PRs[12] > PRRanges[12] * range || PRs[13] > PRRanges[13] * range || PRs[14] > PRRanges[14] * range))
  {
    communicationToMega(0, 0, 1, 0, 0);
    //digitalWrite(led, HIGH);
    Serial.println(" 4");
  }
  else if(!(PRs[0] > PRRanges[0] * range || PRs[1] > PRRanges[1] * range || PRs[2] > PRRanges[2] * range || PRs[3] > PRRanges[3] * range || PRs[4] > PRRanges[4] * range) && (PRs[5] > PRRanges[5] * range || PRs[6] > PRRanges[6] * range || PRs[7] > PRRanges[7] * range || PRs[8] > PRRanges[8] * range || PRs[9] > PRRanges[9] * range) && (PRs[10] > PRRanges[10] * range || PRs[11] > PRRanges[11] * range || PRs[12] > PRRanges[12] * range || PRs[13] > PRRanges[13] * range || PRs[14] > PRRanges[14] * range))
  {
    communicationToMega(0, 0, 1, 0, 1);
    //digitalWrite(led, HIGH);
    Serial.println(" 5");
  }
  else if((PRs[0] > PRRanges[0] * range || PRs[1] > PRRanges[1] * range || PRs[2] > PRRanges[2] * range || PRs[3] > PRRanges[3] * range || PRs[4] > PRRanges[4] * range) && !(PRs[5] > PRRanges[5] * range || PRs[6] > PRRanges[6] * range || PRs[7] > PRRanges[7] * range || PRs[8] > PRRanges[8] * range || PRs[9] > PRRanges[9] * range) && (PRs[10] > PRRanges[10] * range || PRs[11] > PRRanges[11] * range || PRs[12] > PRRanges[12] * range || PRs[13] > PRRanges[13] * range || PRs[14] > PRRanges[14] * range))
  {
    communicationToMega(0, 0, 1, 1, 0);
    //digitalWrite(led, HIGH);
    Serial.println(" 6");
  }
  else
  {
    communicationToMega(0, 0, 0, 0, 0);
    //digitalWrite(led, LOW);
    Serial.println(" 0");
  }*/
}
