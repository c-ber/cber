#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETexturePowerOfTwoSetting
{
   ETexturePowerOfTwoSetting__None = 0,
   ETexturePowerOfTwoSetting__PadToPowerOfTwo = 1,
   ETexturePowerOfTwoSetting__PadToSquarePowerOfTwo = 2,
   ETexturePowerOfTwoSetting__ETexturePowerOfTwoSetting_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
