#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESpawnOwnership
{
   ESpawnOwnership__InnerSequence = 0,
   ESpawnOwnership__MasterSequence = 1,
   ESpawnOwnership__External = 2,
   ESpawnOwnership__ESpawnOwnership_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
