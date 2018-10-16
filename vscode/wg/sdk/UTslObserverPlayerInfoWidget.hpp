#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Animation.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FUmgWidgetBinder_Border.hpp"
#include "FUmgWidgetBinder_WidgetSwitcher.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_CanvasPanel.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"
#include "FLinearColor.hpp"
#include "FColorBlindColorSet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslObserverPlayerInfoWidget // Size: 0x5E0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslObserverPlayerInfoWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1580); // id32("Class TslGame.TslObserverPlayerInfoWidget")
		return ptr;
	}
	ExternalPtr<struct UTexture> UnArmedIcon; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslObserverPlayerInfoWidget.UnArmedIcon */
	float UnArmedIconRatio; /* Ofs: 0x308 Size: 0x4 - FloatProperty TslGame.TslObserverPlayerInfoWidget.UnArmedIconRatio */
	uint8_t UnknownData30C[0x4];
	ExternalPtr<struct UTslCharacter> CachedCharacter; /* Ofs: 0x310 Size: 0x8 - ObjectProperty TslGame.TslObserverPlayerInfoWidget.CachedCharacter */
	int32_t OldAmmoCount; /* Ofs: 0x318 Size: 0x4 - IntProperty TslGame.TslObserverPlayerInfoWidget.OldAmmoCount */
	uint8_t UnknownData31C[0x4];
	FUmgWidgetBinder_Animation AmmoIncreasingAnimBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.AmmoIncreasingAnimBinder */
	FUmgWidgetBinder_Animation AmmoDecreasingAnimBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.AmmoDecreasingAnimBinder */
	FUmgWidgetBinder_TextBlock UserNameText_Binder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.UserNameText_Binder */
	FUmgWidgetBinder_Border PlayerNameBorder_Binder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.PlayerNameBorder_Binder */
	FUmgWidgetBinder_WidgetSwitcher TeamInfoSwitcher_Binder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.TeamInfoSwitcher_Binder */
	FUmgWidgetBinder_Border TeamNumberBorder_Binder; /* Ofs: 0x3C0 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.TeamNumberBorder_Binder */
	FUmgWidgetBinder_Image TeamIconImage_Binder; /* Ofs: 0x3E0 Size: 0x28 - StructProperty TslGame.TslObserverPlayerInfoWidget.TeamIconImage_Binder */
	FUmgWidgetBinder_TextBlock TeamNumberText_Binder; /* Ofs: 0x408 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.TeamNumberText_Binder */
	FUmgWidgetBinder_CanvasPanel AmmoCanvas_Binder; /* Ofs: 0x428 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.AmmoCanvas_Binder */
	FUmgWidgetBinder_TextBlock AmmoCountText_Binder; /* Ofs: 0x448 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.AmmoCountText_Binder */
	FUmgWidgetBinder_TextBlock AmmoTotalCountText_Binder; /* Ofs: 0x468 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.AmmoTotalCountText_Binder */
	FUmgWidgetBinder_TextBlock KillCountText_Binder; /* Ofs: 0x488 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.KillCountText_Binder */
	FUmgWidgetBinder_UserWidget LifeGaugeTemplateWidget_Binder; /* Ofs: 0x4A8 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.LifeGaugeTemplateWidget_Binder */
	FUmgWidgetBinder_Image ScopeIconImage_Binder; /* Ofs: 0x4C8 Size: 0x28 - StructProperty TslGame.TslObserverPlayerInfoWidget.ScopeIconImage_Binder */
	FUmgWidgetBinder_Image WeaponIconImageBinder; /* Ofs: 0x4F0 Size: 0x28 - StructProperty TslGame.TslObserverPlayerInfoWidget.WeaponIconImageBinder */
	FUmgWidgetBinder_SizeBox WeaponIconImageSizeBoxBinder; /* Ofs: 0x518 Size: 0x20 - StructProperty TslGame.TslObserverPlayerInfoWidget.WeaponIconImageSizeBoxBinder */
	FName WeaponIconTextureParmName; /* Ofs: 0x538 Size: 0x8 - NameProperty TslGame.TslObserverPlayerInfoWidget.WeaponIconTextureParmName */
	FName WeaponIconColorParmName; /* Ofs: 0x540 Size: 0x8 - NameProperty TslGame.TslObserverPlayerInfoWidget.WeaponIconColorParmName */
	FLinearColor WeaponColor_Armed; /* Ofs: 0x548 Size: 0x10 - StructProperty TslGame.TslObserverPlayerInfoWidget.WeaponColor_Armed */
	FLinearColor WeaponColor_Normal; /* Ofs: 0x558 Size: 0x10 - StructProperty TslGame.TslObserverPlayerInfoWidget.WeaponColor_Normal */
	FColorBlindColorSet WeaponColorSet_NoReload; /* Ofs: 0x568 Size: 0x10 - StructProperty TslGame.TslObserverPlayerInfoWidget.WeaponColorSet_NoReload */
	TMap<struct UClass, struct UTexture2D> WeaponAttachableTextureMap; /* Ofs: 0x578 Size: 0x50 - MapProperty TslGame.TslObserverPlayerInfoWidget.WeaponAttachableTextureMap */
	TArray<ExternalPtr<struct UTexture2D>> TeamBackgroundTextures; /* Ofs: 0x5C8 Size: 0x10 - ArrayProperty TslGame.TslObserverPlayerInfoWidget.TeamBackgroundTextures */
	int32_t TeamIconIndex; /* Ofs: 0x5D8 Size: 0x4 - IntProperty TslGame.TslObserverPlayerInfoWidget.TeamIconIndex */
	int32_t TeamIdIndex; /* Ofs: 0x5DC Size: 0x4 - IntProperty TslGame.TslObserverPlayerInfoWidget.TeamIdIndex */


	inline bool SetUnArmedIcon(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x300, value); }
	inline bool SetUnArmedIconRatio(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetCachedCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x310, value); }
	inline bool SetOldAmmoCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x318, value); }
	inline bool SetAmmoIncreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x320, value); }
	inline bool SetAmmoDecreasingAnimBinder(t_structHelper inst, FUmgWidgetBinder_Animation value) { inst.WriteOffset(0x340, value); }
	inline bool SetUserNameText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x360, value); }
	inline bool SetPlayerNameBorder_Binder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x380, value); }
	inline bool SetTeamInfoSwitcher_Binder(t_structHelper inst, FUmgWidgetBinder_WidgetSwitcher value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetTeamNumberBorder_Binder(t_structHelper inst, FUmgWidgetBinder_Border value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetTeamIconImage_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetTeamNumberText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x408, value); }
	inline bool SetAmmoCanvas_Binder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x428, value); }
	inline bool SetAmmoCountText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x448, value); }
	inline bool SetAmmoTotalCountText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x468, value); }
	inline bool SetKillCountText_Binder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x488, value); }
	inline bool SetLifeGaugeTemplateWidget_Binder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetScopeIconImage_Binder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetWeaponIconImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetWeaponIconImageSizeBoxBinder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x518, value); }
	inline bool SetWeaponIconTextureParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x538, value); }
	inline bool SetWeaponIconColorParmName(t_structHelper inst, FName value) { inst.WriteOffset(0x540, value); }
	inline bool SetWeaponColor_Armed(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x548, value); }
	inline bool SetWeaponColor_Normal(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x558, value); }
	inline bool SetWeaponColorSet_NoReload(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x568, value); }
	inline bool SetWeaponAttachableTextureMap(t_structHelper inst, TMap<struct UClass, struct UTexture2D> value) { inst.WriteOffset(0x578, value); }
	inline bool SetTeamBackgroundTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetTeamIconIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetTeamIdIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5DC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslObserverPlayerInfoWidget = sizeof(UTslObserverPlayerInfoWidget); // 1504
    static_assert(sizeof(UTslObserverPlayerInfoWidget) == 0x5E0, "Size of UTslObserverPlayerInfoWidget is not correct.");
	auto constexpr UTslObserverPlayerInfoWidget_UnArmedIcon_Offset = offsetof(UTslObserverPlayerInfoWidget, UnArmedIcon);
	static_assert(UTslObserverPlayerInfoWidget_UnArmedIcon_Offset == 0x300, "UTslObserverPlayerInfoWidget::UnArmedIcon offset is not 300");
	auto constexpr UTslObserverPlayerInfoWidget_UnArmedIconRatio_Offset = offsetof(UTslObserverPlayerInfoWidget, UnArmedIconRatio);
	static_assert(UTslObserverPlayerInfoWidget_UnArmedIconRatio_Offset == 0x308, "UTslObserverPlayerInfoWidget::UnArmedIconRatio offset is not 308");
	auto constexpr UTslObserverPlayerInfoWidget_CachedCharacter_Offset = offsetof(UTslObserverPlayerInfoWidget, CachedCharacter);
	static_assert(UTslObserverPlayerInfoWidget_CachedCharacter_Offset == 0x310, "UTslObserverPlayerInfoWidget::CachedCharacter offset is not 310");
	auto constexpr UTslObserverPlayerInfoWidget_OldAmmoCount_Offset = offsetof(UTslObserverPlayerInfoWidget, OldAmmoCount);
	static_assert(UTslObserverPlayerInfoWidget_OldAmmoCount_Offset == 0x318, "UTslObserverPlayerInfoWidget::OldAmmoCount offset is not 318");
	auto constexpr UTslObserverPlayerInfoWidget_AmmoIncreasingAnimBinder_Offset = offsetof(UTslObserverPlayerInfoWidget, AmmoIncreasingAnimBinder);
	static_assert(UTslObserverPlayerInfoWidget_AmmoIncreasingAnimBinder_Offset == 0x320, "UTslObserverPlayerInfoWidget::AmmoIncreasingAnimBinder offset is not 320");
	auto constexpr UTslObserverPlayerInfoWidget_AmmoDecreasingAnimBinder_Offset = offsetof(UTslObserverPlayerInfoWidget, AmmoDecreasingAnimBinder);
	static_assert(UTslObserverPlayerInfoWidget_AmmoDecreasingAnimBinder_Offset == 0x340, "UTslObserverPlayerInfoWidget::AmmoDecreasingAnimBinder offset is not 340");
	auto constexpr UTslObserverPlayerInfoWidget_UserNameText_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, UserNameText_Binder);
	static_assert(UTslObserverPlayerInfoWidget_UserNameText_Binder_Offset == 0x360, "UTslObserverPlayerInfoWidget::UserNameText_Binder offset is not 360");
	auto constexpr UTslObserverPlayerInfoWidget_PlayerNameBorder_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, PlayerNameBorder_Binder);
	static_assert(UTslObserverPlayerInfoWidget_PlayerNameBorder_Binder_Offset == 0x380, "UTslObserverPlayerInfoWidget::PlayerNameBorder_Binder offset is not 380");
	auto constexpr UTslObserverPlayerInfoWidget_TeamInfoSwitcher_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamInfoSwitcher_Binder);
	static_assert(UTslObserverPlayerInfoWidget_TeamInfoSwitcher_Binder_Offset == 0x3a0, "UTslObserverPlayerInfoWidget::TeamInfoSwitcher_Binder offset is not 3a0");
	auto constexpr UTslObserverPlayerInfoWidget_TeamNumberBorder_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamNumberBorder_Binder);
	static_assert(UTslObserverPlayerInfoWidget_TeamNumberBorder_Binder_Offset == 0x3c0, "UTslObserverPlayerInfoWidget::TeamNumberBorder_Binder offset is not 3c0");
	auto constexpr UTslObserverPlayerInfoWidget_TeamIconImage_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamIconImage_Binder);
	static_assert(UTslObserverPlayerInfoWidget_TeamIconImage_Binder_Offset == 0x3e0, "UTslObserverPlayerInfoWidget::TeamIconImage_Binder offset is not 3e0");
	auto constexpr UTslObserverPlayerInfoWidget_TeamNumberText_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamNumberText_Binder);
	static_assert(UTslObserverPlayerInfoWidget_TeamNumberText_Binder_Offset == 0x408, "UTslObserverPlayerInfoWidget::TeamNumberText_Binder offset is not 408");
	auto constexpr UTslObserverPlayerInfoWidget_AmmoCanvas_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, AmmoCanvas_Binder);
	static_assert(UTslObserverPlayerInfoWidget_AmmoCanvas_Binder_Offset == 0x428, "UTslObserverPlayerInfoWidget::AmmoCanvas_Binder offset is not 428");
	auto constexpr UTslObserverPlayerInfoWidget_AmmoCountText_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, AmmoCountText_Binder);
	static_assert(UTslObserverPlayerInfoWidget_AmmoCountText_Binder_Offset == 0x448, "UTslObserverPlayerInfoWidget::AmmoCountText_Binder offset is not 448");
	auto constexpr UTslObserverPlayerInfoWidget_AmmoTotalCountText_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, AmmoTotalCountText_Binder);
	static_assert(UTslObserverPlayerInfoWidget_AmmoTotalCountText_Binder_Offset == 0x468, "UTslObserverPlayerInfoWidget::AmmoTotalCountText_Binder offset is not 468");
	auto constexpr UTslObserverPlayerInfoWidget_KillCountText_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, KillCountText_Binder);
	static_assert(UTslObserverPlayerInfoWidget_KillCountText_Binder_Offset == 0x488, "UTslObserverPlayerInfoWidget::KillCountText_Binder offset is not 488");
	auto constexpr UTslObserverPlayerInfoWidget_LifeGaugeTemplateWidget_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, LifeGaugeTemplateWidget_Binder);
	static_assert(UTslObserverPlayerInfoWidget_LifeGaugeTemplateWidget_Binder_Offset == 0x4a8, "UTslObserverPlayerInfoWidget::LifeGaugeTemplateWidget_Binder offset is not 4a8");
	auto constexpr UTslObserverPlayerInfoWidget_ScopeIconImage_Binder_Offset = offsetof(UTslObserverPlayerInfoWidget, ScopeIconImage_Binder);
	static_assert(UTslObserverPlayerInfoWidget_ScopeIconImage_Binder_Offset == 0x4c8, "UTslObserverPlayerInfoWidget::ScopeIconImage_Binder offset is not 4c8");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponIconImageBinder_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponIconImageBinder);
	static_assert(UTslObserverPlayerInfoWidget_WeaponIconImageBinder_Offset == 0x4f0, "UTslObserverPlayerInfoWidget::WeaponIconImageBinder offset is not 4f0");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponIconImageSizeBoxBinder_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponIconImageSizeBoxBinder);
	static_assert(UTslObserverPlayerInfoWidget_WeaponIconImageSizeBoxBinder_Offset == 0x518, "UTslObserverPlayerInfoWidget::WeaponIconImageSizeBoxBinder offset is not 518");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponIconTextureParmName_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponIconTextureParmName);
	static_assert(UTslObserverPlayerInfoWidget_WeaponIconTextureParmName_Offset == 0x538, "UTslObserverPlayerInfoWidget::WeaponIconTextureParmName offset is not 538");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponIconColorParmName_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponIconColorParmName);
	static_assert(UTslObserverPlayerInfoWidget_WeaponIconColorParmName_Offset == 0x540, "UTslObserverPlayerInfoWidget::WeaponIconColorParmName offset is not 540");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponColor_Armed_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponColor_Armed);
	static_assert(UTslObserverPlayerInfoWidget_WeaponColor_Armed_Offset == 0x548, "UTslObserverPlayerInfoWidget::WeaponColor_Armed offset is not 548");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponColor_Normal_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponColor_Normal);
	static_assert(UTslObserverPlayerInfoWidget_WeaponColor_Normal_Offset == 0x558, "UTslObserverPlayerInfoWidget::WeaponColor_Normal offset is not 558");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponColorSet_NoReload_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponColorSet_NoReload);
	static_assert(UTslObserverPlayerInfoWidget_WeaponColorSet_NoReload_Offset == 0x568, "UTslObserverPlayerInfoWidget::WeaponColorSet_NoReload offset is not 568");
	auto constexpr UTslObserverPlayerInfoWidget_WeaponAttachableTextureMap_Offset = offsetof(UTslObserverPlayerInfoWidget, WeaponAttachableTextureMap);
	static_assert(UTslObserverPlayerInfoWidget_WeaponAttachableTextureMap_Offset == 0x578, "UTslObserverPlayerInfoWidget::WeaponAttachableTextureMap offset is not 578");
	auto constexpr UTslObserverPlayerInfoWidget_TeamBackgroundTextures_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamBackgroundTextures);
	static_assert(UTslObserverPlayerInfoWidget_TeamBackgroundTextures_Offset == 0x5c8, "UTslObserverPlayerInfoWidget::TeamBackgroundTextures offset is not 5c8");
	auto constexpr UTslObserverPlayerInfoWidget_TeamIconIndex_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamIconIndex);
	static_assert(UTslObserverPlayerInfoWidget_TeamIconIndex_Offset == 0x5d8, "UTslObserverPlayerInfoWidget::TeamIconIndex offset is not 5d8");
	auto constexpr UTslObserverPlayerInfoWidget_TeamIdIndex_Offset = offsetof(UTslObserverPlayerInfoWidget, TeamIdIndex);
	static_assert(UTslObserverPlayerInfoWidget_TeamIdIndex_Offset == 0x5dc, "UTslObserverPlayerInfoWidget::TeamIdIndex offset is not 5dc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
