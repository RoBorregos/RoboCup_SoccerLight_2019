void LCDCalibration()
{
  /*LCD Calibration***********************************************
   * 
   *  This is the calibration function for the LCD sensor.
   *  The setup starts the sensor, turns on the backlight and prints a message.
   *  The rest of the body prints the amount of seconds elapsed since the beginning of the program.
   *  
   **************************************************************/
  
  //Setup
  if(LCDStart)
  {
    lcd.init();
    lcd.backlight();
    lcd.print("Hola Mundo");

    LCDStart = false;
  }

  //Set the cursor on the Column 0 Row 1 and print the amount of seconds elapsed
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);
  lcd.print(" Segundos");
  delay(100);
}
