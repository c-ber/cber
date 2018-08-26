#pragma once
#include "EMouseCaptureMode.hpp"
#include "EMouseLockMode.hpp"
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputSettings // Size: 0xB0
	: public UObject // Size: 0x30
{
private:
	typedef UInputSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(784); // id32("Class Engine.InputSettings")
		return ptr;
	}
	TArray<struct FInputAxisConfigEntry> AxisConfig; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InputSettings.AxisConfig */
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	float FOVScale; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.InputSettings.FOVScale */
	float DoubleClickTime; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.InputSettings.DoubleClickTime */
	uint8_t boolField4C;
	TEnumAsByte<enum EMouseCaptureMode> DefaultViewportMouseCaptureMode; /* Ofs: 0x4D Size: 0x1 - EnumProperty Engine.InputSettings.DefaultViewportMouseCaptureMode */
	uint8_t boolField4E;
	TEnumAsByte<enum EMouseLockMode> DefaultViewportMouseLockMode; /* Ofs: 0x4F Size: 0x1 - EnumProperty Engine.InputSettings.DefaultViewportMouseLockMode */
	TArray<struct FInputActionKeyMapping> ActionMappings; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.InputSettings.ActionMappings */
	TArray<struct FInputAxisKeyMapping> AxisMappings; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.InputSettings.AxisMappings */
	uint8_t boolField70;
	uint8_t boolField71;
	uint8_t UnknownData72[0x6];
	FStringAssetReference DefaultTouchInterface; /* Ofs: 0x78 Size: 0x10 - StructProperty Engine.InputSettings.DefaultTouchInterface */
	FKey ConsoleKey; /* Ofs: 0x88 Size: 0x18 - StructProperty Engine.InputSettings.ConsoleKey */
	TArray<struct FKey> ConsoleKeys; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty Engine.InputSettings.ConsoleKeys */


	inline bool SetAxisConfig(t_structHelper inst, TArray<struct FInputAxisConfigEntry> value) { inst.WriteOffset(0x30, value); }
	inline bool bAltEnterTogglesFullscreen()
	{
		return boolField40& 0x1;
	}
	inline bool SetbAltEnterTogglesFullscreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bF11TogglesFullscreen()
	{
		return boolField40& 0x2;
	}
	inline bool SetbF11TogglesFullscreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseMouseForTouch()
	{
		return boolField40& 0x4;
	}
	inline bool SetbUseMouseForTouch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnableMouseSmoothing()
	{
		return boolField40& 0x8;
	}
	inline bool SetbEnableMouseSmoothing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bEnableFOVScaling()
	{
		return boolField40& 0x10;
	}
	inline bool SetbEnableFOVScaling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetFOVScale(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetDoubleClickTime(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool bCaptureMouseOnLaunch()
	{
		return boolField4C& 0x1;
	}
	inline bool SetbCaptureMouseOnLaunch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultViewportMouseCaptureMode(t_structHelper inst, TEnumAsByte<enum EMouseCaptureMode> value) { inst.WriteOffset(0x4D, value); }
	inline bool bDefaultViewportMouseLock()
	{
		return boolField4E& 0x1;
	}
	inline bool SetbDefaultViewportMouseLock(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultViewportMouseLockMode(t_structHelper inst, TEnumAsByte<enum EMouseLockMode> value) { inst.WriteOffset(0x4F, value); }
	inline bool SetActionMappings(t_structHelper inst, TArray<struct FInputActionKeyMapping> value) { inst.WriteOffset(0x50, value); }
	inline bool SetAxisMappings(t_structHelper inst, TArray<struct FInputAxisKeyMapping> value) { inst.WriteOffset(0x60, value); }
	inline bool bAlwaysShowTouchInterface()
	{
		return boolField70& 0x1;
	}
	inline bool SetbAlwaysShowTouchInterface(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bShowConsoleOnFourFingerTap()
	{
		return boolField71& 0x1;
	}
	inline bool SetbShowConsoleOnFourFingerTap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x71, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultTouchInterface(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x78, value); }
	inline bool SetConsoleKey(t_structHelper inst, FKey value) { inst.WriteOffset(0x88, value); }
	inline bool SetConsoleKeys(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputSettings = sizeof(UInputSettings); // 176
    static_assert(sizeof(UInputSettings) == 0xB0, "Size of UInputSettings is not correct.");
	auto constexpr UInputSettings_AxisConfig_Offset = offsetof(UInputSettings, AxisConfig);
	static_assert(UInputSettings_AxisConfig_Offset == 0x30, "UInputSettings::AxisConfig offset is not 30");
	auto constexpr UInputSettings_boolField40_Offset = offsetof(UInputSettings, boolField40);
	static_assert(UInputSettings_boolField40_Offset == 0x40, "UInputSettings::boolField40 offset is not 40");
	auto constexpr UInputSettings_FOVScale_Offset = offsetof(UInputSettings, FOVScale);
	static_assert(UInputSettings_FOVScale_Offset == 0x44, "UInputSettings::FOVScale offset is not 44");
	auto constexpr UInputSettings_DoubleClickTime_Offset = offsetof(UInputSettings, DoubleClickTime);
	static_assert(UInputSettings_DoubleClickTime_Offset == 0x48, "UInputSettings::DoubleClickTime offset is not 48");
	auto constexpr UInputSettings_boolField4C_Offset = offsetof(UInputSettings, boolField4C);
	static_assert(UInputSettings_boolField4C_Offset == 0x4c, "UInputSettings::boolField4C offset is not 4c");
	auto constexpr UInputSettings_DefaultViewportMouseCaptureMode_Offset = offsetof(UInputSettings, DefaultViewportMouseCaptureMode);
	static_assert(UInputSettings_DefaultViewportMouseCaptureMode_Offset == 0x4d, "UInputSettings::DefaultViewportMouseCaptureMode offset is not 4d");
	auto constexpr UInputSettings_boolField4E_Offset = offsetof(UInputSettings, boolField4E);
	static_assert(UInputSettings_boolField4E_Offset == 0x4e, "UInputSettings::boolField4E offset is not 4e");
	auto constexpr UInputSettings_DefaultViewportMouseLockMode_Offset = offsetof(UInputSettings, DefaultViewportMouseLockMode);
	static_assert(UInputSettings_DefaultViewportMouseLockMode_Offset == 0x4f, "UInputSettings::DefaultViewportMouseLockMode offset is not 4f");
	auto constexpr UInputSettings_ActionMappings_Offset = offsetof(UInputSettings, ActionMappings);
	static_assert(UInputSettings_ActionMappings_Offset == 0x50, "UInputSettings::ActionMappings offset is not 50");
	auto constexpr UInputSettings_AxisMappings_Offset = offsetof(UInputSettings, AxisMappings);
	static_assert(UInputSettings_AxisMappings_Offset == 0x60, "UInputSettings::AxisMappings offset is not 60");
	auto constexpr UInputSettings_boolField70_Offset = offsetof(UInputSettings, boolField70);
	static_assert(UInputSettings_boolField70_Offset == 0x70, "UInputSettings::boolField70 offset is not 70");
	auto constexpr UInputSettings_boolField71_Offset = offsetof(UInputSettings, boolField71);
	static_assert(UInputSettings_boolField71_Offset == 0x71, "UInputSettings::boolField71 offset is not 71");
	auto constexpr UInputSettings_DefaultTouchInterface_Offset = offsetof(UInputSettings, DefaultTouchInterface);
	static_assert(UInputSettings_DefaultTouchInterface_Offset == 0x78, "UInputSettings::DefaultTouchInterface offset is not 78");
	auto constexpr UInputSettings_ConsoleKey_Offset = offsetof(UInputSettings, ConsoleKey);
	static_assert(UInputSettings_ConsoleKey_Offset == 0x88, "UInputSettings::ConsoleKey offset is not 88");
	auto constexpr UInputSettings_ConsoleKeys_Offset = offsetof(UInputSettings, ConsoleKeys);
	static_assert(UInputSettings_ConsoleKeys_Offset == 0xa0, "UInputSettings::ConsoleKeys offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
