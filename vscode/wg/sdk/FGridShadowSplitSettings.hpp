#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGridShadowSplitSettings // Size: 0x8
{
public:
    float CellSize; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.GridShadowSplitSettings.CellSize */
    float MaxRadius; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.GridShadowSplitSettings.MaxRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGridShadowSplitSettings = sizeof(FGridShadowSplitSettings); // 8
    static_assert(sizeof(FGridShadowSplitSettings) == 0x8, "Size of FGridShadowSplitSettings is not correct.");
	auto constexpr FGridShadowSplitSettings_CellSize_Offset = offsetof(FGridShadowSplitSettings, CellSize);
	static_assert(FGridShadowSplitSettings_CellSize_Offset == 0x0, "FGridShadowSplitSettings::CellSize offset is not 0");
	auto constexpr FGridShadowSplitSettings_MaxRadius_Offset = offsetof(FGridShadowSplitSettings, MaxRadius);
	static_assert(FGridShadowSplitSettings_MaxRadius_Offset == 0x4, "FGridShadowSplitSettings::MaxRadius offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
