#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStackCountHandlingPopupWidget_C // Size: 0x428
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UStackCountHandlingPopupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67987); // id32("WidgetBlueprintGeneratedClass StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.UberGraphFrame */
	ExternalPtr<struct UButton> CancelButton; /* Ofs: 0x338 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CancelButton */
	ExternalPtr<struct UButton> CloseButton; /* Ofs: 0x340 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CloseButton */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x348 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x350 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Image_2 */
	ExternalPtr<struct UButton> InputAmountButton; /* Ofs: 0x358 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.InputAmountButton */
	ExternalPtr<struct UEditableText> InputAmountText; /* Ofs: 0x360 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.InputAmountText */
	ExternalPtr<struct UTextBlock> ItemName; /* Ofs: 0x368 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ItemName */
	ExternalPtr<struct UButton> MaxButton; /* Ofs: 0x370 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.MaxButton */
	ExternalPtr<struct UButton> MinButton; /* Ofs: 0x378 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.MinButton */
	ExternalPtr<struct UButton> OkButton; /* Ofs: 0x380 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OkButton */
	ExternalPtr<struct UTextBlock> OkTextOnButton; /* Ofs: 0x388 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OkTextOnButton */
	ExternalPtr<struct UButton> OuterPopup; /* Ofs: 0x390 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OuterPopup */
	ExternalPtr<struct USizeBox> SizeBox_2; /* Ofs: 0x398 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SizeBox_2 */
	ExternalPtr<struct USizeBox> SizeBox_3; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SizeBox_3 */
	ExternalPtr<struct UTextBlock> TextBlock_4; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.TextBlock_4 */
	ExternalPtr<struct UItem> Item; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Item */
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Inventory */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> Container; /* Ofs: 0x3C0 Size: 0x10 - InterfaceProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Container */
	TScriptInterface<ExternalPtr<struct USlotInterface>> ItemSlot; /* Ofs: 0x3D0 Size: 0x10 - InterfaceProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ItemSlot */
	uint8_t boolField3E0;
	uint8_t UnknownData3E1[0x7];
	FText AmountText; /* Ofs: 0x3E8 Size: 0x18 - TextProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.AmountText */
	FText OkText; /* Ofs: 0x400 Size: 0x18 - TextProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OkText */
	FScriptMulticastDelegate OnStackCountUpdated; /* Ofs: 0x418 Size: 0x10 - MulticastDelegateProperty StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountUpdated */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetCancelButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x338, value); }
	inline bool SetCloseButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x340, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetInputAmountButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x358, value); }
	inline bool SetInputAmountText(t_structHelper inst, ExternalPtr<struct UEditableText> value) { inst.WriteOffset(0x360, value); }
	inline bool SetItemName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x368, value); }
	inline bool SetMaxButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x370, value); }
	inline bool SetMinButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x378, value); }
	inline bool SetOkButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x380, value); }
	inline bool SetOkTextOnButton(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x388, value); }
	inline bool SetOuterPopup(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x390, value); }
	inline bool SetSizeBox_2(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x398, value); }
	inline bool SetSizeBox_3(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetTextBlock_4(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetItemSlot(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x3D0, value); }
	inline bool bIsDropping()
	{
		return boolField3E0& 0x1;
	}
	inline bool SetbIsDropping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3E0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAmountText(t_structHelper inst, FText value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetOkText(t_structHelper inst, FText value) { inst.WriteOffset(0x400, value); }
	inline bool SetOnStackCountUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStackCountHandlingPopupWidget_C = sizeof(UStackCountHandlingPopupWidget_C); // 1064
    static_assert(sizeof(UStackCountHandlingPopupWidget_C) == 0x428, "Size of UStackCountHandlingPopupWidget_C is not correct.");
	auto constexpr UStackCountHandlingPopupWidget_C_UberGraphFrame_Offset = offsetof(UStackCountHandlingPopupWidget_C, UberGraphFrame);
	static_assert(UStackCountHandlingPopupWidget_C_UberGraphFrame_Offset == 0x330, "UStackCountHandlingPopupWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UStackCountHandlingPopupWidget_C_CancelButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, CancelButton);
	static_assert(UStackCountHandlingPopupWidget_C_CancelButton_Offset == 0x338, "UStackCountHandlingPopupWidget_C::CancelButton offset is not 338");
	auto constexpr UStackCountHandlingPopupWidget_C_CloseButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, CloseButton);
	static_assert(UStackCountHandlingPopupWidget_C_CloseButton_Offset == 0x340, "UStackCountHandlingPopupWidget_C::CloseButton offset is not 340");
	auto constexpr UStackCountHandlingPopupWidget_C_Image_1_Offset = offsetof(UStackCountHandlingPopupWidget_C, Image_1);
	static_assert(UStackCountHandlingPopupWidget_C_Image_1_Offset == 0x348, "UStackCountHandlingPopupWidget_C::Image_1 offset is not 348");
	auto constexpr UStackCountHandlingPopupWidget_C_Image_2_Offset = offsetof(UStackCountHandlingPopupWidget_C, Image_2);
	static_assert(UStackCountHandlingPopupWidget_C_Image_2_Offset == 0x350, "UStackCountHandlingPopupWidget_C::Image_2 offset is not 350");
	auto constexpr UStackCountHandlingPopupWidget_C_InputAmountButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, InputAmountButton);
	static_assert(UStackCountHandlingPopupWidget_C_InputAmountButton_Offset == 0x358, "UStackCountHandlingPopupWidget_C::InputAmountButton offset is not 358");
	auto constexpr UStackCountHandlingPopupWidget_C_InputAmountText_Offset = offsetof(UStackCountHandlingPopupWidget_C, InputAmountText);
	static_assert(UStackCountHandlingPopupWidget_C_InputAmountText_Offset == 0x360, "UStackCountHandlingPopupWidget_C::InputAmountText offset is not 360");
	auto constexpr UStackCountHandlingPopupWidget_C_ItemName_Offset = offsetof(UStackCountHandlingPopupWidget_C, ItemName);
	static_assert(UStackCountHandlingPopupWidget_C_ItemName_Offset == 0x368, "UStackCountHandlingPopupWidget_C::ItemName offset is not 368");
	auto constexpr UStackCountHandlingPopupWidget_C_MaxButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, MaxButton);
	static_assert(UStackCountHandlingPopupWidget_C_MaxButton_Offset == 0x370, "UStackCountHandlingPopupWidget_C::MaxButton offset is not 370");
	auto constexpr UStackCountHandlingPopupWidget_C_MinButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, MinButton);
	static_assert(UStackCountHandlingPopupWidget_C_MinButton_Offset == 0x378, "UStackCountHandlingPopupWidget_C::MinButton offset is not 378");
	auto constexpr UStackCountHandlingPopupWidget_C_OkButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, OkButton);
	static_assert(UStackCountHandlingPopupWidget_C_OkButton_Offset == 0x380, "UStackCountHandlingPopupWidget_C::OkButton offset is not 380");
	auto constexpr UStackCountHandlingPopupWidget_C_OkTextOnButton_Offset = offsetof(UStackCountHandlingPopupWidget_C, OkTextOnButton);
	static_assert(UStackCountHandlingPopupWidget_C_OkTextOnButton_Offset == 0x388, "UStackCountHandlingPopupWidget_C::OkTextOnButton offset is not 388");
	auto constexpr UStackCountHandlingPopupWidget_C_OuterPopup_Offset = offsetof(UStackCountHandlingPopupWidget_C, OuterPopup);
	static_assert(UStackCountHandlingPopupWidget_C_OuterPopup_Offset == 0x390, "UStackCountHandlingPopupWidget_C::OuterPopup offset is not 390");
	auto constexpr UStackCountHandlingPopupWidget_C_SizeBox_2_Offset = offsetof(UStackCountHandlingPopupWidget_C, SizeBox_2);
	static_assert(UStackCountHandlingPopupWidget_C_SizeBox_2_Offset == 0x398, "UStackCountHandlingPopupWidget_C::SizeBox_2 offset is not 398");
	auto constexpr UStackCountHandlingPopupWidget_C_SizeBox_3_Offset = offsetof(UStackCountHandlingPopupWidget_C, SizeBox_3);
	static_assert(UStackCountHandlingPopupWidget_C_SizeBox_3_Offset == 0x3a0, "UStackCountHandlingPopupWidget_C::SizeBox_3 offset is not 3a0");
	auto constexpr UStackCountHandlingPopupWidget_C_TextBlock_4_Offset = offsetof(UStackCountHandlingPopupWidget_C, TextBlock_4);
	static_assert(UStackCountHandlingPopupWidget_C_TextBlock_4_Offset == 0x3a8, "UStackCountHandlingPopupWidget_C::TextBlock_4 offset is not 3a8");
	auto constexpr UStackCountHandlingPopupWidget_C_Item_Offset = offsetof(UStackCountHandlingPopupWidget_C, Item);
	static_assert(UStackCountHandlingPopupWidget_C_Item_Offset == 0x3b0, "UStackCountHandlingPopupWidget_C::Item offset is not 3b0");
	auto constexpr UStackCountHandlingPopupWidget_C_Inventory_Offset = offsetof(UStackCountHandlingPopupWidget_C, Inventory);
	static_assert(UStackCountHandlingPopupWidget_C_Inventory_Offset == 0x3b8, "UStackCountHandlingPopupWidget_C::Inventory offset is not 3b8");
	auto constexpr UStackCountHandlingPopupWidget_C_Container_Offset = offsetof(UStackCountHandlingPopupWidget_C, Container);
	static_assert(UStackCountHandlingPopupWidget_C_Container_Offset == 0x3c0, "UStackCountHandlingPopupWidget_C::Container offset is not 3c0");
	auto constexpr UStackCountHandlingPopupWidget_C_ItemSlot_Offset = offsetof(UStackCountHandlingPopupWidget_C, ItemSlot);
	static_assert(UStackCountHandlingPopupWidget_C_ItemSlot_Offset == 0x3d0, "UStackCountHandlingPopupWidget_C::ItemSlot offset is not 3d0");
	auto constexpr UStackCountHandlingPopupWidget_C_boolField3E0_Offset = offsetof(UStackCountHandlingPopupWidget_C, boolField3E0);
	static_assert(UStackCountHandlingPopupWidget_C_boolField3E0_Offset == 0x3e0, "UStackCountHandlingPopupWidget_C::boolField3E0 offset is not 3e0");
	auto constexpr UStackCountHandlingPopupWidget_C_AmountText_Offset = offsetof(UStackCountHandlingPopupWidget_C, AmountText);
	static_assert(UStackCountHandlingPopupWidget_C_AmountText_Offset == 0x3e8, "UStackCountHandlingPopupWidget_C::AmountText offset is not 3e8");
	auto constexpr UStackCountHandlingPopupWidget_C_OkText_Offset = offsetof(UStackCountHandlingPopupWidget_C, OkText);
	static_assert(UStackCountHandlingPopupWidget_C_OkText_Offset == 0x400, "UStackCountHandlingPopupWidget_C::OkText offset is not 400");
	auto constexpr UStackCountHandlingPopupWidget_C_OnStackCountUpdated_Offset = offsetof(UStackCountHandlingPopupWidget_C, OnStackCountUpdated);
	static_assert(UStackCountHandlingPopupWidget_C_OnStackCountUpdated_Offset == 0x418, "UStackCountHandlingPopupWidget_C::OnStackCountUpdated offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
