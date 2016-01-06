#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "woods.inc" 


//------------------------------------------
// camera ----------------------------------
camera{ location  <2.5 , 1.2 ,-2.5>
        look_at   <1.0 , 1.2 , 0.0>
        right x*image_width/image_height
        angle 75 }
// sun -------------------------------------
light_source{<1000,3000,-2500> color White}  
// sky ---------------------------------------------------------------------
sky_sphere { pigment { gradient <0,1,0>
                       color_map { [0.00 rgb <1.0,1.0,1.0>]
                                   [0.30 rgb <0.0,0.1,1.0>]
                                   [0.70 rgb <0.0,0.1,1.0>]
                                   [1.00 rgb <1.0,1.0,1.0>] 
                                 } 
                       scale 2         
                     } // end of pigment
           } //end of skysphere
// fog ---------------------------------------------------------------------
fog{fog_type   2
    distance   50
    color      White
    fog_offset 0.1
    fog_alt    2.0
    turbulence 0.8}
// ground ------------------------------------------------------------------
plane{ <0,1,0>, 0 
       texture{ pigment{ color rgb <0.825,0.57,0.35>}
                normal { bumps 0.75 scale 0.025  }
                finish { phong 0.1 } 
              } // end of texture
     } // end of plane                                  
/* 
// Boden  ----------------------------------------------------------
 
box { <0.00, 0.00, -0.60>, <2.30, 0.15, 2.70> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }                               
*/                                   
#declare light_wood1 = pigment { P_WoodGrain7A color_map { M_Wood7A } rotate <0,  90,0>}

#declare board_length = 0.25;
#declare board_width = 1.5;
// Saloon-K�rper ----------------------------------------------------------
#declare koerper=

merge{

 union{
                                   
    box { <0.00, 0.00, 0.00>,< 2.30, 2.20, 2.70>
    
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture

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

  // T�r ----

    box { <1.00, 0.00, 0.00>, <1.47, 0.50, 0.10>   
        
          texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        }       
   
   // T�r 2 ----

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
#declare vordach=
box { <0.00, 1.05, -0.60>, <2.30, 1.10, 0.00> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }       
  
// Balken-rechtsau�en   ----------------------------------------------------------
#declare balken =

union {

box { <2.24, 1.05, -0.60>, <2.29, 0.00, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }  

// Balken-linksau�en    ----------------------------------------------------------

box { <0.01, 1.05, -0.60>, <0.06, 0.00, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    } 
  
// Balken-linksinnen    ----------------------------------------------------------

box { <0.81, 1.05, -0.60>, <0.86, 0.00, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }  


// Balken-rechtsinnen    ----------------------------------------------------------

box { <1.61, 1.05, -0.60>, <1.66, 0.00, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
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
// Gel�nder ---------------------------------------------------------------------

#local gelaender=

union{

#local GBalken =
box { <0.00, 1.10, -0.60>, <0.03, 1.35, -0.57> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }


#local i = 0;
#local end_i  = 2.27;

#while (i <= end_i)
       object{ GBalken translate <i, 0, 0> }

#local i = i + 0.324;
 

#end


box { <0.00, 1.35, -0.60>, <2.30, 1.38, -0.57> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }

box { <2.27, 1.35, -0.57>, <2.30, 1.38, 0.00> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }

box { <0.00, 1.35, -0.57>, <0.03, 1.38, 0.00> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }

}
} 
// Schild  ---------------------------------------------------------------
 
#declare Schild = 

merge { 
 
 
intersection{

box { <0.55, 1.95, -0.005>, <1.85, 2.45, 0.00>
      
      
                texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture

    
    
    
    }



box { <0.65, 2.00, -0.006>, <1.75, 2.40, 0.00> inverse

            texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
   }
}

/*
text{
   ttf "saloonext th.ttf",
   "BOB ROSS",0.1, 0
            
              texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
 
  

  scale<0.15, 0.15, 0.1>
  translate<0.75,2.24,-0.015> 
  
    } 
 
text{
   ttf "saloonext th.ttf",
   "FAN CLUB",0.1, 0
            
            texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture

  scale<0.15, 0.15, 0.1>
  translate<0.75,2.05,-0.015> 
  
    } 
*/ 
 
}

#declare blancobuilding =

union{

object {Schild translate <0,-0.30, 0> }
 
object {koerper}
object{vordach}
object{balken}
object{gelaender}
 
} 

       blancobuilding

//------------------------------------- end 