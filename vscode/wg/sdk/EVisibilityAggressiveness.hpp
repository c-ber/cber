#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EVisibilityAggressiveness
{
   VIS_LeastAggressive = 0,
   VIS_ModeratelyAggressive = 1,
   VIS_MostAggressive = 2,
   VIS_Max = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
