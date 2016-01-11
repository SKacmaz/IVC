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

#declare T0 = texture { T_Wood19 }
#declare hemdfarbe1 = color rgb<0.1, 0.1, 0.1>;
#declare hosenfarbe1 = Black;
#declare schuhfarbe1 = VeryDarkBrown;
#declare haut = color rgb<0.402 ,0.209 , 0.064>;



//---------------------------- cowboy1 in scene ----------------------------
            

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
      <5, 2,  2>
      pigment{hosenfarbe1}}
      
#declare hemd   =  
box { <0, 0, 0>,
      <5, 4,  2>
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



#declare kopf2   =  
sphere { <0, 0, 0>, 1.4
      pigment{haut}}
      
#declare auge2   =  
sphere { <0, 0, 0>, 0.1
      pigment{Black}}
      
#declare mund2   =  
sphere { <0, 0, 0>, 0.1
      pigment{Black}}
      
#declare nase2   =  
sphere { <0, 0, 0>, 0.1
      pigment{Black}}



#declare kopfrund =
union{
                                                   
  object{kopf2  rotate<0,0,0> translate<0,0,0> }
  object{auge2  translate<0,0,-1.4> rotate<15,15,0>}
  object{auge2  translate<0,0,-1.4> rotate<15,-15,0> }
  object{nase2  translate<0,0,-1.4> rotate<0,0,0> }
  object{mund2  translate<0,0,-1.4> rotate<-15,5,0> }
  object{mund2  translate<0,0,-1.4> rotate<-15,-5,0> }
  object{mund2  translate<0,0,-1.4> rotate<-16,10,0> }
  object{mund2  translate<0,0,-1.4> rotate<-16,-10,0> }
  object{mund2  translate<0,0,-1.4> rotate<-15,0,0> }
}
                                                   


#declare bodyrund =
union{
                                                   
  object{hemd  rotate<0,0,0> translate<0,2,0> }
  object{hose  rotate<0,0,0> translate<0,0,0> }
  object{bein  rotate<0,0,0> translate<1.3,0,1> }
  object{bein  rotate<0,0,0> translate<3.7,0,1> }
  object{armr  rotate<0,0,0> translate<0,5,0.8> }
  object{arml  rotate<0,180,0> translate<5,5,0.8> }
  object{hals rotate<0,0,0> translate<2.5,6,0.8>}
  object{kopfrund rotate<0,0,0> translate<2.5,7.5,1> }
  
}   


#declare cowboy1 =                                                   
  object{bodyrund  rotate<0,0,0> translate<0,6,5> scale <0.2,0.2,0.2> }
  










