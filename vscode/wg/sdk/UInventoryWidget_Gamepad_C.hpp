#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"
#include "EWeaponAttachmentSlotID.hpp"
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventoryWidget_Gamepad_C // Size: 0x598
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UInventoryWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68098); // id32("WidgetBlueprintGeneratedClass InventoryWidget_Gamepad.InventoryWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> XBoxHelpTextBlinking; /* Ofs: 0x338 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.XBoxHelpTextBlinking */
	ExternalPtr<struct UWidgetAnimation> InventoryFadeOut; /* Ofs: 0x340 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.InventoryFadeOut */
	ExternalPtr<struct UWidgetAnimation> InventoryFadeIn; /* Ofs: 0x348 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.InventoryFadeIn */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOnBlinking; /* Ofs: 0x350 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.VicinityTitleOnBlinking */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOffBlinking; /* Ofs: 0x358 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.VicinityTitleOffBlinking */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOn; /* Ofs: 0x360 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.VicinityTitleOn */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOff; /* Ofs: 0x368 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.VicinityTitleOff */
	ExternalPtr<struct UItemListWidget_Gamepad_C> Backpack; /* Ofs: 0x370 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Backpack */
	ExternalPtr<struct UBorder> BackpackBackgorund; /* Ofs: 0x378 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.BackpackBackgorund */
	ExternalPtr<struct UBorder> Border_9; /* Ofs: 0x380 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_9 */
	ExternalPtr<struct UBorder> Border_10; /* Ofs: 0x388 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_10 */
	ExternalPtr<struct UBorder> Border_11; /* Ofs: 0x390 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_11 */
	ExternalPtr<struct UBorder> Border_12; /* Ofs: 0x398 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_12 */
	ExternalPtr<struct UBorder> Border_13; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_13 */
	ExternalPtr<struct UBorder> Border_14; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_14 */
	ExternalPtr<struct UBorder> Border_15; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_15 */
	ExternalPtr<struct UBorder> Border_16; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_16 */
	ExternalPtr<struct UBorder> Border_17; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_17 */
	ExternalPtr<struct UBorder> Border_18; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_18 */
	ExternalPtr<struct UBorder> Border_19; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_19 */
	ExternalPtr<struct UBorder> Border_20; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_20 */
	ExternalPtr<struct UBorder> Border_21; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_21 */
	ExternalPtr<struct UBorder> Border_22; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_22 */
	ExternalPtr<struct UBorder> Border_23; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_23 */
	ExternalPtr<struct UBorder> Border_24; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Border_24 */
	ExternalPtr<struct UCharacterCapture_Gamepad_C> CharacterCapture_Gamepad; /* Ofs: 0x400 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.CharacterCapture_Gamepad */
	ExternalPtr<struct UConsoleGuideWidget_v3_C> ConsoleGuideWidget_v3; /* Ofs: 0x408 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.ConsoleGuideWidget_v3 */
	ExternalPtr<struct UEquipmentWidget_Gamepad_C> Equipment; /* Ofs: 0x410 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Equipment */
	ExternalPtr<struct UBorder> EquipmentBackground; /* Ofs: 0x418 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.EquipmentBackground */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x420 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_3 */
	ExternalPtr<struct UImage> Image_4; /* Ofs: 0x428 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_4 */
	ExternalPtr<struct UImage> Image_9; /* Ofs: 0x430 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_9 */
	ExternalPtr<struct UImage> Image_10; /* Ofs: 0x438 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_10 */
	ExternalPtr<struct UImage> Image_12; /* Ofs: 0x440 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_12 */
	ExternalPtr<struct UImage> Image_13; /* Ofs: 0x448 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_13 */
	ExternalPtr<struct UImage> Image_16; /* Ofs: 0x450 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_16 */
	ExternalPtr<struct UImage> Image_17; /* Ofs: 0x458 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_17 */
	ExternalPtr<struct UImage> Image_20; /* Ofs: 0x460 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_20 */
	ExternalPtr<struct UImage> Image_21; /* Ofs: 0x468 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Image_21 */
	ExternalPtr<struct UBP_InventoryCapacityWidget_C> InventoryCapacityWidget; /* Ofs: 0x470 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.InventoryCapacityWidget */
	ExternalPtr<struct UItemToolTipWidgetv3_C> ItemToolTipWidgetv3_Bp; /* Ofs: 0x478 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.ItemToolTipWidgetv3_Bp */
	ExternalPtr<struct UBorder> LBBorder; /* Ofs: 0x480 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.LBBorder */
	ExternalPtr<struct UImage> MenuKey; /* Ofs: 0x488 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.MenuKey */
	ExternalPtr<struct UWidgetSwitcher> MoveGuide; /* Ofs: 0x490 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.MoveGuide */
	ExternalPtr<struct UOverlay> Overlay_1; /* Ofs: 0x498 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Overlay_1 */
	ExternalPtr<struct UPlayerNameWidget_C> PlayerNameWidget_64; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.PlayerNameWidget_64 */
	ExternalPtr<struct UBorder> RBBorder; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.RBBorder */
	ExternalPtr<struct USelfPutHelperWidget_C> SelfPutHelperWidget; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.SelfPutHelperWidget */
	ExternalPtr<struct UItemListWidget_Gamepad_C> Vicinity; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Vicinity */
	ExternalPtr<struct UBorder> VicinityBackgorund; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.VicinityBackgorund */
	ExternalPtr<struct UWeaponEquipmentWidget_Gamepad_C> Weapon; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.Weapon */
	ExternalPtr<struct UBorder> WeaponBackground; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.WeaponBackground */
	uint8_t boolField4D8;
	uint8_t boolField4D9;
	uint8_t UnknownData4DA[0x6];
	TScriptInterface<ExternalPtr<struct USlotInterface>> FocusItemSlot; /* Ofs: 0x4E0 Size: 0x10 - InterfaceProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusItemSlot */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> FocusItemSlotContainer; /* Ofs: 0x4F0 Size: 0x10 - InterfaceProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusItemSlotContainer */
	ExternalPtr<struct UItem> FocusItem; /* Ofs: 0x500 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusItem */
	ExternalPtr<struct UEquipableItem> FocusEquipableItem; /* Ofs: 0x508 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusEquipableItem */
	ExternalPtr<struct UAttachableItem> FocusAttachmentItem; /* Ofs: 0x510 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusAttachmentItem */
	int32_t SelectIndex; /* Ofs: 0x518 Size: 0x4 - IntProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.SelectIndex */
	uint8_t UnknownData51C[0x4];
	TArray<ExternalPtr<struct UUserWidget>> FocusableWidgetList; /* Ofs: 0x520 Size: 0x10 - ArrayProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusableWidgetList */
	FLinearColor NormalBackgroundColor; /* Ofs: 0x530 Size: 0x10 - StructProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.NormalBackgroundColor */
	FLinearColor FocusBackgroundColor; /* Ofs: 0x540 Size: 0x10 - StructProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.FocusBackgroundColor */
	ExternalPtr<struct UMaterialInstanceDynamic> TEMP_WeightMaterial; /* Ofs: 0x550 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.TEMP_WeightMaterial */
	float TEMP_DisplayingAlphaEnd; /* Ofs: 0x558 Size: 0x4 - FloatProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.TEMP_DisplayingAlphaEnd */
	uint8_t UnknownData55C[0x4];
	FText TEMP_WeightTooltipText; /* Ofs: 0x560 Size: 0x18 - TextProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.TEMP_WeightTooltipText */
	TEnumAsByte<enum EWeaponAttachmentSlotID> SaveAttachmentSlotId; /* Ofs: 0x578 Size: 0x1 - EnumProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.SaveAttachmentSlotId */
	TEnumAsByte<enum EEquipSlotID> SaveEquipmentSlotId; /* Ofs: 0x579 Size: 0x1 - EnumProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.SaveEquipmentSlotId */
	uint8_t UnknownData57A[0x6];
	ExternalPtr<struct UBorder> NewVar_1; /* Ofs: 0x580 Size: 0x8 - ObjectProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.NewVar_1 */
	TScriptInterface<ExternalPtr<struct USlotInterface>> SaveSlotInterface; /* Ofs: 0x588 Size: 0x10 - InterfaceProperty InventoryWidget_Gamepad.InventoryWidget_Gamepad_C.SaveSlotInterface */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetXBoxHelpTextBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x338, value); }
	inline bool SetInventoryFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x340, value); }
	inline bool SetInventoryFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x348, value); }
	inline bool SetVicinityTitleOnBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x350, value); }
	inline bool SetVicinityTitleOffBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x358, value); }
	inline bool SetVicinityTitleOn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x360, value); }
	inline bool SetVicinityTitleOff(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x368, value); }
	inline bool SetBackpack(t_structHelper inst, ExternalPtr<struct UItemListWidget_Gamepad_C> value) { inst.WriteOffset(0x370, value); }
	inline bool SetBackpackBackgorund(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x378, value); }
	inline bool SetBorder_9(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x380, value); }
	inline bool SetBorder_10(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x388, value); }
	inline bool SetBorder_11(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x390, value); }
	inline bool SetBorder_12(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x398, value); }
	inline bool SetBorder_13(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetBorder_14(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetBorder_15(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetBorder_16(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetBorder_17(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetBorder_18(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetBorder_19(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetBorder_20(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetBorder_21(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetBorder_22(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetBorder_23(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetBorder_24(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetCharacterCapture_Gamepad(t_structHelper inst, ExternalPtr<struct UCharacterCapture_Gamepad_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetConsoleGuideWidget_v3(t_structHelper inst, ExternalPtr<struct UConsoleGuideWidget_v3_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetEquipment(t_structHelper inst, ExternalPtr<struct UEquipmentWidget_Gamepad_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetEquipmentBackground(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x418, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x420, value); }
	inline bool SetImage_4(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x428, value); }
	inline bool SetImage_9(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x430, value); }
	inline bool SetImage_10(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x438, value); }
	inline bool SetImage_12(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x440, value); }
	inline bool SetImage_13(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x448, value); }
	inline bool SetImage_16(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x450, value); }
	inline bool SetImage_17(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x458, value); }
	inline bool SetImage_20(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x460, value); }
	inline bool SetImage_21(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x468, value); }
	inline bool SetInventoryCapacityWidget(t_structHelper inst, ExternalPtr<struct UBP_InventoryCapacityWidget_C> value) { inst.WriteOffset(0x470, value); }
	inline bool SetItemToolTipWidgetv3_Bp(t_structHelper inst, ExternalPtr<struct UItemToolTipWidgetv3_C> value) { inst.WriteOffset(0x478, value); }
	inline bool SetLBBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x480, value); }
	inline bool SetMenuKey(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x488, value); }
	inline bool SetMoveGuide(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x490, value); }
	inline bool SetOverlay_1(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x498, value); }
	inline bool SetPlayerNameWidget_64(t_structHelper inst, ExternalPtr<struct UPlayerNameWidget_C> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetRBBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetSelfPutHelperWidget(t_structHelper inst, ExternalPtr<struct USelfPutHelperWidget_C> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetVicinity(t_structHelper inst, ExternalPtr<struct UItemListWidget_Gamepad_C> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetVicinityBackgorund(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetWeapon(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentWidget_Gamepad_C> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetWeaponBackground(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4D0, value); }
	inline bool wasVicinityEmpty()
	{
		return boolField4D8& 0x1;
	}
	inline bool SetwasVicinityEmpty(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool willDropToVicinity()
	{
		return boolField4D9& 0x1;
	}
	inline bool SetwillDropToVicinity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFocusItemSlot(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetFocusItemSlotContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetFocusItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x500, value); }
	inline bool SetFocusEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x508, value); }
	inline bool SetFocusAttachmentItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0x510, value); }
	inline bool SetSelectIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x518, value); }
	inline bool SetFocusableWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UUserWidget>> value) { inst.WriteOffset(0x520, value); }
	inline bool SetNormalBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x530, value); }
	inline bool SetFocusBackgroundColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x540, value); }
	inline bool SetTEMP_WeightMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x550, value); }
	inline bool SetTEMP_DisplayingAlphaEnd(t_structHelper inst, float value) { inst.WriteOffset(0x558, value); }
	inline bool SetTEMP_WeightTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x560, value); }
	inline bool SetSaveAttachmentSlotId(t_structHelper inst, TEnumAsByte<enum EWeaponAttachmentSlotID> value) { inst.WriteOffset(0x578, value); }
	inline bool SetSaveEquipmentSlotId(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x579, value); }
	inline bool SetNewVar_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x580, value); }
	inline bool SetSaveSlotInterface(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x588, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventoryWidget_Gamepad_C = sizeof(UInventoryWidget_Gamepad_C); // 1432
    static_assert(sizeof(UInventoryWidget_Gamepad_C) == 0x598, "Size of UInventoryWidget_Gamepad_C is not correct.");
	auto constexpr UInventoryWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UInventoryWidget_Gamepad_C, UberGraphFrame);
	static_assert(UInventoryWidget_Gamepad_C_UberGraphFrame_Offset == 0x330, "UInventoryWidget_Gamepad_C::UberGraphFrame offset is not 330");
	auto constexpr UInventoryWidget_Gamepad_C_XBoxHelpTextBlinking_Offset = offsetof(UInventoryWidget_Gamepad_C, XBoxHelpTextBlinking);
	static_assert(UInventoryWidget_Gamepad_C_XBoxHelpTextBlinking_Offset == 0x338, "UInventoryWidget_Gamepad_C::XBoxHelpTextBlinking offset is not 338");
	auto constexpr UInventoryWidget_Gamepad_C_InventoryFadeOut_Offset = offsetof(UInventoryWidget_Gamepad_C, InventoryFadeOut);
	static_assert(UInventoryWidget_Gamepad_C_InventoryFadeOut_Offset == 0x340, "UInventoryWidget_Gamepad_C::InventoryFadeOut offset is not 340");
	auto constexpr UInventoryWidget_Gamepad_C_InventoryFadeIn_Offset = offsetof(UInventoryWidget_Gamepad_C, InventoryFadeIn);
	static_assert(UInventoryWidget_Gamepad_C_InventoryFadeIn_Offset == 0x348, "UInventoryWidget_Gamepad_C::InventoryFadeIn offset is not 348");
	auto constexpr UInventoryWidget_Gamepad_C_VicinityTitleOnBlinking_Offset = offsetof(UInventoryWidget_Gamepad_C, VicinityTitleOnBlinking);
	static_assert(UInventoryWidget_Gamepad_C_VicinityTitleOnBlinking_Offset == 0x350, "UInventoryWidget_Gamepad_C::VicinityTitleOnBlinking offset is not 350");
	auto constexpr UInventoryWidget_Gamepad_C_VicinityTitleOffBlinking_Offset = offsetof(UInventoryWidget_Gamepad_C, VicinityTitleOffBlinking);
	static_assert(UInventoryWidget_Gamepad_C_VicinityTitleOffBlinking_Offset == 0x358, "UInventoryWidget_Gamepad_C::VicinityTitleOffBlinking offset is not 358");
	auto constexpr UInventoryWidget_Gamepad_C_VicinityTitleOn_Offset = offsetof(UInventoryWidget_Gamepad_C, VicinityTitleOn);
	static_assert(UInventoryWidget_Gamepad_C_VicinityTitleOn_Offset == 0x360, "UInventoryWidget_Gamepad_C::VicinityTitleOn offset is not 360");
	auto constexpr UInventoryWidget_Gamepad_C_VicinityTitleOff_Offset = offsetof(UInventoryWidget_Gamepad_C, VicinityTitleOff);
	static_assert(UInventoryWidget_Gamepad_C_VicinityTitleOff_Offset == 0x368, "UInventoryWidget_Gamepad_C::VicinityTitleOff offset is not 368");
	auto constexpr UInventoryWidget_Gamepad_C_Backpack_Offset = offsetof(UInventoryWidget_Gamepad_C, Backpack);
	static_assert(UInventoryWidget_Gamepad_C_Backpack_Offset == 0x370, "UInventoryWidget_Gamepad_C::Backpack offset is not 370");
	auto constexpr UInventoryWidget_Gamepad_C_BackpackBackgorund_Offset = offsetof(UInventoryWidget_Gamepad_C, BackpackBackgorund);
	static_assert(UInventoryWidget_Gamepad_C_BackpackBackgorund_Offset == 0x378, "UInventoryWidget_Gamepad_C::BackpackBackgorund offset is not 378");
	auto constexpr UInventoryWidget_Gamepad_C_Border_9_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_9);
	static_assert(UInventoryWidget_Gamepad_C_Border_9_Offset == 0x380, "UInventoryWidget_Gamepad_C::Border_9 offset is not 380");
	auto constexpr UInventoryWidget_Gamepad_C_Border_10_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_10);
	static_assert(UInventoryWidget_Gamepad_C_Border_10_Offset == 0x388, "UInventoryWidget_Gamepad_C::Border_10 offset is not 388");
	auto constexpr UInventoryWidget_Gamepad_C_Border_11_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_11);
	static_assert(UInventoryWidget_Gamepad_C_Border_11_Offset == 0x390, "UInventoryWidget_Gamepad_C::Border_11 offset is not 390");
	auto constexpr UInventoryWidget_Gamepad_C_Border_12_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_12);
	static_assert(UInventoryWidget_Gamepad_C_Border_12_Offset == 0x398, "UInventoryWidget_Gamepad_C::Border_12 offset is not 398");
	auto constexpr UInventoryWidget_Gamepad_C_Border_13_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_13);
	static_assert(UInventoryWidget_Gamepad_C_Border_13_Offset == 0x3a0, "UInventoryWidget_Gamepad_C::Border_13 offset is not 3a0");
	auto constexpr UInventoryWidget_Gamepad_C_Border_14_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_14);
	static_assert(UInventoryWidget_Gamepad_C_Border_14_Offset == 0x3a8, "UInventoryWidget_Gamepad_C::Border_14 offset is not 3a8");
	auto constexpr UInventoryWidget_Gamepad_C_Border_15_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_15);
	static_assert(UInventoryWidget_Gamepad_C_Border_15_Offset == 0x3b0, "UInventoryWidget_Gamepad_C::Border_15 offset is not 3b0");
	auto constexpr UInventoryWidget_Gamepad_C_Border_16_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_16);
	static_assert(UInventoryWidget_Gamepad_C_Border_16_Offset == 0x3b8, "UInventoryWidget_Gamepad_C::Border_16 offset is not 3b8");
	auto constexpr UInventoryWidget_Gamepad_C_Border_17_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_17);
	static_assert(UInventoryWidget_Gamepad_C_Border_17_Offset == 0x3c0, "UInventoryWidget_Gamepad_C::Border_17 offset is not 3c0");
	auto constexpr UInventoryWidget_Gamepad_C_Border_18_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_18);
	static_assert(UInventoryWidget_Gamepad_C_Border_18_Offset == 0x3c8, "UInventoryWidget_Gamepad_C::Border_18 offset is not 3c8");
	auto constexpr UInventoryWidget_Gamepad_C_Border_19_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_19);
	static_assert(UInventoryWidget_Gamepad_C_Border_19_Offset == 0x3d0, "UInventoryWidget_Gamepad_C::Border_19 offset is not 3d0");
	auto constexpr UInventoryWidget_Gamepad_C_Border_20_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_20);
	static_assert(UInventoryWidget_Gamepad_C_Border_20_Offset == 0x3d8, "UInventoryWidget_Gamepad_C::Border_20 offset is not 3d8");
	auto constexpr UInventoryWidget_Gamepad_C_Border_21_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_21);
	static_assert(UInventoryWidget_Gamepad_C_Border_21_Offset == 0x3e0, "UInventoryWidget_Gamepad_C::Border_21 offset is not 3e0");
	auto constexpr UInventoryWidget_Gamepad_C_Border_22_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_22);
	static_assert(UInventoryWidget_Gamepad_C_Border_22_Offset == 0x3e8, "UInventoryWidget_Gamepad_C::Border_22 offset is not 3e8");
	auto constexpr UInventoryWidget_Gamepad_C_Border_23_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_23);
	static_assert(UInventoryWidget_Gamepad_C_Border_23_Offset == 0x3f0, "UInventoryWidget_Gamepad_C::Border_23 offset is not 3f0");
	auto constexpr UInventoryWidget_Gamepad_C_Border_24_Offset = offsetof(UInventoryWidget_Gamepad_C, Border_24);
	static_assert(UInventoryWidget_Gamepad_C_Border_24_Offset == 0x3f8, "UInventoryWidget_Gamepad_C::Border_24 offset is not 3f8");
	auto constexpr UInventoryWidget_Gamepad_C_CharacterCapture_Gamepad_Offset = offsetof(UInventoryWidget_Gamepad_C, CharacterCapture_Gamepad);
	static_assert(UInventoryWidget_Gamepad_C_CharacterCapture_Gamepad_Offset == 0x400, "UInventoryWidget_Gamepad_C::CharacterCapture_Gamepad offset is not 400");
	auto constexpr UInventoryWidget_Gamepad_C_ConsoleGuideWidget_v3_Offset = offsetof(UInventoryWidget_Gamepad_C, ConsoleGuideWidget_v3);
	static_assert(UInventoryWidget_Gamepad_C_ConsoleGuideWidget_v3_Offset == 0x408, "UInventoryWidget_Gamepad_C::ConsoleGuideWidget_v3 offset is not 408");
	auto constexpr UInventoryWidget_Gamepad_C_Equipment_Offset = offsetof(UInventoryWidget_Gamepad_C, Equipment);
	static_assert(UInventoryWidget_Gamepad_C_Equipment_Offset == 0x410, "UInventoryWidget_Gamepad_C::Equipment offset is not 410");
	auto constexpr UInventoryWidget_Gamepad_C_EquipmentBackground_Offset = offsetof(UInventoryWidget_Gamepad_C, EquipmentBackground);
	static_assert(UInventoryWidget_Gamepad_C_EquipmentBackground_Offset == 0x418, "UInventoryWidget_Gamepad_C::EquipmentBackground offset is not 418");
	auto constexpr UInventoryWidget_Gamepad_C_Image_3_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_3);
	static_assert(UInventoryWidget_Gamepad_C_Image_3_Offset == 0x420, "UInventoryWidget_Gamepad_C::Image_3 offset is not 420");
	auto constexpr UInventoryWidget_Gamepad_C_Image_4_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_4);
	static_assert(UInventoryWidget_Gamepad_C_Image_4_Offset == 0x428, "UInventoryWidget_Gamepad_C::Image_4 offset is not 428");
	auto constexpr UInventoryWidget_Gamepad_C_Image_9_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_9);
	static_assert(UInventoryWidget_Gamepad_C_Image_9_Offset == 0x430, "UInventoryWidget_Gamepad_C::Image_9 offset is not 430");
	auto constexpr UInventoryWidget_Gamepad_C_Image_10_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_10);
	static_assert(UInventoryWidget_Gamepad_C_Image_10_Offset == 0x438, "UInventoryWidget_Gamepad_C::Image_10 offset is not 438");
	auto constexpr UInventoryWidget_Gamepad_C_Image_12_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_12);
	static_assert(UInventoryWidget_Gamepad_C_Image_12_Offset == 0x440, "UInventoryWidget_Gamepad_C::Image_12 offset is not 440");
	auto constexpr UInventoryWidget_Gamepad_C_Image_13_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_13);
	static_assert(UInventoryWidget_Gamepad_C_Image_13_Offset == 0x448, "UInventoryWidget_Gamepad_C::Image_13 offset is not 448");
	auto constexpr UInventoryWidget_Gamepad_C_Image_16_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_16);
	static_assert(UInventoryWidget_Gamepad_C_Image_16_Offset == 0x450, "UInventoryWidget_Gamepad_C::Image_16 offset is not 450");
	auto constexpr UInventoryWidget_Gamepad_C_Image_17_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_17);
	static_assert(UInventoryWidget_Gamepad_C_Image_17_Offset == 0x458, "UInventoryWidget_Gamepad_C::Image_17 offset is not 458");
	auto constexpr UInventoryWidget_Gamepad_C_Image_20_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_20);
	static_assert(UInventoryWidget_Gamepad_C_Image_20_Offset == 0x460, "UInventoryWidget_Gamepad_C::Image_20 offset is not 460");
	auto constexpr UInventoryWidget_Gamepad_C_Image_21_Offset = offsetof(UInventoryWidget_Gamepad_C, Image_21);
	static_assert(UInventoryWidget_Gamepad_C_Image_21_Offset == 0x468, "UInventoryWidget_Gamepad_C::Image_21 offset is not 468");
	auto constexpr UInventoryWidget_Gamepad_C_InventoryCapacityWidget_Offset = offsetof(UInventoryWidget_Gamepad_C, InventoryCapacityWidget);
	static_assert(UInventoryWidget_Gamepad_C_InventoryCapacityWidget_Offset == 0x470, "UInventoryWidget_Gamepad_C::InventoryCapacityWidget offset is not 470");
	auto constexpr UInventoryWidget_Gamepad_C_ItemToolTipWidgetv3_Bp_Offset = offsetof(UInventoryWidget_Gamepad_C, ItemToolTipWidgetv3_Bp);
	static_assert(UInventoryWidget_Gamepad_C_ItemToolTipWidgetv3_Bp_Offset == 0x478, "UInventoryWidget_Gamepad_C::ItemToolTipWidgetv3_Bp offset is not 478");
	auto constexpr UInventoryWidget_Gamepad_C_LBBorder_Offset = offsetof(UInventoryWidget_Gamepad_C, LBBorder);
	static_assert(UInventoryWidget_Gamepad_C_LBBorder_Offset == 0x480, "UInventoryWidget_Gamepad_C::LBBorder offset is not 480");
	auto constexpr UInventoryWidget_Gamepad_C_MenuKey_Offset = offsetof(UInventoryWidget_Gamepad_C, MenuKey);
	static_assert(UInventoryWidget_Gamepad_C_MenuKey_Offset == 0x488, "UInventoryWidget_Gamepad_C::MenuKey offset is not 488");
	auto constexpr UInventoryWidget_Gamepad_C_MoveGuide_Offset = offsetof(UInventoryWidget_Gamepad_C, MoveGuide);
	static_assert(UInventoryWidget_Gamepad_C_MoveGuide_Offset == 0x490, "UInventoryWidget_Gamepad_C::MoveGuide offset is not 490");
	auto constexpr UInventoryWidget_Gamepad_C_Overlay_1_Offset = offsetof(UInventoryWidget_Gamepad_C, Overlay_1);
	static_assert(UInventoryWidget_Gamepad_C_Overlay_1_Offset == 0x498, "UInventoryWidget_Gamepad_C::Overlay_1 offset is not 498");
	auto constexpr UInventoryWidget_Gamepad_C_PlayerNameWidget_64_Offset = offsetof(UInventoryWidget_Gamepad_C, PlayerNameWidget_64);
	static_assert(UInventoryWidget_Gamepad_C_PlayerNameWidget_64_Offset == 0x4a0, "UInventoryWidget_Gamepad_C::PlayerNameWidget_64 offset is not 4a0");
	auto constexpr UInventoryWidget_Gamepad_C_RBBorder_Offset = offsetof(UInventoryWidget_Gamepad_C, RBBorder);
	static_assert(UInventoryWidget_Gamepad_C_RBBorder_Offset == 0x4a8, "UInventoryWidget_Gamepad_C::RBBorder offset is not 4a8");
	auto constexpr UInventoryWidget_Gamepad_C_SelfPutHelperWidget_Offset = offsetof(UInventoryWidget_Gamepad_C, SelfPutHelperWidget);
	static_assert(UInventoryWidget_Gamepad_C_SelfPutHelperWidget_Offset == 0x4b0, "UInventoryWidget_Gamepad_C::SelfPutHelperWidget offset is not 4b0");
	auto constexpr UInventoryWidget_Gamepad_C_Vicinity_Offset = offsetof(UInventoryWidget_Gamepad_C, Vicinity);
	static_assert(UInventoryWidget_Gamepad_C_Vicinity_Offset == 0x4b8, "UInventoryWidget_Gamepad_C::Vicinity offset is not 4b8");
	auto constexpr UInventoryWidget_Gamepad_C_VicinityBackgorund_Offset = offsetof(UInventoryWidget_Gamepad_C, VicinityBackgorund);
	static_assert(UInventoryWidget_Gamepad_C_VicinityBackgorund_Offset == 0x4c0, "UInventoryWidget_Gamepad_C::VicinityBackgorund offset is not 4c0");
	auto constexpr UInventoryWidget_Gamepad_C_Weapon_Offset = offsetof(UInventoryWidget_Gamepad_C, Weapon);
	static_assert(UInventoryWidget_Gamepad_C_Weapon_Offset == 0x4c8, "UInventoryWidget_Gamepad_C::Weapon offset is not 4c8");
	auto constexpr UInventoryWidget_Gamepad_C_WeaponBackground_Offset = offsetof(UInventoryWidget_Gamepad_C, WeaponBackground);
	static_assert(UInventoryWidget_Gamepad_C_WeaponBackground_Offset == 0x4d0, "UInventoryWidget_Gamepad_C::WeaponBackground offset is not 4d0");
	auto constexpr UInventoryWidget_Gamepad_C_boolField4D8_Offset = offsetof(UInventoryWidget_Gamepad_C, boolField4D8);
	static_assert(UInventoryWidget_Gamepad_C_boolField4D8_Offset == 0x4d8, "UInventoryWidget_Gamepad_C::boolField4D8 offset is not 4d8");
	auto constexpr UInventoryWidget_Gamepad_C_boolField4D9_Offset = offsetof(UInventoryWidget_Gamepad_C, boolField4D9);
	static_assert(UInventoryWidget_Gamepad_C_boolField4D9_Offset == 0x4d9, "UInventoryWidget_Gamepad_C::boolField4D9 offset is not 4d9");
	auto constexpr UInventoryWidget_Gamepad_C_FocusItemSlot_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusItemSlot);
	static_assert(UInventoryWidget_Gamepad_C_FocusItemSlot_Offset == 0x4e0, "UInventoryWidget_Gamepad_C::FocusItemSlot offset is not 4e0");
	auto constexpr UInventoryWidget_Gamepad_C_FocusItemSlotContainer_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusItemSlotContainer);
	static_assert(UInventoryWidget_Gamepad_C_FocusItemSlotContainer_Offset == 0x4f0, "UInventoryWidget_Gamepad_C::FocusItemSlotContainer offset is not 4f0");
	auto constexpr UInventoryWidget_Gamepad_C_FocusItem_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusItem);
	static_assert(UInventoryWidget_Gamepad_C_FocusItem_Offset == 0x500, "UInventoryWidget_Gamepad_C::FocusItem offset is not 500");
	auto constexpr UInventoryWidget_Gamepad_C_FocusEquipableItem_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusEquipableItem);
	static_assert(UInventoryWidget_Gamepad_C_FocusEquipableItem_Offset == 0x508, "UInventoryWidget_Gamepad_C::FocusEquipableItem offset is not 508");
	auto constexpr UInventoryWidget_Gamepad_C_FocusAttachmentItem_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusAttachmentItem);
	static_assert(UInventoryWidget_Gamepad_C_FocusAttachmentItem_Offset == 0x510, "UInventoryWidget_Gamepad_C::FocusAttachmentItem offset is not 510");
	auto constexpr UInventoryWidget_Gamepad_C_SelectIndex_Offset = offsetof(UInventoryWidget_Gamepad_C, SelectIndex);
	static_assert(UInventoryWidget_Gamepad_C_SelectIndex_Offset == 0x518, "UInventoryWidget_Gamepad_C::SelectIndex offset is not 518");
	auto constexpr UInventoryWidget_Gamepad_C_FocusableWidgetList_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusableWidgetList);
	static_assert(UInventoryWidget_Gamepad_C_FocusableWidgetList_Offset == 0x520, "UInventoryWidget_Gamepad_C::FocusableWidgetList offset is not 520");
	auto constexpr UInventoryWidget_Gamepad_C_NormalBackgroundColor_Offset = offsetof(UInventoryWidget_Gamepad_C, NormalBackgroundColor);
	static_assert(UInventoryWidget_Gamepad_C_NormalBackgroundColor_Offset == 0x530, "UInventoryWidget_Gamepad_C::NormalBackgroundColor offset is not 530");
	auto constexpr UInventoryWidget_Gamepad_C_FocusBackgroundColor_Offset = offsetof(UInventoryWidget_Gamepad_C, FocusBackgroundColor);
	static_assert(UInventoryWidget_Gamepad_C_FocusBackgroundColor_Offset == 0x540, "UInventoryWidget_Gamepad_C::FocusBackgroundColor offset is not 540");
	auto constexpr UInventoryWidget_Gamepad_C_TEMP_WeightMaterial_Offset = offsetof(UInventoryWidget_Gamepad_C, TEMP_WeightMaterial);
	static_assert(UInventoryWidget_Gamepad_C_TEMP_WeightMaterial_Offset == 0x550, "UInventoryWidget_Gamepad_C::TEMP_WeightMaterial offset is not 550");
	auto constexpr UInventoryWidget_Gamepad_C_TEMP_DisplayingAlphaEnd_Offset = offsetof(UInventoryWidget_Gamepad_C, TEMP_DisplayingAlphaEnd);
	static_assert(UInventoryWidget_Gamepad_C_TEMP_DisplayingAlphaEnd_Offset == 0x558, "UInventoryWidget_Gamepad_C::TEMP_DisplayingAlphaEnd offset is not 558");
	auto constexpr UInventoryWidget_Gamepad_C_TEMP_WeightTooltipText_Offset = offsetof(UInventoryWidget_Gamepad_C, TEMP_WeightTooltipText);
	static_assert(UInventoryWidget_Gamepad_C_TEMP_WeightTooltipText_Offset == 0x560, "UInventoryWidget_Gamepad_C::TEMP_WeightTooltipText offset is not 560");
	auto constexpr UInventoryWidget_Gamepad_C_SaveAttachmentSlotId_Offset = offsetof(UInventoryWidget_Gamepad_C, SaveAttachmentSlotId);
	static_assert(UInventoryWidget_Gamepad_C_SaveAttachmentSlotId_Offset == 0x578, "UInventoryWidget_Gamepad_C::SaveAttachmentSlotId offset is not 578");
	auto constexpr UInventoryWidget_Gamepad_C_SaveEquipmentSlotId_Offset = offsetof(UInventoryWidget_Gamepad_C, SaveEquipmentSlotId);
	static_assert(UInventoryWidget_Gamepad_C_SaveEquipmentSlotId_Offset == 0x579, "UInventoryWidget_Gamepad_C::SaveEquipmentSlotId offset is not 579");
	auto constexpr UInventoryWidget_Gamepad_C_NewVar_1_Offset = offsetof(UInventoryWidget_Gamepad_C, NewVar_1);
	static_assert(UInventoryWidget_Gamepad_C_NewVar_1_Offset == 0x580, "UInventoryWidget_Gamepad_C::NewVar_1 offset is not 580");
	auto constexpr UInventoryWidget_Gamepad_C_SaveSlotInterface_Offset = offsetof(UInventoryWidget_Gamepad_C, SaveSlotInterface);
	static_assert(UInventoryWidget_Gamepad_C_SaveSlotInterface_Offset == 0x588, "UInventoryWidget_Gamepad_C::SaveSlotInterface offset is not 588");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
