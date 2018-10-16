#pragma once
#include "UObserverTagWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerHeadWidget_C // Size: 0x4B4
	: public UObserverTagWidget // Size: 0x360
{
private:
	typedef UPlayerHeadWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(195924); // id32("WidgetBlueprintGeneratedClass PlayerHeadWidget.PlayerHeadWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x360 Size: 0x8 - StructProperty PlayerHeadWidget.PlayerHeadWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> BlackBG; /* Ofs: 0x368 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.BlackBG */
	ExternalPtr<struct UImage> BlackLine; /* Ofs: 0x370 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.BlackLine */
	ExternalPtr<struct UImage> blacklineforarrow; /* Ofs: 0x378 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.blacklineforarrow */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_2; /* Ofs: 0x380 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.CanvasPanel_2 */
	ExternalPtr<struct UBorder> CharacterNameTag; /* Ofs: 0x388 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.CharacterNameTag */
	ExternalPtr<struct USpacer> HeadSpace; /* Ofs: 0x390 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.HeadSpace */
	ExternalPtr<struct UImage> HPBG; /* Ofs: 0x398 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.HPBG */
	ExternalPtr<struct USizeBox> HPBox; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.HPBox */
	ExternalPtr<struct UImage> IndicatorArrow; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.IndicatorArrow */
	ExternalPtr<struct UBorder> PlayerInfoBorder; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.PlayerInfoBorder */
	ExternalPtr<struct USizeBox> PlayerInfoSizeBox; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.PlayerInfoSizeBox */
	ExternalPtr<struct UTextBlock> PlayerTagName; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.PlayerTagName */
	ExternalPtr<struct USizeBox> PlayerTagNameBox; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.PlayerTagNameBox */
	ExternalPtr<struct UImage> TeamColorBg; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.TeamColorBg */
	ExternalPtr<struct UImage> TeamLogo; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.TeamLogo */
	ExternalPtr<struct UWidgetSwitcher> TeamLogoSwitcher; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.TeamLogoSwitcher */
	ExternalPtr<struct UTextBlock> TeamNumber; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.TeamNumber */
	ExternalPtr<struct UTslHealthGaugeBpWidget_C> TslHealthGaugeBpWidget_88; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.TslHealthGaugeBpWidget_88 */
	ExternalPtr<struct UImage> weaponImage; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.weaponImage */
	ExternalPtr<struct USizeBox> WeaponImageSizeBox; /* Ofs: 0x400 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.WeaponImageSizeBox */
	uint8_t boolField408;
	uint8_t UnknownData409[0x3];
	int32_t SlotIndex; /* Ofs: 0x40C Size: 0x4 - IntProperty PlayerHeadWidget.PlayerHeadWidget_C.SlotIndex */
	FString PlayerName; /* Ofs: 0x410 Size: 0x10 - StrProperty PlayerHeadWidget.PlayerHeadWidget_C.PlayerName */
	FSlateColor SelectedColor; /* Ofs: 0x420 Size: 0x28 - StructProperty PlayerHeadWidget.PlayerHeadWidget_C.SelectedColor */
	FSlateColor FreeCamColor; /* Ofs: 0x448 Size: 0x28 - StructProperty PlayerHeadWidget.PlayerHeadWidget_C.FreeCamColor */
	FSlateColor TeamMemberColor; /* Ofs: 0x470 Size: 0x28 - StructProperty PlayerHeadWidget.PlayerHeadWidget_C.TeamMemberColor */
	float OffsetY; /* Ofs: 0x498 Size: 0x4 - FloatProperty PlayerHeadWidget.PlayerHeadWidget_C.OffsetY */
	uint8_t UnknownData49C[0x4];
	ExternalPtr<struct UMaterialInstanceDynamic> ItemIconMaterial; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty PlayerHeadWidget.PlayerHeadWidget_C.ItemIconMaterial */
	float DesiredAlpha; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty PlayerHeadWidget.PlayerHeadWidget_C.DesiredAlpha */
	float DesiredWidthWhenClose; /* Ofs: 0x4AC Size: 0x4 - FloatProperty PlayerHeadWidget.PlayerHeadWidget_C.DesiredWidthWhenClose */
	float DesiredWidthWhenFar; /* Ofs: 0x4B0 Size: 0x4 - FloatProperty PlayerHeadWidget.PlayerHeadWidget_C.DesiredWidthWhenFar */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x360, value); }
	inline bool SetBlackBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetBlackLine(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool Setblacklineforarrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetCanvasPanel_2(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x380, value); }
	inline bool SetCharacterNameTag(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x388, value); }
	inline bool SetHeadSpace(t_structHelper inst, ExternalPtr<struct USpacer> value) { inst.WriteOffset(0x390, value); }
	inline bool SetHPBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetHPBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetIndicatorArrow(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetPlayerInfoBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetPlayerInfoSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetPlayerTagName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetPlayerTagNameBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetTeamColorBg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetTeamLogo(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetTeamLogoSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetTeamNumber(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetTslHealthGaugeBpWidget_88(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeBpWidget_C> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetweaponImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetWeaponImageSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x400, value); }
	inline bool ListInSlot()
	{
		return boolField408& 0x1;
	}
	inline bool SetListInSlot(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x408, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40C, value); }
	inline bool SetPlayerName(t_structHelper inst, FString value) { inst.WriteOffset(0x410, value); }
	inline bool SetSelectedColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x420, value); }
	inline bool SetFreeCamColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x448, value); }
	inline bool SetTeamMemberColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x470, value); }
	inline bool SetOffsetY(t_structHelper inst, float value) { inst.WriteOffset(0x498, value); }
	inline bool SetItemIconMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetDesiredAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetDesiredWidthWhenClose(t_structHelper inst, float value) { inst.WriteOffset(0x4AC, value); }
	inline bool SetDesiredWidthWhenFar(t_structHelper inst, float value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerHeadWidget_C = sizeof(UPlayerHeadWidget_C); // 1204
    static_assert(sizeof(UPlayerHeadWidget_C) == 0x4B4, "Size of UPlayerHeadWidget_C is not correct.");
	auto constexpr UPlayerHeadWidget_C_UberGraphFrame_Offset = offsetof(UPlayerHeadWidget_C, UberGraphFrame);
	static_assert(UPlayerHeadWidget_C_UberGraphFrame_Offset == 0x360, "UPlayerHeadWidget_C::UberGraphFrame offset is not 360");
	auto constexpr UPlayerHeadWidget_C_BlackBG_Offset = offsetof(UPlayerHeadWidget_C, BlackBG);
	static_assert(UPlayerHeadWidget_C_BlackBG_Offset == 0x368, "UPlayerHeadWidget_C::BlackBG offset is not 368");
	auto constexpr UPlayerHeadWidget_C_BlackLine_Offset = offsetof(UPlayerHeadWidget_C, BlackLine);
	static_assert(UPlayerHeadWidget_C_BlackLine_Offset == 0x370, "UPlayerHeadWidget_C::BlackLine offset is not 370");
	auto constexpr UPlayerHeadWidget_C_blacklineforarrow_Offset = offsetof(UPlayerHeadWidget_C, blacklineforarrow);
	static_assert(UPlayerHeadWidget_C_blacklineforarrow_Offset == 0x378, "UPlayerHeadWidget_C::blacklineforarrow offset is not 378");
	auto constexpr UPlayerHeadWidget_C_CanvasPanel_2_Offset = offsetof(UPlayerHeadWidget_C, CanvasPanel_2);
	static_assert(UPlayerHeadWidget_C_CanvasPanel_2_Offset == 0x380, "UPlayerHeadWidget_C::CanvasPanel_2 offset is not 380");
	auto constexpr UPlayerHeadWidget_C_CharacterNameTag_Offset = offsetof(UPlayerHeadWidget_C, CharacterNameTag);
	static_assert(UPlayerHeadWidget_C_CharacterNameTag_Offset == 0x388, "UPlayerHeadWidget_C::CharacterNameTag offset is not 388");
	auto constexpr UPlayerHeadWidget_C_HeadSpace_Offset = offsetof(UPlayerHeadWidget_C, HeadSpace);
	static_assert(UPlayerHeadWidget_C_HeadSpace_Offset == 0x390, "UPlayerHeadWidget_C::HeadSpace offset is not 390");
	auto constexpr UPlayerHeadWidget_C_HPBG_Offset = offsetof(UPlayerHeadWidget_C, HPBG);
	static_assert(UPlayerHeadWidget_C_HPBG_Offset == 0x398, "UPlayerHeadWidget_C::HPBG offset is not 398");
	auto constexpr UPlayerHeadWidget_C_HPBox_Offset = offsetof(UPlayerHeadWidget_C, HPBox);
	static_assert(UPlayerHeadWidget_C_HPBox_Offset == 0x3a0, "UPlayerHeadWidget_C::HPBox offset is not 3a0");
	auto constexpr UPlayerHeadWidget_C_IndicatorArrow_Offset = offsetof(UPlayerHeadWidget_C, IndicatorArrow);
	static_assert(UPlayerHeadWidget_C_IndicatorArrow_Offset == 0x3a8, "UPlayerHeadWidget_C::IndicatorArrow offset is not 3a8");
	auto constexpr UPlayerHeadWidget_C_PlayerInfoBorder_Offset = offsetof(UPlayerHeadWidget_C, PlayerInfoBorder);
	static_assert(UPlayerHeadWidget_C_PlayerInfoBorder_Offset == 0x3b0, "UPlayerHeadWidget_C::PlayerInfoBorder offset is not 3b0");
	auto constexpr UPlayerHeadWidget_C_PlayerInfoSizeBox_Offset = offsetof(UPlayerHeadWidget_C, PlayerInfoSizeBox);
	static_assert(UPlayerHeadWidget_C_PlayerInfoSizeBox_Offset == 0x3b8, "UPlayerHeadWidget_C::PlayerInfoSizeBox offset is not 3b8");
	auto constexpr UPlayerHeadWidget_C_PlayerTagName_Offset = offsetof(UPlayerHeadWidget_C, PlayerTagName);
	static_assert(UPlayerHeadWidget_C_PlayerTagName_Offset == 0x3c0, "UPlayerHeadWidget_C::PlayerTagName offset is not 3c0");
	auto constexpr UPlayerHeadWidget_C_PlayerTagNameBox_Offset = offsetof(UPlayerHeadWidget_C, PlayerTagNameBox);
	static_assert(UPlayerHeadWidget_C_PlayerTagNameBox_Offset == 0x3c8, "UPlayerHeadWidget_C::PlayerTagNameBox offset is not 3c8");
	auto constexpr UPlayerHeadWidget_C_TeamColorBg_Offset = offsetof(UPlayerHeadWidget_C, TeamColorBg);
	static_assert(UPlayerHeadWidget_C_TeamColorBg_Offset == 0x3d0, "UPlayerHeadWidget_C::TeamColorBg offset is not 3d0");
	auto constexpr UPlayerHeadWidget_C_TeamLogo_Offset = offsetof(UPlayerHeadWidget_C, TeamLogo);
	static_assert(UPlayerHeadWidget_C_TeamLogo_Offset == 0x3d8, "UPlayerHeadWidget_C::TeamLogo offset is not 3d8");
	auto constexpr UPlayerHeadWidget_C_TeamLogoSwitcher_Offset = offsetof(UPlayerHeadWidget_C, TeamLogoSwitcher);
	static_assert(UPlayerHeadWidget_C_TeamLogoSwitcher_Offset == 0x3e0, "UPlayerHeadWidget_C::TeamLogoSwitcher offset is not 3e0");
	auto constexpr UPlayerHeadWidget_C_TeamNumber_Offset = offsetof(UPlayerHeadWidget_C, TeamNumber);
	static_assert(UPlayerHeadWidget_C_TeamNumber_Offset == 0x3e8, "UPlayerHeadWidget_C::TeamNumber offset is not 3e8");
	auto constexpr UPlayerHeadWidget_C_TslHealthGaugeBpWidget_88_Offset = offsetof(UPlayerHeadWidget_C, TslHealthGaugeBpWidget_88);
	static_assert(UPlayerHeadWidget_C_TslHealthGaugeBpWidget_88_Offset == 0x3f0, "UPlayerHeadWidget_C::TslHealthGaugeBpWidget_88 offset is not 3f0");
	auto constexpr UPlayerHeadWidget_C_weaponImage_Offset = offsetof(UPlayerHeadWidget_C, weaponImage);
	static_assert(UPlayerHeadWidget_C_weaponImage_Offset == 0x3f8, "UPlayerHeadWidget_C::weaponImage offset is not 3f8");
	auto constexpr UPlayerHeadWidget_C_WeaponImageSizeBox_Offset = offsetof(UPlayerHeadWidget_C, WeaponImageSizeBox);
	static_assert(UPlayerHeadWidget_C_WeaponImageSizeBox_Offset == 0x400, "UPlayerHeadWidget_C::WeaponImageSizeBox offset is not 400");
	auto constexpr UPlayerHeadWidget_C_boolField408_Offset = offsetof(UPlayerHeadWidget_C, boolField408);
	static_assert(UPlayerHeadWidget_C_boolField408_Offset == 0x408, "UPlayerHeadWidget_C::boolField408 offset is not 408");
	auto constexpr UPlayerHeadWidget_C_SlotIndex_Offset = offsetof(UPlayerHeadWidget_C, SlotIndex);
	static_assert(UPlayerHeadWidget_C_SlotIndex_Offset == 0x40c, "UPlayerHeadWidget_C::SlotIndex offset is not 40c");
	auto constexpr UPlayerHeadWidget_C_PlayerName_Offset = offsetof(UPlayerHeadWidget_C, PlayerName);
	static_assert(UPlayerHeadWidget_C_PlayerName_Offset == 0x410, "UPlayerHeadWidget_C::PlayerName offset is not 410");
	auto constexpr UPlayerHeadWidget_C_SelectedColor_Offset = offsetof(UPlayerHeadWidget_C, SelectedColor);
	static_assert(UPlayerHeadWidget_C_SelectedColor_Offset == 0x420, "UPlayerHeadWidget_C::SelectedColor offset is not 420");
	auto constexpr UPlayerHeadWidget_C_FreeCamColor_Offset = offsetof(UPlayerHeadWidget_C, FreeCamColor);
	static_assert(UPlayerHeadWidget_C_FreeCamColor_Offset == 0x448, "UPlayerHeadWidget_C::FreeCamColor offset is not 448");
	auto constexpr UPlayerHeadWidget_C_TeamMemberColor_Offset = offsetof(UPlayerHeadWidget_C, TeamMemberColor);
	static_assert(UPlayerHeadWidget_C_TeamMemberColor_Offset == 0x470, "UPlayerHeadWidget_C::TeamMemberColor offset is not 470");
	auto constexpr UPlayerHeadWidget_C_OffsetY_Offset = offsetof(UPlayerHeadWidget_C, OffsetY);
	static_assert(UPlayerHeadWidget_C_OffsetY_Offset == 0x498, "UPlayerHeadWidget_C::OffsetY offset is not 498");
	auto constexpr UPlayerHeadWidget_C_ItemIconMaterial_Offset = offsetof(UPlayerHeadWidget_C, ItemIconMaterial);
	static_assert(UPlayerHeadWidget_C_ItemIconMaterial_Offset == 0x4a0, "UPlayerHeadWidget_C::ItemIconMaterial offset is not 4a0");
	auto constexpr UPlayerHeadWidget_C_DesiredAlpha_Offset = offsetof(UPlayerHeadWidget_C, DesiredAlpha);
	static_assert(UPlayerHeadWidget_C_DesiredAlpha_Offset == 0x4a8, "UPlayerHeadWidget_C::DesiredAlpha offset is not 4a8");
	auto constexpr UPlayerHeadWidget_C_DesiredWidthWhenClose_Offset = offsetof(UPlayerHeadWidget_C, DesiredWidthWhenClose);
	static_assert(UPlayerHeadWidget_C_DesiredWidthWhenClose_Offset == 0x4ac, "UPlayerHeadWidget_C::DesiredWidthWhenClose offset is not 4ac");
	auto constexpr UPlayerHeadWidget_C_DesiredWidthWhenFar_Offset = offsetof(UPlayerHeadWidget_C, DesiredWidthWhenFar);
	static_assert(UPlayerHeadWidget_C_DesiredWidthWhenFar_Offset == 0x4b0, "UPlayerHeadWidget_C::DesiredWidthWhenFar offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
