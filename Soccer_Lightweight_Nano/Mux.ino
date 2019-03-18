int MUX(bool a, bool b, bool c)
{
  digitalWrite(s0, a);
  digitalWrite(s1, b);
  digitalWrite(s2, c);
  delayMicroseconds(25); //50
  
  return analogRead(com);
}

void lines()
{ 
  //Photoresistor Plate 1 --- Frontal Plate
  PRs[0] = analogRead(pr10);
  PRs[1] = analogRead(pr11);
  PRs[2] = analogRead(pr12);
  PRs[3] = analogRead(pr13);
  PRs[4] = analogRead(pr14);
  
  //Photoresistor Plate 2 --- Right Plate
  PRs[5] = MUX(0, 0, 0);
  PRs[6] = MUX(0, 0, 1);
  PRs[7] = MUX(0, 1, 0); //5
  PRs[8] = MUX(0, 1, 1);//6
  PRs[9] = MUX(1, 0, 0);
  
  //Photoresistor Plate 3 --- Left Plate
  PRs[10] = MUX(1, 0, 1);
  PRs[11] = MUX(1, 1, 0);
  PRs[12] = MUX(1, 1, 1);
  PRs[13] = analogRead(pr8); 
  PRs[14] = analogRead(pr9);

  for (int i = 0; i<=14; i++)
  {
    Serial.print(PRs[i]);
    Serial.print(" ");
  }
  
  Serial.println();
}

void printLines()
{
  for(int i = 0; i < 15; i++)
  {
    if(PRs[i] > 850)
    {
      Serial.print(1);
      Serial.print(" ");
    }
    else
    {
      Serial.print(0);
      Serial.print(" ");
    }
  }
  Serial.println();
  Serial.println();
  delay(1000);
}
