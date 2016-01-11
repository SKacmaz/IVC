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
        angle 75 }
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
   "Drehbuch",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.4, 1.4, 1>
     translate<0.6,0,0> }
      
text{
   ttf "arial.ttf",
   "Bennet Brunsen",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-1.5,0> } 

text{
   ttf "arial.ttf",
   "Semih Kacmaz",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-2.5,0> }

text{
   ttf "arial.ttf",
   concat ("Chris Kreu", chr(223), "ler"),0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-3.5,0> }     
//-----------------------------------
text{
   ttf "arial.ttf",
   "Regisseur",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
     scale <1.4, 1.4, 1>
     translate<0.6,-6,0> }

text{
   ttf "arial.ttf",
   "Quentin Tarantino",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-7.5,0> }      
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
     translate<-1,-10,0> }

text{
   ttf "arial.ttf",
   "Rodrigo Morales",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-11.5,0> }  

text{
   ttf "arial.ttf",
   "FeelsBadMan",0.2, 0
   texture{
     pigment{color White}
     finish{ambient 0.15
            diffuse 0.85}
          }
   translate<0,-12.5,0> }
      
      
      
      }
      
object {Abspann translate <0,5*clock,0> }