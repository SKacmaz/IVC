#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "blancoshieldless.inc"
#include "blancobuilding.inc"
#include "saloon.inc"
#include "hoboshop.inc"
#include "ammunation.inc"
#include "thriftshop.inc"
#include "schild.inc"


//------------------------------------------
// camera ----------------------------------
camera{ location  <5, 0.7 ,-6>
        look_at   <5.0 , 0.7 , -7>
        right x*image_width/image_height
        angle 75 }
// sun -------------------------------------
light_source{<1000,3000,2500> color White} 
//light_source{<-3000,3000,00> color White}  
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
// ------------------------------------------------------------------------------------

object{ammunation scale <0.8, 0.8, 0.8> translate <-2, 0, 0>}

object{blancobuilding translate <1, 0, 0>}

object{blancoshieldless scale <0.9, 0.9, 0.9> translate <5, 0, 0>} 

object{blancoshieldless translate <8, 0, 0>  }

object{hoboshop scale <0.7, 0.7, 0.7>  translate <11.5, 0, 0>} 

object{blancoshieldless scale <0.95, 0.95, 0.95> translate <15, 0, 0>}

object{blancoshieldless scale <0.85, 0.85, 0.85> translate <18, 0, 0>}
 
 
object{schild rotate <0, 180, 0> scale <0.3, 0.3, 0.3> translate <4.7, 0, -7.25>} 


object{thriftshop rotate <0, 180, 0> translate <-1, 0, -8>}  

object{blancoshieldless scale <0.9, 0.9, 0.9> rotate <0, 180, 0> translate <1.5, 0, -8>}

object{saloon rotate <0, 180, 0> translate <5, 0, -8>}

object{ammunation scale <0.9, 0.9, 0.9> rotate <0, 180, 0> translate <8, 0, -8>} 

object{blancoshieldless rotate <0, 180, 0> translate <12, 0, -8>}

object{hoboshop scale <0.7, 0.7, 0.7> rotate <0, 180, 0> translate <15, 0, -8>} 

object{blancoshieldless rotate <0, 180, 0> scale <0.95, 0.95, 0.95> translate <19, 0, -8>  }



