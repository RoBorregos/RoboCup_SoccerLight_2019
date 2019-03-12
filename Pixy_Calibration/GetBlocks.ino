void block() {
   int i; 
  pixy.ccc.getBlocks(); // grab blocks!
  
  
  if (pixy.ccc.numBlocks) // If there are detect blocks, print them!
  {
    Serial.print("Detected ");
    for (i=0; i<pixy.ccc.numBlocks; i++)
    
      
  if (pixy.ccc.blocks[i].m_x < 150) {
    Serial.println("On range");
    delay(100);
     }

    else{
    Serial.println("Not on range");
      }
       
   } 
 }
