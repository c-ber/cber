#pragma once
#include "UTslBaseHUD.hpp"
#include "FCanvasIcon.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslHUD // Size: 0xB20
	: public UTslBaseHUD // Size: 0x610
{
private:
	typedef UTslHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1319); // id32("Class TslGame.TslHUD")
		return ptr;
	}
	FScriptMulticastDelegate OnPossessPawnChange; /* Ofs: 0x610 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnPossessPawnChange */
	FScriptMulticastDelegate OnDisplaySystemMessage; /* Ofs: 0x620 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnDisplaySystemMessage */
	FScriptMulticastDelegate OnDisplayKilledMessage; /* Ofs: 0x630 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnDisplayKilledMessage */
	FScriptMulticastDelegate OnKillCountChanged; /* Ofs: 0x640 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnKillCountChanged */
	FScriptMulticastDelegate OnAlivePlayerCountChanged; /* Ofs: 0x650 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnAlivePlayerCountChanged */
	FScriptMulticastDelegate OnJoinPlayerCountChanged; /* Ofs: 0x660 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnJoinPlayerCountChanged */
	FScriptMulticastDelegate OnNotifyHit; /* Ofs: 0x670 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyHit */
	FScriptMulticastDelegate OnTeamPlayerJoin; /* Ofs: 0x680 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnTeamPlayerJoin */
	FScriptMulticastDelegate OnTeamPlayerRemove; /* Ofs: 0x690 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnTeamPlayerRemove */
	FScriptMulticastDelegate OnMatchStarted; /* Ofs: 0x6A0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnMatchStarted */
	FScriptMulticastDelegate OnNotifyStartBuff; /* Ofs: 0x6B0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyStartBuff */
	FScriptMulticastDelegate OnNotifyHealAmount; /* Ofs: 0x6C0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyHealAmount */
	FScriptMulticastDelegate OnNotifyRestrictingPlayArea; /* Ofs: 0x6D0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyRestrictingPlayArea */
	FScriptMulticastDelegate OnNotifyNextGasIn; /* Ofs: 0x6E0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyNextGasIn */
	FScriptMulticastDelegate OnNotifyDisplayMessage; /* Ofs: 0x6F0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyDisplayMessage */
	FScriptMulticastDelegate OnNotifyWeaponChange; /* Ofs: 0x700 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyWeaponChange */
	FScriptMulticastDelegate OnNotifyWeaponUnarm; /* Ofs: 0x710 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyWeaponUnarm */
	FScriptMulticastDelegate OnNotifyHeal; /* Ofs: 0x720 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyHeal */
	FScriptMulticastDelegate OnNotifyDropSlotOnOtherContainer; /* Ofs: 0x730 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyDropSlotOnOtherContainer */
	FScriptMulticastDelegate OnNotifyBlockingWidgetOpened; /* Ofs: 0x740 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyBlockingWidgetOpened */
	FScriptMulticastDelegate OnUseHealItemPad; /* Ofs: 0x750 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnUseHealItemPad */
	FScriptMulticastDelegate OnSelectNextHealItemPad; /* Ofs: 0x760 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnSelectNextHealItemPad */
	FScriptMulticastDelegate OnNotifyReloadingNeed; /* Ofs: 0x770 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyReloadingNeed */
	FScriptMulticastDelegate OnNotifyReloaded; /* Ofs: 0x780 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyReloaded */
	FScriptMulticastDelegate OnNotifyVehicleRide; /* Ofs: 0x790 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyVehicleRide */
	FScriptMulticastDelegate OnNotifyVehicleLeave; /* Ofs: 0x7A0 Size: 0x10 - MulticastDelegateProperty TslGame.TslHUD.OnNotifyVehicleLeave */
	int32_t BluezoneState; /* Ofs: 0x7B0 Size: 0x4 - IntProperty TslGame.TslHUD.BluezoneState */
	uint8_t boolField7B4;
	uint8_t boolField7B5;
	uint8_t boolField7B6;
	uint8_t UnknownData7B7[0x1];
	float GpsResetTimeCheck; /* Ofs: 0x7B8 Size: 0x4 - FloatProperty TslGame.TslHUD.GpsResetTimeCheck */
	uint8_t UnknownData7BC[0x34];
	FCanvasIcon TimePlaceBg; /* Ofs: 0x7F0 Size: 0x18 - StructProperty TslGame.TslHUD.TimePlaceBg */
	FCanvasIcon PrimaryWeapBg; /* Ofs: 0x808 Size: 0x18 - StructProperty TslGame.TslHUD.PrimaryWeapBg */
	FCanvasIcon SecondaryWeapBg; /* Ofs: 0x820 Size: 0x18 - StructProperty TslGame.TslHUD.SecondaryWeapBg */
	FCanvasIcon Crosshair[5]; /* Ofs: 0x5 Size: 0x18 - StructProperty TslGame.TslHUD.Crosshair */
	uint8_t UnknownData8B0[0x78];
	ExternalPtr<struct UTexture2D> HitNotifyTexture; /* Ofs: 0x928 Size: 0x8 - ObjectProperty TslGame.TslHUD.HitNotifyTexture */
	ExternalPtr<struct UTexture2D> HUDMainTexture; /* Ofs: 0x930 Size: 0x8 - ObjectProperty TslGame.TslHUD.HUDMainTexture */
	ExternalPtr<struct UTexture2D> HUDAssets02Texture; /* Ofs: 0x938 Size: 0x8 - ObjectProperty TslGame.TslHUD.HUDAssets02Texture */
	ExternalPtr<struct UTexture2D> LowHealthOverlayTexture; /* Ofs: 0x940 Size: 0x8 - ObjectProperty TslGame.TslHUD.LowHealthOverlayTexture */
	ExternalPtr<struct UFont> BigFont; /* Ofs: 0x948 Size: 0x8 - ObjectProperty TslGame.TslHUD.BigFont */
	ExternalPtr<struct UFont> NormalFont; /* Ofs: 0x950 Size: 0x8 - ObjectProperty TslGame.TslHUD.NormalFont */
	uint8_t UnknownData958[0x60];
	ExternalPtr<struct UTslSceneCaptureWorld> SceneCaptureWorld; /* Ofs: 0x9B8 Size: 0x8 - ObjectProperty TslGame.TslHUD.SceneCaptureWorld */
	ExternalPtr<struct UCharacterStudio> CharacterStudio; /* Ofs: 0x9C0 Size: 0x8 - ObjectProperty TslGame.TslHUD.CharacterStudio */
	uint8_t UnknownData9C8[0x10];
	FVector NextPlayzonePosition; /* Ofs: 0x9D8 Size: 0xC - StructProperty TslGame.TslHUD.NextPlayzonePosition */
	float NextPlayzoneRadius; /* Ofs: 0x9E4 Size: 0x4 - FloatProperty TslGame.TslHUD.NextPlayzoneRadius */
	FVector CurrentPlayzonePosition; /* Ofs: 0x9E8 Size: 0xC - StructProperty TslGame.TslHUD.CurrentPlayzonePosition */
	float CurrentPlayzoneRadius; /* Ofs: 0x9F4 Size: 0x4 - FloatProperty TslGame.TslHUD.CurrentPlayzoneRadius */
	uint8_t UnknownData9F8[0x50];
	FString SceneCapturePackageName; /* Ofs: 0xA48 Size: 0x10 - StrProperty TslGame.TslHUD.SceneCapturePackageName */
	uint8_t UnknownDataA58[0xC8];


	inline bool SetOnPossessPawnChange(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x610, value); }
	inline bool SetOnDisplaySystemMessage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x620, value); }
	inline bool SetOnDisplayKilledMessage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x630, value); }
	inline bool SetOnKillCountChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x640, value); }
	inline bool SetOnAlivePlayerCountChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x650, value); }
	inline bool SetOnJoinPlayerCountChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x660, value); }
	inline bool SetOnNotifyHit(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x670, value); }
	inline bool SetOnTeamPlayerJoin(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x680, value); }
	inline bool SetOnTeamPlayerRemove(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x690, value); }
	inline bool SetOnMatchStarted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetOnNotifyStartBuff(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetOnNotifyHealAmount(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetOnNotifyRestrictingPlayArea(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetOnNotifyNextGasIn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetOnNotifyDisplayMessage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetOnNotifyWeaponChange(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x700, value); }
	inline bool SetOnNotifyWeaponUnarm(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x710, value); }
	inline bool SetOnNotifyHeal(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x720, value); }
	inline bool SetOnNotifyDropSlotOnOtherContainer(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x730, value); }
	inline bool SetOnNotifyBlockingWidgetOpened(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x740, value); }
	inline bool SetOnUseHealItemPad(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x750, value); }
	inline bool SetOnSelectNextHealItemPad(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x760, value); }
	inline bool SetOnNotifyReloadingNeed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x770, value); }
	inline bool SetOnNotifyReloaded(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x780, value); }
	inline bool SetOnNotifyVehicleRide(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x790, value); }
	inline bool SetOnNotifyVehicleLeave(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetBluezoneState(t_structHelper inst, int32_t value) { inst.WriteOffset(0x7B0, value); }
	inline bool bGpsReset()
	{
		return boolField7B4& 0x1;
	}
	inline bool SetbGpsReset(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bBluezoneReset()
	{
		return boolField7B5& 0x1;
	}
	inline bool SetbBluezoneReset(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7B5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPlayzoneReset()
	{
		return boolField7B6& 0x1;
	}
	inline bool SetbPlayzoneReset(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7B6, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGpsResetTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x7B8, value); }
	inline bool SetTimePlaceBg(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetPrimaryWeapBg(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x808, value); }
	inline bool SetSecondaryWeapBg(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x820, value); }
	inline bool SetHitNotifyTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x928, value); }
	inline bool SetHUDMainTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x930, value); }
	inline bool SetHUDAssets02Texture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x938, value); }
	inline bool SetLowHealthOverlayTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x940, value); }
	inline bool SetBigFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x948, value); }
	inline bool SetNormalFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x950, value); }
	inline bool SetSceneCaptureWorld(t_structHelper inst, ExternalPtr<struct UTslSceneCaptureWorld> value) { inst.WriteOffset(0x9B8, value); }
	inline bool SetCharacterStudio(t_structHelper inst, ExternalPtr<struct UCharacterStudio> value) { inst.WriteOffset(0x9C0, value); }
	inline bool SetNextPlayzonePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetNextPlayzoneRadius(t_structHelper inst, float value) { inst.WriteOffset(0x9E4, value); }
	inline bool SetCurrentPlayzonePosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetCurrentPlayzoneRadius(t_structHelper inst, float value) { inst.WriteOffset(0x9F4, value); }
	inline bool SetSceneCapturePackageName(t_structHelper inst, FString value) { inst.WriteOffset(0xA48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslHUD = sizeof(UTslHUD); // 2848
    static_assert(sizeof(UTslHUD) == 0xB20, "Size of UTslHUD is not correct.");
	auto constexpr UTslHUD_OnPossessPawnChange_Offset = offsetof(UTslHUD, OnPossessPawnChange);
	static_assert(UTslHUD_OnPossessPawnChange_Offset == 0x610, "UTslHUD::OnPossessPawnChange offset is not 610");
	auto constexpr UTslHUD_OnDisplaySystemMessage_Offset = offsetof(UTslHUD, OnDisplaySystemMessage);
	static_assert(UTslHUD_OnDisplaySystemMessage_Offset == 0x620, "UTslHUD::OnDisplaySystemMessage offset is not 620");
	auto constexpr UTslHUD_OnDisplayKilledMessage_Offset = offsetof(UTslHUD, OnDisplayKilledMessage);
	static_assert(UTslHUD_OnDisplayKilledMessage_Offset == 0x630, "UTslHUD::OnDisplayKilledMessage offset is not 630");
	auto constexpr UTslHUD_OnKillCountChanged_Offset = offsetof(UTslHUD, OnKillCountChanged);
	static_assert(UTslHUD_OnKillCountChanged_Offset == 0x640, "UTslHUD::OnKillCountChanged offset is not 640");
	auto constexpr UTslHUD_OnAlivePlayerCountChanged_Offset = offsetof(UTslHUD, OnAlivePlayerCountChanged);
	static_assert(UTslHUD_OnAlivePlayerCountChanged_Offset == 0x650, "UTslHUD::OnAlivePlayerCountChanged offset is not 650");
	auto constexpr UTslHUD_OnJoinPlayerCountChanged_Offset = offsetof(UTslHUD, OnJoinPlayerCountChanged);
	static_assert(UTslHUD_OnJoinPlayerCountChanged_Offset == 0x660, "UTslHUD::OnJoinPlayerCountChanged offset is not 660");
	auto constexpr UTslHUD_OnNotifyHit_Offset = offsetof(UTslHUD, OnNotifyHit);
	static_assert(UTslHUD_OnNotifyHit_Offset == 0x670, "UTslHUD::OnNotifyHit offset is not 670");
	auto constexpr UTslHUD_OnTeamPlayerJoin_Offset = offsetof(UTslHUD, OnTeamPlayerJoin);
	static_assert(UTslHUD_OnTeamPlayerJoin_Offset == 0x680, "UTslHUD::OnTeamPlayerJoin offset is not 680");
	auto constexpr UTslHUD_OnTeamPlayerRemove_Offset = offsetof(UTslHUD, OnTeamPlayerRemove);
	static_assert(UTslHUD_OnTeamPlayerRemove_Offset == 0x690, "UTslHUD::OnTeamPlayerRemove offset is not 690");
	auto constexpr UTslHUD_OnMatchStarted_Offset = offsetof(UTslHUD, OnMatchStarted);
	static_assert(UTslHUD_OnMatchStarted_Offset == 0x6a0, "UTslHUD::OnMatchStarted offset is not 6a0");
	auto constexpr UTslHUD_OnNotifyStartBuff_Offset = offsetof(UTslHUD, OnNotifyStartBuff);
	static_assert(UTslHUD_OnNotifyStartBuff_Offset == 0x6b0, "UTslHUD::OnNotifyStartBuff offset is not 6b0");
	auto constexpr UTslHUD_OnNotifyHealAmount_Offset = offsetof(UTslHUD, OnNotifyHealAmount);
	static_assert(UTslHUD_OnNotifyHealAmount_Offset == 0x6c0, "UTslHUD::OnNotifyHealAmount offset is not 6c0");
	auto constexpr UTslHUD_OnNotifyRestrictingPlayArea_Offset = offsetof(UTslHUD, OnNotifyRestrictingPlayArea);
	static_assert(UTslHUD_OnNotifyRestrictingPlayArea_Offset == 0x6d0, "UTslHUD::OnNotifyRestrictingPlayArea offset is not 6d0");
	auto constexpr UTslHUD_OnNotifyNextGasIn_Offset = offsetof(UTslHUD, OnNotifyNextGasIn);
	static_assert(UTslHUD_OnNotifyNextGasIn_Offset == 0x6e0, "UTslHUD::OnNotifyNextGasIn offset is not 6e0");
	auto constexpr UTslHUD_OnNotifyDisplayMessage_Offset = offsetof(UTslHUD, OnNotifyDisplayMessage);
	static_assert(UTslHUD_OnNotifyDisplayMessage_Offset == 0x6f0, "UTslHUD::OnNotifyDisplayMessage offset is not 6f0");
	auto constexpr UTslHUD_OnNotifyWeaponChange_Offset = offsetof(UTslHUD, OnNotifyWeaponChange);
	static_assert(UTslHUD_OnNotifyWeaponChange_Offset == 0x700, "UTslHUD::OnNotifyWeaponChange offset is not 700");
	auto constexpr UTslHUD_OnNotifyWeaponUnarm_Offset = offsetof(UTslHUD, OnNotifyWeaponUnarm);
	static_assert(UTslHUD_OnNotifyWeaponUnarm_Offset == 0x710, "UTslHUD::OnNotifyWeaponUnarm offset is not 710");
	auto constexpr UTslHUD_OnNotifyHeal_Offset = offsetof(UTslHUD, OnNotifyHeal);
	static_assert(UTslHUD_OnNotifyHeal_Offset == 0x720, "UTslHUD::OnNotifyHeal offset is not 720");
	auto constexpr UTslHUD_OnNotifyDropSlotOnOtherContainer_Offset = offsetof(UTslHUD, OnNotifyDropSlotOnOtherContainer);
	static_assert(UTslHUD_OnNotifyDropSlotOnOtherContainer_Offset == 0x730, "UTslHUD::OnNotifyDropSlotOnOtherContainer offset is not 730");
	auto constexpr UTslHUD_OnNotifyBlockingWidgetOpened_Offset = offsetof(UTslHUD, OnNotifyBlockingWidgetOpened);
	static_assert(UTslHUD_OnNotifyBlockingWidgetOpened_Offset == 0x740, "UTslHUD::OnNotifyBlockingWidgetOpened offset is not 740");
	auto constexpr UTslHUD_OnUseHealItemPad_Offset = offsetof(UTslHUD, OnUseHealItemPad);
	static_assert(UTslHUD_OnUseHealItemPad_Offset == 0x750, "UTslHUD::OnUseHealItemPad offset is not 750");
	auto constexpr UTslHUD_OnSelectNextHealItemPad_Offset = offsetof(UTslHUD, OnSelectNextHealItemPad);
	static_assert(UTslHUD_OnSelectNextHealItemPad_Offset == 0x760, "UTslHUD::OnSelectNextHealItemPad offset is not 760");
	auto constexpr UTslHUD_OnNotifyReloadingNeed_Offset = offsetof(UTslHUD, OnNotifyReloadingNeed);
	static_assert(UTslHUD_OnNotifyReloadingNeed_Offset == 0x770, "UTslHUD::OnNotifyReloadingNeed offset is not 770");
	auto constexpr UTslHUD_OnNotifyReloaded_Offset = offsetof(UTslHUD, OnNotifyReloaded);
	static_assert(UTslHUD_OnNotifyReloaded_Offset == 0x780, "UTslHUD::OnNotifyReloaded offset is not 780");
	auto constexpr UTslHUD_OnNotifyVehicleRide_Offset = offsetof(UTslHUD, OnNotifyVehicleRide);
	static_assert(UTslHUD_OnNotifyVehicleRide_Offset == 0x790, "UTslHUD::OnNotifyVehicleRide offset is not 790");
	auto constexpr UTslHUD_OnNotifyVehicleLeave_Offset = offsetof(UTslHUD, OnNotifyVehicleLeave);
	static_assert(UTslHUD_OnNotifyVehicleLeave_Offset == 0x7a0, "UTslHUD::OnNotifyVehicleLeave offset is not 7a0");
	auto constexpr UTslHUD_BluezoneState_Offset = offsetof(UTslHUD, BluezoneState);
	static_assert(UTslHUD_BluezoneState_Offset == 0x7b0, "UTslHUD::BluezoneState offset is not 7b0");
	auto constexpr UTslHUD_boolField7B4_Offset = offsetof(UTslHUD, boolField7B4);
	static_assert(UTslHUD_boolField7B4_Offset == 0x7b4, "UTslHUD::boolField7B4 offset is not 7b4");
	auto constexpr UTslHUD_boolField7B5_Offset = offsetof(UTslHUD, boolField7B5);
	static_assert(UTslHUD_boolField7B5_Offset == 0x7b5, "UTslHUD::boolField7B5 offset is not 7b5");
	auto constexpr UTslHUD_boolField7B6_Offset = offsetof(UTslHUD, boolField7B6);
	static_assert(UTslHUD_boolField7B6_Offset == 0x7b6, "UTslHUD::boolField7B6 offset is not 7b6");
	auto constexpr UTslHUD_GpsResetTimeCheck_Offset = offsetof(UTslHUD, GpsResetTimeCheck);
	static_assert(UTslHUD_GpsResetTimeCheck_Offset == 0x7b8, "UTslHUD::GpsResetTimeCheck offset is not 7b8");
	auto constexpr UTslHUD_TimePlaceBg_Offset = offsetof(UTslHUD, TimePlaceBg);
	static_assert(UTslHUD_TimePlaceBg_Offset == 0x7f0, "UTslHUD::TimePlaceBg offset is not 7f0");
	auto constexpr UTslHUD_PrimaryWeapBg_Offset = offsetof(UTslHUD, PrimaryWeapBg);
	static_assert(UTslHUD_PrimaryWeapBg_Offset == 0x808, "UTslHUD::PrimaryWeapBg offset is not 808");
	auto constexpr UTslHUD_SecondaryWeapBg_Offset = offsetof(UTslHUD, SecondaryWeapBg);
	static_assert(UTslHUD_SecondaryWeapBg_Offset == 0x820, "UTslHUD::SecondaryWeapBg offset is not 820");
	auto constexpr UTslHUD_Crosshair_Offset = offsetof(UTslHUD, Crosshair);
	static_assert(UTslHUD_Crosshair_Offset == 0x838, "UTslHUD::Crosshair offset is not 838");
	auto constexpr UTslHUD_HitNotifyTexture_Offset = offsetof(UTslHUD, HitNotifyTexture);
	static_assert(UTslHUD_HitNotifyTexture_Offset == 0x928, "UTslHUD::HitNotifyTexture offset is not 928");
	auto constexpr UTslHUD_HUDMainTexture_Offset = offsetof(UTslHUD, HUDMainTexture);
	static_assert(UTslHUD_HUDMainTexture_Offset == 0x930, "UTslHUD::HUDMainTexture offset is not 930");
	auto constexpr UTslHUD_HUDAssets02Texture_Offset = offsetof(UTslHUD, HUDAssets02Texture);
	static_assert(UTslHUD_HUDAssets02Texture_Offset == 0x938, "UTslHUD::HUDAssets02Texture offset is not 938");
	auto constexpr UTslHUD_LowHealthOverlayTexture_Offset = offsetof(UTslHUD, LowHealthOverlayTexture);
	static_assert(UTslHUD_LowHealthOverlayTexture_Offset == 0x940, "UTslHUD::LowHealthOverlayTexture offset is not 940");
	auto constexpr UTslHUD_BigFont_Offset = offsetof(UTslHUD, BigFont);
	static_assert(UTslHUD_BigFont_Offset == 0x948, "UTslHUD::BigFont offset is not 948");
	auto constexpr UTslHUD_NormalFont_Offset = offsetof(UTslHUD, NormalFont);
	static_assert(UTslHUD_NormalFont_Offset == 0x950, "UTslHUD::NormalFont offset is not 950");
	auto constexpr UTslHUD_SceneCaptureWorld_Offset = offsetof(UTslHUD, SceneCaptureWorld);
	static_assert(UTslHUD_SceneCaptureWorld_Offset == 0x9b8, "UTslHUD::SceneCaptureWorld offset is not 9b8");
	auto constexpr UTslHUD_CharacterStudio_Offset = offsetof(UTslHUD, CharacterStudio);
	static_assert(UTslHUD_CharacterStudio_Offset == 0x9c0, "UTslHUD::CharacterStudio offset is not 9c0");
	auto constexpr UTslHUD_NextPlayzonePosition_Offset = offsetof(UTslHUD, NextPlayzonePosition);
	static_assert(UTslHUD_NextPlayzonePosition_Offset == 0x9d8, "UTslHUD::NextPlayzonePosition offset is not 9d8");
	auto constexpr UTslHUD_NextPlayzoneRadius_Offset = offsetof(UTslHUD, NextPlayzoneRadius);
	static_assert(UTslHUD_NextPlayzoneRadius_Offset == 0x9e4, "UTslHUD::NextPlayzoneRadius offset is not 9e4");
	auto constexpr UTslHUD_CurrentPlayzonePosition_Offset = offsetof(UTslHUD, CurrentPlayzonePosition);
	static_assert(UTslHUD_CurrentPlayzonePosition_Offset == 0x9e8, "UTslHUD::CurrentPlayzonePosition offset is not 9e8");
	auto constexpr UTslHUD_CurrentPlayzoneRadius_Offset = offsetof(UTslHUD, CurrentPlayzoneRadius);
	static_assert(UTslHUD_CurrentPlayzoneRadius_Offset == 0x9f4, "UTslHUD::CurrentPlayzoneRadius offset is not 9f4");
	auto constexpr UTslHUD_SceneCapturePackageName_Offset = offsetof(UTslHUD, SceneCapturePackageName);
	static_assert(UTslHUD_SceneCapturePackageName_Offset == 0xa48, "UTslHUD::SceneCapturePackageName offset is not a48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
