#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextureMipCount
{
   TMC_ResidentMips = 0,
   TMC_AllMips = 1,
   TMC_AllMipsBiased = 2,
   TMC_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
