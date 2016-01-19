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
#include "SoDoSoPa.inc"
#include "sushi.inc"



//--------------------------------------------------------------------------
// camera ------------------------------------------------------------------
//cowboyrund
#declare Camera_0 = camera {/*ultra_wide_angle*/ angle 90      // front view
                            location  <4.0 , 20.0 ,8.0>
                            right     x*image_width/image_height
                            look_at   <4.0 , 2.0 , 8.0>}
                            
//plakat                            
#declare Camera_1 = camera {/*ultra_wide_angle*/ angle 110   // diagonal view
                            location  <4.0 , 1.0 , 8.0>
                            right     x*image_width/image_height
                            look_at   <4.0 , 1.0 , 9.0>}
                            
//cowboyklotz                            
#declare Camera_2 = camera {/*ultra_wide_angle*/ angle 120 // right side view
                            location  <4.0 , 1.0 , 8.0>
                            right     x*image_width/image_height
                            look_at   <4.0 , 1.0 , 7.0>} 
                            
                            
                            
#declare Camera_3 = camera {/*ultra_wide_angle*/ angle 95        // top view
                            location  <1.0 , 1.5 ,4.2>
                            right     x*image_width/image_height
                            look_at   <3.0 , 1.2 ,4.2>}


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

object{cowboy1  scale<0.2,0.2,0.2> translate<4.45,0,6> }


#if (clock < 3.5)
object{cowboy2 rotate<0,180,0> scale<0.2,0.2,0.2> translate<4.5,0,2>}
#end


object{sushishow scale<0.3,0.3,0.3> rotate<0,0,180*clock>  translate<1,0.445,1> translate<clock,0,0> }



#declare Camera_4 = camera {/*ultra_wide_angle*/ angle 90        // top view
                            location  <0.0 , 0.0 ,0.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 0.0 ,-1.0>}


camera{Camera_4 rotate<0,0,0>  translate<4.38,0.5,3> } 



