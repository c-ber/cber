#pragma once
#include "UInventoryBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipmentWidget_Gamepad_C // Size: 0x401
	: public UInventoryBaseWidget_C // Size: 0x2A0
{
private:
	typedef UEquipmentWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(63486); // id32("WidgetBlueprintGeneratedClass EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x2A0 Size: 0x8 - StructProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> CapacityOver; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.CapacityOver */
	ExternalPtr<struct UWidgetAnimation> CharacterFadeIn; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.CharacterFadeIn */
	ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> Backpack; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Backpack */
	ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> Belt; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Belt */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Eyes; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Eyes */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Feet; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Feet */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Hands; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Hands */
	ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> Head; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Head */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Leg; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Leg */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Mask; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Mask */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Outer; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Outer */
	ExternalPtr<struct USectionTitleWidget_Gamepad_C> SectionTitleWidget_Gamepad; /* Ofs: 0x300 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.SectionTitleWidget_Gamepad */
	ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> Torso; /* Ofs: 0x308 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.Torso */
	ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> TorsoArmor; /* Ofs: 0x310 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.TorsoArmor */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x318 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.VerticalBox_1 */
	TArray<ExternalPtr<struct UInventorySlotBaseWidget_C>> EquipSlotList; /* Ofs: 0x320 Size: 0x10 - ArrayProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.EquipSlotList */
	ExternalPtr<struct UMaterialInstanceDynamic> WeightMaterial; /* Ofs: 0x330 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.WeightMaterial */
	ExternalPtr<struct UCharacterStudio> CharacterStudio; /* Ofs: 0x338 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.CharacterStudio */
	uint8_t boolField340;
	uint8_t boolField341;
	uint8_t UnknownData342[0x2];
	FVector2D MouseDownPosition; /* Ofs: 0x344 Size: 0x8 - StructProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.MouseDownPosition */
	uint8_t boolField34C;
	uint8_t UnknownData34D[0x3];
	FText WeightTooltipText; /* Ofs: 0x350 Size: 0x18 - TextProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.WeightTooltipText */
	float DisplayingAlphaEnd; /* Ofs: 0x368 Size: 0x4 - FloatProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.DisplayingAlphaEnd */
	uint8_t UnknownData36C[0x4];
	ExternalPtr<struct UTslItemDragDropOperation_C> TslItemDragDropOperation; /* Ofs: 0x370 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.TslItemDragDropOperation */
	uint8_t boolField378;
	uint8_t UnknownData379[0x7];
	ExternalPtr<struct UUserWidget> FocusWidget; /* Ofs: 0x380 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.FocusWidget */
	ExternalPtr<struct UCurveFloat> ScrollMoveAcceleration; /* Ofs: 0x388 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.ScrollMoveAcceleration */
	TArray<ExternalPtr<struct UWidget>> SortedSlotList; /* Ofs: 0x390 Size: 0x10 - ArrayProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.SortedSlotList */
	int32_t FocusIndex; /* Ofs: 0x3A0 Size: 0x4 - IntProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.FocusIndex */
	uint8_t boolField3A4;
	uint8_t boolField3A5;
	uint8_t UnknownData3A6[0x2];
	TScriptInterface<ExternalPtr<struct USlotInterface>> CurrentFocusItem; /* Ofs: 0x3A8 Size: 0x10 - InterfaceProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.CurrentFocusItem */
	FScriptMulticastDelegate OnChildSlotFocus; /* Ofs: 0x3B8 Size: 0x10 - MulticastDelegateProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnChildSlotFocus */
	FScriptMulticastDelegate OnChildFocusSlotID; /* Ofs: 0x3C8 Size: 0x10 - MulticastDelegateProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.OnChildFocusSlotID */
	TEnumAsByte<enum EEquipSlotID> FocusSlotID; /* Ofs: 0x3D8 Size: 0x1 - EnumProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.FocusSlotID */
	uint8_t UnknownData3D9[0x7];
	FScriptMulticastDelegate On; /* Ofs: 0x3E0 Size: 0x10 - MulticastDelegateProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.On */
	float TimeCheck; /* Ofs: 0x3F0 Size: 0x4 - FloatProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.TimeCheck */
	float StartTime; /* Ofs: 0x3F4 Size: 0x4 - FloatProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.StartTime */
	ExternalPtr<struct UCurveFloat> MoveSlotCurve; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty EquipmentWidget_Gamepad.EquipmentWidget_Gamepad_C.MoveSlotCurve */
	uint8_t boolField400;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCapacityOver(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetCharacterFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetBackpack(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetBelt(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetEyes(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetFeet(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetHands(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetHead(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetLeg(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetMask(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetOuter(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetSectionTitleWidget_Gamepad(t_structHelper inst, ExternalPtr<struct USectionTitleWidget_Gamepad_C> value) { inst.WriteOffset(0x300, value); }
	inline bool SetTorso(t_structHelper inst, ExternalPtr<struct USmallEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x308, value); }
	inline bool SetTorsoArmor(t_structHelper inst, ExternalPtr<struct UBigEquipmentSlotWidget_Gamepad_C> value) { inst.WriteOffset(0x310, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x318, value); }
	inline bool SetEquipSlotList(t_structHelper inst, TArray<ExternalPtr<struct UInventorySlotBaseWidget_C>> value) { inst.WriteOffset(0x320, value); }
	inline bool SetWeightMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x330, value); }
	inline bool SetCharacterStudio(t_structHelper inst, ExternalPtr<struct UCharacterStudio> value) { inst.WriteOffset(0x338, value); }
	inline bool bMouseDown()
	{
		return boolField340& 0x1;
	}
	inline bool SetbMouseDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x340, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRollBackMosueIVsibility()
	{
		return boolField341& 0x1;
	}
	inline bool SetbRollBackMosueIVsibility(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x341, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMouseDownPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x344, value); }
	inline bool bMouseOn()
	{
		return boolField34C& 0x1;
	}
	inline bool SetbMouseOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWeightTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x350, value); }
	inline bool SetDisplayingAlphaEnd(t_structHelper inst, float value) { inst.WriteOffset(0x368, value); }
	inline bool SetTslItemDragDropOperation(t_structHelper inst, ExternalPtr<struct UTslItemDragDropOperation_C> value) { inst.WriteOffset(0x370, value); }
	inline bool bWantFocus()
	{
		return boolField378& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x378, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFocusWidget(t_structHelper inst, ExternalPtr<struct UUserWidget> value) { inst.WriteOffset(0x380, value); }
	inline bool SetScrollMoveAcceleration(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x388, value); }
	inline bool SetSortedSlotList(t_structHelper inst, TArray<ExternalPtr<struct UWidget>> value) { inst.WriteOffset(0x390, value); }
	inline bool SetFocusIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3A0, value); }
	inline bool bScrollUp()
	{
		return boolField3A4& 0x1;
	}
	inline bool SetbScrollUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bScrollDown()
	{
		return boolField3A5& 0x1;
	}
	inline bool SetbScrollDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3A5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCurrentFocusItem(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetOnChildSlotFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOnChildFocusSlotID(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetFocusSlotID(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetOn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x3F4, value); }
	inline bool SetMoveSlotCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x3F8, value); }
	inline bool bScrollUpdated()
	{
		return boolField400& 0x1;
	}
	inline bool SetbScrollUpdated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x400, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipmentWidget_Gamepad_C = sizeof(UEquipmentWidget_Gamepad_C); // 1025
    static_assert(sizeof(UEquipmentWidget_Gamepad_C) == 0x401, "Size of UEquipmentWidget_Gamepad_C is not correct.");
	auto constexpr UEquipmentWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UEquipmentWidget_Gamepad_C, UberGraphFrame);
	static_assert(UEquipmentWidget_Gamepad_C_UberGraphFrame_Offset == 0x2a0, "UEquipmentWidget_Gamepad_C::UberGraphFrame offset is not 2a0");
	auto constexpr UEquipmentWidget_Gamepad_C_CapacityOver_Offset = offsetof(UEquipmentWidget_Gamepad_C, CapacityOver);
	static_assert(UEquipmentWidget_Gamepad_C_CapacityOver_Offset == 0x2a8, "UEquipmentWidget_Gamepad_C::CapacityOver offset is not 2a8");
	auto constexpr UEquipmentWidget_Gamepad_C_CharacterFadeIn_Offset = offsetof(UEquipmentWidget_Gamepad_C, CharacterFadeIn);
	static_assert(UEquipmentWidget_Gamepad_C_CharacterFadeIn_Offset == 0x2b0, "UEquipmentWidget_Gamepad_C::CharacterFadeIn offset is not 2b0");
	auto constexpr UEquipmentWidget_Gamepad_C_Backpack_Offset = offsetof(UEquipmentWidget_Gamepad_C, Backpack);
	static_assert(UEquipmentWidget_Gamepad_C_Backpack_Offset == 0x2b8, "UEquipmentWidget_Gamepad_C::Backpack offset is not 2b8");
	auto constexpr UEquipmentWidget_Gamepad_C_Belt_Offset = offsetof(UEquipmentWidget_Gamepad_C, Belt);
	static_assert(UEquipmentWidget_Gamepad_C_Belt_Offset == 0x2c0, "UEquipmentWidget_Gamepad_C::Belt offset is not 2c0");
	auto constexpr UEquipmentWidget_Gamepad_C_Eyes_Offset = offsetof(UEquipmentWidget_Gamepad_C, Eyes);
	static_assert(UEquipmentWidget_Gamepad_C_Eyes_Offset == 0x2c8, "UEquipmentWidget_Gamepad_C::Eyes offset is not 2c8");
	auto constexpr UEquipmentWidget_Gamepad_C_Feet_Offset = offsetof(UEquipmentWidget_Gamepad_C, Feet);
	static_assert(UEquipmentWidget_Gamepad_C_Feet_Offset == 0x2d0, "UEquipmentWidget_Gamepad_C::Feet offset is not 2d0");
	auto constexpr UEquipmentWidget_Gamepad_C_Hands_Offset = offsetof(UEquipmentWidget_Gamepad_C, Hands);
	static_assert(UEquipmentWidget_Gamepad_C_Hands_Offset == 0x2d8, "UEquipmentWidget_Gamepad_C::Hands offset is not 2d8");
	auto constexpr UEquipmentWidget_Gamepad_C_Head_Offset = offsetof(UEquipmentWidget_Gamepad_C, Head);
	static_assert(UEquipmentWidget_Gamepad_C_Head_Offset == 0x2e0, "UEquipmentWidget_Gamepad_C::Head offset is not 2e0");
	auto constexpr UEquipmentWidget_Gamepad_C_Leg_Offset = offsetof(UEquipmentWidget_Gamepad_C, Leg);
	static_assert(UEquipmentWidget_Gamepad_C_Leg_Offset == 0x2e8, "UEquipmentWidget_Gamepad_C::Leg offset is not 2e8");
	auto constexpr UEquipmentWidget_Gamepad_C_Mask_Offset = offsetof(UEquipmentWidget_Gamepad_C, Mask);
	static_assert(UEquipmentWidget_Gamepad_C_Mask_Offset == 0x2f0, "UEquipmentWidget_Gamepad_C::Mask offset is not 2f0");
	auto constexpr UEquipmentWidget_Gamepad_C_Outer_Offset = offsetof(UEquipmentWidget_Gamepad_C, Outer);
	static_assert(UEquipmentWidget_Gamepad_C_Outer_Offset == 0x2f8, "UEquipmentWidget_Gamepad_C::Outer offset is not 2f8");
	auto constexpr UEquipmentWidget_Gamepad_C_SectionTitleWidget_Gamepad_Offset = offsetof(UEquipmentWidget_Gamepad_C, SectionTitleWidget_Gamepad);
	static_assert(UEquipmentWidget_Gamepad_C_SectionTitleWidget_Gamepad_Offset == 0x300, "UEquipmentWidget_Gamepad_C::SectionTitleWidget_Gamepad offset is not 300");
	auto constexpr UEquipmentWidget_Gamepad_C_Torso_Offset = offsetof(UEquipmentWidget_Gamepad_C, Torso);
	static_assert(UEquipmentWidget_Gamepad_C_Torso_Offset == 0x308, "UEquipmentWidget_Gamepad_C::Torso offset is not 308");
	auto constexpr UEquipmentWidget_Gamepad_C_TorsoArmor_Offset = offsetof(UEquipmentWidget_Gamepad_C, TorsoArmor);
	static_assert(UEquipmentWidget_Gamepad_C_TorsoArmor_Offset == 0x310, "UEquipmentWidget_Gamepad_C::TorsoArmor offset is not 310");
	auto constexpr UEquipmentWidget_Gamepad_C_VerticalBox_1_Offset = offsetof(UEquipmentWidget_Gamepad_C, VerticalBox_1);
	static_assert(UEquipmentWidget_Gamepad_C_VerticalBox_1_Offset == 0x318, "UEquipmentWidget_Gamepad_C::VerticalBox_1 offset is not 318");
	auto constexpr UEquipmentWidget_Gamepad_C_EquipSlotList_Offset = offsetof(UEquipmentWidget_Gamepad_C, EquipSlotList);
	static_assert(UEquipmentWidget_Gamepad_C_EquipSlotList_Offset == 0x320, "UEquipmentWidget_Gamepad_C::EquipSlotList offset is not 320");
	auto constexpr UEquipmentWidget_Gamepad_C_WeightMaterial_Offset = offsetof(UEquipmentWidget_Gamepad_C, WeightMaterial);
	static_assert(UEquipmentWidget_Gamepad_C_WeightMaterial_Offset == 0x330, "UEquipmentWidget_Gamepad_C::WeightMaterial offset is not 330");
	auto constexpr UEquipmentWidget_Gamepad_C_CharacterStudio_Offset = offsetof(UEquipmentWidget_Gamepad_C, CharacterStudio);
	static_assert(UEquipmentWidget_Gamepad_C_CharacterStudio_Offset == 0x338, "UEquipmentWidget_Gamepad_C::CharacterStudio offset is not 338");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField340_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField340);
	static_assert(UEquipmentWidget_Gamepad_C_boolField340_Offset == 0x340, "UEquipmentWidget_Gamepad_C::boolField340 offset is not 340");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField341_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField341);
	static_assert(UEquipmentWidget_Gamepad_C_boolField341_Offset == 0x341, "UEquipmentWidget_Gamepad_C::boolField341 offset is not 341");
	auto constexpr UEquipmentWidget_Gamepad_C_MouseDownPosition_Offset = offsetof(UEquipmentWidget_Gamepad_C, MouseDownPosition);
	static_assert(UEquipmentWidget_Gamepad_C_MouseDownPosition_Offset == 0x344, "UEquipmentWidget_Gamepad_C::MouseDownPosition offset is not 344");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField34C_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField34C);
	static_assert(UEquipmentWidget_Gamepad_C_boolField34C_Offset == 0x34c, "UEquipmentWidget_Gamepad_C::boolField34C offset is not 34c");
	auto constexpr UEquipmentWidget_Gamepad_C_WeightTooltipText_Offset = offsetof(UEquipmentWidget_Gamepad_C, WeightTooltipText);
	static_assert(UEquipmentWidget_Gamepad_C_WeightTooltipText_Offset == 0x350, "UEquipmentWidget_Gamepad_C::WeightTooltipText offset is not 350");
	auto constexpr UEquipmentWidget_Gamepad_C_DisplayingAlphaEnd_Offset = offsetof(UEquipmentWidget_Gamepad_C, DisplayingAlphaEnd);
	static_assert(UEquipmentWidget_Gamepad_C_DisplayingAlphaEnd_Offset == 0x368, "UEquipmentWidget_Gamepad_C::DisplayingAlphaEnd offset is not 368");
	auto constexpr UEquipmentWidget_Gamepad_C_TslItemDragDropOperation_Offset = offsetof(UEquipmentWidget_Gamepad_C, TslItemDragDropOperation);
	static_assert(UEquipmentWidget_Gamepad_C_TslItemDragDropOperation_Offset == 0x370, "UEquipmentWidget_Gamepad_C::TslItemDragDropOperation offset is not 370");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField378_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField378);
	static_assert(UEquipmentWidget_Gamepad_C_boolField378_Offset == 0x378, "UEquipmentWidget_Gamepad_C::boolField378 offset is not 378");
	auto constexpr UEquipmentWidget_Gamepad_C_FocusWidget_Offset = offsetof(UEquipmentWidget_Gamepad_C, FocusWidget);
	static_assert(UEquipmentWidget_Gamepad_C_FocusWidget_Offset == 0x380, "UEquipmentWidget_Gamepad_C::FocusWidget offset is not 380");
	auto constexpr UEquipmentWidget_Gamepad_C_ScrollMoveAcceleration_Offset = offsetof(UEquipmentWidget_Gamepad_C, ScrollMoveAcceleration);
	static_assert(UEquipmentWidget_Gamepad_C_ScrollMoveAcceleration_Offset == 0x388, "UEquipmentWidget_Gamepad_C::ScrollMoveAcceleration offset is not 388");
	auto constexpr UEquipmentWidget_Gamepad_C_SortedSlotList_Offset = offsetof(UEquipmentWidget_Gamepad_C, SortedSlotList);
	static_assert(UEquipmentWidget_Gamepad_C_SortedSlotList_Offset == 0x390, "UEquipmentWidget_Gamepad_C::SortedSlotList offset is not 390");
	auto constexpr UEquipmentWidget_Gamepad_C_FocusIndex_Offset = offsetof(UEquipmentWidget_Gamepad_C, FocusIndex);
	static_assert(UEquipmentWidget_Gamepad_C_FocusIndex_Offset == 0x3a0, "UEquipmentWidget_Gamepad_C::FocusIndex offset is not 3a0");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField3A4_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField3A4);
	static_assert(UEquipmentWidget_Gamepad_C_boolField3A4_Offset == 0x3a4, "UEquipmentWidget_Gamepad_C::boolField3A4 offset is not 3a4");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField3A5_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField3A5);
	static_assert(UEquipmentWidget_Gamepad_C_boolField3A5_Offset == 0x3a5, "UEquipmentWidget_Gamepad_C::boolField3A5 offset is not 3a5");
	auto constexpr UEquipmentWidget_Gamepad_C_CurrentFocusItem_Offset = offsetof(UEquipmentWidget_Gamepad_C, CurrentFocusItem);
	static_assert(UEquipmentWidget_Gamepad_C_CurrentFocusItem_Offset == 0x3a8, "UEquipmentWidget_Gamepad_C::CurrentFocusItem offset is not 3a8");
	auto constexpr UEquipmentWidget_Gamepad_C_OnChildSlotFocus_Offset = offsetof(UEquipmentWidget_Gamepad_C, OnChildSlotFocus);
	static_assert(UEquipmentWidget_Gamepad_C_OnChildSlotFocus_Offset == 0x3b8, "UEquipmentWidget_Gamepad_C::OnChildSlotFocus offset is not 3b8");
	auto constexpr UEquipmentWidget_Gamepad_C_OnChildFocusSlotID_Offset = offsetof(UEquipmentWidget_Gamepad_C, OnChildFocusSlotID);
	static_assert(UEquipmentWidget_Gamepad_C_OnChildFocusSlotID_Offset == 0x3c8, "UEquipmentWidget_Gamepad_C::OnChildFocusSlotID offset is not 3c8");
	auto constexpr UEquipmentWidget_Gamepad_C_FocusSlotID_Offset = offsetof(UEquipmentWidget_Gamepad_C, FocusSlotID);
	static_assert(UEquipmentWidget_Gamepad_C_FocusSlotID_Offset == 0x3d8, "UEquipmentWidget_Gamepad_C::FocusSlotID offset is not 3d8");
	auto constexpr UEquipmentWidget_Gamepad_C_On_Offset = offsetof(UEquipmentWidget_Gamepad_C, On);
	static_assert(UEquipmentWidget_Gamepad_C_On_Offset == 0x3e0, "UEquipmentWidget_Gamepad_C::On offset is not 3e0");
	auto constexpr UEquipmentWidget_Gamepad_C_TimeCheck_Offset = offsetof(UEquipmentWidget_Gamepad_C, TimeCheck);
	static_assert(UEquipmentWidget_Gamepad_C_TimeCheck_Offset == 0x3f0, "UEquipmentWidget_Gamepad_C::TimeCheck offset is not 3f0");
	auto constexpr UEquipmentWidget_Gamepad_C_StartTime_Offset = offsetof(UEquipmentWidget_Gamepad_C, StartTime);
	static_assert(UEquipmentWidget_Gamepad_C_StartTime_Offset == 0x3f4, "UEquipmentWidget_Gamepad_C::StartTime offset is not 3f4");
	auto constexpr UEquipmentWidget_Gamepad_C_MoveSlotCurve_Offset = offsetof(UEquipmentWidget_Gamepad_C, MoveSlotCurve);
	static_assert(UEquipmentWidget_Gamepad_C_MoveSlotCurve_Offset == 0x3f8, "UEquipmentWidget_Gamepad_C::MoveSlotCurve offset is not 3f8");
	auto constexpr UEquipmentWidget_Gamepad_C_boolField400_Offset = offsetof(UEquipmentWidget_Gamepad_C, boolField400);
	static_assert(UEquipmentWidget_Gamepad_C_boolField400_Offset == 0x400, "UEquipmentWidget_Gamepad_C::boolField400 offset is not 400");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
