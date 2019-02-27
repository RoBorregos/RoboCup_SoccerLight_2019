int MUX(bool a, bool b, bool c)
{
  digitalWrite(s0, a);
  digitalWrite(s1, b);
  digitalWrite(s2, c);
  delayMicroseconds(1);
  
  analogRead(com);
  delayMicroseconds(50);
  
  return com;
}

void linea()
{
  PRs[0] = MUX(0, 0, 0);
  PRs[1] = MUX(0, 0, 1);
  PRs[2] = MUX(0, 1, 0);
  PRs[3] = MUX(0, 1, 1);
  PRs[4] = MUX(1, 0, 0);
   
  
  PRs[10] = analogRead(pr10);
  PRs[11] = analogRead(pr11);
  PRs[12] = analogRead(pr12);
  PRs[13] = analogRead(pr13);
  PRs[14] = analogRead(pr14);
  
  PRs[8] = analogRead(pr8); 
  PRs[9] = analogRead(pr9);
  PRs[5] = MUX(1, 0, 1);
  PRs[6] = MUX(1, 1, 0);
  PRs[7] = MUX(1, 1, 1);
}
