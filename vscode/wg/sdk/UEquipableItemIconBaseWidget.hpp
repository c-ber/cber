#pragma once
#include "UUmgBaseWidget.hpp"
#include "EEquipSlotID.hpp"
#include "FDurabilityColorSet.hpp"
#include "FFloatInterval.hpp"
#include "EEquipableItemIconVisibility.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FLinearColor.hpp"
#include "FUmgWidgetBinder_Animation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipableItemIconBaseWidget // Size: 0x3C0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UEquipableItemIconBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1521); // id32("Class TslGame.EquipableItemIconBaseWidget")
		return ptr;
	}
	TEnumAsByte<enum EEquipSlotID> EquipSlotID; /* Ofs: 0x300 Size: 0x1 - EnumProperty TslGame.EquipableItemIconBaseWidget.EquipSlotID */
	uint8_t UnknownData301[0x7];
	FDurabilityColorSet DurabilityColorSet; /* Ofs: 0x308 Size: 0x10 - StructProperty TslGame.EquipableItemIconBaseWidget.DurabilityColorSet */
	uint8_t boolField318;
	uint8_t UnknownData319[0x3];
	FFloatInterval WarningRange; /* Ofs: 0x31C Size: 0x8 - StructProperty TslGame.EquipableItemIconBaseWidget.WarningRange */
	TEnumAsByte<enum EEquipableItemIconVisibility> IconVisibilityType; /* Ofs: 0x324 Size: 0x1 - EnumProperty TslGame.EquipableItemIconBaseWidget.IconVisibilityType */
	uint8_t UnknownData325[0x3];
	FUmgWidgetBinder_Image IconImageBinder; /* Ofs: 0x328 Size: 0x28 - StructProperty TslGame.EquipableItemIconBaseWidget.IconImageBinder */
	FName IconTexParamName; /* Ofs: 0x350 Size: 0x8 - NameProperty TslGame.EquipableItemIconBaseWidget.IconTexParamName */
	FName IconColorParamName; /* Ofs: 0x358 Size: 0x8 - NameProperty TslGame.EquipableItemIconBaseWidget.IconColorParamName */
	FLinearColor DefaultColor; /* Ofs: 0x360 Size: 0x10 - StructProperty TslGame.EquipableItemIconBaseWidget.DefaultColor */
	FUmgWidgetBinder_Animation WarningAnimBinder; /* Ofs: 0x370 Size: 0x20 - StructProperty TslGame.EquipableItemIconBaseWidget.WarningAnimBinder */
	FUmgWidgetBinder_Animation NoBagSpaceAnimBinder; /* Ofs: 0x390 Size: 0x20 - StructProperty TslGame.EquipableItemIconBaseWidget.NoBagSpaceAnimBinder */
	ExternalPtr<struct UEquipableItem> SaveEquipableItem; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty TslGame.EquipableItemIconBaseWidget.SaveEquipableItem */
	float SaveDurabilityRatio; /* Ofs: 0x3B8 Size: 0x4 - FloatProperty TslGame.EquipableItemIconBaseWidget.SaveDurabilityRatio */
	uint8_t boolField3BC;
	uint8_t UnknownData3BD[0x3];


	inline bool SetEquipSlotID(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x300, value); }
	inline bool SetDurabilityColorSet(t_structHelper inst, FDurabilityColorSet value) { inst.WriteOffset(0x308, value); }
	inline bool bUseWrning()
	{
		return boolField318& 0x1;
	}
	inline bool SetbUseWrning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x318, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWarningRange(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0x31C, value); }
	inline bool SetIconVisibilityType(t_structHelper inst, TEnumAsByte<enum EEquipableItemIconVisibility> value) { inst.WriteOffset(0x324, value); }
	inline bool SetIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x328, value); }
	inline bool SetIconTexParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x350, value); }
	inline bool SetIconColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x358, value); }
	inline bool SetDefaultColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x360, value); }
	inline bool SetWarningAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x370, value); }
	inline bool SetNoBagSpaceAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x390, value); }
	inline bool SetSaveEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetSaveDurabilityRatio(t_structHelper inst, float value) { inst.WriteOffset(0x3B8, value); }
	inline bool bNeedUpdate()
	{
		return boolField3BC& 0x1;
	}
	inline bool SetbNeedUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3BC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipableItemIconBaseWidget = sizeof(UEquipableItemIconBaseWidget); // 960
    static_assert(sizeof(UEquipableItemIconBaseWidget) == 0x3C0, "Size of UEquipableItemIconBaseWidget is not correct.");
	auto constexpr UEquipableItemIconBaseWidget_EquipSlotID_Offset = offsetof(UEquipableItemIconBaseWidget, EquipSlotID);
	static_assert(UEquipableItemIconBaseWidget_EquipSlotID_Offset == 0x300, "UEquipableItemIconBaseWidget::EquipSlotID offset is not 300");
	auto constexpr UEquipableItemIconBaseWidget_DurabilityColorSet_Offset = offsetof(UEquipableItemIconBaseWidget, DurabilityColorSet);
	static_assert(UEquipableItemIconBaseWidget_DurabilityColorSet_Offset == 0x308, "UEquipableItemIconBaseWidget::DurabilityColorSet offset is not 308");
	auto constexpr UEquipableItemIconBaseWidget_boolField318_Offset = offsetof(UEquipableItemIconBaseWidget, boolField318);
	static_assert(UEquipableItemIconBaseWidget_boolField318_Offset == 0x318, "UEquipableItemIconBaseWidget::boolField318 offset is not 318");
	auto constexpr UEquipableItemIconBaseWidget_WarningRange_Offset = offsetof(UEquipableItemIconBaseWidget, WarningRange);
	static_assert(UEquipableItemIconBaseWidget_WarningRange_Offset == 0x31c, "UEquipableItemIconBaseWidget::WarningRange offset is not 31c");
	auto constexpr UEquipableItemIconBaseWidget_IconVisibilityType_Offset = offsetof(UEquipableItemIconBaseWidget, IconVisibilityType);
	static_assert(UEquipableItemIconBaseWidget_IconVisibilityType_Offset == 0x324, "UEquipableItemIconBaseWidget::IconVisibilityType offset is not 324");
	auto constexpr UEquipableItemIconBaseWidget_IconImageBinder_Offset = offsetof(UEquipableItemIconBaseWidget, IconImageBinder);
	static_assert(UEquipableItemIconBaseWidget_IconImageBinder_Offset == 0x328, "UEquipableItemIconBaseWidget::IconImageBinder offset is not 328");
	auto constexpr UEquipableItemIconBaseWidget_IconTexParamName_Offset = offsetof(UEquipableItemIconBaseWidget, IconTexParamName);
	static_assert(UEquipableItemIconBaseWidget_IconTexParamName_Offset == 0x350, "UEquipableItemIconBaseWidget::IconTexParamName offset is not 350");
	auto constexpr UEquipableItemIconBaseWidget_IconColorParamName_Offset = offsetof(UEquipableItemIconBaseWidget, IconColorParamName);
	static_assert(UEquipableItemIconBaseWidget_IconColorParamName_Offset == 0x358, "UEquipableItemIconBaseWidget::IconColorParamName offset is not 358");
	auto constexpr UEquipableItemIconBaseWidget_DefaultColor_Offset = offsetof(UEquipableItemIconBaseWidget, DefaultColor);
	static_assert(UEquipableItemIconBaseWidget_DefaultColor_Offset == 0x360, "UEquipableItemIconBaseWidget::DefaultColor offset is not 360");
	auto constexpr UEquipableItemIconBaseWidget_WarningAnimBinder_Offset = offsetof(UEquipableItemIconBaseWidget, WarningAnimBinder);
	static_assert(UEquipableItemIconBaseWidget_WarningAnimBinder_Offset == 0x370, "UEquipableItemIconBaseWidget::WarningAnimBinder offset is not 370");
	auto constexpr UEquipableItemIconBaseWidget_NoBagSpaceAnimBinder_Offset = offsetof(UEquipableItemIconBaseWidget, NoBagSpaceAnimBinder);
	static_assert(UEquipableItemIconBaseWidget_NoBagSpaceAnimBinder_Offset == 0x390, "UEquipableItemIconBaseWidget::NoBagSpaceAnimBinder offset is not 390");
	auto constexpr UEquipableItemIconBaseWidget_SaveEquipableItem_Offset = offsetof(UEquipableItemIconBaseWidget, SaveEquipableItem);
	static_assert(UEquipableItemIconBaseWidget_SaveEquipableItem_Offset == 0x3b0, "UEquipableItemIconBaseWidget::SaveEquipableItem offset is not 3b0");
	auto constexpr UEquipableItemIconBaseWidget_SaveDurabilityRatio_Offset = offsetof(UEquipableItemIconBaseWidget, SaveDurabilityRatio);
	static_assert(UEquipableItemIconBaseWidget_SaveDurabilityRatio_Offset == 0x3b8, "UEquipableItemIconBaseWidget::SaveDurabilityRatio offset is not 3b8");
	auto constexpr UEquipableItemIconBaseWidget_boolField3BC_Offset = offsetof(UEquipableItemIconBaseWidget, boolField3BC);
	static_assert(UEquipableItemIconBaseWidget_boolField3BC_Offset == 0x3bc, "UEquipableItemIconBaseWidget::boolField3BC offset is not 3bc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
