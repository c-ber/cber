#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextureSamplerFilter
{
   ETextureSamplerFilter__Point = 0,
   ETextureSamplerFilter__Bilinear = 1,
   ETextureSamplerFilter__Trilinear = 2,
   ETextureSamplerFilter__AnisotropicPoint = 3,
   ETextureSamplerFilter__AnisotropicLinear = 4,
   ETextureSamplerFilter__ETextureSamplerFilter_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
