void pixy2Calibration()
{
  Pixy2 pixy;
  if(pixy2Start)
  {
    Serial.print("Starting...\n");
    pixy.init();

    pixy2Start = false;
  }

  pixy.ccc.getBlocks();

  if(pixy.ccc.numBlocks)
  {
    Serial.print("X-Axis: ");
    Serial.print(pixy.ccc.blocks[0].m_x);
    Serial.print("\t\tY-Axis: ");
    Serial.println(pixy.ccc.blocks[0].m_y);
    delay(100);
  }
}
