#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESimulationQuery
{
   ESimulationQuery__CollisionOverlap = 1,
   ESimulationQuery__ShadeOverlap = 2,
   ESimulationQuery__AnyOverlap = 3,
   ESimulationQuery__ESimulationQuery_MAX = 4,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
