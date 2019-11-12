void pixy2Calibration()
{
  /*Pixy V1 Calibration*******************************************
   * 
   *  This is the calibration function for the Pixy V2 sensor.
   *  The setup initializes the sensor.
   *  The rest of the body reads a block and prints its x- and y-axis.
   *  
   **************************************************************/

  //Setup
  Pixy2 pixy;
  if(pixy2Start)
  {
    Serial.print("Starting...\n");
    pixy.init();

    pixy2Start = false;
  }

  //Get block
  pixy.ccc.getBlocks();

  //Print block position
  if(pixy.ccc.numBlocks)
  {
    Serial.print("X-Axis: ");
    Serial.print(pixy.ccc.blocks[0].m_x);
    Serial.print("\t\tY-Axis: ");
    Serial.println(pixy.ccc.blocks[0].m_y);
    delay(100);
  }
}
