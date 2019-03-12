void block()
{
  int i; 
  pixy.ccc.getBlocks(); // grab blocks!

  if(pixy.ccc.numBlocks) // If there are detect blocks, print them!
  {
    Serial.print("Detected block on: ");
    for (i=0; i < pixy.ccc.numBlocks; i++)
    
      
    if(pixy.ccc.blocks[i].m_x < 125)
    {
      Serial.println("Right");
      delay(100);
    }
    else if(pixy.ccc.blocks[i].m_x < 175)
    {
      Serial.println("Center");
      delay(100);
    }
    else
    {
      Serial.println("Left");
      delay(100);
    }
  }
}
