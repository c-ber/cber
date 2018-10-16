#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVisibilityTrackCondition
{
   EVTC_Always = 0,
   EVTC_GoreEnabled = 1,
   EVTC_GoreDisabled = 2,
   EVTC_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
