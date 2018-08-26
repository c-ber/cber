#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_Overlay.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapCharacterIconBaseWidget // Size: 0x5C0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UMapCharacterIconBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1536); // id32("Class TslGame.MapCharacterIconBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_Border IconImageBorderBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.IconImageBorderBinder */
	FUmgWidgetBinder_Image IconImageBinder; /* Ofs: 0x320 Size: 0x28 - StructProperty TslGame.MapCharacterIconBaseWidget.IconImageBinder */
	FName IconStateParamName; /* Ofs: 0x348 Size: 0x8 - NameProperty TslGame.MapCharacterIconBaseWidget.IconStateParamName */
	FName IconRotationParamName; /* Ofs: 0x350 Size: 0x8 - NameProperty TslGame.MapCharacterIconBaseWidget.IconRotationParamName */
	FName IconColorParamName; /* Ofs: 0x358 Size: 0x8 - NameProperty TslGame.MapCharacterIconBaseWidget.IconColorParamName */
	FUmgWidgetBinder_Border PlayerNameBoderBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.PlayerNameBoderBinder */
	FUmgWidgetBinder_TextBlock PlayerNameBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.PlayerNameBinder */
	FUmgWidgetBinder_Border ObserverMuzzleFlashBoderBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.ObserverMuzzleFlashBoderBinder */
	FUmgWidgetBinder_UserWidget ObserverMuzzleFlashWidgetBinder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.ObserverMuzzleFlashWidgetBinder */
	FUmgWidgetBinder_Border LifeGaugeBorderBinder; /* Ofs: 0x3E0 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.LifeGaugeBorderBinder */
	FUmgWidgetBinder_UserWidget LifeGaugeWidgetBinder; /* Ofs: 0x400 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.LifeGaugeWidgetBinder */
	FUmgWidgetBinder_Animation AttackedAnimBinder; /* Ofs: 0x420 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.AttackedAnimBinder */
	FUmgWidgetBinder_Animation HittedAnimBinder; /* Ofs: 0x440 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.HittedAnimBinder */
	FUmgWidgetBinder_Animation GroggyAnimBinder; /* Ofs: 0x460 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.GroggyAnimBinder */
	FUmgWidgetBinder_Animation FadeOutAnimBinder; /* Ofs: 0x480 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.FadeOutAnimBinder */
	FUmgWidgetBinder_Border ButtonBInder; /* Ofs: 0x4A0 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.ButtonBInder */
	uint8_t UnknownData4C0[0x10];
	uint8_t boolField4D0;
	uint8_t UnknownData4D1[0x7];
	FUmgWidgetBinder_TextBlock TeamNumberText; /* Ofs: 0x4D8 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.TeamNumberText */
	FUmgWidgetBinder_Overlay RiderLayerBinder; /* Ofs: 0x4F8 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.RiderLayerBinder */
	ExternalPtr<struct UClass> RiderIconClass; /* Ofs: 0x518 Size: 0x8 - ClassProperty TslGame.MapCharacterIconBaseWidget.RiderIconClass */
	FText DisplayNameFormatWithOtherPlayer; /* Ofs: 0x520 Size: 0x18 - TextProperty TslGame.MapCharacterIconBaseWidget.DisplayNameFormatWithOtherPlayer */
	ExternalPtr<struct UTexture> MyDirectionIcon; /* Ofs: 0x538 Size: 0x8 - ObjectProperty TslGame.MapCharacterIconBaseWidget.MyDirectionIcon */
	ExternalPtr<struct UTexture> TeamDirectionIcon; /* Ofs: 0x540 Size: 0x8 - ObjectProperty TslGame.MapCharacterIconBaseWidget.TeamDirectionIcon */
	FUmgWidgetBinder_Border SpectatedIconBorder; /* Ofs: 0x548 Size: 0x20 - StructProperty TslGame.MapCharacterIconBaseWidget.SpectatedIconBorder */
	FUmgWidgetBinder_Image NameTagColorImageBinder; /* Ofs: 0x568 Size: 0x28 - StructProperty TslGame.MapCharacterIconBaseWidget.NameTagColorImageBinder */
	uint8_t UnknownData590[0x18];
	ExternalPtr<struct UMaterialInterface> PendingIconMaterial; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty TslGame.MapCharacterIconBaseWidget.PendingIconMaterial */
	TArray<ExternalPtr<struct URiderIconWidget>> RiderIconList; /* Ofs: 0x5B0 Size: 0x10 - ArrayProperty TslGame.MapCharacterIconBaseWidget.RiderIconList */


	inline bool SetIconImageBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x300, value); }
	inline bool SetIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x320, value); }
	inline bool SetIconStateParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x348, value); }
	inline bool SetIconRotationParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x350, value); }
	inline bool SetIconColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x358, value); }
	inline bool SetPlayerNameBoderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x360, value); }
	inline bool SetPlayerNameBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x380, value); }
	inline bool SetObserverMuzzleFlashBoderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetObserverMuzzleFlashWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetLifeGaugeBorderBinder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetLifeGaugeWidgetBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x400, value); }
	inline bool SetAttackedAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x420, value); }
	inline bool SetHittedAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x440, value); }
	inline bool SetGroggyAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x460, value); }
	inline bool SetFadeOutAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x480, value); }
	inline bool SetButtonBInder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x4A0, value); }
	inline bool bTeamNumber()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetbTeamNumber(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTeamNumberText(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetRiderLayerBinder(t_structHelper inst, FUmgWidgetBinder_Overlay value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetRiderIconClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x518, value); }
	inline bool SetDisplayNameFormatWithOtherPlayer(t_structHelper inst, FText value) { inst.WriteOffset(0x520, value); }
	inline bool SetMyDirectionIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x538, value); }
	inline bool SetTeamDirectionIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x540, value); }
	inline bool SetSpectatedIconBorder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x548, value); }
	inline bool SetNameTagColorImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x568, value); }
	inline bool SetPendingIconMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetRiderIconList(t_structHelper inst, TArray<ExternalPtr<struct URiderIconWidget>> value) { inst.WriteOffset(0x5B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapCharacterIconBaseWidget = sizeof(UMapCharacterIconBaseWidget); // 1472
    static_assert(sizeof(UMapCharacterIconBaseWidget) == 0x5C0, "Size of UMapCharacterIconBaseWidget is not correct.");
	auto constexpr UMapCharacterIconBaseWidget_IconImageBorderBinder_Offset = offsetof(UMapCharacterIconBaseWidget, IconImageBorderBinder);
	static_assert(UMapCharacterIconBaseWidget_IconImageBorderBinder_Offset == 0x300, "UMapCharacterIconBaseWidget::IconImageBorderBinder offset is not 300");
	auto constexpr UMapCharacterIconBaseWidget_IconImageBinder_Offset = offsetof(UMapCharacterIconBaseWidget, IconImageBinder);
	static_assert(UMapCharacterIconBaseWidget_IconImageBinder_Offset == 0x320, "UMapCharacterIconBaseWidget::IconImageBinder offset is not 320");
	auto constexpr UMapCharacterIconBaseWidget_IconStateParamName_Offset = offsetof(UMapCharacterIconBaseWidget, IconStateParamName);
	static_assert(UMapCharacterIconBaseWidget_IconStateParamName_Offset == 0x348, "UMapCharacterIconBaseWidget::IconStateParamName offset is not 348");
	auto constexpr UMapCharacterIconBaseWidget_IconRotationParamName_Offset = offsetof(UMapCharacterIconBaseWidget, IconRotationParamName);
	static_assert(UMapCharacterIconBaseWidget_IconRotationParamName_Offset == 0x350, "UMapCharacterIconBaseWidget::IconRotationParamName offset is not 350");
	auto constexpr UMapCharacterIconBaseWidget_IconColorParamName_Offset = offsetof(UMapCharacterIconBaseWidget, IconColorParamName);
	static_assert(UMapCharacterIconBaseWidget_IconColorParamName_Offset == 0x358, "UMapCharacterIconBaseWidget::IconColorParamName offset is not 358");
	auto constexpr UMapCharacterIconBaseWidget_PlayerNameBoderBinder_Offset = offsetof(UMapCharacterIconBaseWidget, PlayerNameBoderBinder);
	static_assert(UMapCharacterIconBaseWidget_PlayerNameBoderBinder_Offset == 0x360, "UMapCharacterIconBaseWidget::PlayerNameBoderBinder offset is not 360");
	auto constexpr UMapCharacterIconBaseWidget_PlayerNameBinder_Offset = offsetof(UMapCharacterIconBaseWidget, PlayerNameBinder);
	static_assert(UMapCharacterIconBaseWidget_PlayerNameBinder_Offset == 0x380, "UMapCharacterIconBaseWidget::PlayerNameBinder offset is not 380");
	auto constexpr UMapCharacterIconBaseWidget_ObserverMuzzleFlashBoderBinder_Offset = offsetof(UMapCharacterIconBaseWidget, ObserverMuzzleFlashBoderBinder);
	static_assert(UMapCharacterIconBaseWidget_ObserverMuzzleFlashBoderBinder_Offset == 0x3a0, "UMapCharacterIconBaseWidget::ObserverMuzzleFlashBoderBinder offset is not 3a0");
	auto constexpr UMapCharacterIconBaseWidget_ObserverMuzzleFlashWidgetBinder_Offset = offsetof(UMapCharacterIconBaseWidget, ObserverMuzzleFlashWidgetBinder);
	static_assert(UMapCharacterIconBaseWidget_ObserverMuzzleFlashWidgetBinder_Offset == 0x3c0, "UMapCharacterIconBaseWidget::ObserverMuzzleFlashWidgetBinder offset is not 3c0");
	auto constexpr UMapCharacterIconBaseWidget_LifeGaugeBorderBinder_Offset = offsetof(UMapCharacterIconBaseWidget, LifeGaugeBorderBinder);
	static_assert(UMapCharacterIconBaseWidget_LifeGaugeBorderBinder_Offset == 0x3e0, "UMapCharacterIconBaseWidget::LifeGaugeBorderBinder offset is not 3e0");
	auto constexpr UMapCharacterIconBaseWidget_LifeGaugeWidgetBinder_Offset = offsetof(UMapCharacterIconBaseWidget, LifeGaugeWidgetBinder);
	static_assert(UMapCharacterIconBaseWidget_LifeGaugeWidgetBinder_Offset == 0x400, "UMapCharacterIconBaseWidget::LifeGaugeWidgetBinder offset is not 400");
	auto constexpr UMapCharacterIconBaseWidget_AttackedAnimBinder_Offset = offsetof(UMapCharacterIconBaseWidget, AttackedAnimBinder);
	static_assert(UMapCharacterIconBaseWidget_AttackedAnimBinder_Offset == 0x420, "UMapCharacterIconBaseWidget::AttackedAnimBinder offset is not 420");
	auto constexpr UMapCharacterIconBaseWidget_HittedAnimBinder_Offset = offsetof(UMapCharacterIconBaseWidget, HittedAnimBinder);
	static_assert(UMapCharacterIconBaseWidget_HittedAnimBinder_Offset == 0x440, "UMapCharacterIconBaseWidget::HittedAnimBinder offset is not 440");
	auto constexpr UMapCharacterIconBaseWidget_GroggyAnimBinder_Offset = offsetof(UMapCharacterIconBaseWidget, GroggyAnimBinder);
	static_assert(UMapCharacterIconBaseWidget_GroggyAnimBinder_Offset == 0x460, "UMapCharacterIconBaseWidget::GroggyAnimBinder offset is not 460");
	auto constexpr UMapCharacterIconBaseWidget_FadeOutAnimBinder_Offset = offsetof(UMapCharacterIconBaseWidget, FadeOutAnimBinder);
	static_assert(UMapCharacterIconBaseWidget_FadeOutAnimBinder_Offset == 0x480, "UMapCharacterIconBaseWidget::FadeOutAnimBinder offset is not 480");
	auto constexpr UMapCharacterIconBaseWidget_ButtonBInder_Offset = offsetof(UMapCharacterIconBaseWidget, ButtonBInder);
	static_assert(UMapCharacterIconBaseWidget_ButtonBInder_Offset == 0x4a0, "UMapCharacterIconBaseWidget::ButtonBInder offset is not 4a0");
	auto constexpr UMapCharacterIconBaseWidget_boolField4D0_Offset = offsetof(UMapCharacterIconBaseWidget, boolField4D0);
	static_assert(UMapCharacterIconBaseWidget_boolField4D0_Offset == 0x4d0, "UMapCharacterIconBaseWidget::boolField4D0 offset is not 4d0");
	auto constexpr UMapCharacterIconBaseWidget_TeamNumberText_Offset = offsetof(UMapCharacterIconBaseWidget, TeamNumberText);
	static_assert(UMapCharacterIconBaseWidget_TeamNumberText_Offset == 0x4d8, "UMapCharacterIconBaseWidget::TeamNumberText offset is not 4d8");
	auto constexpr UMapCharacterIconBaseWidget_RiderLayerBinder_Offset = offsetof(UMapCharacterIconBaseWidget, RiderLayerBinder);
	static_assert(UMapCharacterIconBaseWidget_RiderLayerBinder_Offset == 0x4f8, "UMapCharacterIconBaseWidget::RiderLayerBinder offset is not 4f8");
	auto constexpr UMapCharacterIconBaseWidget_RiderIconClass_Offset = offsetof(UMapCharacterIconBaseWidget, RiderIconClass);
	static_assert(UMapCharacterIconBaseWidget_RiderIconClass_Offset == 0x518, "UMapCharacterIconBaseWidget::RiderIconClass offset is not 518");
	auto constexpr UMapCharacterIconBaseWidget_DisplayNameFormatWithOtherPlayer_Offset = offsetof(UMapCharacterIconBaseWidget, DisplayNameFormatWithOtherPlayer);
	static_assert(UMapCharacterIconBaseWidget_DisplayNameFormatWithOtherPlayer_Offset == 0x520, "UMapCharacterIconBaseWidget::DisplayNameFormatWithOtherPlayer offset is not 520");
	auto constexpr UMapCharacterIconBaseWidget_MyDirectionIcon_Offset = offsetof(UMapCharacterIconBaseWidget, MyDirectionIcon);
	static_assert(UMapCharacterIconBaseWidget_MyDirectionIcon_Offset == 0x538, "UMapCharacterIconBaseWidget::MyDirectionIcon offset is not 538");
	auto constexpr UMapCharacterIconBaseWidget_TeamDirectionIcon_Offset = offsetof(UMapCharacterIconBaseWidget, TeamDirectionIcon);
	static_assert(UMapCharacterIconBaseWidget_TeamDirectionIcon_Offset == 0x540, "UMapCharacterIconBaseWidget::TeamDirectionIcon offset is not 540");
	auto constexpr UMapCharacterIconBaseWidget_SpectatedIconBorder_Offset = offsetof(UMapCharacterIconBaseWidget, SpectatedIconBorder);
	static_assert(UMapCharacterIconBaseWidget_SpectatedIconBorder_Offset == 0x548, "UMapCharacterIconBaseWidget::SpectatedIconBorder offset is not 548");
	auto constexpr UMapCharacterIconBaseWidget_NameTagColorImageBinder_Offset = offsetof(UMapCharacterIconBaseWidget, NameTagColorImageBinder);
	static_assert(UMapCharacterIconBaseWidget_NameTagColorImageBinder_Offset == 0x568, "UMapCharacterIconBaseWidget::NameTagColorImageBinder offset is not 568");
	auto constexpr UMapCharacterIconBaseWidget_PendingIconMaterial_Offset = offsetof(UMapCharacterIconBaseWidget, PendingIconMaterial);
	static_assert(UMapCharacterIconBaseWidget_PendingIconMaterial_Offset == 0x5a8, "UMapCharacterIconBaseWidget::PendingIconMaterial offset is not 5a8");
	auto constexpr UMapCharacterIconBaseWidget_RiderIconList_Offset = offsetof(UMapCharacterIconBaseWidget, RiderIconList);
	static_assert(UMapCharacterIconBaseWidget_RiderIconList_Offset == 0x5b0, "UMapCharacterIconBaseWidget::RiderIconList offset is not 5b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
