#pragma once
#include "UEquipableItemIconBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_EquipableItemIconWidget_C // Size: 0x3E0
	: public UEquipableItemIconBaseWidget // Size: 0x3C0
{
private:
	typedef UBP_EquipableItemIconWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68811); // id32("WidgetBlueprintGeneratedClass BP_EquipableItemIconWidget.BP_EquipableItemIconWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> NoBagSapce; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_EquipableItemIconWidget.BP_EquipableItemIconWidget_C.NoBagSapce */
	ExternalPtr<struct UWidgetAnimation> Warning; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_EquipableItemIconWidget.BP_EquipableItemIconWidget_C.Warning */
	ExternalPtr<struct UInvalidationBox> EquipableItemIconInvalidationBox; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_EquipableItemIconWidget.BP_EquipableItemIconWidget_C.EquipableItemIconInvalidationBox */
	ExternalPtr<struct UImage> Icon_panel; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty BP_EquipableItemIconWidget.BP_EquipableItemIconWidget_C.Icon_panel */


	inline bool SetNoBagSapce(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetWarning(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetEquipableItemIconInvalidationBox(t_structHelper inst, ExternalPtr<struct UInvalidationBox> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetIcon_panel(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_EquipableItemIconWidget_C = sizeof(UBP_EquipableItemIconWidget_C); // 992
    static_assert(sizeof(UBP_EquipableItemIconWidget_C) == 0x3E0, "Size of UBP_EquipableItemIconWidget_C is not correct.");
	auto constexpr UBP_EquipableItemIconWidget_C_NoBagSapce_Offset = offsetof(UBP_EquipableItemIconWidget_C, NoBagSapce);
	static_assert(UBP_EquipableItemIconWidget_C_NoBagSapce_Offset == 0x3c0, "UBP_EquipableItemIconWidget_C::NoBagSapce offset is not 3c0");
	auto constexpr UBP_EquipableItemIconWidget_C_Warning_Offset = offsetof(UBP_EquipableItemIconWidget_C, Warning);
	static_assert(UBP_EquipableItemIconWidget_C_Warning_Offset == 0x3c8, "UBP_EquipableItemIconWidget_C::Warning offset is not 3c8");
	auto constexpr UBP_EquipableItemIconWidget_C_EquipableItemIconInvalidationBox_Offset = offsetof(UBP_EquipableItemIconWidget_C, EquipableItemIconInvalidationBox);
	static_assert(UBP_EquipableItemIconWidget_C_EquipableItemIconInvalidationBox_Offset == 0x3d0, "UBP_EquipableItemIconWidget_C::EquipableItemIconInvalidationBox offset is not 3d0");
	auto constexpr UBP_EquipableItemIconWidget_C_Icon_panel_Offset = offsetof(UBP_EquipableItemIconWidget_C, Icon_panel);
	static_assert(UBP_EquipableItemIconWidget_C_Icon_panel_Offset == 0x3d8, "UBP_EquipableItemIconWidget_C::Icon_panel offset is not 3d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
