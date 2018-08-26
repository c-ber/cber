#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESoundDistanceCalc
{
   SOUNDDISTANCE_Normal = 0,
   SOUNDDISTANCE_InfiniteXYPlane = 1,
   SOUNDDISTANCE_InfiniteXZPlane = 2,
   SOUNDDISTANCE_InfiniteYZPlane = 3,
   SOUNDDISTANCE_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
