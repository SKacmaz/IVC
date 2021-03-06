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


 
#declare auschneiden   =  
box { <0, 0, 0>,
      <1.5, 6.1,  1.5> }  
      
#declare fisch   =  
box { <0, 0, 0>,
      <1.5, 4.0,  1.5>
      pigment{Pink} }                          
                         
#declare reis   =
cylinder { <0, 0,  0>,
           < 0, 4,  0>, 1.5
           pigment{Wheat} }
  

#declare tang   =
cylinder { <0, 0,  0>,
           < 0, 3.9,  0>, 1.52
           pigment{DarkGreen} }

 
#declare sushi   = 
union{ 
difference{
  object{reis  translate<0,0,0>} 
  object{auschneiden  translate<-0.75,-1,-0.75>}
  
  }
  object{fisch  translate<-0.75,0,-0.75>}
  object{tang  translate<0,0.05,0>}


}

#declare sushishow   = 
  object{sushi rotate<90,0,0>}