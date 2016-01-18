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


#declare griff =
box{ <0,0,0>, <3,3,1>
      pigment{Grey} 
}

#declare lauf =
box{ <0,0,0>, <5,2,1>
      pigment{Grey} 
}

#declare trigger = 
intersection{
    box{ <0,0,0>, <3,3,3>
       
    }
    cylinder{ <0,0,0> , <0,3,0> 1.5 rotate <270,0,0> translate <0,0,1> 
      
    }
      scale<2, 1.333,1> pigment{Grey}
    
}

#declare abzug =
box{ <0,0,0>,<0.5,1,0.5>
   pigment{Grey}
}

#declare waffe =
union{
  object{griff}
  object{trigger translate <0,3,0>}
  object{lauf translate <-5,3,0>}
  object{abzug rotate<0,0,-20> translate <2,4,0.25>}
}










