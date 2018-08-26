#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESpriteCollisionMode
{
   ESpriteCollisionMode__None = 0,
   ESpriteCollisionMode__Use2DPhysics = 1,
   ESpriteCollisionMode__Use3DPhysics = 2,
   ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
