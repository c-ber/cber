#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EUIScalingRule
{
   EUIScalingRule__ShortestSide = 0,
   EUIScalingRule__LongestSide = 1,
   EUIScalingRule__Horizontal = 2,
   EUIScalingRule__Vertical = 3,
   EUIScalingRule__Custom = 4,
   EUIScalingRule__EUIScalingRule_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
