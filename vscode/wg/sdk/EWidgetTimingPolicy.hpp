#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWidgetTimingPolicy
{
   EWidgetTimingPolicy__RealTime = 0,
   EWidgetTimingPolicy__GameTime = 1,
   EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
