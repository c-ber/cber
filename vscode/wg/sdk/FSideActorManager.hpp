#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSideActorManager // Size: 0x20
{
public:
    ExternalPtr<struct UClass> Prototype; /* Ofs: 0x0 Size: 0x8 ClassProperty RoadRuntime.SideActorManager.Prototype */
    TArray<ExternalPtr<struct UActor>> SideActors; /* Ofs: 0x8 Size: 0x10 ArrayProperty RoadRuntime.SideActorManager.SideActors */
    int32_t SocketIndex; /* Ofs: 0x18 Size: 0x4 IntProperty RoadRuntime.SideActorManager.SocketIndex */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSideActorManager = sizeof(FSideActorManager); // 32
    static_assert(sizeof(FSideActorManager) == 0x20, "Size of FSideActorManager is not correct.");
	auto constexpr FSideActorManager_Prototype_Offset = offsetof(FSideActorManager, Prototype);
	static_assert(FSideActorManager_Prototype_Offset == 0x0, "FSideActorManager::Prototype offset is not 0");
	auto constexpr FSideActorManager_SideActors_Offset = offsetof(FSideActorManager, SideActors);
	static_assert(FSideActorManager_SideActors_Offset == 0x8, "FSideActorManager::SideActors offset is not 8");
	auto constexpr FSideActorManager_SocketIndex_Offset = offsetof(FSideActorManager, SocketIndex);
	static_assert(FSideActorManager_SocketIndex_Offset == 0x18, "FSideActorManager::SocketIndex offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
