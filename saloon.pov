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
// sky -------------------------------------
plane{ <0,1,0>,1 hollow
       texture{
         pigment{ bozo turbulence 0.92
           color_map{
                 [0.00 rgb<0.05,0.15,0.45>]
                 [0.50 rgb<0.05,0.15,0.45>]
                 [0.70 rgb<1,1,1>        ]
                 [0.85 rgb<0.2,0.2,0.2>  ]
                 [1.00 rgb<0.5,0.5,0.5>  ]
                       } //
           scale<1,1,1.5>*2.5
           translate<0,0,0>
           } // end of pigment
         finish {ambient 1 diffuse 0}
        } // end of texture
       scale 10000}
// ground ----------------------------------

plane{ <0,1,0>, 0
       texture { pigment{ color  rgb< 1.0, 0.5, 0.0> } //  color Orange
                 normal { bumps 0.75 scale 0.015 }
                 finish { phong 1 reflection 0.00}
                 } // end of texture 
     } // end of plane
                                   
 
// Boden  ----------------------------------------------------------
 
box { <0.00, 0.00, -0.60>, <2.30, 0.15, 2.70> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }                               
                                   

// Saloon-Körper ----------------------------------------------------------

merge{

 union{
                                   
    box { <0.00, 0.15, 0.00>,< 2.30, 2.50, 2.70>
    
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture

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

box { <0.00, 1.05, -0.60>, <2.30, 1.10, 0.00> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }       
  
// Balken-rechtsaußen   ----------------------------------------------------------

box { <2.24, 1.05, -0.60>, <2.29, 0.15, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }  

// Balken-linksaußen    ----------------------------------------------------------

box { <0.01, 1.05, -0.60>, <0.06, 0.15, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    } 
  
// Balken-linksinnen    ----------------------------------------------------------

box { <0.81, 1.05, -0.60>, <0.86, 0.15, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }  


// Balken-rechtsinnen    ----------------------------------------------------------

box { <1.61, 1.05, -0.60>, <1.66, 0.15, -0.55> 
       
        texture { pigment{ color White } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.00}
                 } // end of texture 
 
               // end of texture                                  
    }  
  
 
 
  
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


 
// SALOON_Schild  ---------------------------------------------------------------

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
 
 
 
 
 
 
 
 
 


//------------------------------------- end 
