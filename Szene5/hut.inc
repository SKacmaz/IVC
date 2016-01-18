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


#declare hutfarbe = color rgb<0.542,0.269,0.074>;


#declare auschneiden   =  
cylinder { <0, 0, 0>,
      <0, 0.06,  0> 1.45   
      pigment{hutfarbe}}
      
#declare hutflaeche   =  
cylinder { <0, 0, 0>,
      <0, 0.1,  0> 1.5
      pigment{hutfarbe} }                          
                         
#declare hutmain   =
cylinder { <0, 0,  0>,
           < 0, 0.75,  0>, 1
           pigment{hutfarbe} }
  

#declare hutschmuck   =
cylinder { <0, 0,  0>,
           < 0, 0.2,  0>, 1.05
           pigment{Silver} }


#declare hut   = 
union{ 
difference{
  object{hutflaeche  translate<0,0,0>} 
  object{auschneiden  translate<0,0.05,0>}
  
  }
  object{hutmain  translate<0,0,0>}
  object{hutschmuck  translate<0,0.05,0>}


}












