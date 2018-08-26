#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum TextureAddress
{
   TA_Wrap = 0,
   TA_Clamp = 1,
   TA_Mirror = 2,
   TA_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
