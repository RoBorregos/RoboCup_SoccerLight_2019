void printLCD(){
  String aux;
  int val;
  lcd.setCursor(0,0);
  for(int i = 0; i <= 4; i++){
    val = PRs[i];
    aux = String(val);
    if(val < 10){
      aux = "00" + aux + " ";
    }
    else if(val < 100){
      aux = "0" + aux + " ";
    }
    else if(val > 999){
      aux = "999 ";
    }
    else{
      aux = aux + " ";
    }
    lcd.print(aux);
  }

  lcd.setCursor(0,1);
  for(int i = 5; i <= 9; i++){
    val = PRs[i];
    aux = String(val);
    if(val < 10){
      aux = "0" + aux + " ";
    }
    else if(val < 100){
      aux = "0" + aux + " ";
    }
    else if(val > 999){
      aux = "999 ";
    }
    else{
      aux = aux + " ";
    }
    lcd.print(aux);
  }
}
