/*void pixy1Calibration()
{
  Pixy pixy;
  if(pixy1Start)
  {
    Serial.print("Starting...\n");
    pixy.init();

    pixy1Start = false;
  }

  uint16_t blocks = pixy.getBlocks();

  if(blocks)
  {
    Serial.print("X-Axis: ");
    Serial.print(pixy.blocks[0].x);
    Serial.print("\t\tY-Axis: ");
    Serial.println(pixy.blocks[0].y);
    delay(100);
  }
}*/
