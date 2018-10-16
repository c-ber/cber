#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslActorPool // Size: 0x10
{
public:
    TArray<ExternalPtr<struct UActor>> ActorPoolList; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.TslActorPool.ActorPoolList */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslActorPool = sizeof(FTslActorPool); // 16
    static_assert(sizeof(FTslActorPool) == 0x10, "Size of FTslActorPool is not correct.");
	auto constexpr FTslActorPool_ActorPoolList_Offset = offsetof(FTslActorPool, ActorPoolList);
	static_assert(FTslActorPool_ActorPoolList_Offset == 0x0, "FTslActorPool::ActorPoolList offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
