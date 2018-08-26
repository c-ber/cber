#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETrackingStatus
{
   ETrackingStatus__NotTracked = 0,
   ETrackingStatus__InertialOnly = 1,
   ETrackingStatus__Tracked = 2,
   ETrackingStatus__ETrackingStatus_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
