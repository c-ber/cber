#pragma once
#include "UDeveloperSettings.hpp"
#include "ERenderFocusRule.hpp"
#include "EMouseCursor.hpp"
#include "FStringClassReference.hpp"
#include "EUIScalingRule.hpp"
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUserInterfaceSettings // Size: 0x210
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UUserInterfaceSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(734); // id32("Class Engine.UserInterfaceSettings")
		return ptr;
	}
	TEnumAsByte<enum ERenderFocusRule> RenderFocusRule; /* Ofs: 0x40 Size: 0x1 - EnumProperty Engine.UserInterfaceSettings.RenderFocusRule */
	uint8_t UnknownData41[0x7];
	TMap<EMouseCursor, struct FHardwareCursorReference> HardwareCursors; /* Ofs: 0x48 Size: 0x50 - MapProperty Engine.UserInterfaceSettings.HardwareCursors */
	TMap<EMouseCursor, struct FStringClassReference> SoftwareCursors; /* Ofs: 0x98 Size: 0x50 - MapProperty Engine.UserInterfaceSettings.SoftwareCursors */
	FStringClassReference DefaultCursor; /* Ofs: 0xE8 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.DefaultCursor */
	FStringClassReference TextEditBeamCursor; /* Ofs: 0xF8 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.TextEditBeamCursor */
	FStringClassReference CrosshairsCursor; /* Ofs: 0x108 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.CrosshairsCursor */
	FStringClassReference HandCursor; /* Ofs: 0x118 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.HandCursor */
	FStringClassReference GrabHandCursor; /* Ofs: 0x128 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.GrabHandCursor */
	FStringClassReference GrabHandClosedCursor; /* Ofs: 0x138 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.GrabHandClosedCursor */
	FStringClassReference SlashedCircleCursor; /* Ofs: 0x148 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.SlashedCircleCursor */
	float ApplicationScale; /* Ofs: 0x158 Size: 0x4 - FloatProperty Engine.UserInterfaceSettings.ApplicationScale */
	TEnumAsByte<enum EUIScalingRule> UIScaleRule; /* Ofs: 0x15C Size: 0x1 - EnumProperty Engine.UserInterfaceSettings.UIScaleRule */
	uint8_t UnknownData15D[0x3];
	FStringClassReference CustomScalingRuleClass; /* Ofs: 0x160 Size: 0x10 - StructProperty Engine.UserInterfaceSettings.CustomScalingRuleClass */
	FRuntimeFloatCurve UIScaleCurve; /* Ofs: 0x170 Size: 0x78 - StructProperty Engine.UserInterfaceSettings.UIScaleCurve */
	uint8_t boolField1E8;
	uint8_t UnknownData1E9[0x7];
	TArray<ExternalPtr<struct UObject>> CursorClasses; /* Ofs: 0x1F0 Size: 0x10 - ArrayProperty Engine.UserInterfaceSettings.CursorClasses */
	ExternalPtr<struct UClass> CustomScalingRuleClassInstance; /* Ofs: 0x200 Size: 0x8 - ClassProperty Engine.UserInterfaceSettings.CustomScalingRuleClassInstance */
	ExternalPtr<struct UDPICustomScalingRule> CustomScalingRule; /* Ofs: 0x208 Size: 0x8 - ObjectProperty Engine.UserInterfaceSettings.CustomScalingRule */


	inline bool SetRenderFocusRule(t_structHelper inst, TEnumAsByte<enum ERenderFocusRule> value) { inst.WriteOffset(0x40, value); }
	inline bool SetHardwareCursors(t_structHelper inst, TMap<EMouseCursor, struct FHardwareCursorReference> value) { inst.WriteOffset(0x48, value); }
	inline bool SetSoftwareCursors(t_structHelper inst, TMap<EMouseCursor, struct FStringClassReference> value) { inst.WriteOffset(0x98, value); }
	inline bool SetDefaultCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xE8, value); }
	inline bool SetTextEditBeamCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xF8, value); }
	inline bool SetCrosshairsCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x108, value); }
	inline bool SetHandCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x118, value); }
	inline bool SetGrabHandCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x128, value); }
	inline bool SetGrabHandClosedCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x138, value); }
	inline bool SetSlashedCircleCursor(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x148, value); }
	inline bool SetApplicationScale(t_structHelper inst, float value) { inst.WriteOffset(0x158, value); }
	inline bool SetUIScaleRule(t_structHelper inst, TEnumAsByte<enum EUIScalingRule> value) { inst.WriteOffset(0x15C, value); }
	inline bool SetCustomScalingRuleClass(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x160, value); }
	inline bool SetUIScaleCurve(t_structHelper inst, FRuntimeFloatCurve value) { inst.WriteOffset(0x170, value); }
	inline bool bLoadWidgetsOnDedicatedServer()
	{
		return boolField1E8& 0x1;
	}
	inline bool SetbLoadWidgetsOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCursorClasses(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetCustomScalingRuleClassInstance(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x200, value); }
	inline bool SetCustomScalingRule(t_structHelper inst, ExternalPtr<struct UDPICustomScalingRule> value) { inst.WriteOffset(0x208, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUserInterfaceSettings = sizeof(UUserInterfaceSettings); // 528
    static_assert(sizeof(UUserInterfaceSettings) == 0x210, "Size of UUserInterfaceSettings is not correct.");
	auto constexpr UUserInterfaceSettings_RenderFocusRule_Offset = offsetof(UUserInterfaceSettings, RenderFocusRule);
	static_assert(UUserInterfaceSettings_RenderFocusRule_Offset == 0x40, "UUserInterfaceSettings::RenderFocusRule offset is not 40");
	auto constexpr UUserInterfaceSettings_HardwareCursors_Offset = offsetof(UUserInterfaceSettings, HardwareCursors);
	static_assert(UUserInterfaceSettings_HardwareCursors_Offset == 0x48, "UUserInterfaceSettings::HardwareCursors offset is not 48");
	auto constexpr UUserInterfaceSettings_SoftwareCursors_Offset = offsetof(UUserInterfaceSettings, SoftwareCursors);
	static_assert(UUserInterfaceSettings_SoftwareCursors_Offset == 0x98, "UUserInterfaceSettings::SoftwareCursors offset is not 98");
	auto constexpr UUserInterfaceSettings_DefaultCursor_Offset = offsetof(UUserInterfaceSettings, DefaultCursor);
	static_assert(UUserInterfaceSettings_DefaultCursor_Offset == 0xe8, "UUserInterfaceSettings::DefaultCursor offset is not e8");
	auto constexpr UUserInterfaceSettings_TextEditBeamCursor_Offset = offsetof(UUserInterfaceSettings, TextEditBeamCursor);
	static_assert(UUserInterfaceSettings_TextEditBeamCursor_Offset == 0xf8, "UUserInterfaceSettings::TextEditBeamCursor offset is not f8");
	auto constexpr UUserInterfaceSettings_CrosshairsCursor_Offset = offsetof(UUserInterfaceSettings, CrosshairsCursor);
	static_assert(UUserInterfaceSettings_CrosshairsCursor_Offset == 0x108, "UUserInterfaceSettings::CrosshairsCursor offset is not 108");
	auto constexpr UUserInterfaceSettings_HandCursor_Offset = offsetof(UUserInterfaceSettings, HandCursor);
	static_assert(UUserInterfaceSettings_HandCursor_Offset == 0x118, "UUserInterfaceSettings::HandCursor offset is not 118");
	auto constexpr UUserInterfaceSettings_GrabHandCursor_Offset = offsetof(UUserInterfaceSettings, GrabHandCursor);
	static_assert(UUserInterfaceSettings_GrabHandCursor_Offset == 0x128, "UUserInterfaceSettings::GrabHandCursor offset is not 128");
	auto constexpr UUserInterfaceSettings_GrabHandClosedCursor_Offset = offsetof(UUserInterfaceSettings, GrabHandClosedCursor);
	static_assert(UUserInterfaceSettings_GrabHandClosedCursor_Offset == 0x138, "UUserInterfaceSettings::GrabHandClosedCursor offset is not 138");
	auto constexpr UUserInterfaceSettings_SlashedCircleCursor_Offset = offsetof(UUserInterfaceSettings, SlashedCircleCursor);
	static_assert(UUserInterfaceSettings_SlashedCircleCursor_Offset == 0x148, "UUserInterfaceSettings::SlashedCircleCursor offset is not 148");
	auto constexpr UUserInterfaceSettings_ApplicationScale_Offset = offsetof(UUserInterfaceSettings, ApplicationScale);
	static_assert(UUserInterfaceSettings_ApplicationScale_Offset == 0x158, "UUserInterfaceSettings::ApplicationScale offset is not 158");
	auto constexpr UUserInterfaceSettings_UIScaleRule_Offset = offsetof(UUserInterfaceSettings, UIScaleRule);
	static_assert(UUserInterfaceSettings_UIScaleRule_Offset == 0x15c, "UUserInterfaceSettings::UIScaleRule offset is not 15c");
	auto constexpr UUserInterfaceSettings_CustomScalingRuleClass_Offset = offsetof(UUserInterfaceSettings, CustomScalingRuleClass);
	static_assert(UUserInterfaceSettings_CustomScalingRuleClass_Offset == 0x160, "UUserInterfaceSettings::CustomScalingRuleClass offset is not 160");
	auto constexpr UUserInterfaceSettings_UIScaleCurve_Offset = offsetof(UUserInterfaceSettings, UIScaleCurve);
	static_assert(UUserInterfaceSettings_UIScaleCurve_Offset == 0x170, "UUserInterfaceSettings::UIScaleCurve offset is not 170");
	auto constexpr UUserInterfaceSettings_boolField1E8_Offset = offsetof(UUserInterfaceSettings, boolField1E8);
	static_assert(UUserInterfaceSettings_boolField1E8_Offset == 0x1e8, "UUserInterfaceSettings::boolField1E8 offset is not 1e8");
	auto constexpr UUserInterfaceSettings_CursorClasses_Offset = offsetof(UUserInterfaceSettings, CursorClasses);
	static_assert(UUserInterfaceSettings_CursorClasses_Offset == 0x1f0, "UUserInterfaceSettings::CursorClasses offset is not 1f0");
	auto constexpr UUserInterfaceSettings_CustomScalingRuleClassInstance_Offset = offsetof(UUserInterfaceSettings, CustomScalingRuleClassInstance);
	static_assert(UUserInterfaceSettings_CustomScalingRuleClassInstance_Offset == 0x200, "UUserInterfaceSettings::CustomScalingRuleClassInstance offset is not 200");
	auto constexpr UUserInterfaceSettings_CustomScalingRule_Offset = offsetof(UUserInterfaceSettings, CustomScalingRule);
	static_assert(UUserInterfaceSettings_CustomScalingRule_Offset == 0x208, "UUserInterfaceSettings::CustomScalingRule offset is not 208");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
