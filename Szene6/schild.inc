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

#declare T0 = texture { T_Wood19 }

#declare T =
texture { T0
    finish { specular 0.50 roughness 0.1 ambient 0.25 }
}

#declare T1 = texture { T translate  x*10 rotate <0, 87, 0> }
#declare T2 = texture { T translate  y*10 rotate <0,  1, 0> }
#declare T3 = texture { T translate -x*10 rotate  <0, 88, 0> translate z*100}

      
      
#declare sleft   =
cylinder { <-1, 0, 0>,
           <-1, 2,  0>, 0.15 
           texture{T}}  
           
#declare sright   =
cylinder { <1.5, 0,  0>,
           < 1.5, 2,  0>, 0.15
           texture{T} }
                                     
#declare one =
box      { <-1.2, 1.55, -0.15>,
           < 1.9, 1.9,  -0.2>
           texture{T} }  
           
#declare two =
box      { <-1.3, 1.1, -0.15>,
           < 1.7, 1.5,  -0.2>
           texture{T} } 
           
#declare three =
box      { <-1.25, 0.75, -0.15>,
           < 1.8, 1.08,  -0.2>
           texture{T} }           

#declare wanted1 =
box      { <-0, 0, -0.2>,
           < 1, 1.05,  -0.201>
            pigment{image_map { png "wanted1.png " }}
            scale 1
            translate <-1.15, 0.8, 0>  } 

#declare wanted2 =
box      { <-0, 0, -0.2>,
           < 1, 1.05,  -0.201>
            pigment{image_map { png "wanted2.png " }}
            scale 1
            translate <-0.2, 0.8, 0>  }   

#declare wanted3 =
box      { <-0, 0, -0.2>,
           < 1, 1.0,  -0.201>
            pigment{image_map { png "wanted3.png " }}
            scale 1
            translate <0.8, 0.8, 0>  }              


#declare schild =
union{
  object{sleft}
  object{sright}
  object{one}
  object{two}
  object{three}
  object{wanted1 scale <0.8,0.8,1> translate<-0.15,0.25, 0>}
  object{wanted2 scale <0.8,0.8,1> translate<0,0.35, 0>}
  object{wanted3 scale <0.8,0.8,1> translate<0.2,0.2, 0>}
}        

                   
                   




