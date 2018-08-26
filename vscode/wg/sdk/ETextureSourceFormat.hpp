#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextureSourceFormat
{
   TSF_Invalid = 0,
   TSF_G8 = 1,
   TSF_BGRA8 = 2,
   TSF_BGRE8 = 3,
   TSF_RGBA16 = 4,
   TSF_RGBA16F = 5,
   TSF_RGBA8 = 6,
   TSF_RGBE8 = 7,
   TSF_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
