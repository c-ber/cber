#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERootMotionRootLock
{
   ERootMotionRootLock__RefPose = 0,
   ERootMotionRootLock__AnimFirstFrame = 1,
   ERootMotionRootLock__Zero = 2,
   ERootMotionRootLock__ERootMotionRootLock_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
