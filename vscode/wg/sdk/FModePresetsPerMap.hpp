#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FModePresetsPerMap // Size: 0x20
{
public:
    FString MapName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ModePresetsPerMap.MapName */
    TArray<struct FModePresetData> PresetDataList; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.ModePresetsPerMap.PresetDataList */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFModePresetsPerMap = sizeof(FModePresetsPerMap); // 32
    static_assert(sizeof(FModePresetsPerMap) == 0x20, "Size of FModePresetsPerMap is not correct.");
	auto constexpr FModePresetsPerMap_MapName_Offset = offsetof(FModePresetsPerMap, MapName);
	static_assert(FModePresetsPerMap_MapName_Offset == 0x0, "FModePresetsPerMap::MapName offset is not 0");
	auto constexpr FModePresetsPerMap_PresetDataList_Offset = offsetof(FModePresetsPerMap, PresetDataList);
	static_assert(FModePresetsPerMap_PresetDataList_Offset == 0x10, "FModePresetsPerMap::PresetDataList offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
