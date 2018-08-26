#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESpawnActorCollisionHandlingMethod
{
   ESpawnActorCollisionHandlingMethod__Undefined = 0,
   ESpawnActorCollisionHandlingMethod__AlwaysSpawn = 1,
   ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButAlwaysSpawn = 2,
   ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding = 3,
   ESpawnActorCollisionHandlingMethod__DontSpawnIfColliding = 4,
   ESpawnActorCollisionHandlingMethod__ESpawnActorCollisionHandlingMethod_MAX = 5,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
