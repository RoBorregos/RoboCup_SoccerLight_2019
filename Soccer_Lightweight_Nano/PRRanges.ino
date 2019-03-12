void getPRRanges()
{
  delay(1000);
  lines();
  
  for(int i = 0; i < 15; i++)
  {
    PRRanges[i] = PRs[i];
  }
  
  for(int i = 0; i < 30; i++)
  {
    lines();
    
    for(int j = 0; j < 15; j++)
    {
      PRRanges[j] = (PRRanges[j] + PRs[j]) / 2;
    }
  }
}
