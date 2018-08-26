#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EStereoLayerType
{
   SLT_WorldLocked = 0,
   SLT_TrackerLocked = 1,
   SLT_FaceLocked = 2,
   SLT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
