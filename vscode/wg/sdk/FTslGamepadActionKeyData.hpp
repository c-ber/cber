#pragma once
#include "FTslGamepadInputKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslGamepadActionKeyData // Size: 0x80
{
public:
    FName ActionName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.TslGamepadActionKeyData.ActionName */
    FText DisplayName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.TslGamepadActionKeyData.DisplayName */
    FString Comment; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.TslGamepadActionKeyData.Comment */
    FText Desc; /* Ofs: 0x30 Size: 0x18 TextProperty TslGame.TslGamepadActionKeyData.Desc */
    FString Category; /* Ofs: 0x48 Size: 0x10 StrProperty TslGame.TslGamepadActionKeyData.Category */
    FTslGamepadInputKey GamepadActionKey; /* Ofs: 0x58 Size: 0x28 StructProperty TslGame.TslGamepadActionKeyData.GamepadActionKey */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslGamepadActionKeyData = sizeof(FTslGamepadActionKeyData); // 128
    static_assert(sizeof(FTslGamepadActionKeyData) == 0x80, "Size of FTslGamepadActionKeyData is not correct.");
	auto constexpr FTslGamepadActionKeyData_ActionName_Offset = offsetof(FTslGamepadActionKeyData, ActionName);
	static_assert(FTslGamepadActionKeyData_ActionName_Offset == 0x0, "FTslGamepadActionKeyData::ActionName offset is not 0");
	auto constexpr FTslGamepadActionKeyData_DisplayName_Offset = offsetof(FTslGamepadActionKeyData, DisplayName);
	static_assert(FTslGamepadActionKeyData_DisplayName_Offset == 0x8, "FTslGamepadActionKeyData::DisplayName offset is not 8");
	auto constexpr FTslGamepadActionKeyData_Comment_Offset = offsetof(FTslGamepadActionKeyData, Comment);
	static_assert(FTslGamepadActionKeyData_Comment_Offset == 0x20, "FTslGamepadActionKeyData::Comment offset is not 20");
	auto constexpr FTslGamepadActionKeyData_Desc_Offset = offsetof(FTslGamepadActionKeyData, Desc);
	static_assert(FTslGamepadActionKeyData_Desc_Offset == 0x30, "FTslGamepadActionKeyData::Desc offset is not 30");
	auto constexpr FTslGamepadActionKeyData_Category_Offset = offsetof(FTslGamepadActionKeyData, Category);
	static_assert(FTslGamepadActionKeyData_Category_Offset == 0x48, "FTslGamepadActionKeyData::Category offset is not 48");
	auto constexpr FTslGamepadActionKeyData_GamepadActionKey_Offset = offsetof(FTslGamepadActionKeyData, GamepadActionKey);
	static_assert(FTslGamepadActionKeyData_GamepadActionKey_Offset == 0x58, "FTslGamepadActionKeyData::GamepadActionKey offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
