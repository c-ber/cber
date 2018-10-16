#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETravelType
{
   TRAVEL_Absolute = 0,
   TRAVEL_Partial = 1,
   TRAVEL_Relative = 2,
   TRAVEL_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
