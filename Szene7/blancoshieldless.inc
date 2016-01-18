#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "woods.inc" 
                                  
#declare light_wood1 = pigment { P_WoodGrain7A color_map { M_Wood7A } rotate <0,  90,0>}

#declare board_length = 0.25;
#declare board_width = 1.5;

#declare buildingcolor1 = texture {T_Wood7
		                normal {wood 0.5 scale 0.05 turbulence 0.1 rotate<0,0,0> }
		                finish {phong 1}
		                rotate<0,0,0> scale 0.5 translate<0,0,0>};
// Saloon-Körper ----------------------------------------------------------
#declare koerper2=

merge{

 union{
                                   
    box { <0.00, 0.00, 0.00>,< 2.30, 2.20, 2.70>
    
        texture { buildingcolor1}

          // scale <1,1,1> rotate<0,0,0> translate<0,0,0> 
        } // end of box --------------------------------------

    
    box { <0.10, 0.00, 0.10>,< 2.20, 2.10, 2.60>    
        
        
          texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        
        
        
          // scale <1,1,1> rotate<0,0,0> translate<0,0,0> 
        } // end of box --------------------------------------

    
 
     
      } 

  // Tür ----

    box { <1.00, 0.00, 0.00>, <1.47, 0.50, 0.10>   
        
          texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        }       
   
   // Tür 2 ----

    box { <1.00, 1.10, 0.00>, <1.47, 1.60, 0.10>   
        
          texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        } 
   
   
   
   /*
  // Fenster ----- 

    box { <0.30, 1.40, 0.00>, <0.70, 1.80, 0.10>  
        
         texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        }
   
    box { <1.60, 1.40, 0.00>, <2.00, 1.80, 0.10>  
        
         texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        }
     */
   
}


// Vordach   ----------------------------------------------------------
#declare vordach2=
box { <0.00, 1.05, -0.60>, <2.30, 1.10, 0.00> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }       
  
// Balken-rechtsaußen   ----------------------------------------------------------
#declare balken2 =

union {

box { <2.24, 1.05, -0.60>, <2.29, 0.00, -0.55> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }  

// Balken-linksaußen    ----------------------------------------------------------

box { <0.01, 1.05, -0.60>, <0.06, 0.00, -0.55> 
       
        texture {buildingcolor1} // end of texture 
 
               // end of texture                                  
    } 
  
// Balken-linksinnen    ----------------------------------------------------------

box { <0.81, 1.05, -0.60>, <0.86, 0.00, -0.55> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }  


// Balken-rechtsinnen    ----------------------------------------------------------

box { <1.61, 1.05, -0.60>, <1.66, 0.00, -0.55> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }  
  
 
 
/*  
// Treppe    ----------------------------------------------------------

box { <0.86, 0.00, -0.66>, <1.61, 0.10, -0.60> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    } 
 
box { <0.86, 0.00, -0.71>, <1.61, 0.05, -0.60> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    } 

*/
// Geländer ---------------------------------------------------------------------

#local gelaender2=

union{

#local GBalken =
box { <0.00, 1.10, -0.60>, <0.03, 1.35, -0.57> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }


#local i = 0;
#local end_i  = 2.27;

#while (i <= end_i)
       object{ GBalken translate <i, 0, 0> }

#local i = i + 0.324;
 

#end


box { <0.00, 1.35, -0.60>, <2.30, 1.38, -0.57> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }

box { <2.27, 1.35, -0.57>, <2.30, 1.38, 0.00> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }

box { <0.00, 1.35, -0.57>, <0.03, 1.38, 0.00> 
       
        texture { buildingcolor1} // end of texture 
 
               // end of texture                                  
    }

}
} 
// Schild  ---------------------------------------------------------------
 


#declare blancoshieldless =

union{


 
object {koerper2}
object{vordach2}
object{balken2}
object{gelaender2}
 
} 

     

//------------------------------------- end 