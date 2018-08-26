#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FButtonStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_WeaponMenu_C // Size: 0x1DA0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_WeaponMenu_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(89779); // id32("WidgetBlueprintGeneratedClass W_WeaponMenu.W_WeaponMenu_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_1 */
	ExternalPtr<struct UButton> Button_2; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_2 */
	ExternalPtr<struct UButton> Button_3; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_3 */
	ExternalPtr<struct UButton> Button_4; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_4 */
	ExternalPtr<struct UButton> Button_5; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_5 */
	ExternalPtr<struct UButton> Button_6; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_6 */
	ExternalPtr<struct UButton> Button_7; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_7 */
	ExternalPtr<struct UButton> Button_8; /* Ofs: 0x288 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_8 */
	ExternalPtr<struct UButton> Button_9; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_9 */
	ExternalPtr<struct UButton> Button_10; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_10 */
	ExternalPtr<struct UButton> Button_11; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_11 */
	ExternalPtr<struct UButton> Button_12; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_12 */
	ExternalPtr<struct UButton> Button_13; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_13 */
	ExternalPtr<struct UButton> Button_14; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_14 */
	ExternalPtr<struct UButton> Button_15; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_15 */
	ExternalPtr<struct UButton> Button_29; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_29 */
	ExternalPtr<struct UButton> Button_32; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_32 */
	ExternalPtr<struct UButton> Button_37; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_37 */
	ExternalPtr<struct UButton> Button_63; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_63 */
	ExternalPtr<struct UButton> Button_64; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_64 */
	ExternalPtr<struct UButton> Button_65; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_65 */
	ExternalPtr<struct UButton> Button_66; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_66 */
	ExternalPtr<struct UButton> Button_67; /* Ofs: 0x300 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_67 */
	ExternalPtr<struct UButton> Button_68; /* Ofs: 0x308 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_68 */
	ExternalPtr<struct UButton> Button_GiveAmmo; /* Ofs: 0x310 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Button_GiveAmmo */
	ExternalPtr<struct UTextBlock> Preset1_Button_Edit; /* Ofs: 0x318 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Preset1_Button_Edit */
	ExternalPtr<struct UTextBlock> Preset2_Button_Edit; /* Ofs: 0x320 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.Preset2_Button_Edit */
	ExternalPtr<struct UVerticalBox> VB_Ammo; /* Ofs: 0x328 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Ammo */
	ExternalPtr<struct UVerticalBox> VB_Armor; /* Ofs: 0x330 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Armor */
	ExternalPtr<struct UVerticalBox> VB_Backpack; /* Ofs: 0x338 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Backpack */
	ExternalPtr<struct UVerticalBox> VB_Cosmetic; /* Ofs: 0x340 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Cosmetic */
	ExternalPtr<struct UVerticalBox> VB_Helm; /* Ofs: 0x348 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Helm */
	ExternalPtr<struct UVerticalBox> VB_Lower; /* Ofs: 0x350 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Lower */
	ExternalPtr<struct UVerticalBox> VB_Mag; /* Ofs: 0x358 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Mag */
	ExternalPtr<struct UVerticalBox> VB_Meds; /* Ofs: 0x360 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Meds */
	ExternalPtr<struct UVerticalBox> VB_Melee; /* Ofs: 0x368 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Melee */
	ExternalPtr<struct UVerticalBox> VB_Muzzle; /* Ofs: 0x370 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Muzzle */
	ExternalPtr<struct UVerticalBox> VB_Other; /* Ofs: 0x378 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Other */
	ExternalPtr<struct UVerticalBox> VB_Pistols; /* Ofs: 0x380 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Pistols */
	ExternalPtr<struct UVerticalBox> VB_Preset_2; /* Ofs: 0x388 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Preset_2 */
	ExternalPtr<struct UVerticalBox> VB_Preset_3; /* Ofs: 0x390 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Preset_3 */
	ExternalPtr<struct UVerticalBox> VB_Rifle; /* Ofs: 0x398 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Rifle */
	ExternalPtr<struct UVerticalBox> VB_Scopes; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Scopes */
	ExternalPtr<struct UVerticalBox> VB_Shotguns; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Shotguns */
	ExternalPtr<struct UVerticalBox> VB_SMG; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_SMG */
	ExternalPtr<struct UVerticalBox> VB_Sniper; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Sniper */
	ExternalPtr<struct UVerticalBox> VB_Stock; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Stock */
	ExternalPtr<struct UVerticalBox> VB_Thrown; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.VB_Thrown */
	ExternalPtr<struct UW_Emote_QuickMenu_C> W_Emote_QuickMenu_79; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.W_Emote_QuickMenu_79 */
	ExternalPtr<struct UWrapBox> WB_Emotes; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.WB_Emotes */
	ExternalPtr<struct UWidgetSwitcher> WidgetSwitcher_1; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.WidgetSwitcher_1 */
	TArray<ExternalPtr<struct UClass>> WeapClassArray_Pistol; /* Ofs: 0x3E8 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.WeapClassArray_Pistol */
	TArray<ExternalPtr<struct UClass>> WeapClassArray_SMG; /* Ofs: 0x3F8 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.WeapClassArray_SMG */
	TArray<ExternalPtr<struct UClass>> WeapClassArray_Shotgun; /* Ofs: 0x408 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.WeapClassArray_Shotgun */
	TArray<ExternalPtr<struct UClass>> WeapClassArray_Rifle; /* Ofs: 0x418 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.WeapClassArray_Rifle */
	TArray<ExternalPtr<struct UClass>> WeapClassArray_Sniper; /* Ofs: 0x428 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.WeapClassArray_Sniper */
	TArray<ExternalPtr<struct UClass>> WeapClassArray_Other; /* Ofs: 0x438 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.WeapClassArray_Other */
	FButtonStyle WeapButtonStyle; /* Ofs: 0x448 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.WeapButtonStyle */
	TArray<ExternalPtr<struct UClass>> AttachClassArray_Scopes; /* Ofs: 0x6F0 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.AttachClassArray_Scopes */
	TArray<ExternalPtr<struct UClass>> AttachClassArray_Muzzle; /* Ofs: 0x700 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.AttachClassArray_Muzzle */
	TArray<ExternalPtr<struct UClass>> AttachClassArray_Mag; /* Ofs: 0x710 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.AttachClassArray_Mag */
	TArray<ExternalPtr<struct UClass>> AttachClassArray_Lower; /* Ofs: 0x720 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.AttachClassArray_Lower */
	TArray<ExternalPtr<struct UClass>> AttachClassArray_Stock; /* Ofs: 0x730 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.AttachClassArray_Stock */
	FButtonStyle AttachButtonStyle; /* Ofs: 0x740 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.AttachButtonStyle */
	TArray<ExternalPtr<struct UClass>> ArmorClassArray_Helm; /* Ofs: 0x9E8 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.ArmorClassArray_Helm */
	TArray<ExternalPtr<struct UClass>> ArmorClassArray_Armor; /* Ofs: 0x9F8 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.ArmorClassArray_Armor */
	TArray<ExternalPtr<struct UClass>> ArmorClassArray_Backpack; /* Ofs: 0xA08 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.ArmorClassArray_Backpack */
	FButtonStyle ArmorButtonStyle; /* Ofs: 0xA18 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.ArmorButtonStyle */
	TArray<ExternalPtr<struct UClass>> MedsClassArray_Meds; /* Ofs: 0xCC0 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.MedsClassArray_Meds */
	FButtonStyle MedsButtonStyle; /* Ofs: 0xCD0 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.MedsButtonStyle */
	TArray<ExternalPtr<struct UClass>> ThrownClassArray_Thrown; /* Ofs: 0xF78 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.ThrownClassArray_Thrown */
	FButtonStyle ThrownButtonStyle; /* Ofs: 0xF88 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.ThrownButtonStyle */
	TArray<ExternalPtr<struct UClass>> CosmeticClassArray_Cosmetic; /* Ofs: 0x1230 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.CosmeticClassArray_Cosmetic */
	FButtonStyle CosmeticButtonStyle; /* Ofs: 0x1240 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.CosmeticButtonStyle */
	ExternalPtr<struct UPlayerPawn_v2_C> CharRef; /* Ofs: 0x14E8 Size: 0x8 - ObjectProperty W_WeaponMenu.W_WeaponMenu_C.CharRef */
	uint8_t boolField14F0;
	uint8_t UnknownData14F1[0x3];
	int32_t ActivePresetArray; /* Ofs: 0x14F4 Size: 0x4 - IntProperty W_WeaponMenu.W_WeaponMenu_C.ActivePresetArray */
	TArray<ExternalPtr<struct UClass>> PresetArray_2; /* Ofs: 0x14F8 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.PresetArray_2 */
	TArray<ExternalPtr<struct UClass>> PresetArray_3; /* Ofs: 0x1508 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.PresetArray_3 */
	TArray<ExternalPtr<struct UClass>> PresetArray_4; /* Ofs: 0x1518 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.PresetArray_4 */
	FButtonStyle PresetButtonStyle; /* Ofs: 0x1528 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.PresetButtonStyle */
	TArray<ExternalPtr<struct UClass>> AmmoClassArray_Ammo; /* Ofs: 0x17D0 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.AmmoClassArray_Ammo */
	FButtonStyle AmmoButtonStyle; /* Ofs: 0x17E0 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.AmmoButtonStyle */
	TArray<ExternalPtr<struct UClass>> MeleeClassArray; /* Ofs: 0x1A88 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.MeleeClassArray */
	FButtonStyle MeleeButtonStyle; /* Ofs: 0x1A98 Size: 0x2A8 - StructProperty W_WeaponMenu.W_WeaponMenu_C.MeleeButtonStyle */
	TArray<ExternalPtr<struct UClass>> slavarray; /* Ofs: 0x1D40 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.slavarray */
	TArray<ExternalPtr<struct UClass>> Feet; /* Ofs: 0x1D50 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.Feet */
	TArray<ExternalPtr<struct UClass>> Hands; /* Ofs: 0x1D60 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.Hands */
	TArray<ExternalPtr<struct UClass>> Legs; /* Ofs: 0x1D70 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.Legs */
	TArray<ExternalPtr<struct UClass>> Body; /* Ofs: 0x1D80 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.Body */
	TArray<ExternalPtr<struct UClass>> Jacket; /* Ofs: 0x1D90 Size: 0x10 - ArrayProperty W_WeaponMenu.W_WeaponMenu_C.Jacket */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetButton_2(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetButton_3(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x260, value); }
	inline bool SetButton_4(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x268, value); }
	inline bool SetButton_5(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x270, value); }
	inline bool SetButton_6(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x278, value); }
	inline bool SetButton_7(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x280, value); }
	inline bool SetButton_8(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x288, value); }
	inline bool SetButton_9(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x290, value); }
	inline bool SetButton_10(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x298, value); }
	inline bool SetButton_11(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetButton_12(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetButton_13(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetButton_14(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetButton_15(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetButton_29(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetButton_32(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetButton_37(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetButton_63(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetButton_64(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetButton_65(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetButton_66(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetButton_67(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x300, value); }
	inline bool SetButton_68(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x308, value); }
	inline bool SetButton_GiveAmmo(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x310, value); }
	inline bool SetPreset1_Button_Edit(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x318, value); }
	inline bool SetPreset2_Button_Edit(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x320, value); }
	inline bool SetVB_Ammo(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x328, value); }
	inline bool SetVB_Armor(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x330, value); }
	inline bool SetVB_Backpack(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x338, value); }
	inline bool SetVB_Cosmetic(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x340, value); }
	inline bool SetVB_Helm(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x348, value); }
	inline bool SetVB_Lower(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x350, value); }
	inline bool SetVB_Mag(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x358, value); }
	inline bool SetVB_Meds(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x360, value); }
	inline bool SetVB_Melee(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x368, value); }
	inline bool SetVB_Muzzle(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x370, value); }
	inline bool SetVB_Other(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x378, value); }
	inline bool SetVB_Pistols(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetVB_Preset_2(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x388, value); }
	inline bool SetVB_Preset_3(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x390, value); }
	inline bool SetVB_Rifle(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x398, value); }
	inline bool SetVB_Scopes(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetVB_Shotguns(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetVB_SMG(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetVB_Sniper(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetVB_Stock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetVB_Thrown(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetW_Emote_QuickMenu_79(t_structHelper inst, ExternalPtr<struct UW_Emote_QuickMenu_C> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetWB_Emotes(t_structHelper inst, ExternalPtr<struct UWrapBox> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetWidgetSwitcher_1(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetWeapClassArray_Pistol(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetWeapClassArray_SMG(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetWeapClassArray_Shotgun(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x408, value); }
	inline bool SetWeapClassArray_Rifle(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x418, value); }
	inline bool SetWeapClassArray_Sniper(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x428, value); }
	inline bool SetWeapClassArray_Other(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x438, value); }
	inline bool SetWeapButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x448, value); }
	inline bool SetAttachClassArray_Scopes(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetAttachClassArray_Muzzle(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x700, value); }
	inline bool SetAttachClassArray_Mag(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x710, value); }
	inline bool SetAttachClassArray_Lower(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x720, value); }
	inline bool SetAttachClassArray_Stock(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x730, value); }
	inline bool SetAttachButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x740, value); }
	inline bool SetArmorClassArray_Helm(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetArmorClassArray_Armor(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetArmorClassArray_Backpack(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetArmorButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0xA18, value); }
	inline bool SetMedsClassArray_Meds(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetMedsButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0xCD0, value); }
	inline bool SetThrownClassArray_Thrown(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0xF78, value); }
	inline bool SetThrownButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0xF88, value); }
	inline bool SetCosmeticClassArray_Cosmetic(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1230, value); }
	inline bool SetCosmeticButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x1240, value); }
	inline bool SetCharRef(t_structHelper inst, ExternalPtr<struct UPlayerPawn_v2_C> value) { inst.WriteOffset(0x14E8, value); }
	inline bool bSavePresetMode()
	{
		return boolField14F0& 0x1;
	}
	inline bool SetbSavePresetMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x14F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetActivePresetArray(t_structHelper inst, int32_t value) { inst.WriteOffset(0x14F4, value); }
	inline bool SetPresetArray_2(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x14F8, value); }
	inline bool SetPresetArray_3(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1508, value); }
	inline bool SetPresetArray_4(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1518, value); }
	inline bool SetPresetButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x1528, value); }
	inline bool SetAmmoClassArray_Ammo(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x17D0, value); }
	inline bool SetAmmoButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x17E0, value); }
	inline bool SetMeleeClassArray(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1A88, value); }
	inline bool SetMeleeButtonStyle(t_structHelper inst, FButtonStyle value) { inst.WriteOffset(0x1A98, value); }
	inline bool Setslavarray(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1D40, value); }
	inline bool SetFeet(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1D50, value); }
	inline bool SetHands(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1D60, value); }
	inline bool SetLegs(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1D70, value); }
	inline bool SetBody(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1D80, value); }
	inline bool SetJacket(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1D90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_WeaponMenu_C = sizeof(UW_WeaponMenu_C); // 7584
    static_assert(sizeof(UW_WeaponMenu_C) == 0x1DA0, "Size of UW_WeaponMenu_C is not correct.");
	auto constexpr UW_WeaponMenu_C_UberGraphFrame_Offset = offsetof(UW_WeaponMenu_C, UberGraphFrame);
	static_assert(UW_WeaponMenu_C_UberGraphFrame_Offset == 0x248, "UW_WeaponMenu_C::UberGraphFrame offset is not 248");
	auto constexpr UW_WeaponMenu_C_Button_1_Offset = offsetof(UW_WeaponMenu_C, Button_1);
	static_assert(UW_WeaponMenu_C_Button_1_Offset == 0x250, "UW_WeaponMenu_C::Button_1 offset is not 250");
	auto constexpr UW_WeaponMenu_C_Button_2_Offset = offsetof(UW_WeaponMenu_C, Button_2);
	static_assert(UW_WeaponMenu_C_Button_2_Offset == 0x258, "UW_WeaponMenu_C::Button_2 offset is not 258");
	auto constexpr UW_WeaponMenu_C_Button_3_Offset = offsetof(UW_WeaponMenu_C, Button_3);
	static_assert(UW_WeaponMenu_C_Button_3_Offset == 0x260, "UW_WeaponMenu_C::Button_3 offset is not 260");
	auto constexpr UW_WeaponMenu_C_Button_4_Offset = offsetof(UW_WeaponMenu_C, Button_4);
	static_assert(UW_WeaponMenu_C_Button_4_Offset == 0x268, "UW_WeaponMenu_C::Button_4 offset is not 268");
	auto constexpr UW_WeaponMenu_C_Button_5_Offset = offsetof(UW_WeaponMenu_C, Button_5);
	static_assert(UW_WeaponMenu_C_Button_5_Offset == 0x270, "UW_WeaponMenu_C::Button_5 offset is not 270");
	auto constexpr UW_WeaponMenu_C_Button_6_Offset = offsetof(UW_WeaponMenu_C, Button_6);
	static_assert(UW_WeaponMenu_C_Button_6_Offset == 0x278, "UW_WeaponMenu_C::Button_6 offset is not 278");
	auto constexpr UW_WeaponMenu_C_Button_7_Offset = offsetof(UW_WeaponMenu_C, Button_7);
	static_assert(UW_WeaponMenu_C_Button_7_Offset == 0x280, "UW_WeaponMenu_C::Button_7 offset is not 280");
	auto constexpr UW_WeaponMenu_C_Button_8_Offset = offsetof(UW_WeaponMenu_C, Button_8);
	static_assert(UW_WeaponMenu_C_Button_8_Offset == 0x288, "UW_WeaponMenu_C::Button_8 offset is not 288");
	auto constexpr UW_WeaponMenu_C_Button_9_Offset = offsetof(UW_WeaponMenu_C, Button_9);
	static_assert(UW_WeaponMenu_C_Button_9_Offset == 0x290, "UW_WeaponMenu_C::Button_9 offset is not 290");
	auto constexpr UW_WeaponMenu_C_Button_10_Offset = offsetof(UW_WeaponMenu_C, Button_10);
	static_assert(UW_WeaponMenu_C_Button_10_Offset == 0x298, "UW_WeaponMenu_C::Button_10 offset is not 298");
	auto constexpr UW_WeaponMenu_C_Button_11_Offset = offsetof(UW_WeaponMenu_C, Button_11);
	static_assert(UW_WeaponMenu_C_Button_11_Offset == 0x2a0, "UW_WeaponMenu_C::Button_11 offset is not 2a0");
	auto constexpr UW_WeaponMenu_C_Button_12_Offset = offsetof(UW_WeaponMenu_C, Button_12);
	static_assert(UW_WeaponMenu_C_Button_12_Offset == 0x2a8, "UW_WeaponMenu_C::Button_12 offset is not 2a8");
	auto constexpr UW_WeaponMenu_C_Button_13_Offset = offsetof(UW_WeaponMenu_C, Button_13);
	static_assert(UW_WeaponMenu_C_Button_13_Offset == 0x2b0, "UW_WeaponMenu_C::Button_13 offset is not 2b0");
	auto constexpr UW_WeaponMenu_C_Button_14_Offset = offsetof(UW_WeaponMenu_C, Button_14);
	static_assert(UW_WeaponMenu_C_Button_14_Offset == 0x2b8, "UW_WeaponMenu_C::Button_14 offset is not 2b8");
	auto constexpr UW_WeaponMenu_C_Button_15_Offset = offsetof(UW_WeaponMenu_C, Button_15);
	static_assert(UW_WeaponMenu_C_Button_15_Offset == 0x2c0, "UW_WeaponMenu_C::Button_15 offset is not 2c0");
	auto constexpr UW_WeaponMenu_C_Button_29_Offset = offsetof(UW_WeaponMenu_C, Button_29);
	static_assert(UW_WeaponMenu_C_Button_29_Offset == 0x2c8, "UW_WeaponMenu_C::Button_29 offset is not 2c8");
	auto constexpr UW_WeaponMenu_C_Button_32_Offset = offsetof(UW_WeaponMenu_C, Button_32);
	static_assert(UW_WeaponMenu_C_Button_32_Offset == 0x2d0, "UW_WeaponMenu_C::Button_32 offset is not 2d0");
	auto constexpr UW_WeaponMenu_C_Button_37_Offset = offsetof(UW_WeaponMenu_C, Button_37);
	static_assert(UW_WeaponMenu_C_Button_37_Offset == 0x2d8, "UW_WeaponMenu_C::Button_37 offset is not 2d8");
	auto constexpr UW_WeaponMenu_C_Button_63_Offset = offsetof(UW_WeaponMenu_C, Button_63);
	static_assert(UW_WeaponMenu_C_Button_63_Offset == 0x2e0, "UW_WeaponMenu_C::Button_63 offset is not 2e0");
	auto constexpr UW_WeaponMenu_C_Button_64_Offset = offsetof(UW_WeaponMenu_C, Button_64);
	static_assert(UW_WeaponMenu_C_Button_64_Offset == 0x2e8, "UW_WeaponMenu_C::Button_64 offset is not 2e8");
	auto constexpr UW_WeaponMenu_C_Button_65_Offset = offsetof(UW_WeaponMenu_C, Button_65);
	static_assert(UW_WeaponMenu_C_Button_65_Offset == 0x2f0, "UW_WeaponMenu_C::Button_65 offset is not 2f0");
	auto constexpr UW_WeaponMenu_C_Button_66_Offset = offsetof(UW_WeaponMenu_C, Button_66);
	static_assert(UW_WeaponMenu_C_Button_66_Offset == 0x2f8, "UW_WeaponMenu_C::Button_66 offset is not 2f8");
	auto constexpr UW_WeaponMenu_C_Button_67_Offset = offsetof(UW_WeaponMenu_C, Button_67);
	static_assert(UW_WeaponMenu_C_Button_67_Offset == 0x300, "UW_WeaponMenu_C::Button_67 offset is not 300");
	auto constexpr UW_WeaponMenu_C_Button_68_Offset = offsetof(UW_WeaponMenu_C, Button_68);
	static_assert(UW_WeaponMenu_C_Button_68_Offset == 0x308, "UW_WeaponMenu_C::Button_68 offset is not 308");
	auto constexpr UW_WeaponMenu_C_Button_GiveAmmo_Offset = offsetof(UW_WeaponMenu_C, Button_GiveAmmo);
	static_assert(UW_WeaponMenu_C_Button_GiveAmmo_Offset == 0x310, "UW_WeaponMenu_C::Button_GiveAmmo offset is not 310");
	auto constexpr UW_WeaponMenu_C_Preset1_Button_Edit_Offset = offsetof(UW_WeaponMenu_C, Preset1_Button_Edit);
	static_assert(UW_WeaponMenu_C_Preset1_Button_Edit_Offset == 0x318, "UW_WeaponMenu_C::Preset1_Button_Edit offset is not 318");
	auto constexpr UW_WeaponMenu_C_Preset2_Button_Edit_Offset = offsetof(UW_WeaponMenu_C, Preset2_Button_Edit);
	static_assert(UW_WeaponMenu_C_Preset2_Button_Edit_Offset == 0x320, "UW_WeaponMenu_C::Preset2_Button_Edit offset is not 320");
	auto constexpr UW_WeaponMenu_C_VB_Ammo_Offset = offsetof(UW_WeaponMenu_C, VB_Ammo);
	static_assert(UW_WeaponMenu_C_VB_Ammo_Offset == 0x328, "UW_WeaponMenu_C::VB_Ammo offset is not 328");
	auto constexpr UW_WeaponMenu_C_VB_Armor_Offset = offsetof(UW_WeaponMenu_C, VB_Armor);
	static_assert(UW_WeaponMenu_C_VB_Armor_Offset == 0x330, "UW_WeaponMenu_C::VB_Armor offset is not 330");
	auto constexpr UW_WeaponMenu_C_VB_Backpack_Offset = offsetof(UW_WeaponMenu_C, VB_Backpack);
	static_assert(UW_WeaponMenu_C_VB_Backpack_Offset == 0x338, "UW_WeaponMenu_C::VB_Backpack offset is not 338");
	auto constexpr UW_WeaponMenu_C_VB_Cosmetic_Offset = offsetof(UW_WeaponMenu_C, VB_Cosmetic);
	static_assert(UW_WeaponMenu_C_VB_Cosmetic_Offset == 0x340, "UW_WeaponMenu_C::VB_Cosmetic offset is not 340");
	auto constexpr UW_WeaponMenu_C_VB_Helm_Offset = offsetof(UW_WeaponMenu_C, VB_Helm);
	static_assert(UW_WeaponMenu_C_VB_Helm_Offset == 0x348, "UW_WeaponMenu_C::VB_Helm offset is not 348");
	auto constexpr UW_WeaponMenu_C_VB_Lower_Offset = offsetof(UW_WeaponMenu_C, VB_Lower);
	static_assert(UW_WeaponMenu_C_VB_Lower_Offset == 0x350, "UW_WeaponMenu_C::VB_Lower offset is not 350");
	auto constexpr UW_WeaponMenu_C_VB_Mag_Offset = offsetof(UW_WeaponMenu_C, VB_Mag);
	static_assert(UW_WeaponMenu_C_VB_Mag_Offset == 0x358, "UW_WeaponMenu_C::VB_Mag offset is not 358");
	auto constexpr UW_WeaponMenu_C_VB_Meds_Offset = offsetof(UW_WeaponMenu_C, VB_Meds);
	static_assert(UW_WeaponMenu_C_VB_Meds_Offset == 0x360, "UW_WeaponMenu_C::VB_Meds offset is not 360");
	auto constexpr UW_WeaponMenu_C_VB_Melee_Offset = offsetof(UW_WeaponMenu_C, VB_Melee);
	static_assert(UW_WeaponMenu_C_VB_Melee_Offset == 0x368, "UW_WeaponMenu_C::VB_Melee offset is not 368");
	auto constexpr UW_WeaponMenu_C_VB_Muzzle_Offset = offsetof(UW_WeaponMenu_C, VB_Muzzle);
	static_assert(UW_WeaponMenu_C_VB_Muzzle_Offset == 0x370, "UW_WeaponMenu_C::VB_Muzzle offset is not 370");
	auto constexpr UW_WeaponMenu_C_VB_Other_Offset = offsetof(UW_WeaponMenu_C, VB_Other);
	static_assert(UW_WeaponMenu_C_VB_Other_Offset == 0x378, "UW_WeaponMenu_C::VB_Other offset is not 378");
	auto constexpr UW_WeaponMenu_C_VB_Pistols_Offset = offsetof(UW_WeaponMenu_C, VB_Pistols);
	static_assert(UW_WeaponMenu_C_VB_Pistols_Offset == 0x380, "UW_WeaponMenu_C::VB_Pistols offset is not 380");
	auto constexpr UW_WeaponMenu_C_VB_Preset_2_Offset = offsetof(UW_WeaponMenu_C, VB_Preset_2);
	static_assert(UW_WeaponMenu_C_VB_Preset_2_Offset == 0x388, "UW_WeaponMenu_C::VB_Preset_2 offset is not 388");
	auto constexpr UW_WeaponMenu_C_VB_Preset_3_Offset = offsetof(UW_WeaponMenu_C, VB_Preset_3);
	static_assert(UW_WeaponMenu_C_VB_Preset_3_Offset == 0x390, "UW_WeaponMenu_C::VB_Preset_3 offset is not 390");
	auto constexpr UW_WeaponMenu_C_VB_Rifle_Offset = offsetof(UW_WeaponMenu_C, VB_Rifle);
	static_assert(UW_WeaponMenu_C_VB_Rifle_Offset == 0x398, "UW_WeaponMenu_C::VB_Rifle offset is not 398");
	auto constexpr UW_WeaponMenu_C_VB_Scopes_Offset = offsetof(UW_WeaponMenu_C, VB_Scopes);
	static_assert(UW_WeaponMenu_C_VB_Scopes_Offset == 0x3a0, "UW_WeaponMenu_C::VB_Scopes offset is not 3a0");
	auto constexpr UW_WeaponMenu_C_VB_Shotguns_Offset = offsetof(UW_WeaponMenu_C, VB_Shotguns);
	static_assert(UW_WeaponMenu_C_VB_Shotguns_Offset == 0x3a8, "UW_WeaponMenu_C::VB_Shotguns offset is not 3a8");
	auto constexpr UW_WeaponMenu_C_VB_SMG_Offset = offsetof(UW_WeaponMenu_C, VB_SMG);
	static_assert(UW_WeaponMenu_C_VB_SMG_Offset == 0x3b0, "UW_WeaponMenu_C::VB_SMG offset is not 3b0");
	auto constexpr UW_WeaponMenu_C_VB_Sniper_Offset = offsetof(UW_WeaponMenu_C, VB_Sniper);
	static_assert(UW_WeaponMenu_C_VB_Sniper_Offset == 0x3b8, "UW_WeaponMenu_C::VB_Sniper offset is not 3b8");
	auto constexpr UW_WeaponMenu_C_VB_Stock_Offset = offsetof(UW_WeaponMenu_C, VB_Stock);
	static_assert(UW_WeaponMenu_C_VB_Stock_Offset == 0x3c0, "UW_WeaponMenu_C::VB_Stock offset is not 3c0");
	auto constexpr UW_WeaponMenu_C_VB_Thrown_Offset = offsetof(UW_WeaponMenu_C, VB_Thrown);
	static_assert(UW_WeaponMenu_C_VB_Thrown_Offset == 0x3c8, "UW_WeaponMenu_C::VB_Thrown offset is not 3c8");
	auto constexpr UW_WeaponMenu_C_W_Emote_QuickMenu_79_Offset = offsetof(UW_WeaponMenu_C, W_Emote_QuickMenu_79);
	static_assert(UW_WeaponMenu_C_W_Emote_QuickMenu_79_Offset == 0x3d0, "UW_WeaponMenu_C::W_Emote_QuickMenu_79 offset is not 3d0");
	auto constexpr UW_WeaponMenu_C_WB_Emotes_Offset = offsetof(UW_WeaponMenu_C, WB_Emotes);
	static_assert(UW_WeaponMenu_C_WB_Emotes_Offset == 0x3d8, "UW_WeaponMenu_C::WB_Emotes offset is not 3d8");
	auto constexpr UW_WeaponMenu_C_WidgetSwitcher_1_Offset = offsetof(UW_WeaponMenu_C, WidgetSwitcher_1);
	static_assert(UW_WeaponMenu_C_WidgetSwitcher_1_Offset == 0x3e0, "UW_WeaponMenu_C::WidgetSwitcher_1 offset is not 3e0");
	auto constexpr UW_WeaponMenu_C_WeapClassArray_Pistol_Offset = offsetof(UW_WeaponMenu_C, WeapClassArray_Pistol);
	static_assert(UW_WeaponMenu_C_WeapClassArray_Pistol_Offset == 0x3e8, "UW_WeaponMenu_C::WeapClassArray_Pistol offset is not 3e8");
	auto constexpr UW_WeaponMenu_C_WeapClassArray_SMG_Offset = offsetof(UW_WeaponMenu_C, WeapClassArray_SMG);
	static_assert(UW_WeaponMenu_C_WeapClassArray_SMG_Offset == 0x3f8, "UW_WeaponMenu_C::WeapClassArray_SMG offset is not 3f8");
	auto constexpr UW_WeaponMenu_C_WeapClassArray_Shotgun_Offset = offsetof(UW_WeaponMenu_C, WeapClassArray_Shotgun);
	static_assert(UW_WeaponMenu_C_WeapClassArray_Shotgun_Offset == 0x408, "UW_WeaponMenu_C::WeapClassArray_Shotgun offset is not 408");
	auto constexpr UW_WeaponMenu_C_WeapClassArray_Rifle_Offset = offsetof(UW_WeaponMenu_C, WeapClassArray_Rifle);
	static_assert(UW_WeaponMenu_C_WeapClassArray_Rifle_Offset == 0x418, "UW_WeaponMenu_C::WeapClassArray_Rifle offset is not 418");
	auto constexpr UW_WeaponMenu_C_WeapClassArray_Sniper_Offset = offsetof(UW_WeaponMenu_C, WeapClassArray_Sniper);
	static_assert(UW_WeaponMenu_C_WeapClassArray_Sniper_Offset == 0x428, "UW_WeaponMenu_C::WeapClassArray_Sniper offset is not 428");
	auto constexpr UW_WeaponMenu_C_WeapClassArray_Other_Offset = offsetof(UW_WeaponMenu_C, WeapClassArray_Other);
	static_assert(UW_WeaponMenu_C_WeapClassArray_Other_Offset == 0x438, "UW_WeaponMenu_C::WeapClassArray_Other offset is not 438");
	auto constexpr UW_WeaponMenu_C_WeapButtonStyle_Offset = offsetof(UW_WeaponMenu_C, WeapButtonStyle);
	static_assert(UW_WeaponMenu_C_WeapButtonStyle_Offset == 0x448, "UW_WeaponMenu_C::WeapButtonStyle offset is not 448");
	auto constexpr UW_WeaponMenu_C_AttachClassArray_Scopes_Offset = offsetof(UW_WeaponMenu_C, AttachClassArray_Scopes);
	static_assert(UW_WeaponMenu_C_AttachClassArray_Scopes_Offset == 0x6f0, "UW_WeaponMenu_C::AttachClassArray_Scopes offset is not 6f0");
	auto constexpr UW_WeaponMenu_C_AttachClassArray_Muzzle_Offset = offsetof(UW_WeaponMenu_C, AttachClassArray_Muzzle);
	static_assert(UW_WeaponMenu_C_AttachClassArray_Muzzle_Offset == 0x700, "UW_WeaponMenu_C::AttachClassArray_Muzzle offset is not 700");
	auto constexpr UW_WeaponMenu_C_AttachClassArray_Mag_Offset = offsetof(UW_WeaponMenu_C, AttachClassArray_Mag);
	static_assert(UW_WeaponMenu_C_AttachClassArray_Mag_Offset == 0x710, "UW_WeaponMenu_C::AttachClassArray_Mag offset is not 710");
	auto constexpr UW_WeaponMenu_C_AttachClassArray_Lower_Offset = offsetof(UW_WeaponMenu_C, AttachClassArray_Lower);
	static_assert(UW_WeaponMenu_C_AttachClassArray_Lower_Offset == 0x720, "UW_WeaponMenu_C::AttachClassArray_Lower offset is not 720");
	auto constexpr UW_WeaponMenu_C_AttachClassArray_Stock_Offset = offsetof(UW_WeaponMenu_C, AttachClassArray_Stock);
	static_assert(UW_WeaponMenu_C_AttachClassArray_Stock_Offset == 0x730, "UW_WeaponMenu_C::AttachClassArray_Stock offset is not 730");
	auto constexpr UW_WeaponMenu_C_AttachButtonStyle_Offset = offsetof(UW_WeaponMenu_C, AttachButtonStyle);
	static_assert(UW_WeaponMenu_C_AttachButtonStyle_Offset == 0x740, "UW_WeaponMenu_C::AttachButtonStyle offset is not 740");
	auto constexpr UW_WeaponMenu_C_ArmorClassArray_Helm_Offset = offsetof(UW_WeaponMenu_C, ArmorClassArray_Helm);
	static_assert(UW_WeaponMenu_C_ArmorClassArray_Helm_Offset == 0x9e8, "UW_WeaponMenu_C::ArmorClassArray_Helm offset is not 9e8");
	auto constexpr UW_WeaponMenu_C_ArmorClassArray_Armor_Offset = offsetof(UW_WeaponMenu_C, ArmorClassArray_Armor);
	static_assert(UW_WeaponMenu_C_ArmorClassArray_Armor_Offset == 0x9f8, "UW_WeaponMenu_C::ArmorClassArray_Armor offset is not 9f8");
	auto constexpr UW_WeaponMenu_C_ArmorClassArray_Backpack_Offset = offsetof(UW_WeaponMenu_C, ArmorClassArray_Backpack);
	static_assert(UW_WeaponMenu_C_ArmorClassArray_Backpack_Offset == 0xa08, "UW_WeaponMenu_C::ArmorClassArray_Backpack offset is not a08");
	auto constexpr UW_WeaponMenu_C_ArmorButtonStyle_Offset = offsetof(UW_WeaponMenu_C, ArmorButtonStyle);
	static_assert(UW_WeaponMenu_C_ArmorButtonStyle_Offset == 0xa18, "UW_WeaponMenu_C::ArmorButtonStyle offset is not a18");
	auto constexpr UW_WeaponMenu_C_MedsClassArray_Meds_Offset = offsetof(UW_WeaponMenu_C, MedsClassArray_Meds);
	static_assert(UW_WeaponMenu_C_MedsClassArray_Meds_Offset == 0xcc0, "UW_WeaponMenu_C::MedsClassArray_Meds offset is not cc0");
	auto constexpr UW_WeaponMenu_C_MedsButtonStyle_Offset = offsetof(UW_WeaponMenu_C, MedsButtonStyle);
	static_assert(UW_WeaponMenu_C_MedsButtonStyle_Offset == 0xcd0, "UW_WeaponMenu_C::MedsButtonStyle offset is not cd0");
	auto constexpr UW_WeaponMenu_C_ThrownClassArray_Thrown_Offset = offsetof(UW_WeaponMenu_C, ThrownClassArray_Thrown);
	static_assert(UW_WeaponMenu_C_ThrownClassArray_Thrown_Offset == 0xf78, "UW_WeaponMenu_C::ThrownClassArray_Thrown offset is not f78");
	auto constexpr UW_WeaponMenu_C_ThrownButtonStyle_Offset = offsetof(UW_WeaponMenu_C, ThrownButtonStyle);
	static_assert(UW_WeaponMenu_C_ThrownButtonStyle_Offset == 0xf88, "UW_WeaponMenu_C::ThrownButtonStyle offset is not f88");
	auto constexpr UW_WeaponMenu_C_CosmeticClassArray_Cosmetic_Offset = offsetof(UW_WeaponMenu_C, CosmeticClassArray_Cosmetic);
	static_assert(UW_WeaponMenu_C_CosmeticClassArray_Cosmetic_Offset == 0x1230, "UW_WeaponMenu_C::CosmeticClassArray_Cosmetic offset is not 1230");
	auto constexpr UW_WeaponMenu_C_CosmeticButtonStyle_Offset = offsetof(UW_WeaponMenu_C, CosmeticButtonStyle);
	static_assert(UW_WeaponMenu_C_CosmeticButtonStyle_Offset == 0x1240, "UW_WeaponMenu_C::CosmeticButtonStyle offset is not 1240");
	auto constexpr UW_WeaponMenu_C_CharRef_Offset = offsetof(UW_WeaponMenu_C, CharRef);
	static_assert(UW_WeaponMenu_C_CharRef_Offset == 0x14e8, "UW_WeaponMenu_C::CharRef offset is not 14e8");
	auto constexpr UW_WeaponMenu_C_boolField14F0_Offset = offsetof(UW_WeaponMenu_C, boolField14F0);
	static_assert(UW_WeaponMenu_C_boolField14F0_Offset == 0x14f0, "UW_WeaponMenu_C::boolField14F0 offset is not 14f0");
	auto constexpr UW_WeaponMenu_C_ActivePresetArray_Offset = offsetof(UW_WeaponMenu_C, ActivePresetArray);
	static_assert(UW_WeaponMenu_C_ActivePresetArray_Offset == 0x14f4, "UW_WeaponMenu_C::ActivePresetArray offset is not 14f4");
	auto constexpr UW_WeaponMenu_C_PresetArray_2_Offset = offsetof(UW_WeaponMenu_C, PresetArray_2);
	static_assert(UW_WeaponMenu_C_PresetArray_2_Offset == 0x14f8, "UW_WeaponMenu_C::PresetArray_2 offset is not 14f8");
	auto constexpr UW_WeaponMenu_C_PresetArray_3_Offset = offsetof(UW_WeaponMenu_C, PresetArray_3);
	static_assert(UW_WeaponMenu_C_PresetArray_3_Offset == 0x1508, "UW_WeaponMenu_C::PresetArray_3 offset is not 1508");
	auto constexpr UW_WeaponMenu_C_PresetArray_4_Offset = offsetof(UW_WeaponMenu_C, PresetArray_4);
	static_assert(UW_WeaponMenu_C_PresetArray_4_Offset == 0x1518, "UW_WeaponMenu_C::PresetArray_4 offset is not 1518");
	auto constexpr UW_WeaponMenu_C_PresetButtonStyle_Offset = offsetof(UW_WeaponMenu_C, PresetButtonStyle);
	static_assert(UW_WeaponMenu_C_PresetButtonStyle_Offset == 0x1528, "UW_WeaponMenu_C::PresetButtonStyle offset is not 1528");
	auto constexpr UW_WeaponMenu_C_AmmoClassArray_Ammo_Offset = offsetof(UW_WeaponMenu_C, AmmoClassArray_Ammo);
	static_assert(UW_WeaponMenu_C_AmmoClassArray_Ammo_Offset == 0x17d0, "UW_WeaponMenu_C::AmmoClassArray_Ammo offset is not 17d0");
	auto constexpr UW_WeaponMenu_C_AmmoButtonStyle_Offset = offsetof(UW_WeaponMenu_C, AmmoButtonStyle);
	static_assert(UW_WeaponMenu_C_AmmoButtonStyle_Offset == 0x17e0, "UW_WeaponMenu_C::AmmoButtonStyle offset is not 17e0");
	auto constexpr UW_WeaponMenu_C_MeleeClassArray_Offset = offsetof(UW_WeaponMenu_C, MeleeClassArray);
	static_assert(UW_WeaponMenu_C_MeleeClassArray_Offset == 0x1a88, "UW_WeaponMenu_C::MeleeClassArray offset is not 1a88");
	auto constexpr UW_WeaponMenu_C_MeleeButtonStyle_Offset = offsetof(UW_WeaponMenu_C, MeleeButtonStyle);
	static_assert(UW_WeaponMenu_C_MeleeButtonStyle_Offset == 0x1a98, "UW_WeaponMenu_C::MeleeButtonStyle offset is not 1a98");
	auto constexpr UW_WeaponMenu_C_slavarray_Offset = offsetof(UW_WeaponMenu_C, slavarray);
	static_assert(UW_WeaponMenu_C_slavarray_Offset == 0x1d40, "UW_WeaponMenu_C::slavarray offset is not 1d40");
	auto constexpr UW_WeaponMenu_C_Feet_Offset = offsetof(UW_WeaponMenu_C, Feet);
	static_assert(UW_WeaponMenu_C_Feet_Offset == 0x1d50, "UW_WeaponMenu_C::Feet offset is not 1d50");
	auto constexpr UW_WeaponMenu_C_Hands_Offset = offsetof(UW_WeaponMenu_C, Hands);
	static_assert(UW_WeaponMenu_C_Hands_Offset == 0x1d60, "UW_WeaponMenu_C::Hands offset is not 1d60");
	auto constexpr UW_WeaponMenu_C_Legs_Offset = offsetof(UW_WeaponMenu_C, Legs);
	static_assert(UW_WeaponMenu_C_Legs_Offset == 0x1d70, "UW_WeaponMenu_C::Legs offset is not 1d70");
	auto constexpr UW_WeaponMenu_C_Body_Offset = offsetof(UW_WeaponMenu_C, Body);
	static_assert(UW_WeaponMenu_C_Body_Offset == 0x1d80, "UW_WeaponMenu_C::Body offset is not 1d80");
	auto constexpr UW_WeaponMenu_C_Jacket_Offset = offsetof(UW_WeaponMenu_C, Jacket);
	static_assert(UW_WeaponMenu_C_Jacket_Offset == 0x1d90, "UW_WeaponMenu_C::Jacket offset is not 1d90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
