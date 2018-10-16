#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETargetingType
{
   ETargetingType__Targeting_None = 0,
   ETargetingType__Targeting_Aiming = 1,
   ETargetingType__Targeting_Scoping = 2,
   ETargetingType__Targeting_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
