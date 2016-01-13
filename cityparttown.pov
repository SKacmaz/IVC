#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "blancobuilding.inc"


//------------------------------------------
// camera ----------------------------------
camera{ location  <-8, 2 ,-4>
        look_at   <30.0 , 2 , -5>
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

#local I = 0;
#local End_I  = 5;

#while (I <= End_I)
       object{ blancobuilding translate <I*4-2, 0, 0>  }

#local I = I + 1;
 

#end


#local K = 0;
#local End_K  = 5;


#while (K <= End_K)
       object{ blancobuilding rotate<0,180,0> translate <K*4, 0, -8>}
       

#local K = K + 1;

#end

