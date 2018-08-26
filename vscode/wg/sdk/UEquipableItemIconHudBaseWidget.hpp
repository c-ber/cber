#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipableItemIconHudBaseWidget // Size: 0x318
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UEquipableItemIconHudBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1522); // id32("Class TslGame.EquipableItemIconHudBaseWidget")
		return ptr;
	}
	uint8_t boolField300;
	uint8_t UnknownData301[0x7];
	TArray<struct FUmgWidgetBinder_UserWidget> EquipableItemIconSlotList; /* Ofs: 0x308 Size: 0x10 - ArrayProperty TslGame.EquipableItemIconHudBaseWidget.EquipableItemIconSlotList */


	inline bool bSaveShow()
	{
		return boolField300& 0x1;
	}
	inline bool SetbSaveShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x300, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEquipableItemIconSlotList(t_structHelper inst, TArray<struct FUmgWidgetBinder_UserWidget> value) { inst.WriteOffset(0x308, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipableItemIconHudBaseWidget = sizeof(UEquipableItemIconHudBaseWidget); // 792
    static_assert(sizeof(UEquipableItemIconHudBaseWidget) == 0x318, "Size of UEquipableItemIconHudBaseWidget is not correct.");
	auto constexpr UEquipableItemIconHudBaseWidget_boolField300_Offset = offsetof(UEquipableItemIconHudBaseWidget, boolField300);
	static_assert(UEquipableItemIconHudBaseWidget_boolField300_Offset == 0x300, "UEquipableItemIconHudBaseWidget::boolField300 offset is not 300");
	auto constexpr UEquipableItemIconHudBaseWidget_EquipableItemIconSlotList_Offset = offsetof(UEquipableItemIconHudBaseWidget, EquipableItemIconSlotList);
	static_assert(UEquipableItemIconHudBaseWidget_EquipableItemIconSlotList_Offset == 0x308, "UEquipableItemIconHudBaseWidget::EquipableItemIconSlotList offset is not 308");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
