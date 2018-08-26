#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ERichCurveTangentWeightMode
{
   RCTWM_WeightedNone = 0,
   RCTWM_WeightedArrive = 1,
   RCTWM_WeightedLeave = 2,
   RCTWM_WeightedBoth = 3,
   RCTWM_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
