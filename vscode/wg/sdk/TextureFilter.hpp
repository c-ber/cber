#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum TextureFilter
{
   TF_Nearest = 0,
   TF_Bilinear = 1,
   TF_Trilinear = 2,
   TF_Default = 3,
   TF_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
