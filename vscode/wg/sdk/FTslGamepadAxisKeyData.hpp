#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslGamepadAxisKeyData // Size: 0x40
{
public:
    FName AxisName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.TslGamepadAxisKeyData.AxisName */
    FText DisplayName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.TslGamepadAxisKeyData.DisplayName */
    float Scale; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.TslGamepadAxisKeyData.Scale */
    uint8_t UnknownData24[0x4];
    FKey GamepadAxisKey; /* Ofs: 0x28 Size: 0x18 StructProperty TslGame.TslGamepadAxisKeyData.GamepadAxisKey */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslGamepadAxisKeyData = sizeof(FTslGamepadAxisKeyData); // 64
    static_assert(sizeof(FTslGamepadAxisKeyData) == 0x40, "Size of FTslGamepadAxisKeyData is not correct.");
	auto constexpr FTslGamepadAxisKeyData_AxisName_Offset = offsetof(FTslGamepadAxisKeyData, AxisName);
	static_assert(FTslGamepadAxisKeyData_AxisName_Offset == 0x0, "FTslGamepadAxisKeyData::AxisName offset is not 0");
	auto constexpr FTslGamepadAxisKeyData_DisplayName_Offset = offsetof(FTslGamepadAxisKeyData, DisplayName);
	static_assert(FTslGamepadAxisKeyData_DisplayName_Offset == 0x8, "FTslGamepadAxisKeyData::DisplayName offset is not 8");
	auto constexpr FTslGamepadAxisKeyData_Scale_Offset = offsetof(FTslGamepadAxisKeyData, Scale);
	static_assert(FTslGamepadAxisKeyData_Scale_Offset == 0x20, "FTslGamepadAxisKeyData::Scale offset is not 20");
	auto constexpr FTslGamepadAxisKeyData_GamepadAxisKey_Offset = offsetof(FTslGamepadAxisKeyData, GamepadAxisKey);
	static_assert(FTslGamepadAxisKeyData_GamepadAxisKey_Offset == 0x28, "FTslGamepadAxisKeyData::GamepadAxisKey offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
