#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum TextureCompressionSettings
{
   TC_Default = 0,
   TC_Normalmap = 1,
   TC_Masks = 2,
   TC_Grayscale = 3,
   TC_Displacementmap = 4,
   TC_VectorDisplacementmap = 5,
   TC_HDR = 6,
   TC_EditorIcon = 7,
   TC_Alpha = 8,
   TC_DistanceFieldFont = 9,
   TC_HDR_Compressed = 10,
   TC_BC7 = 11,
   TC_MAX = 12,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
