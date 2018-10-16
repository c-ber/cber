#pragma once
#include "UInventorySlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USmallEquipmentSlotWidget_Gamepad_C // Size: 0x391
	: public UInventorySlotBaseWidget_C // Size: 0x358
{
private:
	typedef USmallEquipmentSlotWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67450); // id32("WidgetBlueprintGeneratedClass SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x358 Size: 0x8 - StructProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Background; /* Ofs: 0x360 Size: 0x8 - ObjectProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.Background */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_7; /* Ofs: 0x368 Size: 0x8 - ObjectProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.CanvasPanel_7 */
	ExternalPtr<struct UImage> FocusColorBG; /* Ofs: 0x370 Size: 0x8 - ObjectProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.FocusColorBG */
	ExternalPtr<struct UImage> Icon; /* Ofs: 0x378 Size: 0x8 - ObjectProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.Icon */
	ExternalPtr<struct UVerticalBox> IconBlock; /* Ofs: 0x380 Size: 0x8 - ObjectProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IconBlock */
	ExternalPtr<struct UEquipableItem> EquipableItem; /* Ofs: 0x388 Size: 0x8 - ObjectProperty SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.EquipableItem */
	uint8_t boolField390;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x358, value); }
	inline bool SetBackground(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x360, value); }
	inline bool SetCanvasPanel_7(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x368, value); }
	inline bool SetFocusColorBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetIconBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x388, value); }
	inline bool bWantFocus()
	{
		return boolField390& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x390, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSmallEquipmentSlotWidget_Gamepad_C = sizeof(USmallEquipmentSlotWidget_Gamepad_C); // 913
    static_assert(sizeof(USmallEquipmentSlotWidget_Gamepad_C) == 0x391, "Size of USmallEquipmentSlotWidget_Gamepad_C is not correct.");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, UberGraphFrame);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_UberGraphFrame_Offset == 0x358, "USmallEquipmentSlotWidget_Gamepad_C::UberGraphFrame offset is not 358");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_Background_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, Background);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_Background_Offset == 0x360, "USmallEquipmentSlotWidget_Gamepad_C::Background offset is not 360");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_CanvasPanel_7_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, CanvasPanel_7);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_CanvasPanel_7_Offset == 0x368, "USmallEquipmentSlotWidget_Gamepad_C::CanvasPanel_7 offset is not 368");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_FocusColorBG_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, FocusColorBG);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_FocusColorBG_Offset == 0x370, "USmallEquipmentSlotWidget_Gamepad_C::FocusColorBG offset is not 370");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_Icon_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, Icon);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_Icon_Offset == 0x378, "USmallEquipmentSlotWidget_Gamepad_C::Icon offset is not 378");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_IconBlock_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, IconBlock);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_IconBlock_Offset == 0x380, "USmallEquipmentSlotWidget_Gamepad_C::IconBlock offset is not 380");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_EquipableItem_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, EquipableItem);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_EquipableItem_Offset == 0x388, "USmallEquipmentSlotWidget_Gamepad_C::EquipableItem offset is not 388");
	auto constexpr USmallEquipmentSlotWidget_Gamepad_C_boolField390_Offset = offsetof(USmallEquipmentSlotWidget_Gamepad_C, boolField390);
	static_assert(USmallEquipmentSlotWidget_Gamepad_C_boolField390_Offset == 0x390, "USmallEquipmentSlotWidget_Gamepad_C::boolField390 offset is not 390");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
