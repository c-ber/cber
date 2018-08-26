#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMaterialSamplerType
{
   SAMPLERTYPE_Color = 0,
   SAMPLERTYPE_Grayscale = 1,
   SAMPLERTYPE_Alpha = 2,
   SAMPLERTYPE_Normal = 3,
   SAMPLERTYPE_Masks = 4,
   SAMPLERTYPE_DistanceFieldFont = 5,
   SAMPLERTYPE_LinearColor = 6,
   SAMPLERTYPE_LinearGrayscale = 7,
   SAMPLERTYPE_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
