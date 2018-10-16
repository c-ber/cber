#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextureMipValueMode
{
   TMVM_None = 0,
   TMVM_MipLevel = 1,
   TMVM_MipBias = 2,
   TMVM_Derivative = 3,
   TMVM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
