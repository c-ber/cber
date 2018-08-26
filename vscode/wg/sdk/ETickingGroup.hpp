#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ETickingGroup
{
   TG_PrePhysics = 0,
   TG_StartPhysics = 1,
   TG_DuringPhysics = 2,
   TG_EndPhysics = 3,
   TG_PostPhysics = 4,
   TG_PostUpdateWork = 5,
   TG_LastDemotable = 6,
   TG_NewlySpawned = 7,
   TG_MAX = 8,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
