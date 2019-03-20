void LCDCalibration()
{
  if(LCDStart)
  {
    //Inicializar el LCD
    lcd.init();
    
    //Encender la luz de fondo.
    lcd.backlight();
    
    //Escribimos el Mensaje en el LCD.
    lcd.print("Hola Mundo");

    LCDStart = false;
  }
  
  //Ubicamos el cursor en la primera posición(columna:0) de la segunda línea(fila:1)
  lcd.setCursor(0, 1);
  //Escribimos el número de segundos trascurridos
  lcd.print(millis()/1000);
  lcd.print(" Segundos");
  delay(100);
}
