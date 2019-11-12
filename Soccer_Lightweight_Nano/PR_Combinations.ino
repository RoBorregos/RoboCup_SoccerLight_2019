void communicationToMega(bool a, bool b, bool c)
{
  /*Communication to Arduino Mega*********************************
   * 
   *  This function receives a binary number of three digits.
   *  It writes the Communication-to-ArduinoMega pins with the binary number.
   *  
   **************************************************************/
  
  //Write Communication-to-ArduinoMega pins with parameters
  digitalWrite(comPin1, a);
  digitalWrite(comPin2, b);
  digitalWrite(comPin3, c);
}

void PR_Combinations()
{
  /*Communication to Arduino Mega*********************************
   * 
   *  This function calls lines() to read photoresistors values.
   *  It then sends a binary number to the Arduino Mega.
   *  
   **************************************************************/

  //Update photoresistors values and set line light range
  lines();
  int range = 775;

  //Send a binary number to the ArduinoMega depending on the photoresistors whose values exceed the range
  if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1);
    digitalWrite(led, HIGH);
    Serial.println(" 1");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 1, 0);
    digitalWrite(led, HIGH);
    Serial.println(" 2");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 1, 1);
    digitalWrite(led, HIGH);
    Serial.println(" 3");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(1, 0, 0);
    digitalWrite(led, HIGH);
    Serial.println(" 4");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(1, 0, 1);
    digitalWrite(led, HIGH);
    Serial.println(" 5");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(1, 1, 0);
    digitalWrite(led, HIGH);
    Serial.println(" 6");
  }
  else
  {
    communicationToMega(0, 0, 0);
    digitalWrite(led, LOW);
    Serial.println(" 0");
  }
}
