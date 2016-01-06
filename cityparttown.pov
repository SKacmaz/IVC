#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "blancobuilding.inc"


//------------------------------------------
// camera ----------------------------------
camera{ location  <15.5 , 8 ,-20.5>
        look_at   <15.0 , 1.2 , 0.0>
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
// ------------------------------------------------------------------------------------

#local i = 0;
#local end_i  = 30;

#while (i <= end_i)
       object{ blancobuilding translate <i, 0, 0> }

#local i = i +5;
 

#end

