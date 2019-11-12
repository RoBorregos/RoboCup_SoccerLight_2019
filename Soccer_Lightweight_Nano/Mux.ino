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

void lines()
{
  /*Photoresistor Reading*****************************************
   * 
   *  This funciton reads 15 photoresistors and stores them in the PRs array.
   *    PRs[0-4] and PRs[13-14] are analog pins.
   *    PRs[5-12] are connected to a multiplexer and call the MUX() function.
   *  Then the array is printed.
   *  
   **************************************************************/
   
  //Photoresistor front plate
  PRs[0] = analogRead(pr10);
  PRs[1] = analogRead(pr11);
  PRs[2] = analogRead(pr12);
  PRs[3] = analogRead(pr13);
  PRs[4] = analogRead(pr14);
  
  //Photoresistor right plate
  PRs[5] = MUX(0, 0, 0);
  PRs[6] = MUX(0, 0, 1);
  PRs[7] = MUX(0, 1, 0); //5
  PRs[8] = MUX(0, 1, 1); //6
  PRs[9] = MUX(1, 0, 0);
  
  //Photoresistor left plate
  PRs[10] = MUX(1, 0, 1);
  PRs[11] = MUX(1, 1, 0);
  PRs[12] = MUX(1, 1, 1);
  PRs[13] = analogRead(pr8); 
  PRs[14] = analogRead(pr9);

  for (int i = 0; i <= 15; i++)
  {
    Serial.print(" ");
    Serial.print(PRs[i]);
  }
  Serial.println();

  //Call printLines() to print photoresistors values and if they are above the range
  printLines();
}

void printLines()
{
  /*Photoresistor and Line Printing*******************************
   * 
   *  This function prints the value of each photoresistor and if it is above the range of the line.
   *  
   **************************************************************/

  //Print photoresistors values
  for (int i = 0; i <= 15; i++)
  {
    Serial.print(" ");
    Serial.print(PRs[i]);
  }
  Serial.println();

  //Print 1 if the photoresitor value is above the range or 0 otherwise
  int range = 775;
  for(int i = 0; i < 15; i++)
  {
    if(PRs[i] > range)
    {
      Serial.print("   ");
      Serial.print(1);
    }
    else
    {
      Serial.print("   ");
      Serial.print(0);
    }
  }
  Serial.println();
  
  delay(1000);
}
