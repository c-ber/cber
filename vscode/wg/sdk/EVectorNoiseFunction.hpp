#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVectorNoiseFunction
{
   VNF_CellnoiseALU = 0,
   VNF_VectorALU = 1,
   VNF_GradientALU = 2,
   VNF_CurlALU = 3,
   VNF_VoronoiALU = 4,
   VNF_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
