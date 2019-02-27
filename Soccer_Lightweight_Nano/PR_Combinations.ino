void Com_to_Mega(bool a, bool b, bool c, bool d, bool e)
{
  digitalWrite(C1, a);
  digitalWrite(C2, b);
  digitalWrite(C3, c);
  digitalWrite(C4, d);
  digitalWrite(C5, e);  
}

void PR_Combinations()
{
  linea();

  /* First Level of Photoresistors */
  if((PRs[0] > 400 || PRs[1] > 400) && !(PRs[2] > 400 || PRs[3] > 400) && !(PRs[4] > 400 || PRs[5] > 400)) //FL: First Plate 
  {
    Com_to_Mega(0, 1, 0, 0, 0);
  }
  else if(!(PRs[0] > 400 || PRs[1] > 400) && (PRs[2] > 400 || PRs[3] > 400) && !(PRs[4] > 400 || PRs[5] > 400)) //FL: Second Plate
  {
    Com_to_Mega(0, 1, 0, 0, 1);
  }
  else if(!(PRs[0] > 400 || PRs[1] > 400) && !(PRs[2] > 400 || PRs[3] > 400) && (PRs[4] > 400 || PRs[5] > 400)) //FL: Third Plate
  {
    Com_to_Mega(0, 1, 0, 1, 0);
  }
  else if((PRs[0] > 400 || PRs[1] > 400) && (PRs[2] > 400 || PRs[3] > 400) && !(PRs[4] > 400 || PRs[5] > 400)) //FL: First and Second Plates
  {
    Com_to_Mega(0, 1, 0, 1, 1);
  }
  else if(!(PRs[0] > 400 || PRs[1] > 400) && (PRs[2] > 400 || PRs[3] > 400) && (PRs[4] > 400 || PRs[5] > 400)) //FL: Second and Third Plates
  {
    Com_to_Mega(0, 1, 1, 0, 0);
  }
  else if((PRs[0] > 400 || PRs[1] > 400) && !(PRs[2] > 400 || PRs[3] > 400) && (PRs[4] > 400 || PRs[5] > 400)) //FL: First and Third Plates
  {
    Com_to_Mega(0, 1, 1, 0, 1);
  }
  /* Second Level of Photoresistors */
  else if((PRs[6] > 400 || PRs[7] > 400) && !(PRs[8] > 400 || PRs[9] > 400) && !(PRs[10] > 400 || PRs[11] > 400)) //SL: First Plate 
  {
    Com_to_Mega(1, 0, 0, 0, 0);
  }
  else if(!(PRs[6] > 400 || PRs[7] > 400) && (PRs[8] > 400 || PRs[9] > 400) && !(PRs[10] > 400 || PRs[11] > 400)) //SL: Second Plate
  {
    Com_to_Mega(1, 0, 0, 0, 1);
  }
  else if(!(PRs[6] > 400 || PRs[7] > 400) && !(PRs[8] > 400 || PRs[9] > 400) && (PRs[10] > 400 || PRs[11] > 400)) //SL: Third Plate 
  {
    Com_to_Mega(1, 0, 0, 1, 0);
  }
  else if((PRs[6] > 400 || PRs[7] > 400) && (PRs[8] > 400 || PRs[9] > 400) && !(PRs[10] > 400 || PRs[11] > 400)) //SL: First and Second Plates
  {
    Com_to_Mega(1, 0, 0, 1, 1);
  }
  else if(!(PRs[6] > 400 || PRs[7] > 400) && (PRs[8] > 400 || PRs[9] > 400) && (PRs[10] > 400 || PRs[11] > 400)) //SL: Second and Third Plates
  {
    Com_to_Mega(1, 0, 1, 0, 0);
  }
  else if((PRs[6] > 400 || PRs[7] > 400) && !(PRs[8] > 400 || PRs[9] > 400) && (PRs[10] > 400 || PRs[11] > 400)) //SL: First and Third Plates
  {
    Com_to_Mega(1, 0, 1, 0, 1);
  }
  /* Third Level of Photoresistors */
  else if((PRs[12] > 400) && !(PRs[13] > 400) && !(PRs[14] > 400)) //TL: First Plate
  {
    Com_to_Mega(1, 1, 0, 0, 0);
  }
  else if(!(PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) //TL: Second Plate
  {
    Com_to_Mega(1, 1, 0, 0, 1);
  }
  else if(!(PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) //TL: Third Plate
  {
    Com_to_Mega(1, 1, 0, 1, 0);
  }
  else if((PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) //TL: First and Second Plates
  {
    Com_to_Mega(1, 1, 0, 1, 1);
  }
  else if(!(PRs[12] > 400) && (PRs[13] > 400) && (PRs[14] > 400)) //TL: Second and Third Plates
  {
    Com_to_Mega(1, 1, 1, 0, 0);
  }
  else if((PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) //TL: First and Third Plates
  {
    Com_to_Mega(1, 1, 1, 0, 1);
  }
}
