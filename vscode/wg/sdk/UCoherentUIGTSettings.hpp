#pragma once
#include "ECoherentUIGTSettingsSeverity.hpp"
#include "ECoherentUIGTMSAA.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTSettings // Size: 0x70
	: public UObject // Size: 0x30
{
private:
	typedef UCoherentUIGTSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2078); // id32("Class CoherentUIGTPlugin.CoherentUIGTSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x3];
	int32_t InspectorPort; /* Ofs: 0x34 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTSettings.InspectorPort */
	int32_t WebdriverPort; /* Ofs: 0x38 Size: 0x4 - IntProperty CoherentUIGTPlugin.CoherentUIGTSettings.WebdriverPort */
	uint8_t boolField3C;
	uint8_t boolField3D;
	uint8_t boolField3E;
	uint8_t boolField3F;
	uint8_t boolField40;
	uint8_t boolField41;
	TEnumAsByte<enum ECoherentUIGTSettingsSeverity> LogSeverity; /* Ofs: 0x42 Size: 0x1 - EnumProperty CoherentUIGTPlugin.CoherentUIGTSettings.LogSeverity */
	uint8_t boolField43;
	uint8_t boolField44;
	uint8_t UnknownData45[0x3];
	FString HUDMaterialName; /* Ofs: 0x48 Size: 0x10 - StrProperty CoherentUIGTPlugin.CoherentUIGTSettings.HUDMaterialName */
	FString CoUIResourcesRoot; /* Ofs: 0x58 Size: 0x10 - StrProperty CoherentUIGTPlugin.CoherentUIGTSettings.CoUIResourcesRoot */
	uint8_t boolField68;
	TEnumAsByte<enum ECoherentUIGTMSAA> MSAA; /* Ofs: 0x69 Size: 0x1 - EnumProperty CoherentUIGTPlugin.CoherentUIGTSettings.MSAA */
	uint8_t UnknownData6A[0x6];


	inline bool EnableLiveReload()
	{
		return boolField30& 0x1;
	}
	inline bool SetEnableLiveReload(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInspectorPort(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetWebdriverPort(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool EnableWebSecurity()
	{
		return boolField3C& 0x1;
	}
	inline bool SetEnableWebSecurity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableLocalization()
	{
		return boolField3D& 0x1;
	}
	inline bool SetEnableLocalization(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool RunAsynchronous()
	{
		return boolField3E& 0x1;
	}
	inline bool SetRunAsynchronous(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRecursivelyBindUStructs()
	{
		return boolField3F& 0x1;
	}
	inline bool SetbRecursivelyBindUStructs(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowPerformanceWarningsInEditor()
	{
		return boolField40& 0x1;
	}
	inline bool SetAllowPerformanceWarningsInEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ShowWarningsOnScreen()
	{
		return boolField41& 0x1;
	}
	inline bool SetShowWarningsOnScreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLogSeverity(t_structHelper inst, TEnumAsByte<enum ECoherentUIGTSettingsSeverity> value) { inst.WriteOffset(0x42, value); }
	inline bool bRespectTitleSafeZone()
	{
		return boolField43& 0x1;
	}
	inline bool SetbRespectTitleSafeZone(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRespectLetterboxing()
	{
		return boolField44& 0x1;
	}
	inline bool SetbRespectLetterboxing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHUDMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
	inline bool SetCoUIResourcesRoot(t_structHelper inst, FString value) { inst.WriteOffset(0x58, value); }
	inline bool TickWhileGameIsPaused()
	{
		return boolField68& 0x1;
	}
	inline bool SetTickWhileGameIsPaused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMSAA(t_structHelper inst, TEnumAsByte<enum ECoherentUIGTMSAA> value) { inst.WriteOffset(0x69, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTSettings = sizeof(UCoherentUIGTSettings); // 112
    static_assert(sizeof(UCoherentUIGTSettings) == 0x70, "Size of UCoherentUIGTSettings is not correct.");
	auto constexpr UCoherentUIGTSettings_boolField30_Offset = offsetof(UCoherentUIGTSettings, boolField30);
	static_assert(UCoherentUIGTSettings_boolField30_Offset == 0x30, "UCoherentUIGTSettings::boolField30 offset is not 30");
	auto constexpr UCoherentUIGTSettings_InspectorPort_Offset = offsetof(UCoherentUIGTSettings, InspectorPort);
	static_assert(UCoherentUIGTSettings_InspectorPort_Offset == 0x34, "UCoherentUIGTSettings::InspectorPort offset is not 34");
	auto constexpr UCoherentUIGTSettings_WebdriverPort_Offset = offsetof(UCoherentUIGTSettings, WebdriverPort);
	static_assert(UCoherentUIGTSettings_WebdriverPort_Offset == 0x38, "UCoherentUIGTSettings::WebdriverPort offset is not 38");
	auto constexpr UCoherentUIGTSettings_boolField3C_Offset = offsetof(UCoherentUIGTSettings, boolField3C);
	static_assert(UCoherentUIGTSettings_boolField3C_Offset == 0x3c, "UCoherentUIGTSettings::boolField3C offset is not 3c");
	auto constexpr UCoherentUIGTSettings_boolField3D_Offset = offsetof(UCoherentUIGTSettings, boolField3D);
	static_assert(UCoherentUIGTSettings_boolField3D_Offset == 0x3d, "UCoherentUIGTSettings::boolField3D offset is not 3d");
	auto constexpr UCoherentUIGTSettings_boolField3E_Offset = offsetof(UCoherentUIGTSettings, boolField3E);
	static_assert(UCoherentUIGTSettings_boolField3E_Offset == 0x3e, "UCoherentUIGTSettings::boolField3E offset is not 3e");
	auto constexpr UCoherentUIGTSettings_boolField3F_Offset = offsetof(UCoherentUIGTSettings, boolField3F);
	static_assert(UCoherentUIGTSettings_boolField3F_Offset == 0x3f, "UCoherentUIGTSettings::boolField3F offset is not 3f");
	auto constexpr UCoherentUIGTSettings_boolField40_Offset = offsetof(UCoherentUIGTSettings, boolField40);
	static_assert(UCoherentUIGTSettings_boolField40_Offset == 0x40, "UCoherentUIGTSettings::boolField40 offset is not 40");
	auto constexpr UCoherentUIGTSettings_boolField41_Offset = offsetof(UCoherentUIGTSettings, boolField41);
	static_assert(UCoherentUIGTSettings_boolField41_Offset == 0x41, "UCoherentUIGTSettings::boolField41 offset is not 41");
	auto constexpr UCoherentUIGTSettings_LogSeverity_Offset = offsetof(UCoherentUIGTSettings, LogSeverity);
	static_assert(UCoherentUIGTSettings_LogSeverity_Offset == 0x42, "UCoherentUIGTSettings::LogSeverity offset is not 42");
	auto constexpr UCoherentUIGTSettings_boolField43_Offset = offsetof(UCoherentUIGTSettings, boolField43);
	static_assert(UCoherentUIGTSettings_boolField43_Offset == 0x43, "UCoherentUIGTSettings::boolField43 offset is not 43");
	auto constexpr UCoherentUIGTSettings_boolField44_Offset = offsetof(UCoherentUIGTSettings, boolField44);
	static_assert(UCoherentUIGTSettings_boolField44_Offset == 0x44, "UCoherentUIGTSettings::boolField44 offset is not 44");
	auto constexpr UCoherentUIGTSettings_HUDMaterialName_Offset = offsetof(UCoherentUIGTSettings, HUDMaterialName);
	static_assert(UCoherentUIGTSettings_HUDMaterialName_Offset == 0x48, "UCoherentUIGTSettings::HUDMaterialName offset is not 48");
	auto constexpr UCoherentUIGTSettings_CoUIResourcesRoot_Offset = offsetof(UCoherentUIGTSettings, CoUIResourcesRoot);
	static_assert(UCoherentUIGTSettings_CoUIResourcesRoot_Offset == 0x58, "UCoherentUIGTSettings::CoUIResourcesRoot offset is not 58");
	auto constexpr UCoherentUIGTSettings_boolField68_Offset = offsetof(UCoherentUIGTSettings, boolField68);
	static_assert(UCoherentUIGTSettings_boolField68_Offset == 0x68, "UCoherentUIGTSettings::boolField68 offset is not 68");
	auto constexpr UCoherentUIGTSettings_MSAA_Offset = offsetof(UCoherentUIGTSettings, MSAA);
	static_assert(UCoherentUIGTSettings_MSAA_Offset == 0x69, "UCoherentUIGTSettings::MSAA offset is not 69");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
