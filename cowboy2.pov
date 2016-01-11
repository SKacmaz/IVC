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
#include "waffe.inc"
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
                            location  <-3.0 , 3.0 ,-0.001>
                            right     x*image_width/image_height
                            look_at   <0.0 , 1.0 , 0.0>}
camera{Camera_3}
// sun ---------------------------------------------------------------------
light_source{<-15,10,-15> color White}
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
#declare hemdfarbe1 = color rgb<0.1, 0.1, 0.1>;
#declare hosenfarbe1 = Black;
#declare schuhfarbe1 = VeryDarkBrown;
#declare haut = color rgb<0.542 ,0.269 , 0.074>;



//---------------------------- cowboy in scene ----------------------------
            
#declare fuss   =  
box { <0, 0, 0>,
      <2, 1,  3>
      pigment{schuhfarbe1} }  
                         
                         
#declare ubein   =
cylinder { <0, 0,  0>,
           < 0, 2,  0>, 0.75
           pigment{hosenfarbe1} }
                                     


#declare knie =
sphere{ <0,0,0>, 0.75
        pigment{hosenfarbe1}
      } 
           
#declare fussgelenk =
sphere{ <0,0,0>, 0.75
        pigment{hosenfarbe1}
      }

#declare beckengelenk =
sphere{ <0,0,0>, 0.75
        pigment{hosenfarbe1}
      }        


#declare obein   =
cylinder { <0, 0,  0>,
           < 0, 2,  0>, 0.75
           pigment{hosenfarbe1} }
           
#declare hose   =  
box { <0, 0, 0>,
      <6.5, 2,  2>
      pigment{hosenfarbe1}}
      
#declare hemd   =  
box { <0, 0, 0>,
      <6.5, 4,  2>
      pigment{hemdfarbe1}}        

#declare schultergelenk   =  
sphere{ <0,0,0>, 0.6
        pigment{hemdfarbe1}
      }         

#declare oarm   =  
cylinder { <0, 0, 0>,
      <0, 2,  0>, 0.6
      pigment{hemdfarbe1}}  

#declare armgelenk   =  
sphere{ <0,0,0>, 0.6
        pigment{hemdfarbe1}
      }         

#declare uarm   =  
cylinder { <0, 0, 0>,
      <0, 2,  0>, 0.6
      pigment{hemdfarbe1}}  

#declare hand   =  
box { <0, 0, 0>,
      <1.3, 1.3, 1.3>
      pigment{haut}}  


                   
#declare bein =
union{
  object{beckengelenk scale <0,0,0> translate<0,0,0>}
  object{obein scale <0,0,0> translate<0,-2,0>}
  object{knie scale <0,0,0> translate<0,-2,0>}
  object{ubein scale <0,0,0> translate<0,-4,0>}
  object{fussgelenk scale <0,0,0> translate<0,-4,0>}
  object{fuss scale <0,0,0> translate<-1,-5,-2>}

}

#declare armrotate =
union{
  object{schultergelenk scale <0,0,0> translate<0,0,0>}
  object{oarm scale <0,0,0> rotate<0,0,0> translate<0,-2,0>}
  object{armgelenk scale <0,0,0> translate<0,-2,0>}

}

#declare uarmhand =
union{
  object{uarm scale <0,0,0> translate<0,0,0>}
  object{hand scale <0,0,0> rotate<0,0,0> translate<-0.65,-1.3,-0.65>}
  

}

#declare uarmwaffenhand =
union{
  object{uarm scale <0,0,0> translate<0,0,0>}
  object{hand scale <0,0,0> rotate<0,0,0> translate<-0.65,-1.3,-0.65>}
  object{waffe rotate<0,270,0> rotate<270,0,0> scale<0.3,0.3,0.3> translate<0,-1.732,-0.15>  } 
  

}

#declare arm =
union{
  object{schultergelenk scale <0,0,0> translate<0,0,0>}
  object{oarm scale <0,0,0> rotate<0,0,0> translate<0,-2,0>}
  object{armgelenk scale <0,0,0> translate<0,-2,0>}

}



#declare bein =
  object{bein rotate<0,0,0> translate<0,0,0> }
                    


#declare armr =
union{                                                   
  object{armrotate  rotate<0,0,-30> translate<0,0,0> }
  object{uarmwaffenhand  rotate<0,0,0> translate<-1,-2-1.732,0> }
}

#declare arml =
union{                                                   
  object{armrotate  rotate<0,0,-30> translate<0,0,0> }
  object{uarmhand  rotate<0,0,0> translate<-1,-2-1.732,0> }
}


#declare hals   =  
cylinder { <0, 0, 0>,
      <0, 0.5,  0>, 0.8
      pigment{haut}}

#declare kopf1   =  
box { <0, 0, 0>,
      <2, 2, 2>
      pigment{haut}}

#declare auge1   =  
box { <0, 0, 0>,
      <0.2, 0.2, 0.2>
      pigment{Black}}
                     
#declare nase1   =  
box { <0, 0, 0>,
      <0.2, 0.2, 0.2>
      pigment{Black}}

#declare mund1   =  
box { <0, 0, 0>,
      <0.8, 0.2, 0.2>
      pigment{Black}}



#declare kopfklotz =
union{
                                                   
  object{kopf1  rotate<0,0,0> translate<0,0,0> }
  object{auge1  rotate<0,0,0> translate<0.4,1.4,-0.1> }
  object{auge1  rotate<0,0,0> translate<1.4,1.4,-0.1> }
  object{nase1  rotate<0,0,0> translate<0.9,0.9,-0.1> }
  object{mund1  rotate<0,0,0> translate<0.6,0.4,-0.1> }
}


                                                   

#declare bodyklotz =
union{
                                                   
  object{hemd  rotate<0,0,0> translate<0,2,0> }
  object{hose  rotate<0,0,0> translate<0,0,0> }
  object{bein  rotate<0,0,0> translate<1.5,0,1> }
  object{bein  rotate<0,0,0> translate<4.5,0,1> }
  object{armr  rotate<0,0,0> translate<0,5,0.8> }
  object{arml  rotate<0,180,0> translate<6.5,5,0.8> }
  object{hals rotate<0,0,0> translate<3.25,6,0.8>}
  object{kopfklotz rotate<0,0,0> translate<2.25,6.5,0> }
  
}



#declare cowboy2 =                                                  
  object{bodyklotz  rotate<0,0,0> translate<0,6,0> scale <0.2,0.2,0.2> }
  


cowboy2








