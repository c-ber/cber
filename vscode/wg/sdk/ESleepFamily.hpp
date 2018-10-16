#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESleepFamily
{
   ESleepFamily__Normal = 0,
   ESleepFamily__Sensitive = 1,
   ESleepFamily__Custom = 2,
   ESleepFamily__ESleepFamily_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
