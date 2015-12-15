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
//--------------------------------------------------------------------------
// camera ------------------------------------------------------------------
#declare Camera_0 = camera {/*ultra_wide_angle*/ angle 75      // front view
                            location  <0.0 , 1.0 ,-3.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 1.0 , 0.0>}
#declare Camera_1 = camera {/*ultra_wide_angle*/ angle 90   // diagonal view
                            location  <2.0 , 2.5 ,-3.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 1.0 , 0.0>}
#declare Camera_2 = camera {/*ultra_wide_angle*/ angle 90 // right side view
                            location  <3.0 , 1.0 , 0.0>
                            right     x*image_width/image_height
                            look_at   <0.0 , 1.0 , 0.0>}
#declare Camera_3 = camera {/*ultra_wide_angle*/ angle 90        // top view
                            location  <0.0 , 3.0 ,-0.001>
                            right     x*image_width/image_height
                            look_at   <0.0 , 1.0 , 0.0>}
camera{Camera_0}
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
           < 0.85, 1.05,  -0.201>
            pigment{image_map { png "wanted1.png " }}
            scale 1
            translate <-1.15, 0.8, 0>  } 

#declare wanted2 =
box      { <-0, 0, -0.2>,
           < 0.85, 1.05,  -0.201>
            pigment{image_map { png "wanted2.png " }}
            scale 1
            translate <-0.2, 0.8, 0>  }   

#declare wanted3 =
box      { <-0, 0, -0.2>,
           < 0.8, 1.0,  -0.201>
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

                   
                   
        
schild



