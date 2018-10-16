#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESimulationOverlap
{
   ESimulationOverlap__CollisionOverlap = 0,
   ESimulationOverlap__ShadeOverlap = 1,
   ESimulationOverlap__None = 2,
   ESimulationOverlap__ESimulationOverlap_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
