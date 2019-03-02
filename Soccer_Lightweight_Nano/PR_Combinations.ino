void communicationToMega(bool a, bool b, bool c, bool d, bool e)
{
  digitalWrite(comPin1, a);
  digitalWrite(comPin2, b);
  digitalWrite(comPin3, c);
  digitalWrite(comPin4, d);
  digitalWrite(comPin5, e);
}

void PR_Combinations()
{
  int range = 600;
  Serial.print("In PR_Combinations");
  if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 0, 0);
    Serial.println(" 0");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 0, 1);
    Serial.println(" 1");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 1, 0);
    Serial.println(" 2");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && !(PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 0, 1, 1);
    Serial.println(" 3");
  }
  else if(!(PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && (PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 0, 0);
    Serial.println(" 4");
  }
  else if((PRs[0] > range || PRs[1] > range || PRs[2] > range || PRs[3] > range || PRs[4] > range) && !(PRs[5] > range || PRs[6] > range || PRs[7] > range || PRs[8] > range || PRs[9] > range) && (PRs[10] > range || PRs[11] > range || PRs[12] > range || PRs[13] > range || PRs[14] > range))
  {
    communicationToMega(0, 0, 1, 0, 1);
    Serial.println(" 5");
  }
}

/*void PR_Combinations()
{
  linea();

  int rango = 500;

  /* First Level of Photoresistors 
  if((PRs[0] > rango || PRs[1] > rango) && !(PRs[5] > rango || PRs[6] > rango) && !(PRs[10] > rango || PRs[11] > rango)) //FL: First Plate 
  {
    communicationToMega(0, 1, 0, 0, 0);
  }
  else if(!(PRs[0] > rango || PRs[1] > rango) && (PRs[5] > rango || PRs[6] > rango) && !(PRs[10] > rango || PRs[11] > rango)) //FL: Second Plate
  {
    communicationToMega(0, 1, 0, 0, 1);
  }
  else if(!(PRs[0] > rango || PRs[1] > rango) && !(PRs[5] > rango || PRs[6] > rango) && (PRs[10] > rango || PRs[11] > rango)) //FL: Third Plate
  {
    communicationToMega(0, 1, 0, 1, 0);
  }
  else if((PRs[0] > rango || PRs[1] > rango) && (PRs[5] > rango || PRs[6] > rango) && !(PRs[10] > rango || PRs[11] > rango)) //FL: First and Second Plates
  {
    communicationToMega(0, 1, 0, 1, 1);
  }
  else if(!(PRs[0] > rango || PRs[1] > rango) && (PRs[5] > rango || PRs[6] > rango) && (PRs[10] > rango || PRs[11] > rango)) //FL: Second and Third Plates
  {
    communicationToMega(0, 1, 1, 0, 0);
  }
  else if((PRs[0] > rango || PRs[1] > rango) && !(PRs[5] > rango || PRs[6] > rango) && (PRs[10] > rango || PRs[11] > rango)) //FL: First and Third Plates
  {
    communicationToMega(0, 1, 1, 0, 1);
  }
  /* Second Level of Photoresistors 
  else if((PRs[2] > rango || PRs[3] > rango) && !(PRs[7] > rango || PRs[8] > rango) && !(PRs[12] > rango || PRs[13] > rango)) //SL: First Plate 
  {
    communicationToMega(1, 0, 0, 0, 0);
  }
  else if(!(PRs[2] > rango || PRs[3] > rango) && (PRs[7] > rango || PRs[8] > rango) && !(PRs[12] > rango || PRs[13] > rango)) //SL: Second Plate
  {
    communicationToMega(1, 0, 0, 0, 1);
  }
  else if(!(PRs[2] > rango || PRs[3] > rango) && !(PRs[7] > rango || PRs[8] > rango) && (PRs[12] > rango || PRs[13] > rango)) //SL: Third Plate 
  {
    communicationToMega(1, 0, 0, 1, 0);
  }
  else if((PRs[2] > rango || PRs[3] > rango) && (PRs[7] > rango || PRs[8] > rango) && !(PRs[12] > rango || PRs[13] > rango)) //SL: First and Second Plates
  {
    communicationToMega(1, 0, 0, 1, 1);
  }
  else if(!(PRs[2] > rango || PRs[3] > rango) && (PRs[7] > rango || PRs[8] > rango) && (PRs[12] > rango || PRs[13] > rango)) //SL: Second and Third Plates
  {
    communicationToMega(1, 0, 1, 0, 0);
  }
  else if((PRs[2] > rango || PRs[3] > rango) && !(PRs[7] > rango || PRs[8] > rango) && (PRs[12] > rango || PRs[13] > rango)) //SL: First and Third Plates
  {
    communicationToMega(1, 0, 1, 0, 1);
  }
  /* Third Level of Photoresistors 
  else if((PRs[4] > rango) && !(PRs[9] > rango) && !(PRs[14] > rango)) //TL: First Plate
  {
    communicationToMega(1, 1, 0, 0, 0);
  }
  else if(!(PRs[4] > rango) && (PRs[9] > rango) && !(PRs[14] > rango)) //TL: Second Plate
  {
    communicationToMega(1, 1, 0, 0, 1);
  }
  else if(!(PRs[4] > rango) && !(PRs[9] > rango) && (PRs[14] > rango)) //TL: Third Plate
  {
    communicationToMega(1, 1, 0, 1, 0);
  }
  else if((PRs[4] > rango) && (PRs[9] > rango) && !(PRs[14] > rango)) //TL: First and Second Plates
  {
    communicationToMega(1, 1, 0, 1, 1);
  }
  else if(!(PRs[4] > rango) && (PRs[9] > rango) && (PRs[14] > rango)) //TL: Second and Third Plates
  {
    communicationToMega(1, 1, 1, 0, 0);
  }
  else if((PRs[4] > rango) && !(PRs[9] > rango) && (PRs[14] > rango)) //TL: First and Third Plates
  {
    communicationToMega(1, 1, 1, 0, 1);
  }
}*/
