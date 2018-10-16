#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESamplerSourceMode
{
   SSM_FromTextureAsset = 0,
   SSM_Wrap_WorldGroupSettings = 1,
   SSM_Clamp_WorldGroupSettings = 2,
   SSM_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
