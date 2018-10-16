#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERootMotionSourceStatusFlags
{
   ERootMotionSourceStatusFlags__Prepared = 1,
   ERootMotionSourceStatusFlags__Finished = 2,
   ERootMotionSourceStatusFlags__MarkedForRemoval = 4,
   ERootMotionSourceStatusFlags__ERootMotionSourceStatusFlags_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
