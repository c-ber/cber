#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETextureSizingType
{
   TextureSizingType_UseSingleTextureSize = 0,
   TextureSizingType_UseAutomaticBiasedSizes = 1,
   TextureSizingType_UseManualOverrideTextureSize = 2,
   TextureSizingType_UseSimplygonAutomaticSizing = 3,
   TextureSizingType_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
