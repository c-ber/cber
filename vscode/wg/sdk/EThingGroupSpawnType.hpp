#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EThingGroupSpawnType
{
   EThingGroupSpawnType__None = 0,
   EThingGroupSpawnType__Probability = 1,
   EThingGroupSpawnType__TotalCount = 2,
   EThingGroupSpawnType__EThingGroupSpawnType_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
