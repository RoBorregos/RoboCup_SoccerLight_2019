void Communication (bool ) {
  
  }


void PR_Combinations() {
  
linea();

 /*/////////////////////////////////////////////First line of Photo Resistors//////////////////////////////////////////////*/
  
  if ((PRs[0] > 400 ||PRs[1] > 400) && !(PRs[2] > 400 ||PRs[3] > 400) && !(PRs[4] > 400 ||PRs[5] > 400)) { // FL_First Plate 
    
    }
    
  else if (!(PRs[0] > 400 ||PRs[1] > 400) && (PRs[2] > 400 ||PRs[3] > 400) && !(PRs[4] > 400 ||PRs[5] > 400)) { // FL_Second Plate 
    
    }
    
  else if (!(PRs[0] > 400 ||PRs[1] > 400) && !(PRs[2] > 400 ||PRs[3] > 400) && (PRs[4] > 400 ||PRs[5] > 400)) { // FL_Third Plate 
    
    }
    
  else if ((PRs[0] > 400 ||PRs[1] > 400) && (PRs[2] > 400 ||PRs[3] > 400) && !(PRs[4] > 400 ||PRs[5] > 400)) { // FL_First and Second Plates
    
    }

  else if (!(PRs[0] > 400 ||PRs[1] > 400) && (PRs[2] > 400 ||PRs[3] > 400) && (PRs[4] > 400 ||PRs[5] > 400)) { // FL_Second and Third Plates
    
    }
    
  else if ((PRs[0] > 400 ||PRs[1] > 400) && !(PRs[2] > 400 ||PRs[3] > 400) && (PRs[4] > 400 ||PRs[5] > 400)) { // FL_First and Third Plates
    
    }


  /*/////////////////////////////////////////////Second line of Photo Resistors//////////////////////////////////////////////*/

if ((PRs[6] > 400 ||PRs[7] > 400) && !(PRs[8] > 400 ||PRs[9] > 400) && !(PRs[10] > 400 ||PRs[11] > 400)) { // SL_First Plate 
    
    }
    
  else if (!(PRs[6] > 400 ||PRs[7] > 400) && (PRs[8] > 400 ||PRs[9] > 400) && !(PRs[10] > 400 ||PRs[11] > 400)) { // SL_Second Plate 
    
    }
    
  else if (!(PRs[6] > 400 ||PRs[7] > 400) && !(PRs[8] > 400 ||PRs[9] > 400) && (PRs[10] > 400 ||PRs[11] > 400)) { // SL_Third Plate 
    
    }
    
  else if ((PRs[6] > 400 ||PRs[7] > 400) && (PRs[8] > 400 ||PRs[9] > 400) && !(PRs[10] > 400 ||PRs[11] > 400)) { // SL_First and Second Plates
    
    }

  else if (!(PRs[6] > 400 ||PRs[7] > 400) && (PRs[8] > 400 ||PRs[9] > 400) && (PRs[10] > 400 ||PRs[11] > 400)) { // SL_Second and Third Plates
    
    }
    
  else if ((PRs[6] > 400 ||PRs[7] > 400) && !(PRs[8] > 400 ||PRs[9] > 400) && (PRs[10] > 400 ||PRs[11] > 400)) { // SL_First and Third Plates
    
    }

  /*/////////////////////////////////////////////Third line of Photo Resistors//////////////////////////////////////////////*/

  else if ((PRs[12] > 400) && !(PRs[13] > 400) && !(PRs[14] > 400)) { // TL_FirstvPlate
    
    }

  else if (!(PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) { // TL_Second Plate
    
    }
    
  else if (!(PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) { // TL_ Third Plate
    
    }

  else if ((PRs[12] > 400) && (PRs[13] > 400) && !(PRs[14] > 400)) { // TL_First and Second Plates
    
    }

  else if (!(PRs[12] > 400) && (PRs[13] > 400) && (PRs[14] > 400)) { // TL_Second and Third Plates
    
    }

  else if ((PRs[12] > 400) && !(PRs[13] > 400) && (PRs[14] > 400)) { // TL_First and Third Plates
    
    }
  
    

}
