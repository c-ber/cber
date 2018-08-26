#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelCollection // Size: 0x80
{
public:
    uint8_t UnknownData0[0x8];
    ExternalPtr<struct UGameStateBase> GameState; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.LevelCollection.GameState */
    ExternalPtr<struct UNetDriver> NetDriver; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.LevelCollection.NetDriver */
    ExternalPtr<struct UDemoNetDriver> DemoNetDriver; /* Ofs: 0x18 Size: 0x8 ObjectProperty Engine.LevelCollection.DemoNetDriver */
    ExternalPtr<struct ULevel> PersistentLevel; /* Ofs: 0x20 Size: 0x8 ObjectProperty Engine.LevelCollection.PersistentLevel */
    TSet<ExternalPtr<struct ULevel>> Levels; /* Ofs: 0x28 Size: 0x50 SetProperty Engine.LevelCollection.Levels */
    uint8_t UnknownData78[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelCollection = sizeof(FLevelCollection); // 128
    static_assert(sizeof(FLevelCollection) == 0x80, "Size of FLevelCollection is not correct.");
	auto constexpr FLevelCollection_GameState_Offset = offsetof(FLevelCollection, GameState);
	static_assert(FLevelCollection_GameState_Offset == 0x8, "FLevelCollection::GameState offset is not 8");
	auto constexpr FLevelCollection_NetDriver_Offset = offsetof(FLevelCollection, NetDriver);
	static_assert(FLevelCollection_NetDriver_Offset == 0x10, "FLevelCollection::NetDriver offset is not 10");
	auto constexpr FLevelCollection_DemoNetDriver_Offset = offsetof(FLevelCollection, DemoNetDriver);
	static_assert(FLevelCollection_DemoNetDriver_Offset == 0x18, "FLevelCollection::DemoNetDriver offset is not 18");
	auto constexpr FLevelCollection_PersistentLevel_Offset = offsetof(FLevelCollection, PersistentLevel);
	static_assert(FLevelCollection_PersistentLevel_Offset == 0x20, "FLevelCollection::PersistentLevel offset is not 20");
	auto constexpr FLevelCollection_Levels_Offset = offsetof(FLevelCollection, Levels);
	static_assert(FLevelCollection_Levels_Offset == 0x28, "FLevelCollection::Levels offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
