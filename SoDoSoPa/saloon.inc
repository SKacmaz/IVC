#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "woods.inc" 


//------------------------------------------
// camera ----------------------------------
camera{ location  <3.0 , 1.2 ,-2.5>
        look_at   <1.0 , 1 , 0.0>
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
// ----------------------------------------------------------

#declare buildingcolor2 = texture {T_Wood7
		                normal {wood 0.5 scale 0.05 turbulence 0.1 rotate<0,0,0> }
		                finish {phong 1}
		                rotate<0,0,0> scale 0.5 translate<0,0,0>};

                                   
 
// Boden  ----------------------------------------------------------
#declare boden =
 
box { <0.00, 0.00, -0.60>, <2.30, 0.15, 2.70> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    }                               


// Saloon-Körper ----------------------------------------------------------
#declare koerper_sal = 
merge{

 union{
                                   
    box { <0.00, 0.15, 0.00>,< 2.30, 2.50, 2.70>
    
        texture { buildingcolor2} // end of texture

          // scale <1,1,1> rotate<0,0,0> translate<0,0,0> 
        } // end of box --------------------------------------

    
    box { <0.10, 0.15, 0.10>,< 2.20, 2.40, 2.60>    
        
        
          texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        
        
        
          // scale <1,1,1> rotate<0,0,0> translate<0,0,0> 
        } // end of box --------------------------------------

    
 
     
      } 

// Tür ----

    box { <0.96, 0.15, 0.00>, <1.51, 0.60, 0.10>   
        
          texture { pigment{ color White transmit 1 } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture
        }       


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
   
   
}


// Vordach   ----------------------------------------------------------
#declare vordach_sal =
box { <0.00, 1.05, -0.60>, <2.30, 1.10, 0.00> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    }       
  
// Balken-rechtsaußen   ----------------------------------------------------------
#declare balken_sal =

union{

box { <2.24, 1.05, -0.60>, <2.29, 0.15, -0.55> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    }  

// Balken-linksaußen    ----------------------------------------------------------

box { <0.01, 1.05, -0.60>, <0.06, 0.15, -0.55> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    } 
  
// Balken-linksinnen    ----------------------------------------------------------

box { <0.81, 1.05, -0.60>, <0.86, 0.15, -0.55> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    }  


// Balken-rechtsinnen    ----------------------------------------------------------

box { <1.61, 1.05, -0.60>, <1.66, 0.15, -0.55> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    }  
  
} 
 
  
// Treppe    ----------------------------------------------------------

#declare treppe =

union{

box { <0.86, 0.00, -0.66>, <1.61, 0.10, -0.60> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    } 
 
box { <0.86, 0.00, -0.71>, <1.61, 0.05, -0.60> 
       
        texture { buildingcolor2} // end of texture 
 
               // end of texture                                  
    } 

}
 
// SALOON_Schild  ---------------------------------------------------------------

#declare schild_sal =

merge{

intersection{

box { <0.35, 1.95, -0.005>, <2.05, 2.45, 0.00>

                texture{ T_Wood12    
                finish { phong 1 } 
                rotate<0,0,0> scale 0.5 translate<0,0,0>
              } // end of texture 
    }



box { <0.45, 2.00, -0.006>, <1.95, 2.40, 0.00> inverse

              texture{ T_Wood30    
                normal { wood 0.5 scale 0.05 turbulence 0.0 rotate<0,0,0> }
                finish { phong 1 } 
                rotate<0,0,0> scale 0.5 translate<0,0,0>
              } // end of texture 
 
 
 
    }
}

text{
   ttf "saloonext th.ttf",
   "SALOON",0.1, 0
            texture{ T_Wood12    
                finish { phong 1 } 
                rotate<0,0,0> scale 0.5 translate<0,0,0>
              } // end of texture  

  scale<0.3, 0.3, 0.1>
  translate<0.5,2.1,-0.015> 
  
  } 
 
 
} 
 
#declare saloon =

union{

    object {boden}
    object {koerper_sal}
    object {vordach_sal}
    object {balken_sal}
    object {treppe}
    object {schild_sal} 
 
     }
 



//------------------------------------- end 