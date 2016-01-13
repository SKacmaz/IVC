#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"



//------------------------------------------
// camera ----------------------------------
camera{ location  <4 , 0.0 ,-6>
        look_at   <4.0 , 0.0 , 0.0>
        right x*image_width/image_height
        angle 75 }
// sun -------------------------------------
light_source{<0,3000,-2500> color White} 
//light_source{<1500,2500,-2500> color White}
// --------------------------------------------



#declare titel_here =
text{
   ttf "saloonext th.ttf",
   "here",0.2, 0
   texture { pigment{ color rgb< 1.0, 0.7, 0.25> } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.0 specular 1.0}
                 } // end of texture
   translate <0,0,0> }

#declare titel_comes =
text{
   ttf "saloonext th.ttf",
   "comes",0.2, 0
   texture { pigment{ color rgb< 1.0, 0.7, 0.25> } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.0 specular 1.0}
                 } // end of texture
   translate <3.8,0,0> }

#declare titel_bush =   
text{
   ttf "saloonext th.ttf",
   "the bush",0.2, 0
   texture { pigment{ color rgb< 1.0, 0.7, 0.25> } //  light orange
                // normal { bumps 0.5 scale 0.05 }
                   finish { phong 1 reflection 0.0 specular 1}
                 } // end of texture
   translate <0.8,-1.2,0> }   
             
// -------------------------------------    ------------------------------------


#if(clock >= 0 & clock <1)
object {titel_here
        translate <0,0,-8> + <0,0,8>*clock}
#else
object {titel_here
        translate <0,0,-8> + <0,0,8>}
#end



#if(clock >= 1 & clock <2)                
object {titel_comes
        translate <0,0,-8> + <0,0,8>*(clock-1)}
#else
    #if(clock >= 2)
    object {titel_comes
            translate <0,0,-8> + <0,0,8>}
    #end            
#end



#if(clock >= 2 & clock <3)
object {titel_bush
        translate <0,0,-8> + <0,0,8>*(clock-2)}
#else
    #if(clock >= 3)
    object {titel_bush
            translate <0,0,-8> + <0,0,8>}
    #end                
#end
