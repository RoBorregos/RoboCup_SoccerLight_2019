/*void pixy1Calibration()
{
  /*Pixy V1 Calibration*******************************************
   * 
   *  This is the calibration function for the Pixy V1 sensor.
   *  The setup initializes the sensor.
   *  The rest of the body reads a block and prints its x- and y-axis.
   *  
   **************************************************************\/

  //Setup
  Pixy pixy;
  if(pixy1Start)
  {
    Serial.print("Starting...\n");
    pixy.init();

    pixy1Start = false;
  }
  
  //Get block
  uint16_t blocks = pixy.getBlocks();

  //Print block position
  if(blocks)
  {
    Serial.print("X-Axis: ");
    Serial.print(pixy.blocks[0].x);
    Serial.print("\t\tY-Axis: ");
    Serial.println(pixy.blocks[0].y);
    delay(100);
  }
}*/
