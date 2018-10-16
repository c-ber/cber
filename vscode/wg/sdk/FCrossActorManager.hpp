#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCrossActorManager // Size: 0x18
{
public:
    ExternalPtr<struct UClass> Prototype; /* Ofs: 0x0 Size: 0x8 ClassProperty RoadRuntime.CrossActorManager.Prototype */
    ExternalPtr<struct UActor> SideActor; /* Ofs: 0x8 Size: 0x8 ObjectProperty RoadRuntime.CrossActorManager.SideActor */
    int32_t SocketIndex; /* Ofs: 0x10 Size: 0x4 IntProperty RoadRuntime.CrossActorManager.SocketIndex */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCrossActorManager = sizeof(FCrossActorManager); // 24
    static_assert(sizeof(FCrossActorManager) == 0x18, "Size of FCrossActorManager is not correct.");
	auto constexpr FCrossActorManager_Prototype_Offset = offsetof(FCrossActorManager, Prototype);
	static_assert(FCrossActorManager_Prototype_Offset == 0x0, "FCrossActorManager::Prototype offset is not 0");
	auto constexpr FCrossActorManager_SideActor_Offset = offsetof(FCrossActorManager, SideActor);
	static_assert(FCrossActorManager_SideActor_Offset == 0x8, "FCrossActorManager::SideActor offset is not 8");
	auto constexpr FCrossActorManager_SocketIndex_Offset = offsetof(FCrossActorManager, SocketIndex);
	static_assert(FCrossActorManager_SocketIndex_Offset == 0x10, "FCrossActorManager::SocketIndex offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
