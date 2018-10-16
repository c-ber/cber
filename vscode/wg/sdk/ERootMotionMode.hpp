#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERootMotionMode
{
   ERootMotionMode__NoRootMotionExtraction = 0,
   ERootMotionMode__IgnoreRootMotion = 1,
   ERootMotionMode__RootMotionFromEverything = 2,
   ERootMotionMode__RootMotionFromMontagesOnly = 3,
   ERootMotionMode__ERootMotionMode_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
