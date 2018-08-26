#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslGamepadKeyPreset // Size: 0x28
{
public:
    FName PresetName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.TslGamepadKeyPreset.PresetName */
    TArray<struct FTslGamepadActionKeyData> ActionKeyDatas; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.TslGamepadKeyPreset.ActionKeyDatas */
    TArray<struct FTslGamepadAxisKeyData> AxisKeyDatas; /* Ofs: 0x18 Size: 0x10 ArrayProperty TslGame.TslGamepadKeyPreset.AxisKeyDatas */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslGamepadKeyPreset = sizeof(FTslGamepadKeyPreset); // 40
    static_assert(sizeof(FTslGamepadKeyPreset) == 0x28, "Size of FTslGamepadKeyPreset is not correct.");
	auto constexpr FTslGamepadKeyPreset_PresetName_Offset = offsetof(FTslGamepadKeyPreset, PresetName);
	static_assert(FTslGamepadKeyPreset_PresetName_Offset == 0x0, "FTslGamepadKeyPreset::PresetName offset is not 0");
	auto constexpr FTslGamepadKeyPreset_ActionKeyDatas_Offset = offsetof(FTslGamepadKeyPreset, ActionKeyDatas);
	static_assert(FTslGamepadKeyPreset_ActionKeyDatas_Offset == 0x8, "FTslGamepadKeyPreset::ActionKeyDatas offset is not 8");
	auto constexpr FTslGamepadKeyPreset_AxisKeyDatas_Offset = offsetof(FTslGamepadKeyPreset, AxisKeyDatas);
	static_assert(FTslGamepadKeyPreset_AxisKeyDatas_Offset == 0x18, "FTslGamepadKeyPreset::AxisKeyDatas offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
