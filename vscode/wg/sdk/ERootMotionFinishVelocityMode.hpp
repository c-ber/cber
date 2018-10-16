#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERootMotionFinishVelocityMode
{
   ERootMotionFinishVelocityMode__MaintainLastRootMotionVelocity = 0,
   ERootMotionFinishVelocityMode__SetVelocity = 1,
   ERootMotionFinishVelocityMode__ClampVelocity = 2,
   ERootMotionFinishVelocityMode__ERootMotionFinishVelocityMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
