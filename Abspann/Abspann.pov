#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "woods.inc" 


//------------------------------------------
// camera ----------------------------------
camera{ location  <3.5, 0 ,-8>
        look_at   <3.5 , 0 , 0>
        right x*image_width/image_height
        angle 80 }
// sun -------------------------------------
light_source{<1000,5,-2500> color White}  
// -------------------------------------------------
sky_sphere { pigment { color rgb <0,0,0>  
                     } // end of pigment
           } //end of skysphere

 
// ---------------------------------------------



global_settings { charset utf8 }


#declare Abspann =union{

text{
   ttf "arial.ttf",
   "Nach einer Idee von",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.2, 1.2, 1>
     translate<-2,-5,0> } 
     
text{
   ttf "arial.ttf",
   "Bennet Brunsen",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-6.5,0> }
   
text{
   ttf "arial.ttf",
   "Semih Kacmaz",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-7.5,0> }

text{
   ttf "arial.ttf",
   concat ("Chris Kreu", chr(223), "ler"),0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-8.5,0> }


text{
   ttf "arial.ttf",
   "Umsetzung",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.4, 1.4, 1>
     translate<0,-11,0> }
      
text{
   ttf "arial.ttf",
   "Bennet Brunsen",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-12.5,0> } 

text{
   ttf "arial.ttf",
   "Semih Kacmaz",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-13.5,0> }

text{
   ttf "arial.ttf",
   concat ("Chris Kreu", chr(223), "ler"),0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-14.5,0> }     
//-----------------------------------
text{
   ttf "arial.ttf",
   "Regie",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.4, 1.4, 1>
     translate<1.6,-17,0> }

text{
   ttf "arial.ttf",
   "Bennet Brunsen",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-18.5,0> }
   
text{
   ttf "arial.ttf",
   "Semih Kacmaz",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-19.5,0> }

text{
   ttf "arial.ttf",
   concat ("Chris Kreu", chr(223), "ler"),0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-20.5,0> }      
// ------------------------------------      
text{
   ttf "arial.ttf",
   "Hauptdarsteller",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.4, 1.4, 1>
     translate<-1,-23,0> }

text{
   ttf "arial.ttf",
   "Rodrigo Morales",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-24.5,0> }  

text{
   ttf "arial.ttf",
   "Sheriff McPov",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-25.5,0> }
//-----------------------------------------

text{
   ttf "arial.ttf",
   "Musik",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.4, 1.4, 1>
     translate<1.6,-28,0> }    
    
    
    
    
    
    
    
    
    
    
    }
      
object {Abspann translate <0,5*clock,0> }