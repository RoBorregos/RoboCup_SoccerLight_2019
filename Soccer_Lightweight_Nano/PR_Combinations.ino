void communication (bool a, bool b, bool c, bool d, bool e)
{
  
}


void PR_Combinations()
{
  linea();

  /* First Level of Photoresistors */
  if((PRs[0] > 400 || PRs[1] > 400) && !(PRs[2] > 400 || PRs[3] > 400) && !(PRs[4] > 400 || PRs[5] > 400)) //FL: First Plate 
  {
    
  }
  else if(!(PRs[0] > 400 || PRs[1] > 400) && (PRs[2] > 400 || PRs[3] > 400) && !(PRs[4] > 400 || PRs[5] > 400)) //FL: Second Plate
  {
    
  }
  else if(!(PRs[0] > 400 || PRs[1] > 400) && !(PRs[2] > 400 || PRs[3] > 400) && (PRs[4] > 400 || PRs[5] > 400)) //FL: Third Plate
  {
    
  }
  else if((PRs[0] > 400 || PRs[1] > 400) && (PRs[2] > 400 || PRs[3] > 400) && !(PRs[4] > 400 || PRs[5] > 400)) //FL: First and Second Plates
  {
    
  }
  else if(!(PRs[0] > 400 || PRs[1] > 400) && (PRs[2] > 400 || PRs[3] > 400) && (PRs[4] > 400 || PRs[5] > 400)) //FL: Second and Third Plates
  {
    
  }
  else if((PRs[0] > 400 || PRs[1] > 400) && !(PRs[2] > 400 || PRs[3] > 400) && (PRs[4] > 400 || PRs[5] > 400)) //FL: First and Third Plates
  {
    
  }
  /* Second Level of Photoresistors */
  else if((PRs[6] > 400 || PRs[7] > 400) && !(PRs[8] > 400 || PRs[9] > 400) && !(PRs[10] > 400 || PRs[11] > 400)) //SL: First Plate 
  {
    
  }
  else if(!(PRs[6] > 400 || PRs[7] > 400) && (PRs[8] > 400 || PRs[9] > 400) && !(PRs[10] > 400 || PRs[11] > 400)) //SL: Second Plate
  {
    
  }
  else if(!(PRs[6] > 400 || PRs[7] > 400) && !(PRs[8] > 400 || PRs[9] > 400) && (PRs[10] > 400 || PRs[11] > 400)) //SL: Third Plate 
  {
    
  }
  else if((PRs[6] > 400 || PRs[7] > 400) && (PRs[8] > 400 || PRs[9] > 400) && !(PRs[10] > 400 || PRs[11] > 400)) //SL: First and Second Plates
  {
    
  }
  else if(!(PRs[6] > 400 || PRs[7] > 400) && (PRs[8] > 400 || PRs[9] > 400) && (PRs[10] > 400 || PRs[11] > 400)) //SL: Second and Third Plates
  {
    
  }
  else if((PRs[6] > 400 || PRs[7] > 400) && !(PRs[8] > 400 || PRs[9] > 400) && (PRs[10] > 400 || PRs[11] > 400)) //SL: First and Third Plates
  {
    
  }
  /* Third Level of Photoresistors */
  else if((PRs[12] > 400) && !(PRs[13] > 400) && !(PRs[14] > 400)) //TL: First Plate
  {
    
  }
  else if(!(PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) //TL: Second Plate
  {
    
  }
  else if(!(PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) //TL: Third Plate
  {
    
  }
  else if((PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) //TL: First and Second Plates
  {
    
  }
  else if(!(PRs[12] > 400) && (PRs[13] > 400) && (PRs[14] > 400)) //TL: Second and Third Plates
  {
    
  }
  else if((PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) //TL: First and Third Plates
  {
    
  }
}
