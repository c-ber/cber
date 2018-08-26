#pragma once
#include "UInventoryBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipmentWidget_C // Size: 0x3E8
	: public UInventoryBaseWidget_C // Size: 0x2A0
{
private:
	typedef UEquipmentWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61642); // id32("WidgetBlueprintGeneratedClass EquipmentWidget.EquipmentWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x2A0 Size: 0x8 - StructProperty EquipmentWidget.EquipmentWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> CapacityOver; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CapacityOver */
	ExternalPtr<struct UWidgetAnimation> CharacterFadeIn; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CharacterFadeIn */
	ExternalPtr<struct UBigEquipmentSlotWidget_C> Backpack; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Backpack */
	ExternalPtr<struct UBigEquipmentSlotWidget_C> Belt; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Belt */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_2; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CanvasPanel_2 */
	ExternalPtr<struct UCheckBox> CharacterCaptureCheckBox; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CharacterCaptureCheckBox */
	ExternalPtr<struct UBorder> CharacterLayer; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CharacterLayer */
	ExternalPtr<struct UImage> CharacterSceneCapturedImage; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CharacterSceneCapturedImage */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Eyes; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Eyes */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Feet; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Feet */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Hands; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Hands */
	ExternalPtr<struct UBigEquipmentSlotWidget_C> Head; /* Ofs: 0x300 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Head */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Leg; /* Ofs: 0x308 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Leg */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Mask; /* Ofs: 0x310 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Mask */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Outer; /* Ofs: 0x318 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Outer */
	ExternalPtr<struct USmallEquipmentSlotWidget_C> Torso; /* Ofs: 0x320 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Torso */
	ExternalPtr<struct UBigEquipmentSlotWidget_C> TorsoArmor; /* Ofs: 0x328 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.TorsoArmor */
	ExternalPtr<struct UImage> WeightImage; /* Ofs: 0x330 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.WeightImage */
	TArray<ExternalPtr<struct UInventorySlotBaseWidget_C>> EquipSlotList; /* Ofs: 0x338 Size: 0x10 - ArrayProperty EquipmentWidget.EquipmentWidget_C.EquipSlotList */
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x348 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.Inventory */
	ExternalPtr<struct UMaterialInstanceDynamic> WeightMaterial; /* Ofs: 0x350 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.WeightMaterial */
	ExternalPtr<struct UCharacterStudio> CharacterStudio; /* Ofs: 0x358 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.CharacterStudio */
	uint8_t boolField360;
	uint8_t boolField361;
	uint8_t UnknownData362[0x2];
	FVector2D MouseDownPosition; /* Ofs: 0x364 Size: 0x8 - StructProperty EquipmentWidget.EquipmentWidget_C.MouseDownPosition */
	uint8_t boolField36C;
	uint8_t UnknownData36D[0x3];
	FText WeightTooltipText; /* Ofs: 0x370 Size: 0x18 - TextProperty EquipmentWidget.EquipmentWidget_C.WeightTooltipText */
	float DisplayingAlphaEnd; /* Ofs: 0x388 Size: 0x4 - FloatProperty EquipmentWidget.EquipmentWidget_C.DisplayingAlphaEnd */
	uint8_t UnknownData38C[0x4];
	ExternalPtr<struct UTslItemDragDropOperation_C> TslItemDragDropOperation; /* Ofs: 0x390 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.TslItemDragDropOperation */
	uint8_t boolField398;
	uint8_t UnknownData399[0x7];
	ExternalPtr<struct UUserWidget> FocusWidget; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty EquipmentWidget.EquipmentWidget_C.FocusWidget */
	FScriptMulticastDelegate OnInventoryDrop; /* Ofs: 0x3A8 Size: 0x10 - MulticastDelegateProperty EquipmentWidget.EquipmentWidget_C.OnInventoryDrop */
	FScriptMulticastDelegate OnEnterSlot; /* Ofs: 0x3B8 Size: 0x10 - MulticastDelegateProperty EquipmentWidget.EquipmentWidget_C.OnEnterSlot */
	FScriptMulticastDelegate OnLeaveSlot; /* Ofs: 0x3C8 Size: 0x10 - MulticastDelegateProperty EquipmentWidget.EquipmentWidget_C.OnLeaveSlot */
	FScriptMulticastDelegate OnDoSlotAction; /* Ofs: 0x3D8 Size: 0x10 - MulticastDelegateProperty EquipmentWidget.EquipmentWidget_C.OnDoSlotAction */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCapacityOver(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetCharacterFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetBackpack(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetBelt(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetCanvasPanel_2(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetCharacterCaptureCheckBox(t_structHelper inst, ExternalPtr<struct UCheckBox> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetCharacterLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetCharacterSceneCapturedImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetEyes(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetFeet(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetHands(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetHead(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_C> value) { inst.WriteOffset(0x300, value); }
	inline bool SetLeg(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x308, value); }
	inline bool SetMask(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x310, value); }
	inline bool SetOuter(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x318, value); }
	inline bool SetTorso(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_C> value) { inst.WriteOffset(0x320, value); }
	inline bool SetTorsoArmor(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_C> value) { inst.WriteOffset(0x328, value); }
	inline bool SetWeightImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x330, value); }
	inline bool SetEquipSlotList(t_structHelper inst, TArray<ExternalPtr<struct UInventorySlotBaseWidget_C>> value) { inst.WriteOffset(0x338, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x348, value); }
	inline bool SetWeightMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x350, value); }
	inline bool SetCharacterStudio(t_structHelper inst, ExternalPtr<struct UCharacterStudio> value) { inst.WriteOffset(0x358, value); }
	inline bool bMouseDown()
	{
		return boolField360& 0x1;
	}
	inline bool SetbMouseDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x360, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRollBackMosueIVsibility()
	{
		return boolField361& 0x1;
	}
	inline bool SetbRollBackMosueIVsibility(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x361, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMouseDownPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x364, value); }
	inline bool bMouseOn()
	{
		return boolField36C& 0x1;
	}
	inline bool SetbMouseOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x36C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeightTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x370, value); }
	inline bool SetDisplayingAlphaEnd(t_structHelper inst, float value) { inst.WriteOffset(0x388, value); }
	inline bool SetTslItemDragDropOperation(t_structHelper inst, ExternalPtr<struct UTslItemDragDropOperation_C> value) { inst.WriteOffset(0x390, value); }
	inline bool bWantFocus()
	{
		return boolField398& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x398, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFocusWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetOnInventoryDrop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetOnEnterSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOnLeaveSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetOnDoSlotAction(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipmentWidget_C = sizeof(UEquipmentWidget_C); // 1000
    static_assert(sizeof(UEquipmentWidget_C) == 0x3E8, "Size of UEquipmentWidget_C is not correct.");
	auto constexpr UEquipmentWidget_C_UberGraphFrame_Offset = offsetof(UEquipmentWidget_C, UberGraphFrame);
	static_assert(UEquipmentWidget_C_UberGraphFrame_Offset == 0x2a0, "UEquipmentWidget_C::UberGraphFrame offset is not 2a0");
	auto constexpr UEquipmentWidget_C_CapacityOver_Offset = offsetof(UEquipmentWidget_C, CapacityOver);
	static_assert(UEquipmentWidget_C_CapacityOver_Offset == 0x2a8, "UEquipmentWidget_C::CapacityOver offset is not 2a8");
	auto constexpr UEquipmentWidget_C_CharacterFadeIn_Offset = offsetof(UEquipmentWidget_C, CharacterFadeIn);
	static_assert(UEquipmentWidget_C_CharacterFadeIn_Offset == 0x2b0, "UEquipmentWidget_C::CharacterFadeIn offset is not 2b0");
	auto constexpr UEquipmentWidget_C_Backpack_Offset = offsetof(UEquipmentWidget_C, Backpack);
	static_assert(UEquipmentWidget_C_Backpack_Offset == 0x2b8, "UEquipmentWidget_C::Backpack offset is not 2b8");
	auto constexpr UEquipmentWidget_C_Belt_Offset = offsetof(UEquipmentWidget_C, Belt);
	static_assert(UEquipmentWidget_C_Belt_Offset == 0x2c0, "UEquipmentWidget_C::Belt offset is not 2c0");
	auto constexpr UEquipmentWidget_C_CanvasPanel_2_Offset = offsetof(UEquipmentWidget_C, CanvasPanel_2);
	static_assert(UEquipmentWidget_C_CanvasPanel_2_Offset == 0x2c8, "UEquipmentWidget_C::CanvasPanel_2 offset is not 2c8");
	auto constexpr UEquipmentWidget_C_CharacterCaptureCheckBox_Offset = offsetof(UEquipmentWidget_C, CharacterCaptureCheckBox);
	static_assert(UEquipmentWidget_C_CharacterCaptureCheckBox_Offset == 0x2d0, "UEquipmentWidget_C::CharacterCaptureCheckBox offset is not 2d0");
	auto constexpr UEquipmentWidget_C_CharacterLayer_Offset = offsetof(UEquipmentWidget_C, CharacterLayer);
	static_assert(UEquipmentWidget_C_CharacterLayer_Offset == 0x2d8, "UEquipmentWidget_C::CharacterLayer offset is not 2d8");
	auto constexpr UEquipmentWidget_C_CharacterSceneCapturedImage_Offset = offsetof(UEquipmentWidget_C, CharacterSceneCapturedImage);
	static_assert(UEquipmentWidget_C_CharacterSceneCapturedImage_Offset == 0x2e0, "UEquipmentWidget_C::CharacterSceneCapturedImage offset is not 2e0");
	auto constexpr UEquipmentWidget_C_Eyes_Offset = offsetof(UEquipmentWidget_C, Eyes);
	static_assert(UEquipmentWidget_C_Eyes_Offset == 0x2e8, "UEquipmentWidget_C::Eyes offset is not 2e8");
	auto constexpr UEquipmentWidget_C_Feet_Offset = offsetof(UEquipmentWidget_C, Feet);
	static_assert(UEquipmentWidget_C_Feet_Offset == 0x2f0, "UEquipmentWidget_C::Feet offset is not 2f0");
	auto constexpr UEquipmentWidget_C_Hands_Offset = offsetof(UEquipmentWidget_C, Hands);
	static_assert(UEquipmentWidget_C_Hands_Offset == 0x2f8, "UEquipmentWidget_C::Hands offset is not 2f8");
	auto constexpr UEquipmentWidget_C_Head_Offset = offsetof(UEquipmentWidget_C, Head);
	static_assert(UEquipmentWidget_C_Head_Offset == 0x300, "UEquipmentWidget_C::Head offset is not 300");
	auto constexpr UEquipmentWidget_C_Leg_Offset = offsetof(UEquipmentWidget_C, Leg);
	static_assert(UEquipmentWidget_C_Leg_Offset == 0x308, "UEquipmentWidget_C::Leg offset is not 308");
	auto constexpr UEquipmentWidget_C_Mask_Offset = offsetof(UEquipmentWidget_C, Mask);
	static_assert(UEquipmentWidget_C_Mask_Offset == 0x310, "UEquipmentWidget_C::Mask offset is not 310");
	auto constexpr UEquipmentWidget_C_Outer_Offset = offsetof(UEquipmentWidget_C, Outer);
	static_assert(UEquipmentWidget_C_Outer_Offset == 0x318, "UEquipmentWidget_C::Outer offset is not 318");
	auto constexpr UEquipmentWidget_C_Torso_Offset = offsetof(UEquipmentWidget_C, Torso);
	static_assert(UEquipmentWidget_C_Torso_Offset == 0x320, "UEquipmentWidget_C::Torso offset is not 320");
	auto constexpr UEquipmentWidget_C_TorsoArmor_Offset = offsetof(UEquipmentWidget_C, TorsoArmor);
	static_assert(UEquipmentWidget_C_TorsoArmor_Offset == 0x328, "UEquipmentWidget_C::TorsoArmor offset is not 328");
	auto constexpr UEquipmentWidget_C_WeightImage_Offset = offsetof(UEquipmentWidget_C, WeightImage);
	static_assert(UEquipmentWidget_C_WeightImage_Offset == 0x330, "UEquipmentWidget_C::WeightImage offset is not 330");
	auto constexpr UEquipmentWidget_C_EquipSlotList_Offset = offsetof(UEquipmentWidget_C, EquipSlotList);
	static_assert(UEquipmentWidget_C_EquipSlotList_Offset == 0x338, "UEquipmentWidget_C::EquipSlotList offset is not 338");
	auto constexpr UEquipmentWidget_C_Inventory_Offset = offsetof(UEquipmentWidget_C, Inventory);
	static_assert(UEquipmentWidget_C_Inventory_Offset == 0x348, "UEquipmentWidget_C::Inventory offset is not 348");
	auto constexpr UEquipmentWidget_C_WeightMaterial_Offset = offsetof(UEquipmentWidget_C, WeightMaterial);
	static_assert(UEquipmentWidget_C_WeightMaterial_Offset == 0x350, "UEquipmentWidget_C::WeightMaterial offset is not 350");
	auto constexpr UEquipmentWidget_C_CharacterStudio_Offset = offsetof(UEquipmentWidget_C, CharacterStudio);
	static_assert(UEquipmentWidget_C_CharacterStudio_Offset == 0x358, "UEquipmentWidget_C::CharacterStudio offset is not 358");
	auto constexpr UEquipmentWidget_C_boolField360_Offset = offsetof(UEquipmentWidget_C, boolField360);
	static_assert(UEquipmentWidget_C_boolField360_Offset == 0x360, "UEquipmentWidget_C::boolField360 offset is not 360");
	auto constexpr UEquipmentWidget_C_boolField361_Offset = offsetof(UEquipmentWidget_C, boolField361);
	static_assert(UEquipmentWidget_C_boolField361_Offset == 0x361, "UEquipmentWidget_C::boolField361 offset is not 361");
	auto constexpr UEquipmentWidget_C_MouseDownPosition_Offset = offsetof(UEquipmentWidget_C, MouseDownPosition);
	static_assert(UEquipmentWidget_C_MouseDownPosition_Offset == 0x364, "UEquipmentWidget_C::MouseDownPosition offset is not 364");
	auto constexpr UEquipmentWidget_C_boolField36C_Offset = offsetof(UEquipmentWidget_C, boolField36C);
	static_assert(UEquipmentWidget_C_boolField36C_Offset == 0x36c, "UEquipmentWidget_C::boolField36C offset is not 36c");
	auto constexpr UEquipmentWidget_C_WeightTooltipText_Offset = offsetof(UEquipmentWidget_C, WeightTooltipText);
	static_assert(UEquipmentWidget_C_WeightTooltipText_Offset == 0x370, "UEquipmentWidget_C::WeightTooltipText offset is not 370");
	auto constexpr UEquipmentWidget_C_DisplayingAlphaEnd_Offset = offsetof(UEquipmentWidget_C, DisplayingAlphaEnd);
	static_assert(UEquipmentWidget_C_DisplayingAlphaEnd_Offset == 0x388, "UEquipmentWidget_C::DisplayingAlphaEnd offset is not 388");
	auto constexpr UEquipmentWidget_C_TslItemDragDropOperation_Offset = offsetof(UEquipmentWidget_C, TslItemDragDropOperation);
	static_assert(UEquipmentWidget_C_TslItemDragDropOperation_Offset == 0x390, "UEquipmentWidget_C::TslItemDragDropOperation offset is not 390");
	auto constexpr UEquipmentWidget_C_boolField398_Offset = offsetof(UEquipmentWidget_C, boolField398);
	static_assert(UEquipmentWidget_C_boolField398_Offset == 0x398, "UEquipmentWidget_C::boolField398 offset is not 398");
	auto constexpr UEquipmentWidget_C_FocusWidget_Offset = offsetof(UEquipmentWidget_C, FocusWidget);
	static_assert(UEquipmentWidget_C_FocusWidget_Offset == 0x3a0, "UEquipmentWidget_C::FocusWidget offset is not 3a0");
	auto constexpr UEquipmentWidget_C_OnInventoryDrop_Offset = offsetof(UEquipmentWidget_C, OnInventoryDrop);
	static_assert(UEquipmentWidget_C_OnInventoryDrop_Offset == 0x3a8, "UEquipmentWidget_C::OnInventoryDrop offset is not 3a8");
	auto constexpr UEquipmentWidget_C_OnEnterSlot_Offset = offsetof(UEquipmentWidget_C, OnEnterSlot);
	static_assert(UEquipmentWidget_C_OnEnterSlot_Offset == 0x3b8, "UEquipmentWidget_C::OnEnterSlot offset is not 3b8");
	auto constexpr UEquipmentWidget_C_OnLeaveSlot_Offset = offsetof(UEquipmentWidget_C, OnLeaveSlot);
	static_assert(UEquipmentWidget_C_OnLeaveSlot_Offset == 0x3c8, "UEquipmentWidget_C::OnLeaveSlot offset is not 3c8");
	auto constexpr UEquipmentWidget_C_OnDoSlotAction_Offset = offsetof(UEquipmentWidget_C, OnDoSlotAction);
	static_assert(UEquipmentWidget_C_OnDoSlotAction_Offset == 0x3d8, "UEquipmentWidget_C::OnDoSlotAction offset is not 3d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
