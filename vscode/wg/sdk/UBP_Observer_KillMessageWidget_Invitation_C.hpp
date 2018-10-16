#pragma once
#include "UTslKillMessageWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Observer_KillMessageWidget_Invitation_C // Size: 0x4B0
	: public UTslKillMessageWidget // Size: 0x350
{
private:
	typedef UBP_Observer_KillMessageWidget_Invitation_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194854); // id32("WidgetBlueprintGeneratedClass BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x350 Size: 0x8 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> vanish; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.vanish */
	ExternalPtr<struct UImage> BlackBgKillerLogo; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.BlackBgKillerLogo */
	ExternalPtr<struct UImage> BlackBGVictimLogo; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.BlackBGVictimLogo */
	ExternalPtr<struct UImage> CauseOfDeathIconandWeapon; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.CauseOfDeathIconandWeapon */
	ExternalPtr<struct USizeBox> ConditionIcons; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.ConditionIcons */
	ExternalPtr<struct USizeBox> EventandWeaponIcons; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.EventandWeaponIcons */
	ExternalPtr<struct UImage> HeadShotEventIcon; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.HeadShotEventIcon */
	ExternalPtr<struct UHorizontalBox> HorizontalBoxforKiller; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.HorizontalBoxforKiller */
	ExternalPtr<struct UHorizontalBox> HorizontalBoxforKillFeed; /* Ofs: 0x398 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.HorizontalBoxforKillFeed */
	ExternalPtr<struct UImage> KillerLogoImage; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerLogoImage */
	ExternalPtr<struct UTextBlock> KillerName; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerName */
	ExternalPtr<struct UImage> KillerStripe; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerStripe */
	ExternalPtr<struct UImage> KillerTeamColorBg; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerTeamColorBg */
	ExternalPtr<struct UTextBlock> KillerTeamNumber; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerTeamNumber */
	ExternalPtr<struct UBorder> KillerTeamNumberBGborder; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerTeamNumberBGborder */
	ExternalPtr<struct UWidgetSwitcher> KillerWidgetSwitcher; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.KillerWidgetSwitcher */
	ExternalPtr<struct UOverlay> Overlay_5; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.Overlay_5 */
	ExternalPtr<struct UOverlay> OverlayforVictimTeamNumbercolor; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.OverlayforVictimTeamNumbercolor */
	ExternalPtr<struct USizeBox> SizeBoxKillerTeamLogoNumber; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.SizeBoxKillerTeamLogoNumber */
	ExternalPtr<struct USizeBox> SizeBoxVictimTeamLogoNumber; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.SizeBoxVictimTeamLogoNumber */
	ExternalPtr<struct UImage> VictimLogoImage; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimLogoImage */
	ExternalPtr<struct UTextBlock> VictimName; /* Ofs: 0x400 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimName */
	ExternalPtr<struct UImage> VictimStripe; /* Ofs: 0x408 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimStripe */
	ExternalPtr<struct UImage> VictimTeamColorBg; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimTeamColorBg */
	ExternalPtr<struct UTextBlock> VictimTeamNumber; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimTeamNumber */
	ExternalPtr<struct UBorder> VictimTeamNumberBGborder; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimTeamNumberBGborder */
	ExternalPtr<struct UWidgetSwitcher> VictimWidgetSwitcher; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.VictimWidgetSwitcher */
	FLinearColor NormalColor; /* Ofs: 0x430 Size: 0x10 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.NormalColor */
	FLinearColor TeamKillerColor; /* Ofs: 0x440 Size: 0x10 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.TeamKillerColor */
	FLinearColor TeamKillerDBNOColor; /* Ofs: 0x450 Size: 0x10 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.TeamKillerDBNOColor */
	FLinearColor TeamVictimColor; /* Ofs: 0x460 Size: 0x10 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.TeamVictimColor */
	FLinearColor TeamVictimDBNOColor; /* Ofs: 0x470 Size: 0x10 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.TeamVictimDBNOColor */
	FLinearColor NormalDBNOColor; /* Ofs: 0x480 Size: 0x10 - StructProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.NormalDBNOColor */
	ExternalPtr<struct UImage> NewVar_1; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.NewVar_1 */
	ExternalPtr<struct UImage> NewVar_2; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.NewVar_2 */
	TArray<ExternalPtr<struct UTexture2D>> NewVar_3; /* Ofs: 0x4A0 Size: 0x10 - ArrayProperty BP_Observer_KillMessageWidget_Invitation.BP_Observer_KillMessageWidget_Invitation_C.NewVar_3 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x350, value); }
	inline bool Setvanish(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x358, value); }
	inline bool SetBlackBgKillerLogo(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetBlackBGVictimLogo(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetCauseOfDeathIconandWeapon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetConditionIcons(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x378, value); }
	inline bool SetEventandWeaponIcons(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetHeadShotEventIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetHorizontalBoxforKiller(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x390, value); }
	inline bool SetHorizontalBoxforKillFeed(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x398, value); }
	inline bool SetKillerLogoImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetKillerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetKillerStripe(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetKillerTeamColorBg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetKillerTeamNumber(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetKillerTeamNumberBGborder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetKillerWidgetSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetOverlay_5(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetOverlayforVictimTeamNumbercolor(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetSizeBoxKillerTeamLogoNumber(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetSizeBoxVictimTeamLogoNumber(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetVictimLogoImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetVictimName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x400, value); }
	inline bool SetVictimStripe(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x408, value); }
	inline bool SetVictimTeamColorBg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x410, value); }
	inline bool SetVictimTeamNumber(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x418, value); }
	inline bool SetVictimTeamNumberBGborder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x420, value); }
	inline bool SetVictimWidgetSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x428, value); }
	inline bool SetNormalColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x430, value); }
	inline bool SetTeamKillerColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x440, value); }
	inline bool SetTeamKillerDBNOColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x450, value); }
	inline bool SetTeamVictimColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x460, value); }
	inline bool SetTeamVictimDBNOColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x470, value); }
	inline bool SetNormalDBNOColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x480, value); }
	inline bool SetNewVar_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x490, value); }
	inline bool SetNewVar_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x498, value); }
	inline bool SetNewVar_3(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x4A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Observer_KillMessageWidget_Invitation_C = sizeof(UBP_Observer_KillMessageWidget_Invitation_C); // 1200
    static_assert(sizeof(UBP_Observer_KillMessageWidget_Invitation_C) == 0x4B0, "Size of UBP_Observer_KillMessageWidget_Invitation_C is not correct.");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_UberGraphFrame_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, UberGraphFrame);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_UberGraphFrame_Offset == 0x350, "UBP_Observer_KillMessageWidget_Invitation_C::UberGraphFrame offset is not 350");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_vanish_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, vanish);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_vanish_Offset == 0x358, "UBP_Observer_KillMessageWidget_Invitation_C::vanish offset is not 358");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_BlackBgKillerLogo_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, BlackBgKillerLogo);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_BlackBgKillerLogo_Offset == 0x360, "UBP_Observer_KillMessageWidget_Invitation_C::BlackBgKillerLogo offset is not 360");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_BlackBGVictimLogo_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, BlackBGVictimLogo);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_BlackBGVictimLogo_Offset == 0x368, "UBP_Observer_KillMessageWidget_Invitation_C::BlackBGVictimLogo offset is not 368");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_CauseOfDeathIconandWeapon_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, CauseOfDeathIconandWeapon);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_CauseOfDeathIconandWeapon_Offset == 0x370, "UBP_Observer_KillMessageWidget_Invitation_C::CauseOfDeathIconandWeapon offset is not 370");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_ConditionIcons_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, ConditionIcons);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_ConditionIcons_Offset == 0x378, "UBP_Observer_KillMessageWidget_Invitation_C::ConditionIcons offset is not 378");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_EventandWeaponIcons_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, EventandWeaponIcons);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_EventandWeaponIcons_Offset == 0x380, "UBP_Observer_KillMessageWidget_Invitation_C::EventandWeaponIcons offset is not 380");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_HeadShotEventIcon_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, HeadShotEventIcon);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_HeadShotEventIcon_Offset == 0x388, "UBP_Observer_KillMessageWidget_Invitation_C::HeadShotEventIcon offset is not 388");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_HorizontalBoxforKiller_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, HorizontalBoxforKiller);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_HorizontalBoxforKiller_Offset == 0x390, "UBP_Observer_KillMessageWidget_Invitation_C::HorizontalBoxforKiller offset is not 390");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_HorizontalBoxforKillFeed_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, HorizontalBoxforKillFeed);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_HorizontalBoxforKillFeed_Offset == 0x398, "UBP_Observer_KillMessageWidget_Invitation_C::HorizontalBoxforKillFeed offset is not 398");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerLogoImage_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerLogoImage);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerLogoImage_Offset == 0x3a0, "UBP_Observer_KillMessageWidget_Invitation_C::KillerLogoImage offset is not 3a0");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerName_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerName);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerName_Offset == 0x3a8, "UBP_Observer_KillMessageWidget_Invitation_C::KillerName offset is not 3a8");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerStripe_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerStripe);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerStripe_Offset == 0x3b0, "UBP_Observer_KillMessageWidget_Invitation_C::KillerStripe offset is not 3b0");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerTeamColorBg_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerTeamColorBg);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerTeamColorBg_Offset == 0x3b8, "UBP_Observer_KillMessageWidget_Invitation_C::KillerTeamColorBg offset is not 3b8");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerTeamNumber_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerTeamNumber);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerTeamNumber_Offset == 0x3c0, "UBP_Observer_KillMessageWidget_Invitation_C::KillerTeamNumber offset is not 3c0");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerTeamNumberBGborder_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerTeamNumberBGborder);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerTeamNumberBGborder_Offset == 0x3c8, "UBP_Observer_KillMessageWidget_Invitation_C::KillerTeamNumberBGborder offset is not 3c8");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_KillerWidgetSwitcher_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, KillerWidgetSwitcher);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_KillerWidgetSwitcher_Offset == 0x3d0, "UBP_Observer_KillMessageWidget_Invitation_C::KillerWidgetSwitcher offset is not 3d0");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_Overlay_5_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, Overlay_5);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_Overlay_5_Offset == 0x3d8, "UBP_Observer_KillMessageWidget_Invitation_C::Overlay_5 offset is not 3d8");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_OverlayforVictimTeamNumbercolor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, OverlayforVictimTeamNumbercolor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_OverlayforVictimTeamNumbercolor_Offset == 0x3e0, "UBP_Observer_KillMessageWidget_Invitation_C::OverlayforVictimTeamNumbercolor offset is not 3e0");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_SizeBoxKillerTeamLogoNumber_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, SizeBoxKillerTeamLogoNumber);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_SizeBoxKillerTeamLogoNumber_Offset == 0x3e8, "UBP_Observer_KillMessageWidget_Invitation_C::SizeBoxKillerTeamLogoNumber offset is not 3e8");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_SizeBoxVictimTeamLogoNumber_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, SizeBoxVictimTeamLogoNumber);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_SizeBoxVictimTeamLogoNumber_Offset == 0x3f0, "UBP_Observer_KillMessageWidget_Invitation_C::SizeBoxVictimTeamLogoNumber offset is not 3f0");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimLogoImage_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimLogoImage);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimLogoImage_Offset == 0x3f8, "UBP_Observer_KillMessageWidget_Invitation_C::VictimLogoImage offset is not 3f8");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimName_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimName);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimName_Offset == 0x400, "UBP_Observer_KillMessageWidget_Invitation_C::VictimName offset is not 400");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimStripe_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimStripe);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimStripe_Offset == 0x408, "UBP_Observer_KillMessageWidget_Invitation_C::VictimStripe offset is not 408");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimTeamColorBg_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimTeamColorBg);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimTeamColorBg_Offset == 0x410, "UBP_Observer_KillMessageWidget_Invitation_C::VictimTeamColorBg offset is not 410");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimTeamNumber_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimTeamNumber);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimTeamNumber_Offset == 0x418, "UBP_Observer_KillMessageWidget_Invitation_C::VictimTeamNumber offset is not 418");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimTeamNumberBGborder_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimTeamNumberBGborder);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimTeamNumberBGborder_Offset == 0x420, "UBP_Observer_KillMessageWidget_Invitation_C::VictimTeamNumberBGborder offset is not 420");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_VictimWidgetSwitcher_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, VictimWidgetSwitcher);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_VictimWidgetSwitcher_Offset == 0x428, "UBP_Observer_KillMessageWidget_Invitation_C::VictimWidgetSwitcher offset is not 428");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_NormalColor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, NormalColor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_NormalColor_Offset == 0x430, "UBP_Observer_KillMessageWidget_Invitation_C::NormalColor offset is not 430");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_TeamKillerColor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, TeamKillerColor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_TeamKillerColor_Offset == 0x440, "UBP_Observer_KillMessageWidget_Invitation_C::TeamKillerColor offset is not 440");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_TeamKillerDBNOColor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, TeamKillerDBNOColor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_TeamKillerDBNOColor_Offset == 0x450, "UBP_Observer_KillMessageWidget_Invitation_C::TeamKillerDBNOColor offset is not 450");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_TeamVictimColor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, TeamVictimColor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_TeamVictimColor_Offset == 0x460, "UBP_Observer_KillMessageWidget_Invitation_C::TeamVictimColor offset is not 460");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_TeamVictimDBNOColor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, TeamVictimDBNOColor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_TeamVictimDBNOColor_Offset == 0x470, "UBP_Observer_KillMessageWidget_Invitation_C::TeamVictimDBNOColor offset is not 470");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_NormalDBNOColor_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, NormalDBNOColor);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_NormalDBNOColor_Offset == 0x480, "UBP_Observer_KillMessageWidget_Invitation_C::NormalDBNOColor offset is not 480");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_NewVar_1_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, NewVar_1);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_NewVar_1_Offset == 0x490, "UBP_Observer_KillMessageWidget_Invitation_C::NewVar_1 offset is not 490");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_NewVar_2_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, NewVar_2);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_NewVar_2_Offset == 0x498, "UBP_Observer_KillMessageWidget_Invitation_C::NewVar_2 offset is not 498");
	auto constexpr UBP_Observer_KillMessageWidget_Invitation_C_NewVar_3_Offset = offsetof(UBP_Observer_KillMessageWidget_Invitation_C, NewVar_3);
	static_assert(UBP_Observer_KillMessageWidget_Invitation_C_NewVar_3_Offset == 0x4a0, "UBP_Observer_KillMessageWidget_Invitation_C::NewVar_3 offset is not 4a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
