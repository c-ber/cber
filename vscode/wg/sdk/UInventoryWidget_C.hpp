#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventoryWidget_C // Size: 0x552
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UInventoryWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68228); // id32("WidgetBlueprintGeneratedClass InventoryWidget.InventoryWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty InventoryWidget.InventoryWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> XBoxHelpTextBlinking; /* Ofs: 0x338 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.XBoxHelpTextBlinking */
	ExternalPtr<struct UWidgetAnimation> InventoryFadeOut; /* Ofs: 0x340 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.InventoryFadeOut */
	ExternalPtr<struct UWidgetAnimation> InventoryFadeIn; /* Ofs: 0x348 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.InventoryFadeIn */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOnBlinking; /* Ofs: 0x350 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.VicinityTitleOnBlinking */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOffBlinking; /* Ofs: 0x358 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.VicinityTitleOffBlinking */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOn; /* Ofs: 0x360 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.VicinityTitleOn */
	ExternalPtr<struct UWidgetAnimation> VicinityTitleOff; /* Ofs: 0x368 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.VicinityTitleOff */
	ExternalPtr<struct UTextBlock> A_ButtonHelpText; /* Ofs: 0x370 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.A_ButtonHelpText */
	ExternalPtr<struct UTextBlock> B_ButtonHelpText; /* Ofs: 0x378 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.B_ButtonHelpText */
	ExternalPtr<struct UInventoryListBaseWidget_C> Backpack; /* Ofs: 0x380 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Backpack */
	ExternalPtr<struct USizeBox> Backpack_SizeBox; /* Ofs: 0x388 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Backpack_SizeBox */
	ExternalPtr<struct UBorder> Border_2; /* Ofs: 0x390 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Border_2 */
	ExternalPtr<struct UBorder> Border_4; /* Ofs: 0x398 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Border_4 */
	ExternalPtr<struct UButton> btn_time; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.btn_time */
	ExternalPtr<struct UButton> btn_type; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.btn_type */
	ExternalPtr<struct UHorizontalBox> ButonAHelpBox; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.ButonAHelpBox */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Button_1 */
	ExternalPtr<struct UButton> Button_2; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Button_2 */
	ExternalPtr<struct UHorizontalBox> ButtonBHelpBox; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.ButtonBHelpBox */
	ExternalPtr<struct USizeBox> CharacterSizeBox; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.CharacterSizeBox */
	ExternalPtr<struct UEquipmentWidget_C> Equipment; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Equipment */
	ExternalPtr<struct UConsolGuideWidget_C> GamepadGuide; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.GamepadGuide */
	ExternalPtr<struct UHorizontalBox> HorizontalBox_1; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.HorizontalBox_1 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Image_2 */
	ExternalPtr<struct UBP_InventoryCapacityWidget_C> InventoryCapacityWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.InventoryCapacityWidget */
	ExternalPtr<struct UImage> OptionalImage; /* Ofs: 0x408 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.OptionalImage */
	ExternalPtr<struct USizeBox> SizeBox_2; /* Ofs: 0x410 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.SizeBox_2 */
	ExternalPtr<struct USizeBox> SizeBox_3; /* Ofs: 0x418 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.SizeBox_3 */
	ExternalPtr<struct UBorder> SortingButtonListBorder; /* Ofs: 0x420 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.SortingButtonListBorder */
	ExternalPtr<struct UTextBlock> TextTime; /* Ofs: 0x428 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.TextTime */
	ExternalPtr<struct UTextBlock> TextType; /* Ofs: 0x430 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.TextType */
	ExternalPtr<struct UUIBlurBackground_C> UIBlurBackground; /* Ofs: 0x438 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.UIBlurBackground */
	ExternalPtr<struct UTextBlock> UserIDText; /* Ofs: 0x440 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.UserIDText */
	ExternalPtr<struct UImage> VerticalLine; /* Ofs: 0x448 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.VerticalLine */
	ExternalPtr<struct UInventoryListBaseWidget_C> Vicinity; /* Ofs: 0x450 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Vicinity */
	ExternalPtr<struct USizeBox> Vicinity_SizeBox; /* Ofs: 0x458 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Vicinity_SizeBox */
	ExternalPtr<struct UBorder> VicinityInfoBlock; /* Ofs: 0x460 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.VicinityInfoBlock */
	ExternalPtr<struct UWeaponEquipmentWidget_C> Weapon; /* Ofs: 0x468 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Weapon */
	ExternalPtr<struct USizeBox> Weapon_SizeBox; /* Ofs: 0x470 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.Weapon_SizeBox */
	ExternalPtr<struct UWeaponSkinGuideWidget_C> WeaponSkinGuideWidget; /* Ofs: 0x478 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.WeaponSkinGuideWidget */
	ExternalPtr<struct UBorder> XBoxHelpTextBorder; /* Ofs: 0x480 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.XBoxHelpTextBorder */
	ExternalPtr<struct UItemExplorer> ItemExplorer; /* Ofs: 0x488 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.ItemExplorer */
	ExternalPtr<struct UDragDropOperation> DragDroppingContent; /* Ofs: 0x490 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.DragDroppingContent */
	ExternalPtr<struct UItem> DragDroppingItem; /* Ofs: 0x498 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.DragDroppingItem */
	uint8_t boolField4A0;
	uint8_t boolField4A1;
	uint8_t UnknownData4A2[0x6];
	TScriptInterface<ExternalPtr<struct USlotInterface>> MouseOverSlot; /* Ofs: 0x4A8 Size: 0x10 - InterfaceProperty InventoryWidget.InventoryWidget_C.MouseOverSlot */
	TScriptInterface<ExternalPtr<struct USlotContainerInterface>> SlotContainer; /* Ofs: 0x4B8 Size: 0x10 - InterfaceProperty InventoryWidget.InventoryWidget_C.SlotContainer */
	ExternalPtr<struct UItem> MouseOverItem; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.MouseOverItem */
	ExternalPtr<struct UEquipableItem> MouseOverEquipableItem; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.MouseOverEquipableItem */
	ExternalPtr<struct UAttachableItem> MouseOverAttachmentItem; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.MouseOverAttachmentItem */
	FSlateColor SelectColor; /* Ofs: 0x4E0 Size: 0x28 - StructProperty InventoryWidget.InventoryWidget_C.SelectColor */
	FSlateColor DefaultColor; /* Ofs: 0x508 Size: 0x28 - StructProperty InventoryWidget.InventoryWidget_C.DefaultColor */
	int32_t SelectIndex; /* Ofs: 0x530 Size: 0x4 - IntProperty InventoryWidget.InventoryWidget_C.SelectIndex */
	uint8_t UnknownData534[0x4];
	TArray<ExternalPtr<struct UUserWidget>> FocusableWidgetLis; /* Ofs: 0x538 Size: 0x10 - ArrayProperty InventoryWidget.InventoryWidget_C.FocusableWidgetLis */
	ExternalPtr<struct UAttachableItem> GamepadadSelectedAttachableItem; /* Ofs: 0x548 Size: 0x8 - ObjectProperty InventoryWidget.InventoryWidget_C.GamepadadSelectedAttachableItem */
	uint8_t boolField550;
	uint8_t boolField551;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetXBoxHelpTextBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x338, value); }
	inline bool SetInventoryFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x340, value); }
	inline bool SetInventoryFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x348, value); }
	inline bool SetVicinityTitleOnBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x350, value); }
	inline bool SetVicinityTitleOffBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x358, value); }
	inline bool SetVicinityTitleOn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x360, value); }
	inline bool SetVicinityTitleOff(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x368, value); }
	inline bool SetA_ButtonHelpText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x370, value); }
	inline bool SetB_ButtonHelpText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x378, value); }
	inline bool SetBackpack(t_structHelper inst, ExternalPtr<struct UInventoryListBaseWidget_C> value) { inst.WriteOffset(0x380, value); }
	inline bool SetBackpack_SizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x388, value); }
	inline bool SetBorder_2(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x390, value); }
	inline bool SetBorder_4(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x398, value); }
	inline bool Setbtn_time(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3A0, value); }
	inline bool Setbtn_type(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetButonAHelpBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetButton_2(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetButtonBHelpBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetCharacterSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetEquipment(t_structHelper inst, ExternalPtr<struct UEquipmentWidget_C> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetGamepadGuide(t_structHelper inst, ExternalPtr<struct UConsolGuideWidget_C> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetHorizontalBox_1(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetInventoryCapacityWidget(t_structHelper inst, ExternalPtr<struct UBP_InventoryCapacityWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetOptionalImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x408, value); }
	inline bool SetSizeBox_2(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSizeBox_3(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSortingButtonListBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTextTime(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x428, value); }
	inline bool SetTextType(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x430, value); }
	inline bool SetUIBlurBackground(t_structHelper inst, ExternalPtr<struct UUIBlurBackground_C> value) { inst.WriteOffset(0x438, value); }
	inline bool SetUserIDText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x440, value); }
	inline bool SetVerticalLine(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x448, value); }
	inline bool SetVicinity(t_structHelper inst, ExternalPtr<struct UInventoryListBaseWidget_C> value) { inst.WriteOffset(0x450, value); }
	inline bool SetVicinity_SizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x458, value); }
	inline bool SetVicinityInfoBlock(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x460, value); }
	inline bool SetWeapon(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentWidget_C> value) { inst.WriteOffset(0x468, value); }
	inline bool SetWeapon_SizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x470, value); }
	inline bool SetWeaponSkinGuideWidget(t_structHelper inst, ExternalPtr<struct UWeaponSkinGuideWidget_C> value) { inst.WriteOffset(0x478, value); }
	inline bool SetXBoxHelpTextBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x480, value); }
	inline bool SetItemExplorer(t_structHelper inst, ExternalPtr<struct UItemExplorer> value) { inst.WriteOffset(0x488, value); }
	inline bool SetDragDroppingContent(t_structHelper inst, ExternalPtr<struct UDragDropOperation> value) { inst.WriteOffset(0x490, value); }
	inline bool SetDragDroppingItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x498, value); }
	inline bool wasVicinityEmpty()
	{
		return boolField4A0& 0x1;
	}
	inline bool SetwasVicinityEmpty(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool willDropToVicinity()
	{
		return boolField4A1& 0x1;
	}
	inline bool SetwillDropToVicinity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMouseOverSlot(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetSlotContainer(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotContainerInterface>> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetMouseOverItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetMouseOverEquipableItem(t_structHelper inst, ExternalPtr<struct UEquipableItem> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetMouseOverAttachmentItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetSelectColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetDefaultColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x508, value); }
	inline bool SetSelectIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x530, value); }
	inline bool SetFocusableWidgetLis(t_structHelper inst, TArray<ExternalPtr<struct UUserWidget>> value) { inst.WriteOffset(0x538, value); }
	inline bool SetGamepadadSelectedAttachableItem(t_structHelper inst, ExternalPtr<struct UAttachableItem> value) { inst.WriteOffset(0x548, value); }
	inline bool bApplySkinMode()
	{
		return boolField550& 0x1;
	}
	inline bool SetbApplySkinMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x550, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bClearSkinMode()
	{
		return boolField551& 0x1;
	}
	inline bool SetbClearSkinMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x551, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventoryWidget_C = sizeof(UInventoryWidget_C); // 1362
    static_assert(sizeof(UInventoryWidget_C) == 0x552, "Size of UInventoryWidget_C is not correct.");
	auto constexpr UInventoryWidget_C_UberGraphFrame_Offset = offsetof(UInventoryWidget_C, UberGraphFrame);
	static_assert(UInventoryWidget_C_UberGraphFrame_Offset == 0x330, "UInventoryWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UInventoryWidget_C_XBoxHelpTextBlinking_Offset = offsetof(UInventoryWidget_C, XBoxHelpTextBlinking);
	static_assert(UInventoryWidget_C_XBoxHelpTextBlinking_Offset == 0x338, "UInventoryWidget_C::XBoxHelpTextBlinking offset is not 338");
	auto constexpr UInventoryWidget_C_InventoryFadeOut_Offset = offsetof(UInventoryWidget_C, InventoryFadeOut);
	static_assert(UInventoryWidget_C_InventoryFadeOut_Offset == 0x340, "UInventoryWidget_C::InventoryFadeOut offset is not 340");
	auto constexpr UInventoryWidget_C_InventoryFadeIn_Offset = offsetof(UInventoryWidget_C, InventoryFadeIn);
	static_assert(UInventoryWidget_C_InventoryFadeIn_Offset == 0x348, "UInventoryWidget_C::InventoryFadeIn offset is not 348");
	auto constexpr UInventoryWidget_C_VicinityTitleOnBlinking_Offset = offsetof(UInventoryWidget_C, VicinityTitleOnBlinking);
	static_assert(UInventoryWidget_C_VicinityTitleOnBlinking_Offset == 0x350, "UInventoryWidget_C::VicinityTitleOnBlinking offset is not 350");
	auto constexpr UInventoryWidget_C_VicinityTitleOffBlinking_Offset = offsetof(UInventoryWidget_C, VicinityTitleOffBlinking);
	static_assert(UInventoryWidget_C_VicinityTitleOffBlinking_Offset == 0x358, "UInventoryWidget_C::VicinityTitleOffBlinking offset is not 358");
	auto constexpr UInventoryWidget_C_VicinityTitleOn_Offset = offsetof(UInventoryWidget_C, VicinityTitleOn);
	static_assert(UInventoryWidget_C_VicinityTitleOn_Offset == 0x360, "UInventoryWidget_C::VicinityTitleOn offset is not 360");
	auto constexpr UInventoryWidget_C_VicinityTitleOff_Offset = offsetof(UInventoryWidget_C, VicinityTitleOff);
	static_assert(UInventoryWidget_C_VicinityTitleOff_Offset == 0x368, "UInventoryWidget_C::VicinityTitleOff offset is not 368");
	auto constexpr UInventoryWidget_C_A_ButtonHelpText_Offset = offsetof(UInventoryWidget_C, A_ButtonHelpText);
	static_assert(UInventoryWidget_C_A_ButtonHelpText_Offset == 0x370, "UInventoryWidget_C::A_ButtonHelpText offset is not 370");
	auto constexpr UInventoryWidget_C_B_ButtonHelpText_Offset = offsetof(UInventoryWidget_C, B_ButtonHelpText);
	static_assert(UInventoryWidget_C_B_ButtonHelpText_Offset == 0x378, "UInventoryWidget_C::B_ButtonHelpText offset is not 378");
	auto constexpr UInventoryWidget_C_Backpack_Offset = offsetof(UInventoryWidget_C, Backpack);
	static_assert(UInventoryWidget_C_Backpack_Offset == 0x380, "UInventoryWidget_C::Backpack offset is not 380");
	auto constexpr UInventoryWidget_C_Backpack_SizeBox_Offset = offsetof(UInventoryWidget_C, Backpack_SizeBox);
	static_assert(UInventoryWidget_C_Backpack_SizeBox_Offset == 0x388, "UInventoryWidget_C::Backpack_SizeBox offset is not 388");
	auto constexpr UInventoryWidget_C_Border_2_Offset = offsetof(UInventoryWidget_C, Border_2);
	static_assert(UInventoryWidget_C_Border_2_Offset == 0x390, "UInventoryWidget_C::Border_2 offset is not 390");
	auto constexpr UInventoryWidget_C_Border_4_Offset = offsetof(UInventoryWidget_C, Border_4);
	static_assert(UInventoryWidget_C_Border_4_Offset == 0x398, "UInventoryWidget_C::Border_4 offset is not 398");
	auto constexpr UInventoryWidget_C_btn_time_Offset = offsetof(UInventoryWidget_C, btn_time);
	static_assert(UInventoryWidget_C_btn_time_Offset == 0x3a0, "UInventoryWidget_C::btn_time offset is not 3a0");
	auto constexpr UInventoryWidget_C_btn_type_Offset = offsetof(UInventoryWidget_C, btn_type);
	static_assert(UInventoryWidget_C_btn_type_Offset == 0x3a8, "UInventoryWidget_C::btn_type offset is not 3a8");
	auto constexpr UInventoryWidget_C_ButonAHelpBox_Offset = offsetof(UInventoryWidget_C, ButonAHelpBox);
	static_assert(UInventoryWidget_C_ButonAHelpBox_Offset == 0x3b0, "UInventoryWidget_C::ButonAHelpBox offset is not 3b0");
	auto constexpr UInventoryWidget_C_Button_1_Offset = offsetof(UInventoryWidget_C, Button_1);
	static_assert(UInventoryWidget_C_Button_1_Offset == 0x3b8, "UInventoryWidget_C::Button_1 offset is not 3b8");
	auto constexpr UInventoryWidget_C_Button_2_Offset = offsetof(UInventoryWidget_C, Button_2);
	static_assert(UInventoryWidget_C_Button_2_Offset == 0x3c0, "UInventoryWidget_C::Button_2 offset is not 3c0");
	auto constexpr UInventoryWidget_C_ButtonBHelpBox_Offset = offsetof(UInventoryWidget_C, ButtonBHelpBox);
	static_assert(UInventoryWidget_C_ButtonBHelpBox_Offset == 0x3c8, "UInventoryWidget_C::ButtonBHelpBox offset is not 3c8");
	auto constexpr UInventoryWidget_C_CharacterSizeBox_Offset = offsetof(UInventoryWidget_C, CharacterSizeBox);
	static_assert(UInventoryWidget_C_CharacterSizeBox_Offset == 0x3d0, "UInventoryWidget_C::CharacterSizeBox offset is not 3d0");
	auto constexpr UInventoryWidget_C_Equipment_Offset = offsetof(UInventoryWidget_C, Equipment);
	static_assert(UInventoryWidget_C_Equipment_Offset == 0x3d8, "UInventoryWidget_C::Equipment offset is not 3d8");
	auto constexpr UInventoryWidget_C_GamepadGuide_Offset = offsetof(UInventoryWidget_C, GamepadGuide);
	static_assert(UInventoryWidget_C_GamepadGuide_Offset == 0x3e0, "UInventoryWidget_C::GamepadGuide offset is not 3e0");
	auto constexpr UInventoryWidget_C_HorizontalBox_1_Offset = offsetof(UInventoryWidget_C, HorizontalBox_1);
	static_assert(UInventoryWidget_C_HorizontalBox_1_Offset == 0x3e8, "UInventoryWidget_C::HorizontalBox_1 offset is not 3e8");
	auto constexpr UInventoryWidget_C_Image_1_Offset = offsetof(UInventoryWidget_C, Image_1);
	static_assert(UInventoryWidget_C_Image_1_Offset == 0x3f0, "UInventoryWidget_C::Image_1 offset is not 3f0");
	auto constexpr UInventoryWidget_C_Image_2_Offset = offsetof(UInventoryWidget_C, Image_2);
	static_assert(UInventoryWidget_C_Image_2_Offset == 0x3f8, "UInventoryWidget_C::Image_2 offset is not 3f8");
	auto constexpr UInventoryWidget_C_InventoryCapacityWidget_Offset = offsetof(UInventoryWidget_C, InventoryCapacityWidget);
	static_assert(UInventoryWidget_C_InventoryCapacityWidget_Offset == 0x400, "UInventoryWidget_C::InventoryCapacityWidget offset is not 400");
	auto constexpr UInventoryWidget_C_OptionalImage_Offset = offsetof(UInventoryWidget_C, OptionalImage);
	static_assert(UInventoryWidget_C_OptionalImage_Offset == 0x408, "UInventoryWidget_C::OptionalImage offset is not 408");
	auto constexpr UInventoryWidget_C_SizeBox_2_Offset = offsetof(UInventoryWidget_C, SizeBox_2);
	static_assert(UInventoryWidget_C_SizeBox_2_Offset == 0x410, "UInventoryWidget_C::SizeBox_2 offset is not 410");
	auto constexpr UInventoryWidget_C_SizeBox_3_Offset = offsetof(UInventoryWidget_C, SizeBox_3);
	static_assert(UInventoryWidget_C_SizeBox_3_Offset == 0x418, "UInventoryWidget_C::SizeBox_3 offset is not 418");
	auto constexpr UInventoryWidget_C_SortingButtonListBorder_Offset = offsetof(UInventoryWidget_C, SortingButtonListBorder);
	static_assert(UInventoryWidget_C_SortingButtonListBorder_Offset == 0x420, "UInventoryWidget_C::SortingButtonListBorder offset is not 420");
	auto constexpr UInventoryWidget_C_TextTime_Offset = offsetof(UInventoryWidget_C, TextTime);
	static_assert(UInventoryWidget_C_TextTime_Offset == 0x428, "UInventoryWidget_C::TextTime offset is not 428");
	auto constexpr UInventoryWidget_C_TextType_Offset = offsetof(UInventoryWidget_C, TextType);
	static_assert(UInventoryWidget_C_TextType_Offset == 0x430, "UInventoryWidget_C::TextType offset is not 430");
	auto constexpr UInventoryWidget_C_UIBlurBackground_Offset = offsetof(UInventoryWidget_C, UIBlurBackground);
	static_assert(UInventoryWidget_C_UIBlurBackground_Offset == 0x438, "UInventoryWidget_C::UIBlurBackground offset is not 438");
	auto constexpr UInventoryWidget_C_UserIDText_Offset = offsetof(UInventoryWidget_C, UserIDText);
	static_assert(UInventoryWidget_C_UserIDText_Offset == 0x440, "UInventoryWidget_C::UserIDText offset is not 440");
	auto constexpr UInventoryWidget_C_VerticalLine_Offset = offsetof(UInventoryWidget_C, VerticalLine);
	static_assert(UInventoryWidget_C_VerticalLine_Offset == 0x448, "UInventoryWidget_C::VerticalLine offset is not 448");
	auto constexpr UInventoryWidget_C_Vicinity_Offset = offsetof(UInventoryWidget_C, Vicinity);
	static_assert(UInventoryWidget_C_Vicinity_Offset == 0x450, "UInventoryWidget_C::Vicinity offset is not 450");
	auto constexpr UInventoryWidget_C_Vicinity_SizeBox_Offset = offsetof(UInventoryWidget_C, Vicinity_SizeBox);
	static_assert(UInventoryWidget_C_Vicinity_SizeBox_Offset == 0x458, "UInventoryWidget_C::Vicinity_SizeBox offset is not 458");
	auto constexpr UInventoryWidget_C_VicinityInfoBlock_Offset = offsetof(UInventoryWidget_C, VicinityInfoBlock);
	static_assert(UInventoryWidget_C_VicinityInfoBlock_Offset == 0x460, "UInventoryWidget_C::VicinityInfoBlock offset is not 460");
	auto constexpr UInventoryWidget_C_Weapon_Offset = offsetof(UInventoryWidget_C, Weapon);
	static_assert(UInventoryWidget_C_Weapon_Offset == 0x468, "UInventoryWidget_C::Weapon offset is not 468");
	auto constexpr UInventoryWidget_C_Weapon_SizeBox_Offset = offsetof(UInventoryWidget_C, Weapon_SizeBox);
	static_assert(UInventoryWidget_C_Weapon_SizeBox_Offset == 0x470, "UInventoryWidget_C::Weapon_SizeBox offset is not 470");
	auto constexpr UInventoryWidget_C_WeaponSkinGuideWidget_Offset = offsetof(UInventoryWidget_C, WeaponSkinGuideWidget);
	static_assert(UInventoryWidget_C_WeaponSkinGuideWidget_Offset == 0x478, "UInventoryWidget_C::WeaponSkinGuideWidget offset is not 478");
	auto constexpr UInventoryWidget_C_XBoxHelpTextBorder_Offset = offsetof(UInventoryWidget_C, XBoxHelpTextBorder);
	static_assert(UInventoryWidget_C_XBoxHelpTextBorder_Offset == 0x480, "UInventoryWidget_C::XBoxHelpTextBorder offset is not 480");
	auto constexpr UInventoryWidget_C_ItemExplorer_Offset = offsetof(UInventoryWidget_C, ItemExplorer);
	static_assert(UInventoryWidget_C_ItemExplorer_Offset == 0x488, "UInventoryWidget_C::ItemExplorer offset is not 488");
	auto constexpr UInventoryWidget_C_DragDroppingContent_Offset = offsetof(UInventoryWidget_C, DragDroppingContent);
	static_assert(UInventoryWidget_C_DragDroppingContent_Offset == 0x490, "UInventoryWidget_C::DragDroppingContent offset is not 490");
	auto constexpr UInventoryWidget_C_DragDroppingItem_Offset = offsetof(UInventoryWidget_C, DragDroppingItem);
	static_assert(UInventoryWidget_C_DragDroppingItem_Offset == 0x498, "UInventoryWidget_C::DragDroppingItem offset is not 498");
	auto constexpr UInventoryWidget_C_boolField4A0_Offset = offsetof(UInventoryWidget_C, boolField4A0);
	static_assert(UInventoryWidget_C_boolField4A0_Offset == 0x4a0, "UInventoryWidget_C::boolField4A0 offset is not 4a0");
	auto constexpr UInventoryWidget_C_boolField4A1_Offset = offsetof(UInventoryWidget_C, boolField4A1);
	static_assert(UInventoryWidget_C_boolField4A1_Offset == 0x4a1, "UInventoryWidget_C::boolField4A1 offset is not 4a1");
	auto constexpr UInventoryWidget_C_MouseOverSlot_Offset = offsetof(UInventoryWidget_C, MouseOverSlot);
	static_assert(UInventoryWidget_C_MouseOverSlot_Offset == 0x4a8, "UInventoryWidget_C::MouseOverSlot offset is not 4a8");
	auto constexpr UInventoryWidget_C_SlotContainer_Offset = offsetof(UInventoryWidget_C, SlotContainer);
	static_assert(UInventoryWidget_C_SlotContainer_Offset == 0x4b8, "UInventoryWidget_C::SlotContainer offset is not 4b8");
	auto constexpr UInventoryWidget_C_MouseOverItem_Offset = offsetof(UInventoryWidget_C, MouseOverItem);
	static_assert(UInventoryWidget_C_MouseOverItem_Offset == 0x4c8, "UInventoryWidget_C::MouseOverItem offset is not 4c8");
	auto constexpr UInventoryWidget_C_MouseOverEquipableItem_Offset = offsetof(UInventoryWidget_C, MouseOverEquipableItem);
	static_assert(UInventoryWidget_C_MouseOverEquipableItem_Offset == 0x4d0, "UInventoryWidget_C::MouseOverEquipableItem offset is not 4d0");
	auto constexpr UInventoryWidget_C_MouseOverAttachmentItem_Offset = offsetof(UInventoryWidget_C, MouseOverAttachmentItem);
	static_assert(UInventoryWidget_C_MouseOverAttachmentItem_Offset == 0x4d8, "UInventoryWidget_C::MouseOverAttachmentItem offset is not 4d8");
	auto constexpr UInventoryWidget_C_SelectColor_Offset = offsetof(UInventoryWidget_C, SelectColor);
	static_assert(UInventoryWidget_C_SelectColor_Offset == 0x4e0, "UInventoryWidget_C::SelectColor offset is not 4e0");
	auto constexpr UInventoryWidget_C_DefaultColor_Offset = offsetof(UInventoryWidget_C, DefaultColor);
	static_assert(UInventoryWidget_C_DefaultColor_Offset == 0x508, "UInventoryWidget_C::DefaultColor offset is not 508");
	auto constexpr UInventoryWidget_C_SelectIndex_Offset = offsetof(UInventoryWidget_C, SelectIndex);
	static_assert(UInventoryWidget_C_SelectIndex_Offset == 0x530, "UInventoryWidget_C::SelectIndex offset is not 530");
	auto constexpr UInventoryWidget_C_FocusableWidgetLis_Offset = offsetof(UInventoryWidget_C, FocusableWidgetLis);
	static_assert(UInventoryWidget_C_FocusableWidgetLis_Offset == 0x538, "UInventoryWidget_C::FocusableWidgetLis offset is not 538");
	auto constexpr UInventoryWidget_C_GamepadadSelectedAttachableItem_Offset = offsetof(UInventoryWidget_C, GamepadadSelectedAttachableItem);
	static_assert(UInventoryWidget_C_GamepadadSelectedAttachableItem_Offset == 0x548, "UInventoryWidget_C::GamepadadSelectedAttachableItem offset is not 548");
	auto constexpr UInventoryWidget_C_boolField550_Offset = offsetof(UInventoryWidget_C, boolField550);
	static_assert(UInventoryWidget_C_boolField550_Offset == 0x550, "UInventoryWidget_C::boolField550 offset is not 550");
	auto constexpr UInventoryWidget_C_boolField551_Offset = offsetof(UInventoryWidget_C, boolField551);
	static_assert(UInventoryWidget_C_boolField551_Offset == 0x551, "UInventoryWidget_C::boolField551 offset is not 551");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
