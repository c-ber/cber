#pragma once
#include "UEquipableItemIconHudBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_EquipableItemIconHudWidget_C // Size: 0x330
	: public UEquipableItemIconHudBaseWidget // Size: 0x318
{
private:
	typedef UBP_EquipableItemIconHudWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68836); // id32("WidgetBlueprintGeneratedClass BP_EquipableItemIconHudWidget.BP_EquipableItemIconHudWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBP_EquipableItemIconWidget_C> Backpack; /* Ofs: 0x318 Size: 0x8 - ObjectProperty BP_EquipableItemIconHudWidget.BP_EquipableItemIconHudWidget_C.Backpack */
	ExternalPtr<struct UBP_EquipableItemIconWidget_C> Head; /* Ofs: 0x320 Size: 0x8 - ObjectProperty BP_EquipableItemIconHudWidget.BP_EquipableItemIconHudWidget_C.Head */
	ExternalPtr<struct UBP_EquipableItemIconWidget_C> TorsoArmor; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_EquipableItemIconHudWidget.BP_EquipableItemIconHudWidget_C.TorsoArmor */


	inline bool SetBackpack(t_structHelper inst, ExternalPtr<struct UBP_EquipableItemIconWidget_C> value) { inst.WriteOffset(0x318, value); }
	inline bool SetHead(t_structHelper inst, ExternalPtr<struct UBP_EquipableItemIconWidget_C> value) { inst.WriteOffset(0x320, value); }
	inline bool SetTorsoArmor(t_structHelper inst, ExternalPtr<struct UBP_EquipableItemIconWidget_C> value) { inst.WriteOffset(0x328, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_EquipableItemIconHudWidget_C = sizeof(UBP_EquipableItemIconHudWidget_C); // 816
    static_assert(sizeof(UBP_EquipableItemIconHudWidget_C) == 0x330, "Size of UBP_EquipableItemIconHudWidget_C is not correct.");
	auto constexpr UBP_EquipableItemIconHudWidget_C_Backpack_Offset = offsetof(UBP_EquipableItemIconHudWidget_C, Backpack);
	static_assert(UBP_EquipableItemIconHudWidget_C_Backpack_Offset == 0x318, "UBP_EquipableItemIconHudWidget_C::Backpack offset is not 318");
	auto constexpr UBP_EquipableItemIconHudWidget_C_Head_Offset = offsetof(UBP_EquipableItemIconHudWidget_C, Head);
	static_assert(UBP_EquipableItemIconHudWidget_C_Head_Offset == 0x320, "UBP_EquipableItemIconHudWidget_C::Head offset is not 320");
	auto constexpr UBP_EquipableItemIconHudWidget_C_TorsoArmor_Offset = offsetof(UBP_EquipableItemIconHudWidget_C, TorsoArmor);
	static_assert(UBP_EquipableItemIconHudWidget_C_TorsoArmor_Offset == 0x328, "UBP_EquipableItemIconHudWidget_C::TorsoArmor offset is not 328");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
