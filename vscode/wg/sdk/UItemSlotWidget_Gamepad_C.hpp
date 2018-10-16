#pragma once
#include "USlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemSlotWidget_Gamepad_C // Size: 0x444
	: public USlotBaseWidget_C // Size: 0x258
{
private:
	typedef UItemSlotWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(65595); // id32("WidgetBlueprintGeneratedClass ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x258 Size: 0x8 - StructProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> CastingComplete; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.CastingComplete */
	ExternalPtr<struct UWidgetAnimation> Casting; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.Casting */
	ExternalPtr<struct UWidgetAnimation> TranslationTest; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.TranslationTest */
	ExternalPtr<struct UWidgetAnimation> BehaviorInfoVanishing; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.BehaviorInfoVanishing */
	ExternalPtr<struct UWidgetAnimation> BehaviorInfoEmerging; /* Ofs: 0x280 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.BehaviorInfoEmerging */
	ExternalPtr<struct UImage> Background; /* Ofs: 0x288 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.Background */
	ExternalPtr<struct UImage> CastingBar; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.CastingBar */
	ExternalPtr<struct UBorder> CastingBarLayer; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.CastingBarLayer */
	ExternalPtr<struct USizeBox> CategoryLayer; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.CategoryLayer */
	ExternalPtr<struct UTextBlock> CategoryText; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.CategoryText */
	ExternalPtr<struct UBorder> DurabilityBorder; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.DurabilityBorder */
	ExternalPtr<struct UImage> DurabilityGauge; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.DurabilityGauge */
	ExternalPtr<struct UVerticalBox> EquipableBlock; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.EquipableBlock */
	ExternalPtr<struct UImage> Icon; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.Icon */
	ExternalPtr<struct USizeBox> IconSizeBox; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.IconSizeBox */
	ExternalPtr<struct UVerticalBox> InnerItemSlotListBlock; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.InnerItemSlotListBlock */
	ExternalPtr<struct UInnerItemSlotListWidget_Gamepad_C> InnerItemSlotListWidget; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.InnerItemSlotListWidget */
	ExternalPtr<struct USizeBox> ItemInfoBlock; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.ItemInfoBlock */
	ExternalPtr<struct UVerticalBox> ItemMainLayer; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.ItemMainLayer */
	ExternalPtr<struct UTextBlock> SlotName; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.SlotName */
	ExternalPtr<struct USizeBox> StackcountBlock; /* Ofs: 0x300 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.StackcountBlock */
	ExternalPtr<struct UTextBlock> StackCountText; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.StackCountText */
	ExternalPtr<struct UImage> UseInfo_bg; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.UseInfo_bg */
	ExternalPtr<struct UTextBlock> UseInfo_Text; /* Ofs: 0x318 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.UseInfo_Text */
	ExternalPtr<struct UBorder> UseLayer; /* Ofs: 0x320 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.UseLayer */
	TScriptInterface<ExternalPtr<struct USlotInterface>> Item_SlotInterface; /* Ofs: 0x328 Size: 0x10 - InterfaceProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.Item_SlotInterface */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> SlotContainer; /* Ofs: 0x338 Size: 0x10 - InterfaceProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.SlotContainer */
	FScriptMulticastDelegate OnSlotFocus; /* Ofs: 0x348 Size: 0x10 - MulticastDelegateProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.OnSlotFocus */
	uint8_t boolField358;
	uint8_t UnknownData359[0x3];
	float IconSize_1; /* Ofs: 0x35C Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.IconSize_1 */
	FScriptMulticastDelegate OnRefreshInnerList; /* Ofs: 0x360 Size: 0x10 - MulticastDelegateProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.OnRefreshInnerList */
	ExternalPtr<struct UEquipableItem> EquipableItem; /* Ofs: 0x370 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.EquipableItem */
	ExternalPtr<struct UImage> ItemIcon; /* Ofs: 0x378 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.ItemIcon */
	uint8_t boolField380;
	uint8_t boolField381;
	uint8_t UnknownData382[0x6];
	ExternalPtr<struct UMaterialInstanceDynamic> BackgroundMaterial; /* Ofs: 0x388 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.BackgroundMaterial */
	float ToolTipShowDelaytime; /* Ofs: 0x390 Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.ToolTipShowDelaytime */
	uint8_t boolField394;
	uint8_t boolField395;
	uint8_t boolField396;
	uint8_t UnknownData397[0x1];
	ExternalPtr<struct UCastComponent> RefCastComponent; /* Ofs: 0x398 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.RefCastComponent */
	ExternalPtr<struct UItem> RefItem; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.RefItem */
	ExternalPtr<struct UMaterialInstanceDynamic> ItemSlotCastingBar; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.ItemSlotCastingBar */
	uint8_t boolField3B0;
	uint8_t UnknownData3B1[0x7];
	ExternalPtr<struct UInventory> RefInventory; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.RefInventory */
	uint8_t boolField3C0;
	uint8_t UnknownData3C1[0x7];
	ExternalPtr<struct UMaterialInstanceDynamic> DurabilityGaugeMaterial; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.DurabilityGaugeMaterial */
	ExternalPtr<struct UMaterialInstanceDynamic> ItemIconDynamicMaterial; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.ItemIconDynamicMaterial */
	ExternalPtr<struct UTslCharacter> TslCharacter; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.TslCharacter */
	FText Category; /* Ofs: 0x3E0 Size: 0x18 - TextProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.Category */
	ExternalPtr<struct UTexture> Tex; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.Tex */
	FScriptMulticastDelegate RefreshFocus; /* Ofs: 0x400 Size: 0x10 - MulticastDelegateProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.RefreshFocus */
	uint8_t boolField410;
	uint8_t UnknownData411[0x3];
	float PressedXStart; /* Ofs: 0x414 Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.PressedXStart */
	uint8_t boolField418;
	uint8_t UnknownData419[0x3];
	float PressedYStart; /* Ofs: 0x41C Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.PressedYStart */
	uint8_t boolField420;
	uint8_t UnknownData421[0x7];
	ExternalPtr<struct UInventoryWidget_Gamepad_C> SaveInventory_Gamepad; /* Ofs: 0x428 Size: 0x8 - ObjectProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.SaveInventory_Gamepad */
	uint8_t boolField430;
	uint8_t boolField431;
	uint8_t UnknownData432[0x2];
	float PressedAStart; /* Ofs: 0x434 Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.PressedAStart */
	uint8_t boolField438;
	uint8_t UnknownData439[0x3];
	float DefaultTapTime; /* Ofs: 0x43C Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.DefaultTapTime */
	float DefaultHoldTime; /* Ofs: 0x440 Size: 0x4 - FloatProperty ItemSlotWidget_Gamepad.ItemSlotWidget_Gamepad_C.DefaultHoldTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x258, value); }
	inline bool SetCastingComplete(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetCasting(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x268, value); }
	inline bool SetTranslationTest(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x270, value); }
	inline bool SetBehaviorInfoVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x278, value); }
	inline bool SetBehaviorInfoEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x280, value); }
	inline bool SetBackground(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x288, value); }
	inline bool SetCastingBar(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x290, value); }
	inline bool SetCastingBarLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x298, value); }
	inline bool SetCategoryLayer(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCategoryText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetDurabilityBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetDurabilityGauge(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetEquipableBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetIconSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetInnerItemSlotListBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetInnerItemSlotListWidget(t_structHelper inst, ExternalPtr<struct UInnerItemSlotListWidget_Gamepad_C> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetItemInfoBlock(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetItemMainLayer(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetSlotName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetStackcountBlock(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x300, value); }
	inline bool SetStackCountText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x308, value); }
	inline bool SetUseInfo_bg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x310, value); }
	inline bool SetUseInfo_Text(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x318, value); }
	inline bool SetUseLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x320, value); }
	inline bool SetItem_SlotInterface(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x328, value); }
	inline bool SetSlotContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x338, value); }
	inline bool SetOnSlotFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x348, value); }
	inline bool bIsPackaged()
	{
		return boolField358& 0x1;
	}
	inline bool SetbIsPackaged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x358, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIconSize_1(t_structHelper inst, float value) { inst.WriteOffset(0x35C, value); }
	inline bool SetOnRefreshInnerList(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x360, value); }
	inline bool SetEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x370, value); }
	inline bool SetItemIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool bMouseOver()
	{
		return boolField380& 0x1;
	}
	inline bool SetbMouseOver(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x380, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVicinityItem()
	{
		return boolField381& 0x1;
	}
	inline bool SetbVicinityItem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x381, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBackgroundMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x388, value); }
	inline bool SetToolTipShowDelaytime(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool bIsBehaviorInfoVanishing()
	{
		return boolField394& 0x1;
	}
	inline bool SetbIsBehaviorInfoVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x394, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsCastingSlot()
	{
		return boolField395& 0x1;
	}
	inline bool SetbIsCastingSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x395, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsCastingBarVanishing()
	{
		return boolField396& 0x1;
	}
	inline bool SetbIsCastingBarVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x396, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRefCastComponent(t_structHelper inst, ExternalPtr<struct UCastComponent> value) { inst.WriteOffset(0x398, value); }
	inline bool SetRefItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetItemSlotCastingBar(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3A8, value); }
	inline bool bIsAvailableSlot()
	{
		return boolField3B0& 0x1;
	}
	inline bool SetbIsAvailableSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRefInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x3B8, value); }
	inline bool bSort()
	{
		return boolField3C0& 0x1;
	}
	inline bool SetbSort(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDurabilityGaugeMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetItemIconDynamicMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetTslCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetCategory(t_structHelper inst, FText value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetTex(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetRefreshFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x400, value); }
	inline bool bPressedX()
	{
		return boolField410& 0x1;
	}
	inline bool SetbPressedX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPressedXStart(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool bPressedY()
	{
		return boolField418& 0x1;
	}
	inline bool SetbPressedY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x418, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPressedYStart(t_structHelper inst, float value) { inst.WriteOffset(0x41C, value); }
	inline bool SelftAttachmentPutMode()
	{
		return boolField420& 0x1;
	}
	inline bool SetSelftAttachmentPutMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x420, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveInventory_Gamepad(t_structHelper inst, ExternalPtr<struct UInventoryWidget_Gamepad_C> value) { inst.WriteOffset(0x428, value); }
	inline bool bSubFocus()
	{
		return boolField430& 0x1;
	}
	inline bool SetbSubFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x430, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsSelfPutMode()
	{
		return boolField431& 0x1;
	}
	inline bool SetbIsSelfPutMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x431, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPressedAStart(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool bPressedA()
	{
		return boolField438& 0x1;
	}
	inline bool SetbPressedA(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x438, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultTapTime(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetDefaultHoldTime(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemSlotWidget_Gamepad_C = sizeof(UItemSlotWidget_Gamepad_C); // 1092
    static_assert(sizeof(UItemSlotWidget_Gamepad_C) == 0x444, "Size of UItemSlotWidget_Gamepad_C is not correct.");
	auto constexpr UItemSlotWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UItemSlotWidget_Gamepad_C, UberGraphFrame);
	static_assert(UItemSlotWidget_Gamepad_C_UberGraphFrame_Offset == 0x258, "UItemSlotWidget_Gamepad_C::UberGraphFrame offset is not 258");
	auto constexpr UItemSlotWidget_Gamepad_C_CastingComplete_Offset = offsetof(UItemSlotWidget_Gamepad_C, CastingComplete);
	static_assert(UItemSlotWidget_Gamepad_C_CastingComplete_Offset == 0x260, "UItemSlotWidget_Gamepad_C::CastingComplete offset is not 260");
	auto constexpr UItemSlotWidget_Gamepad_C_Casting_Offset = offsetof(UItemSlotWidget_Gamepad_C, Casting);
	static_assert(UItemSlotWidget_Gamepad_C_Casting_Offset == 0x268, "UItemSlotWidget_Gamepad_C::Casting offset is not 268");
	auto constexpr UItemSlotWidget_Gamepad_C_TranslationTest_Offset = offsetof(UItemSlotWidget_Gamepad_C, TranslationTest);
	static_assert(UItemSlotWidget_Gamepad_C_TranslationTest_Offset == 0x270, "UItemSlotWidget_Gamepad_C::TranslationTest offset is not 270");
	auto constexpr UItemSlotWidget_Gamepad_C_BehaviorInfoVanishing_Offset = offsetof(UItemSlotWidget_Gamepad_C, BehaviorInfoVanishing);
	static_assert(UItemSlotWidget_Gamepad_C_BehaviorInfoVanishing_Offset == 0x278, "UItemSlotWidget_Gamepad_C::BehaviorInfoVanishing offset is not 278");
	auto constexpr UItemSlotWidget_Gamepad_C_BehaviorInfoEmerging_Offset = offsetof(UItemSlotWidget_Gamepad_C, BehaviorInfoEmerging);
	static_assert(UItemSlotWidget_Gamepad_C_BehaviorInfoEmerging_Offset == 0x280, "UItemSlotWidget_Gamepad_C::BehaviorInfoEmerging offset is not 280");
	auto constexpr UItemSlotWidget_Gamepad_C_Background_Offset = offsetof(UItemSlotWidget_Gamepad_C, Background);
	static_assert(UItemSlotWidget_Gamepad_C_Background_Offset == 0x288, "UItemSlotWidget_Gamepad_C::Background offset is not 288");
	auto constexpr UItemSlotWidget_Gamepad_C_CastingBar_Offset = offsetof(UItemSlotWidget_Gamepad_C, CastingBar);
	static_assert(UItemSlotWidget_Gamepad_C_CastingBar_Offset == 0x290, "UItemSlotWidget_Gamepad_C::CastingBar offset is not 290");
	auto constexpr UItemSlotWidget_Gamepad_C_CastingBarLayer_Offset = offsetof(UItemSlotWidget_Gamepad_C, CastingBarLayer);
	static_assert(UItemSlotWidget_Gamepad_C_CastingBarLayer_Offset == 0x298, "UItemSlotWidget_Gamepad_C::CastingBarLayer offset is not 298");
	auto constexpr UItemSlotWidget_Gamepad_C_CategoryLayer_Offset = offsetof(UItemSlotWidget_Gamepad_C, CategoryLayer);
	static_assert(UItemSlotWidget_Gamepad_C_CategoryLayer_Offset == 0x2a0, "UItemSlotWidget_Gamepad_C::CategoryLayer offset is not 2a0");
	auto constexpr UItemSlotWidget_Gamepad_C_CategoryText_Offset = offsetof(UItemSlotWidget_Gamepad_C, CategoryText);
	static_assert(UItemSlotWidget_Gamepad_C_CategoryText_Offset == 0x2a8, "UItemSlotWidget_Gamepad_C::CategoryText offset is not 2a8");
	auto constexpr UItemSlotWidget_Gamepad_C_DurabilityBorder_Offset = offsetof(UItemSlotWidget_Gamepad_C, DurabilityBorder);
	static_assert(UItemSlotWidget_Gamepad_C_DurabilityBorder_Offset == 0x2b0, "UItemSlotWidget_Gamepad_C::DurabilityBorder offset is not 2b0");
	auto constexpr UItemSlotWidget_Gamepad_C_DurabilityGauge_Offset = offsetof(UItemSlotWidget_Gamepad_C, DurabilityGauge);
	static_assert(UItemSlotWidget_Gamepad_C_DurabilityGauge_Offset == 0x2b8, "UItemSlotWidget_Gamepad_C::DurabilityGauge offset is not 2b8");
	auto constexpr UItemSlotWidget_Gamepad_C_EquipableBlock_Offset = offsetof(UItemSlotWidget_Gamepad_C, EquipableBlock);
	static_assert(UItemSlotWidget_Gamepad_C_EquipableBlock_Offset == 0x2c0, "UItemSlotWidget_Gamepad_C::EquipableBlock offset is not 2c0");
	auto constexpr UItemSlotWidget_Gamepad_C_Icon_Offset = offsetof(UItemSlotWidget_Gamepad_C, Icon);
	static_assert(UItemSlotWidget_Gamepad_C_Icon_Offset == 0x2c8, "UItemSlotWidget_Gamepad_C::Icon offset is not 2c8");
	auto constexpr UItemSlotWidget_Gamepad_C_IconSizeBox_Offset = offsetof(UItemSlotWidget_Gamepad_C, IconSizeBox);
	static_assert(UItemSlotWidget_Gamepad_C_IconSizeBox_Offset == 0x2d0, "UItemSlotWidget_Gamepad_C::IconSizeBox offset is not 2d0");
	auto constexpr UItemSlotWidget_Gamepad_C_InnerItemSlotListBlock_Offset = offsetof(UItemSlotWidget_Gamepad_C, InnerItemSlotListBlock);
	static_assert(UItemSlotWidget_Gamepad_C_InnerItemSlotListBlock_Offset == 0x2d8, "UItemSlotWidget_Gamepad_C::InnerItemSlotListBlock offset is not 2d8");
	auto constexpr UItemSlotWidget_Gamepad_C_InnerItemSlotListWidget_Offset = offsetof(UItemSlotWidget_Gamepad_C, InnerItemSlotListWidget);
	static_assert(UItemSlotWidget_Gamepad_C_InnerItemSlotListWidget_Offset == 0x2e0, "UItemSlotWidget_Gamepad_C::InnerItemSlotListWidget offset is not 2e0");
	auto constexpr UItemSlotWidget_Gamepad_C_ItemInfoBlock_Offset = offsetof(UItemSlotWidget_Gamepad_C, ItemInfoBlock);
	static_assert(UItemSlotWidget_Gamepad_C_ItemInfoBlock_Offset == 0x2e8, "UItemSlotWidget_Gamepad_C::ItemInfoBlock offset is not 2e8");
	auto constexpr UItemSlotWidget_Gamepad_C_ItemMainLayer_Offset = offsetof(UItemSlotWidget_Gamepad_C, ItemMainLayer);
	static_assert(UItemSlotWidget_Gamepad_C_ItemMainLayer_Offset == 0x2f0, "UItemSlotWidget_Gamepad_C::ItemMainLayer offset is not 2f0");
	auto constexpr UItemSlotWidget_Gamepad_C_SlotName_Offset = offsetof(UItemSlotWidget_Gamepad_C, SlotName);
	static_assert(UItemSlotWidget_Gamepad_C_SlotName_Offset == 0x2f8, "UItemSlotWidget_Gamepad_C::SlotName offset is not 2f8");
	auto constexpr UItemSlotWidget_Gamepad_C_StackcountBlock_Offset = offsetof(UItemSlotWidget_Gamepad_C, StackcountBlock);
	static_assert(UItemSlotWidget_Gamepad_C_StackcountBlock_Offset == 0x300, "UItemSlotWidget_Gamepad_C::StackcountBlock offset is not 300");
	auto constexpr UItemSlotWidget_Gamepad_C_StackCountText_Offset = offsetof(UItemSlotWidget_Gamepad_C, StackCountText);
	static_assert(UItemSlotWidget_Gamepad_C_StackCountText_Offset == 0x308, "UItemSlotWidget_Gamepad_C::StackCountText offset is not 308");
	auto constexpr UItemSlotWidget_Gamepad_C_UseInfo_bg_Offset = offsetof(UItemSlotWidget_Gamepad_C, UseInfo_bg);
	static_assert(UItemSlotWidget_Gamepad_C_UseInfo_bg_Offset == 0x310, "UItemSlotWidget_Gamepad_C::UseInfo_bg offset is not 310");
	auto constexpr UItemSlotWidget_Gamepad_C_UseInfo_Text_Offset = offsetof(UItemSlotWidget_Gamepad_C, UseInfo_Text);
	static_assert(UItemSlotWidget_Gamepad_C_UseInfo_Text_Offset == 0x318, "UItemSlotWidget_Gamepad_C::UseInfo_Text offset is not 318");
	auto constexpr UItemSlotWidget_Gamepad_C_UseLayer_Offset = offsetof(UItemSlotWidget_Gamepad_C, UseLayer);
	static_assert(UItemSlotWidget_Gamepad_C_UseLayer_Offset == 0x320, "UItemSlotWidget_Gamepad_C::UseLayer offset is not 320");
	auto constexpr UItemSlotWidget_Gamepad_C_Item_SlotInterface_Offset = offsetof(UItemSlotWidget_Gamepad_C, Item_SlotInterface);
	static_assert(UItemSlotWidget_Gamepad_C_Item_SlotInterface_Offset == 0x328, "UItemSlotWidget_Gamepad_C::Item_SlotInterface offset is not 328");
	auto constexpr UItemSlotWidget_Gamepad_C_SlotContainer_Offset = offsetof(UItemSlotWidget_Gamepad_C, SlotContainer);
	static_assert(UItemSlotWidget_Gamepad_C_SlotContainer_Offset == 0x338, "UItemSlotWidget_Gamepad_C::SlotContainer offset is not 338");
	auto constexpr UItemSlotWidget_Gamepad_C_OnSlotFocus_Offset = offsetof(UItemSlotWidget_Gamepad_C, OnSlotFocus);
	static_assert(UItemSlotWidget_Gamepad_C_OnSlotFocus_Offset == 0x348, "UItemSlotWidget_Gamepad_C::OnSlotFocus offset is not 348");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField358_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField358);
	static_assert(UItemSlotWidget_Gamepad_C_boolField358_Offset == 0x358, "UItemSlotWidget_Gamepad_C::boolField358 offset is not 358");
	auto constexpr UItemSlotWidget_Gamepad_C_IconSize_1_Offset = offsetof(UItemSlotWidget_Gamepad_C, IconSize_1);
	static_assert(UItemSlotWidget_Gamepad_C_IconSize_1_Offset == 0x35c, "UItemSlotWidget_Gamepad_C::IconSize_1 offset is not 35c");
	auto constexpr UItemSlotWidget_Gamepad_C_OnRefreshInnerList_Offset = offsetof(UItemSlotWidget_Gamepad_C, OnRefreshInnerList);
	static_assert(UItemSlotWidget_Gamepad_C_OnRefreshInnerList_Offset == 0x360, "UItemSlotWidget_Gamepad_C::OnRefreshInnerList offset is not 360");
	auto constexpr UItemSlotWidget_Gamepad_C_EquipableItem_Offset = offsetof(UItemSlotWidget_Gamepad_C, EquipableItem);
	static_assert(UItemSlotWidget_Gamepad_C_EquipableItem_Offset == 0x370, "UItemSlotWidget_Gamepad_C::EquipableItem offset is not 370");
	auto constexpr UItemSlotWidget_Gamepad_C_ItemIcon_Offset = offsetof(UItemSlotWidget_Gamepad_C, ItemIcon);
	static_assert(UItemSlotWidget_Gamepad_C_ItemIcon_Offset == 0x378, "UItemSlotWidget_Gamepad_C::ItemIcon offset is not 378");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField380_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField380);
	static_assert(UItemSlotWidget_Gamepad_C_boolField380_Offset == 0x380, "UItemSlotWidget_Gamepad_C::boolField380 offset is not 380");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField381_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField381);
	static_assert(UItemSlotWidget_Gamepad_C_boolField381_Offset == 0x381, "UItemSlotWidget_Gamepad_C::boolField381 offset is not 381");
	auto constexpr UItemSlotWidget_Gamepad_C_BackgroundMaterial_Offset = offsetof(UItemSlotWidget_Gamepad_C, BackgroundMaterial);
	static_assert(UItemSlotWidget_Gamepad_C_BackgroundMaterial_Offset == 0x388, "UItemSlotWidget_Gamepad_C::BackgroundMaterial offset is not 388");
	auto constexpr UItemSlotWidget_Gamepad_C_ToolTipShowDelaytime_Offset = offsetof(UItemSlotWidget_Gamepad_C, ToolTipShowDelaytime);
	static_assert(UItemSlotWidget_Gamepad_C_ToolTipShowDelaytime_Offset == 0x390, "UItemSlotWidget_Gamepad_C::ToolTipShowDelaytime offset is not 390");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField394_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField394);
	static_assert(UItemSlotWidget_Gamepad_C_boolField394_Offset == 0x394, "UItemSlotWidget_Gamepad_C::boolField394 offset is not 394");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField395_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField395);
	static_assert(UItemSlotWidget_Gamepad_C_boolField395_Offset == 0x395, "UItemSlotWidget_Gamepad_C::boolField395 offset is not 395");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField396_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField396);
	static_assert(UItemSlotWidget_Gamepad_C_boolField396_Offset == 0x396, "UItemSlotWidget_Gamepad_C::boolField396 offset is not 396");
	auto constexpr UItemSlotWidget_Gamepad_C_RefCastComponent_Offset = offsetof(UItemSlotWidget_Gamepad_C, RefCastComponent);
	static_assert(UItemSlotWidget_Gamepad_C_RefCastComponent_Offset == 0x398, "UItemSlotWidget_Gamepad_C::RefCastComponent offset is not 398");
	auto constexpr UItemSlotWidget_Gamepad_C_RefItem_Offset = offsetof(UItemSlotWidget_Gamepad_C, RefItem);
	static_assert(UItemSlotWidget_Gamepad_C_RefItem_Offset == 0x3a0, "UItemSlotWidget_Gamepad_C::RefItem offset is not 3a0");
	auto constexpr UItemSlotWidget_Gamepad_C_ItemSlotCastingBar_Offset = offsetof(UItemSlotWidget_Gamepad_C, ItemSlotCastingBar);
	static_assert(UItemSlotWidget_Gamepad_C_ItemSlotCastingBar_Offset == 0x3a8, "UItemSlotWidget_Gamepad_C::ItemSlotCastingBar offset is not 3a8");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField3B0_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField3B0);
	static_assert(UItemSlotWidget_Gamepad_C_boolField3B0_Offset == 0x3b0, "UItemSlotWidget_Gamepad_C::boolField3B0 offset is not 3b0");
	auto constexpr UItemSlotWidget_Gamepad_C_RefInventory_Offset = offsetof(UItemSlotWidget_Gamepad_C, RefInventory);
	static_assert(UItemSlotWidget_Gamepad_C_RefInventory_Offset == 0x3b8, "UItemSlotWidget_Gamepad_C::RefInventory offset is not 3b8");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField3C0_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField3C0);
	static_assert(UItemSlotWidget_Gamepad_C_boolField3C0_Offset == 0x3c0, "UItemSlotWidget_Gamepad_C::boolField3C0 offset is not 3c0");
	auto constexpr UItemSlotWidget_Gamepad_C_DurabilityGaugeMaterial_Offset = offsetof(UItemSlotWidget_Gamepad_C, DurabilityGaugeMaterial);
	static_assert(UItemSlotWidget_Gamepad_C_DurabilityGaugeMaterial_Offset == 0x3c8, "UItemSlotWidget_Gamepad_C::DurabilityGaugeMaterial offset is not 3c8");
	auto constexpr UItemSlotWidget_Gamepad_C_ItemIconDynamicMaterial_Offset = offsetof(UItemSlotWidget_Gamepad_C, ItemIconDynamicMaterial);
	static_assert(UItemSlotWidget_Gamepad_C_ItemIconDynamicMaterial_Offset == 0x3d0, "UItemSlotWidget_Gamepad_C::ItemIconDynamicMaterial offset is not 3d0");
	auto constexpr UItemSlotWidget_Gamepad_C_TslCharacter_Offset = offsetof(UItemSlotWidget_Gamepad_C, TslCharacter);
	static_assert(UItemSlotWidget_Gamepad_C_TslCharacter_Offset == 0x3d8, "UItemSlotWidget_Gamepad_C::TslCharacter offset is not 3d8");
	auto constexpr UItemSlotWidget_Gamepad_C_Category_Offset = offsetof(UItemSlotWidget_Gamepad_C, Category);
	static_assert(UItemSlotWidget_Gamepad_C_Category_Offset == 0x3e0, "UItemSlotWidget_Gamepad_C::Category offset is not 3e0");
	auto constexpr UItemSlotWidget_Gamepad_C_Tex_Offset = offsetof(UItemSlotWidget_Gamepad_C, Tex);
	static_assert(UItemSlotWidget_Gamepad_C_Tex_Offset == 0x3f8, "UItemSlotWidget_Gamepad_C::Tex offset is not 3f8");
	auto constexpr UItemSlotWidget_Gamepad_C_RefreshFocus_Offset = offsetof(UItemSlotWidget_Gamepad_C, RefreshFocus);
	static_assert(UItemSlotWidget_Gamepad_C_RefreshFocus_Offset == 0x400, "UItemSlotWidget_Gamepad_C::RefreshFocus offset is not 400");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField410_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField410);
	static_assert(UItemSlotWidget_Gamepad_C_boolField410_Offset == 0x410, "UItemSlotWidget_Gamepad_C::boolField410 offset is not 410");
	auto constexpr UItemSlotWidget_Gamepad_C_PressedXStart_Offset = offsetof(UItemSlotWidget_Gamepad_C, PressedXStart);
	static_assert(UItemSlotWidget_Gamepad_C_PressedXStart_Offset == 0x414, "UItemSlotWidget_Gamepad_C::PressedXStart offset is not 414");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField418_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField418);
	static_assert(UItemSlotWidget_Gamepad_C_boolField418_Offset == 0x418, "UItemSlotWidget_Gamepad_C::boolField418 offset is not 418");
	auto constexpr UItemSlotWidget_Gamepad_C_PressedYStart_Offset = offsetof(UItemSlotWidget_Gamepad_C, PressedYStart);
	static_assert(UItemSlotWidget_Gamepad_C_PressedYStart_Offset == 0x41c, "UItemSlotWidget_Gamepad_C::PressedYStart offset is not 41c");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField420_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField420);
	static_assert(UItemSlotWidget_Gamepad_C_boolField420_Offset == 0x420, "UItemSlotWidget_Gamepad_C::boolField420 offset is not 420");
	auto constexpr UItemSlotWidget_Gamepad_C_SaveInventory_Gamepad_Offset = offsetof(UItemSlotWidget_Gamepad_C, SaveInventory_Gamepad);
	static_assert(UItemSlotWidget_Gamepad_C_SaveInventory_Gamepad_Offset == 0x428, "UItemSlotWidget_Gamepad_C::SaveInventory_Gamepad offset is not 428");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField430_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField430);
	static_assert(UItemSlotWidget_Gamepad_C_boolField430_Offset == 0x430, "UItemSlotWidget_Gamepad_C::boolField430 offset is not 430");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField431_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField431);
	static_assert(UItemSlotWidget_Gamepad_C_boolField431_Offset == 0x431, "UItemSlotWidget_Gamepad_C::boolField431 offset is not 431");
	auto constexpr UItemSlotWidget_Gamepad_C_PressedAStart_Offset = offsetof(UItemSlotWidget_Gamepad_C, PressedAStart);
	static_assert(UItemSlotWidget_Gamepad_C_PressedAStart_Offset == 0x434, "UItemSlotWidget_Gamepad_C::PressedAStart offset is not 434");
	auto constexpr UItemSlotWidget_Gamepad_C_boolField438_Offset = offsetof(UItemSlotWidget_Gamepad_C, boolField438);
	static_assert(UItemSlotWidget_Gamepad_C_boolField438_Offset == 0x438, "UItemSlotWidget_Gamepad_C::boolField438 offset is not 438");
	auto constexpr UItemSlotWidget_Gamepad_C_DefaultTapTime_Offset = offsetof(UItemSlotWidget_Gamepad_C, DefaultTapTime);
	static_assert(UItemSlotWidget_Gamepad_C_DefaultTapTime_Offset == 0x43c, "UItemSlotWidget_Gamepad_C::DefaultTapTime offset is not 43c");
	auto constexpr UItemSlotWidget_Gamepad_C_DefaultHoldTime_Offset = offsetof(UItemSlotWidget_Gamepad_C, DefaultHoldTime);
	static_assert(UItemSlotWidget_Gamepad_C_DefaultHoldTime_Offset == 0x440, "UItemSlotWidget_Gamepad_C::DefaultHoldTime offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
