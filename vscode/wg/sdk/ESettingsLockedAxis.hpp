#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESettingsLockedAxis
{
   ESettingsLockedAxis__None = 0,
   ESettingsLockedAxis__X = 1,
   ESettingsLockedAxis__Y = 2,
   ESettingsLockedAxis__Z = 3,
   ESettingsLockedAxis__Invalid = 4,
   ESettingsLockedAxis__ESettingsLockedAxis_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
