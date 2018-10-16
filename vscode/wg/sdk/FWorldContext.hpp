#pragma once
#include "FURL.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWorldContext // Size: 0x2D0
{
public:
    uint8_t UnknownData0[0xD8];
    FURL LastURL; /* Ofs: 0xD8 Size: 0x70 StructProperty Engine.WorldContext.LastURL */
    uint8_t UnknownData148[0x18];
    ExternalPtr<struct UPendingNetGame> PendingNetGame; /* Ofs: 0x160 Size: 0x8 ObjectProperty Engine.WorldContext.PendingNetGame */
    FURL LastRemoteURL; /* Ofs: 0x168 Size: 0x70 StructProperty Engine.WorldContext.LastRemoteURL */
    uint8_t UnknownData1D8[0x8];
    TArray<struct FNamedNetDriver> ActiveNetDrivers; /* Ofs: 0x1E0 Size: 0x10 ArrayProperty Engine.WorldContext.ActiveNetDrivers */
    TArray<ExternalPtr<struct UObjectReferencer>> ObjectReferencers; /* Ofs: 0x1F0 Size: 0x10 ArrayProperty Engine.WorldContext.ObjectReferencers */
    uint8_t UnknownData200[0x8];
    TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; /* Ofs: 0x208 Size: 0x10 ArrayProperty Engine.WorldContext.PackagesToFullyLoad */
    uint8_t UnknownData218[0x18];
    EncryptedExternalPtr<struct UGameInstance> OwningGameInstance; /* Ofs: 0x230 Size: 0x10 EncryptedObjectProperty Engine.WorldContext.OwningGameInstance */
    TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; /* Ofs: 0x240 Size: 0x10 ArrayProperty Engine.WorldContext.PendingLevelStreamingStatusUpdates */
    TArray<ExternalPtr<struct ULevel>> LoadedLevelsForPendingMapChange; /* Ofs: 0x250 Size: 0x10 ArrayProperty Engine.WorldContext.LoadedLevelsForPendingMapChange */
    uint8_t UnknownData260[0x10];
    EncryptedExternalPtr<struct UGameViewportClient> GameViewport; /* Ofs: 0x270 Size: 0x10 EncryptedObjectProperty Engine.WorldContext.GameViewport */
    uint8_t UnknownData280[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWorldContext = sizeof(FWorldContext); // 720
    static_assert(sizeof(FWorldContext) == 0x2D0, "Size of FWorldContext is not correct.");
	auto constexpr FWorldContext_LastURL_Offset = offsetof(FWorldContext, LastURL);
	static_assert(FWorldContext_LastURL_Offset == 0xd8, "FWorldContext::LastURL offset is not d8");
	auto constexpr FWorldContext_PendingNetGame_Offset = offsetof(FWorldContext, PendingNetGame);
	static_assert(FWorldContext_PendingNetGame_Offset == 0x160, "FWorldContext::PendingNetGame offset is not 160");
	auto constexpr FWorldContext_LastRemoteURL_Offset = offsetof(FWorldContext, LastRemoteURL);
	static_assert(FWorldContext_LastRemoteURL_Offset == 0x168, "FWorldContext::LastRemoteURL offset is not 168");
	auto constexpr FWorldContext_ActiveNetDrivers_Offset = offsetof(FWorldContext, ActiveNetDrivers);
	static_assert(FWorldContext_ActiveNetDrivers_Offset == 0x1e0, "FWorldContext::ActiveNetDrivers offset is not 1e0");
	auto constexpr FWorldContext_ObjectReferencers_Offset = offsetof(FWorldContext, ObjectReferencers);
	static_assert(FWorldContext_ObjectReferencers_Offset == 0x1f0, "FWorldContext::ObjectReferencers offset is not 1f0");
	auto constexpr FWorldContext_PackagesToFullyLoad_Offset = offsetof(FWorldContext, PackagesToFullyLoad);
	static_assert(FWorldContext_PackagesToFullyLoad_Offset == 0x208, "FWorldContext::PackagesToFullyLoad offset is not 208");
	auto constexpr FWorldContext_OwningGameInstance_Offset = offsetof(FWorldContext, OwningGameInstance);
	static_assert(FWorldContext_OwningGameInstance_Offset == 0x230, "FWorldContext::OwningGameInstance offset is not 230");
	auto constexpr FWorldContext_PendingLevelStreamingStatusUpdates_Offset = offsetof(FWorldContext, PendingLevelStreamingStatusUpdates);
	static_assert(FWorldContext_PendingLevelStreamingStatusUpdates_Offset == 0x240, "FWorldContext::PendingLevelStreamingStatusUpdates offset is not 240");
	auto constexpr FWorldContext_LoadedLevelsForPendingMapChange_Offset = offsetof(FWorldContext, LoadedLevelsForPendingMapChange);
	static_assert(FWorldContext_LoadedLevelsForPendingMapChange_Offset == 0x250, "FWorldContext::LoadedLevelsForPendingMapChange offset is not 250");
	auto constexpr FWorldContext_GameViewport_Offset = offsetof(FWorldContext, GameViewport);
	static_assert(FWorldContext_GameViewport_Offset == 0x270, "FWorldContext::GameViewport offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
