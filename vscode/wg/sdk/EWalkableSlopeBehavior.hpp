#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EWalkableSlopeBehavior
{
   WalkableSlope_Default = 0,
   WalkableSlope_Increase = 1,
   WalkableSlope_Decrease = 2,
   WalkableSlope_Unwalkable = 3,
   WalkableSlope_Max = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
