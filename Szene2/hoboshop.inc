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

#declare buildingcolor3 = texture {T_Wood7
		                normal {wood 0.5 scale 0.05 turbulence 0.1 rotate<0,0,0> }
		                finish {phong 1}
		                rotate<0,0,0> scale 0.5 translate<0,0,0>};

#declare buildingcolor_3 = texture{ T_Wood30    
                normal { wood 0.5 scale 0.05 turbulence 0.0 rotate<0,0,0> }
                finish { phong 1 } 
                rotate<0,0,0> scale 0.5 translate<0,0,0>
              } // end of texture 
  

// Saloon-K�rper ----------------------------------------------------------
#declare koerper=

merge{

 union{
                                   
    box { <0.00, 0.00, 0.00>,< 2.30, 2.20, 2.70>
    
        texture { buildingcolor_3}

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

    box { <1.00, 0.00, 0.00>, <1.47, 0.70, 0.10>   
        
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
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }       
  
// Balken-rechtsau�en   ----------------------------------------------------------
#declare balken =

union {

box { <2.24, 1.05, -0.60>, <2.29, 0.00, -0.55> 
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }  

// Balken-linksau�en    ----------------------------------------------------------

box { <0.01, 1.05, -0.60>, <0.06, 0.00, -0.55> 
       
        texture {buildingcolor_3} // end of texture 
 
               // end of texture                                  
    } 
  
// Balken-linksinnen    ----------------------------------------------------------

box { <0.81, 1.05, -0.60>, <0.86, 0.00, -0.55> 
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }  


// Balken-rechtsinnen    ----------------------------------------------------------

box { <1.61, 1.05, -0.60>, <1.66, 0.00, -0.55> 
       
        texture { buildingcolor_3} // end of texture 
 
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
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }


#local i = 0;
#local end_i  = 2.27;

#while (i <= end_i)
       object{ GBalken translate <i, 0, 0> }

#local i = i + 0.324;
 

#end


box { <0.00, 1.35, -0.60>, <2.30, 1.38, -0.57> 
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }

box { <2.27, 1.35, -0.57>, <2.30, 1.38, 0.00> 
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }

box { <0.00, 1.35, -0.57>, <0.03, 1.38, 0.00> 
       
        texture { buildingcolor_3} // end of texture 
 
               // end of texture                                  
    }

}
} 
// Schild  ---------------------------------------------------------------
 
#declare Schild = 

merge { 
 
 
intersection{

box { <0.55, 1.95, -0.005>, <1.85, 2.45, 0.00>
      
               texture{ Rosewood     
                //normal { wood 0.5 scale 0.3 rotate<0,90,0> turbulence 0.1}
                finish { phong 1} 
                rotate<60,0,45> scale 0.5
              } // end of texture

    
    
    
    }



box { <0.65, 2.00, -0.006>, <1.75, 2.40, 0.00> inverse

            texture { pigment{ wood turbulence 0.02 octaves 4 lambda 3
                     scale 0.175  rotate <2, 3, 0> 
                     color_map {
                        [0.0 color rgb <1.00, 0.88, 0.54>]
                        [0.1 color rgb <1.00, 0.80, 0.54>]
                        [0.5 color rgb <0.70, 0.42, 0.23>]
                        [0.7 color rgb <0.70, 0.42, 0.23>]
                        [1.0 color rgb <1.00, 0.88, 0.54>]
                     }// end of color_map
                   } // end of pigment
            // normal { agate 0.5 scale 0.25} 
            finish { phong 1 } 
            rotate <0,0, 0>  scale 1  translate <0,0,0>
        } // end of texture
   }
}


text{
   ttf "saloonext th.ttf",
   "HOBO",0.1, 0
            
              texture { T_Wood24    
                normal { wood 0.5 scale 0.05 turbulence 0.1 rotate<0,0,0> }
                finish { phong 1 } 
                rotate<0,0,0> scale 0.5 translate<0,0,0>
                     } // end of texture
 
  

  scale<0.15, 0.15, 0.1>
  translate<0.98,2.24,-0.015> 
  
    } 
 
text{
   ttf "saloonext th.ttf",
   "SHOP",0.1, 0
            
            texture { T_Wood24    
                normal { wood 0.5 scale 0.05 turbulence 0.1 rotate<0,0,0> }
                finish { phong 1 } 
                rotate<0,0,0> scale 0.5 translate<0,0,0>
                     } // end of texture

  scale<0.15, 0.15, 0.1>
  translate<1,2.05,-0.015> 
  
    } 
 
 
}

#declare hoboshop =

union{

object {Schild translate <0,-0.30, 0> }
 
object {koerper}
object{vordach}
object{balken}
object{gelaender}
 
} 



     

//------------------------------------- end 