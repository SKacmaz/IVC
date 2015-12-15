#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "woods.inc" 


//------------------------------------------
// camera ----------------------------------
camera{ location  <0 , 1.2 ,-2.5>
        look_at   <0 , 1.2 , 0.0>
        right x*image_width/image_height
        angle 75 }
// sun -------------------------------------
light_source{<1000,3000,-2500> color White}



#declare light_wood = pigment { P_WoodGrain7A color_map { M_Wood7A } }

#declare board_length = 1.5;
#declare board_width = 0.25;

box { <-10,-1,-10> <10,0,10> 
      pigment { light_wood 
                warp { repeat board_length*z offset 0.5*y } 
                warp { repeat board_width*x offset board_length*5/2*z } }
      normal { boxed
               slope_map { [ 0.5 <1,0> ] [1.0 <0,0> ] } 
               bump_size 0.1
               scale <board_width,1,board_length>
               warp { repeat board_length*z  } 
               warp { repeat board_width*x offset board_length/2*z } } }  
