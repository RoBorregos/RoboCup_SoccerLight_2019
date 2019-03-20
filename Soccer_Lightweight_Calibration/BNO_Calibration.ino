void BNOCalibration()
{
  if(BNOStart)
  {
    Serial.begin(9600);
    Serial.println("Orientation Sensor Test"); Serial.println("");
    
    if(!bno.begin())
    {
      Serial.print("Ooops, no BNO055 detected ... Check your wiring or I2C ADDR!");
      while(1);
    }
    
    delay(1000);
      
    bno.setExtCrystalUse(true);

    BNOStart = false;
  }

  sensors_event_t event; 
  bno.getEvent(&event);
  
  Serial.print("X: ");
  Serial.print(event.orientation.x, 4);
  Serial.print("\tY: ");
  Serial.print(event.orientation.y, 4);
  Serial.print("\tZ: ");
  Serial.print(event.orientation.z, 4);
  Serial.println("");
  
  delay(250);

  uint8_t system, gyro, accel, mag;
  system = gyro = accel = mag = 0;
  bno.getCalibration(&system, &gyro, &accel, &mag);
 
  Serial.print("\t");
  if (!system)
  {
    Serial.print("! ");
  }
 
  Serial.print("Sys:");
  Serial.print(system, DEC);
  Serial.print(" G:");
  Serial.print(gyro, DEC);
  Serial.print(" A:");
  Serial.print(accel, DEC);
  Serial.print(" M:");
  Serial.println(mag, DEC);
}
