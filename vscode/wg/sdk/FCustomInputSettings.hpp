#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomInputSettings // Size: 0x68
{
public:
    TArray<struct FCustomActionKeyData> ActionKeyList; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.CustomInputSettings.ActionKeyList */
    TArray<struct FCustomAxisKeyData> AxisKeyList; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.CustomInputSettings.AxisKeyList */
    TArray<struct FCustomMouseSensitiveData> MouseSensitiveList; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.CustomInputSettings.MouseSensitiveList */
    TArray<struct FCustomGamePadSensitiveData> GamePadSensitiveList; /* Ofs: 0x30 Size: 0x10 ArrayProperty TslGame.CustomInputSettings.GamePadSensitiveList */
    float MouseVerticalSensitivityMultiplierAdjusted; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.CustomInputSettings.MouseVerticalSensitivityMultiplierAdjusted */
    bool bInvertMouse; /* Ofs: 0x44 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomInputSettings.bInvertMouse */
    bool bInvertGamePadY; /* Ofs: 0x45 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomInputSettings.bInvertGamePadY */
    bool bInvertGamePadX; /* Ofs: 0x46 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomInputSettings.bInvertGamePadX */
    uint8_t UnknownData47[0x1];
    float GamePadDeadZone; /* Ofs: 0x48 Size: 0x4 FloatProperty TslGame.CustomInputSettings.GamePadDeadZone */
    float GamepadVerticalSensitivityMultiplier; /* Ofs: 0x4C Size: 0x4 FloatProperty TslGame.CustomInputSettings.GamepadVerticalSensitivityMultiplier */
    float StartRunningSensitivity; /* Ofs: 0x50 Size: 0x4 FloatProperty TslGame.CustomInputSettings.StartRunningSensitivity */
    float GamePadDeadZone_Left; /* Ofs: 0x54 Size: 0x4 FloatProperty TslGame.CustomInputSettings.GamePadDeadZone_Left */
    uint8_t UnknownData58[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomInputSettings = sizeof(FCustomInputSettings); // 104
    static_assert(sizeof(FCustomInputSettings) == 0x68, "Size of FCustomInputSettings is not correct.");
	auto constexpr FCustomInputSettings_ActionKeyList_Offset = offsetof(FCustomInputSettings, ActionKeyList);
	static_assert(FCustomInputSettings_ActionKeyList_Offset == 0x0, "FCustomInputSettings::ActionKeyList offset is not 0");
	auto constexpr FCustomInputSettings_AxisKeyList_Offset = offsetof(FCustomInputSettings, AxisKeyList);
	static_assert(FCustomInputSettings_AxisKeyList_Offset == 0x10, "FCustomInputSettings::AxisKeyList offset is not 10");
	auto constexpr FCustomInputSettings_MouseSensitiveList_Offset = offsetof(FCustomInputSettings, MouseSensitiveList);
	static_assert(FCustomInputSettings_MouseSensitiveList_Offset == 0x20, "FCustomInputSettings::MouseSensitiveList offset is not 20");
	auto constexpr FCustomInputSettings_GamePadSensitiveList_Offset = offsetof(FCustomInputSettings, GamePadSensitiveList);
	static_assert(FCustomInputSettings_GamePadSensitiveList_Offset == 0x30, "FCustomInputSettings::GamePadSensitiveList offset is not 30");
	auto constexpr FCustomInputSettings_MouseVerticalSensitivityMultiplierAdjusted_Offset = offsetof(FCustomInputSettings, MouseVerticalSensitivityMultiplierAdjusted);
	static_assert(FCustomInputSettings_MouseVerticalSensitivityMultiplierAdjusted_Offset == 0x40, "FCustomInputSettings::MouseVerticalSensitivityMultiplierAdjusted offset is not 40");
	auto constexpr FCustomInputSettings_GamePadDeadZone_Offset = offsetof(FCustomInputSettings, GamePadDeadZone);
	static_assert(FCustomInputSettings_GamePadDeadZone_Offset == 0x48, "FCustomInputSettings::GamePadDeadZone offset is not 48");
	auto constexpr FCustomInputSettings_GamepadVerticalSensitivityMultiplier_Offset = offsetof(FCustomInputSettings, GamepadVerticalSensitivityMultiplier);
	static_assert(FCustomInputSettings_GamepadVerticalSensitivityMultiplier_Offset == 0x4c, "FCustomInputSettings::GamepadVerticalSensitivityMultiplier offset is not 4c");
	auto constexpr FCustomInputSettings_StartRunningSensitivity_Offset = offsetof(FCustomInputSettings, StartRunningSensitivity);
	static_assert(FCustomInputSettings_StartRunningSensitivity_Offset == 0x50, "FCustomInputSettings::StartRunningSensitivity offset is not 50");
	auto constexpr FCustomInputSettings_GamePadDeadZone_Left_Offset = offsetof(FCustomInputSettings, GamePadDeadZone_Left);
	static_assert(FCustomInputSettings_GamePadDeadZone_Left_Offset == 0x54, "FCustomInputSettings::GamePadDeadZone_Left offset is not 54");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
