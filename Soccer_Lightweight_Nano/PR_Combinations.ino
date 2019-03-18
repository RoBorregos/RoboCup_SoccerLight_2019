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
  int range = 900; //Light Tolerance of the PRs
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
    Serial.println(" 6");
  }
}
