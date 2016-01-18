#version 3.6; // 3.7
global_settings{assumed_gamma 1.0}
#default{ finish{ ambient 0.1 diffuse 0.9 }}
//------------------------------------------
#include "colors.inc"
#include "textures.inc"
#include "blancoshieldless.inc"
#include "blancobuilding.inc"
#include "saloon.inc"
#include "hoboshop.inc"
#include "ammunation.inc"
#include "thriftshop.inc"

// ------------------------------------------------------------------------------------

#declare Stadt =
union{

object{ammunation scale <0.8, 0.8, 0.8> translate <-2, 0, 0>}

object{blancobuilding translate <1, 0, 0>}

object{blancoshieldless scale <0.9, 0.9, 0.9> translate <5, 0, 0>} 

object{blancoshieldless translate <8, 0, 0>  }

object{hoboshop scale <0.7, 0.7, 0.7>  translate <11.5, 0, 0>} 

object{blancoshieldless scale <0.95, 0.95, 0.95> translate <15, 0, 0>}

object{blancoshieldless scale <0.85, 0.85, 0.85> translate <18, 0, 0>}



object{thriftshop rotate <0, 180, 0> translate <-1, 0, -8>}  

object{blancoshieldless scale <0.9, 0.9, 0.9> rotate <0, 180, 0> translate <1.5, 0, -8>}

object{saloon rotate <0, 180, 0> translate <5, 0, -8>}

object{ammunation scale <0.9, 0.9, 0.9> rotate <0, 180, 0> translate <8, 0, -8>} 

object{blancoshieldless rotate <0, 180, 0> translate <12, 0, -8>}

object{hoboshop scale <0.7, 0.7, 0.7> rotate <0, 180, 0> translate <15, 0, -8>} 

object{blancoshieldless rotate <0, 180, 0> scale <0.95, 0.95, 0.95> translate <19, 0, -8>  }


}
