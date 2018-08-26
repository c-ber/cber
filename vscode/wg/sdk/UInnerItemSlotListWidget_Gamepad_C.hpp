#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInnerItemSlotListWidget_Gamepad_C // Size: 0x298
	: public UUserWidget // Size: 0x248
{
private:
	typedef UInnerItemSlotListWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60676); // id32("WidgetBlueprintGeneratedClass InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UVerticalBox> ItemList; /* Ofs: 0x250 Size: 0x8 - ObjectProperty InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C.ItemList */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> SlotContainer; /* Ofs: 0x258 Size: 0x10 - InterfaceProperty InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C.SlotContainer */
	FScriptMulticastDelegate OnChildSlotFocus; /* Ofs: 0x268 Size: 0x10 - MulticastDelegateProperty InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C.OnChildSlotFocus */
	uint8_t boolField278;
	uint8_t UnknownData279[0x3];
	int32_t FocusIndex; /* Ofs: 0x27C Size: 0x4 - IntProperty InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C.FocusIndex */
	uint8_t boolField280;
	uint8_t UnknownData281[0x7];
	TArray<ExternalPtr<struct UItemSlotWidget_Gamepad_C>> ItemSlotArray; /* Ofs: 0x288 Size: 0x10 - ArrayProperty InnerItemSlotListWidget_Gamepad.InnerItemSlotListWidget_Gamepad_C.ItemSlotArray */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetItemList(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x250, value); }
	inline bool SetSlotContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x258, value); }
	inline bool SetOnChildSlotFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x268, value); }
	inline bool bSort()
	{
		return boolField278& 0x1;
	}
	inline bool SetbSort(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x278, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFocusIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x27C, value); }
	inline bool bWantToFocus()
	{
		return boolField280& 0x1;
	}
	inline bool SetbWantToFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x280, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetItemSlotArray(t_structHelper inst, TArray<ExternalPtr<struct UItemSlotWidget_Gamepad_C>> value) { inst.WriteOffset(0x288, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInnerItemSlotListWidget_Gamepad_C = sizeof(UInnerItemSlotListWidget_Gamepad_C); // 664
    static_assert(sizeof(UInnerItemSlotListWidget_Gamepad_C) == 0x298, "Size of UInnerItemSlotListWidget_Gamepad_C is not correct.");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, UberGraphFrame);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_UberGraphFrame_Offset == 0x248, "UInnerItemSlotListWidget_Gamepad_C::UberGraphFrame offset is not 248");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_ItemList_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, ItemList);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_ItemList_Offset == 0x250, "UInnerItemSlotListWidget_Gamepad_C::ItemList offset is not 250");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_SlotContainer_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, SlotContainer);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_SlotContainer_Offset == 0x258, "UInnerItemSlotListWidget_Gamepad_C::SlotContainer offset is not 258");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_OnChildSlotFocus_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, OnChildSlotFocus);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_OnChildSlotFocus_Offset == 0x268, "UInnerItemSlotListWidget_Gamepad_C::OnChildSlotFocus offset is not 268");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_boolField278_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, boolField278);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_boolField278_Offset == 0x278, "UInnerItemSlotListWidget_Gamepad_C::boolField278 offset is not 278");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_FocusIndex_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, FocusIndex);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_FocusIndex_Offset == 0x27c, "UInnerItemSlotListWidget_Gamepad_C::FocusIndex offset is not 27c");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_boolField280_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, boolField280);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_boolField280_Offset == 0x280, "UInnerItemSlotListWidget_Gamepad_C::boolField280 offset is not 280");
	auto constexpr UInnerItemSlotListWidget_Gamepad_C_ItemSlotArray_Offset = offsetof(UInnerItemSlotListWidget_Gamepad_C, ItemSlotArray);
	static_assert(UInnerItemSlotListWidget_Gamepad_C_ItemSlotArray_Offset == 0x288, "UInnerItemSlotListWidget_Gamepad_C::ItemSlotArray offset is not 288");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
