int MUX(bool a, bool b, bool c)
{
  /*Multiplexer Reading*******************************************
   * 
   *  This function returns the reading of a multiplexer pin.
   *  It returns the value of a photoresistor.
   *  
   **************************************************************/

  //Write S0, S1, and S2 with parameters to then return respective photoresistor value
  digitalWrite(s0, a);
  digitalWrite(s1, b);
  digitalWrite(s2, c);
  delayMicroseconds(25);
  
  return analogRead(com);
}

void PRCalibration()
{
  /*Photoresistors Calibration************************************
   * 
   *  This is the calibration function for the photoresistors.
   *  It reads 15 photoresistors and stores them in the PRs array.
   *    PRs[0-4] and PRs[13-14] are analog pins.
   *    PRs[5-12] are connected to a multiplexer and call the MUX() function.
   *  Then the array is printed.
   *  
   **************************************************************/

  //Read photoresistors
  PRs[0] = analogRead(pr10);
  PRs[1] = analogRead(pr11);
  PRs[2] = analogRead(pr12);
  PRs[3] = analogRead(pr13);
  PRs[4] = analogRead(pr14);
  PRs[5] = MUX(0, 0, 0);
  PRs[6] = MUX(0, 0, 1);
  PRs[7] = MUX(0, 1, 0);
  PRs[8] = MUX(0, 1, 1);
  PRs[9] = MUX(1, 0, 0); 
  PRs[10] = MUX(1, 0, 1);
  PRs[11] = MUX(1, 1, 0);
  PRs[12] = MUX(1, 1, 1);
  PRs[13] = analogRead(pr8); 
  PRs[14] = analogRead(pr9);

  //Print photoresistor values
  for (int i = 0; i<=14; i++)
  {
    Serial.print(PRs[i]);
    Serial.print(" ");
  }
  Serial.println();
}
