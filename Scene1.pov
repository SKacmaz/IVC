// PoVRay 3.7 Scene File " ... .pov"
// author:  ...
// date:    ...
//--------------------------------------------------------------------------
#version 3.7;
global_settings{ assumed_gamma 1.0 }
#default{ finish{ ambient 0.1 diffuse 0.9 }} 
//--------------------------------------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "glass.inc"
#include "metals.inc"
#include "golds.inc"
#include "stones.inc"
#include "woods.inc"
#include "shapes.inc"
#include "shapes2.inc"
#include "functions.inc"
#include "math.inc"
#include "transforms.inc"
#include "cowboy.inc"
#include "cowboy2.inc"  
#include "SoDoSoPainc.inc"



//--------------------------------------------------------------------------
// camera ------------------------------------------------------------------
//cowboyrund
#declare Camera_0 = camera {/*ultra_wide_angle*/ angle 75      // front view
                            location  <0.0 , 2.0 ,1.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 2.0 , 0.0>}
                            
//plakat                            
#declare Camera_1 = camera {/*ultra_wide_angle*/ angle 110   // diagonal view
                            location  <1.0 , 2.0 ,-2.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 2.0 , 0.0>}
                            
//cowboyklotz                            
#declare Camera_2 = camera {/*ultra_wide_angle*/ angle 90 // right side view
                            location  <1.0 , 2.0 , 0.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 2.0 , 2.0>}
#declare Camera_3 = camera {/*ultra_wide_angle*/ angle 90        // top view
                            location  <0.0 , 3.0 ,-0.001>
                            right     x*image_width/image_height
                            look_at   <0.0 , 1.0 , 0.0>}


// sun ---------------------------------------------------------------------
light_source{<-1500,2500,-2500> color White}
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
//--------------------------------------------------------------------------
//---------------------------- objects in scene ----------------------------
//-------------------------------------------------------------------------- 


object{Stadt rotate<0,-90,0>}



#declare Camera_Scene01 = camera {/*ultra_wide_angle*/ angle 90        // top view
                            location  <4.0 , 1.0 ,-6.0>
                            right     x*image_width/image_height
                            look_at   <4.0 , 1.0 , 0.0>}
                            

                            
                            


#if (clock<10)
camera{Camera_Scene01  translate<0,0,clock>}
#else

#declare Camera_Scene02 = camera {/*ultra_wide_angle*/ angle 90        // top view
                            location  <4.0 , 1.0 ,4.0>
                            right     x*image_width/image_height
                            look_at   <4.0 , 1.0  , 10.0> rotate<0,90*(clock-10),0>}

camera{Camera_Scene02  translate<0,0,clock>}

#end

