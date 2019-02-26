int MUX (bool a, bool b, bool c) {

  digitalWrite(s0, a);
  digitalWrite(s1, b);
  digitalWrite(s2, c);
  delayMicroseconds(1);
  
  analogRead(Com);
  delayMicroseconds(50);
  
  return Com;
 
   
    }

void linea() {
  fotos[0] = MUX(0, 0, 0);
  fotos[1] = MUX(0, 0, 1);
  fotos[2] = MUX(0, 1, 0);
  fotos[3] = MUX(0, 1, 1);
  fotos[4] = MUX(1, 0, 0);
  fotos[5] = MUX(1, 0, 1);
  fotos[6] = MUX(1, 1, 0);
  fotos[7] = MUX(1, 1, 1);
  fotos[8] = analogRead(fr8); 
  fotos[9] = analogRead(fr9);
  fotos[10] = analogRead(fr10);
  fotos[11] = analogRead(fr11);
  fotos[12] = analogRead(fr12);
  fotos[13] = analogRead(fr13);
  fotos[14] = analogRead(fr14);

  
 
for (i=0; i<=14; i++) {

  fotos[i];
  delayMicroseconds(50);
  
}


  
  }
