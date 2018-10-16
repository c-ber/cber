#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "PlayerInfoType.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USquadPlayerInfoWidget_C // Size: 0x33C
	: public UUserWidget // Size: 0x248
{
private:
	typedef USquadPlayerInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187374); // id32("WidgetBlueprintGeneratedClass SquadPlayerInfoWidget.SquadPlayerInfoWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> KickButton_Out; /* Ofs: 0x250 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.KickButton_Out */
	ExternalPtr<struct UWidgetAnimation> KickButton_In; /* Ofs: 0x258 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.KickButton_In */
	ExternalPtr<struct UWidgetAnimation> PlayInfoState_shot; /* Ofs: 0x260 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayInfoState_shot */
	ExternalPtr<struct UWidgetAnimation> PlayInfoState_attack; /* Ofs: 0x268 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayInfoState_attack */
	ExternalPtr<struct UImage> BlackBG; /* Ofs: 0x270 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.BlackBG */
	ExternalPtr<struct USizeBox> HPGaugeSizeBox; /* Ofs: 0x278 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.HPGaugeSizeBox */
	ExternalPtr<struct UImage> IconImage; /* Ofs: 0x280 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.IconImage */
	ExternalPtr<struct UTextBlock> KillCount; /* Ofs: 0x288 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.KillCount */
	ExternalPtr<struct USizeBox> KillCount_sizebox; /* Ofs: 0x290 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.KillCount_sizebox */
	ExternalPtr<struct UBorder> PlayerInfoBorder; /* Ofs: 0x298 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayerInfoBorder */
	ExternalPtr<struct UTextBlock> PlayerName; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayerName */
	ExternalPtr<struct USizeBox> SizeBox_1; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.SizeBox_1 */
	ExternalPtr<struct USizeBox> SizeBox_5; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.SizeBox_5 */
	ExternalPtr<struct USizeBox> StatusIcon_sizebox; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.StatusIcon_sizebox */
	ExternalPtr<struct UTslHealthGaugeBpWidget_C> TslHealthGaugeBpWidget_Hori; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.TslHealthGaugeBpWidget_Hori */
	ExternalPtr<struct UTslCharacter> Character; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.Character */
	ExternalPtr<struct UMaterialInstanceDynamic> IconMaterial; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.IconMaterial */
	uint8_t boolField2D8;
	uint8_t boolField2D9;
	uint8_t UnknownData2DA[0x2];
	float KickButtonShowTimeCheck; /* Ofs: 0x2DC Size: 0x4 - FloatProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.KickButtonShowTimeCheck */
	float KickButtonDelayTime; /* Ofs: 0x2E0 Size: 0x4 - FloatProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.KickButtonDelayTime */
	uint8_t boolField2E4;
	uint8_t boolField2E5;
	uint8_t UnknownData2E6[0x2];
	ExternalPtr<struct UTslPlayerController> PlayerController; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayerController */
	uint8_t boolField2F0;
	uint8_t boolField2F1;
	uint8_t boolField2F2;
	TEnumAsByte<enum PlayerInfoType> PlayerInfoType; /* Ofs: 0x2F3 Size: 0x1 - ByteProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayerInfoType */
	int32_t ShortcutNum; /* Ofs: 0x2F4 Size: 0x4 - IntProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.ShortcutNum */
	FLinearColor QuitColor; /* Ofs: 0x2F8 Size: 0x10 - StructProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.QuitColor */
	FLinearColor DeadColor; /* Ofs: 0x308 Size: 0x10 - StructProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.DeadColor */
	ExternalPtr<struct UTeam> Team; /* Ofs: 0x318 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.Team */
	ExternalPtr<struct UTslPlayerState> PlayerState; /* Ofs: 0x320 Size: 0x8 - ObjectProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.PlayerState */
	FLinearColor NormalColor; /* Ofs: 0x328 Size: 0x10 - StructProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.NormalColor */
	int32_t MaxNameLength; /* Ofs: 0x338 Size: 0x4 - IntProperty SquadPlayerInfoWidget.SquadPlayerInfoWidget_C.MaxNameLength */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetKickButton_Out(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetKickButton_In(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetPlayInfoState_shot(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetPlayInfoState_attack(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x268, value); }
	inline bool SetBlackBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x270, value); }
	inline bool SetHPGaugeSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x278, value); }
	inline bool SetIconImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x280, value); }
	inline bool SetKillCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x288, value); }
	inline bool SetKillCount_sizebox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x290, value); }
	inline bool SetPlayerInfoBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x298, value); }
	inline bool SetPlayerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetSizeBox_1(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetSizeBox_5(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetStatusIcon_sizebox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetTslHealthGaugeBpWidget_Hori(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeBpWidget_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetIconMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x2D0, value); }
	inline bool bShow()
	{
		return boolField2D8& 0x1;
	}
	inline bool SetbShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCachedSelect()
	{
		return boolField2D9& 0x1;
	}
	inline bool SetbCachedSelect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2D9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKickButtonShowTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x2DC, value); }
	inline bool SetKickButtonDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x2E0, value); }
	inline bool bShowMouseOn()
	{
		return boolField2E4& 0x1;
	}
	inline bool SetbShowMouseOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2E4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsShowKickButton()
	{
		return boolField2E5& 0x1;
	}
	inline bool SetbIsShowKickButton(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2E5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerController(t_structHelper inst, ExternalPtr<struct UTslPlayerController> value) { inst.WriteOffset(0x2E8, value); }
	inline bool IsLeftCtrlDown()
	{
		return boolField2F0& 0x1;
	}
	inline bool SetIsLeftCtrlDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsBlink()
	{
		return boolField2F1& 0x1;
	}
	inline bool SetIsBlink(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsButtonMouseOvered()
	{
		return boolField2F2& 0x1;
	}
	inline bool SetIsButtonMouseOvered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerInfoType(t_structHelper inst, TEnumAsByte<enum PlayerInfoType> value) { inst.WriteOffset(0x2F3, value); }
	inline bool SetShortcutNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2F4, value); }
	inline bool SetQuitColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetDeadColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x308, value); }
	inline bool SetTeam(t_structHelper inst, ExternalPtr<struct UTeam> value) { inst.WriteOffset(0x318, value); }
	inline bool SetPlayerState(t_structHelper inst, ExternalPtr<struct UTslPlayerState> value) { inst.WriteOffset(0x320, value); }
	inline bool SetNormalColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x328, value); }
	inline bool SetMaxNameLength(t_structHelper inst, int32_t value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSquadPlayerInfoWidget_C = sizeof(USquadPlayerInfoWidget_C); // 828
    static_assert(sizeof(USquadPlayerInfoWidget_C) == 0x33C, "Size of USquadPlayerInfoWidget_C is not correct.");
	auto constexpr USquadPlayerInfoWidget_C_UberGraphFrame_Offset = offsetof(USquadPlayerInfoWidget_C, UberGraphFrame);
	static_assert(USquadPlayerInfoWidget_C_UberGraphFrame_Offset == 0x248, "USquadPlayerInfoWidget_C::UberGraphFrame offset is not 248");
	auto constexpr USquadPlayerInfoWidget_C_KickButton_Out_Offset = offsetof(USquadPlayerInfoWidget_C, KickButton_Out);
	static_assert(USquadPlayerInfoWidget_C_KickButton_Out_Offset == 0x250, "USquadPlayerInfoWidget_C::KickButton_Out offset is not 250");
	auto constexpr USquadPlayerInfoWidget_C_KickButton_In_Offset = offsetof(USquadPlayerInfoWidget_C, KickButton_In);
	static_assert(USquadPlayerInfoWidget_C_KickButton_In_Offset == 0x258, "USquadPlayerInfoWidget_C::KickButton_In offset is not 258");
	auto constexpr USquadPlayerInfoWidget_C_PlayInfoState_shot_Offset = offsetof(USquadPlayerInfoWidget_C, PlayInfoState_shot);
	static_assert(USquadPlayerInfoWidget_C_PlayInfoState_shot_Offset == 0x260, "USquadPlayerInfoWidget_C::PlayInfoState_shot offset is not 260");
	auto constexpr USquadPlayerInfoWidget_C_PlayInfoState_attack_Offset = offsetof(USquadPlayerInfoWidget_C, PlayInfoState_attack);
	static_assert(USquadPlayerInfoWidget_C_PlayInfoState_attack_Offset == 0x268, "USquadPlayerInfoWidget_C::PlayInfoState_attack offset is not 268");
	auto constexpr USquadPlayerInfoWidget_C_BlackBG_Offset = offsetof(USquadPlayerInfoWidget_C, BlackBG);
	static_assert(USquadPlayerInfoWidget_C_BlackBG_Offset == 0x270, "USquadPlayerInfoWidget_C::BlackBG offset is not 270");
	auto constexpr USquadPlayerInfoWidget_C_HPGaugeSizeBox_Offset = offsetof(USquadPlayerInfoWidget_C, HPGaugeSizeBox);
	static_assert(USquadPlayerInfoWidget_C_HPGaugeSizeBox_Offset == 0x278, "USquadPlayerInfoWidget_C::HPGaugeSizeBox offset is not 278");
	auto constexpr USquadPlayerInfoWidget_C_IconImage_Offset = offsetof(USquadPlayerInfoWidget_C, IconImage);
	static_assert(USquadPlayerInfoWidget_C_IconImage_Offset == 0x280, "USquadPlayerInfoWidget_C::IconImage offset is not 280");
	auto constexpr USquadPlayerInfoWidget_C_KillCount_Offset = offsetof(USquadPlayerInfoWidget_C, KillCount);
	static_assert(USquadPlayerInfoWidget_C_KillCount_Offset == 0x288, "USquadPlayerInfoWidget_C::KillCount offset is not 288");
	auto constexpr USquadPlayerInfoWidget_C_KillCount_sizebox_Offset = offsetof(USquadPlayerInfoWidget_C, KillCount_sizebox);
	static_assert(USquadPlayerInfoWidget_C_KillCount_sizebox_Offset == 0x290, "USquadPlayerInfoWidget_C::KillCount_sizebox offset is not 290");
	auto constexpr USquadPlayerInfoWidget_C_PlayerInfoBorder_Offset = offsetof(USquadPlayerInfoWidget_C, PlayerInfoBorder);
	static_assert(USquadPlayerInfoWidget_C_PlayerInfoBorder_Offset == 0x298, "USquadPlayerInfoWidget_C::PlayerInfoBorder offset is not 298");
	auto constexpr USquadPlayerInfoWidget_C_PlayerName_Offset = offsetof(USquadPlayerInfoWidget_C, PlayerName);
	static_assert(USquadPlayerInfoWidget_C_PlayerName_Offset == 0x2a0, "USquadPlayerInfoWidget_C::PlayerName offset is not 2a0");
	auto constexpr USquadPlayerInfoWidget_C_SizeBox_1_Offset = offsetof(USquadPlayerInfoWidget_C, SizeBox_1);
	static_assert(USquadPlayerInfoWidget_C_SizeBox_1_Offset == 0x2a8, "USquadPlayerInfoWidget_C::SizeBox_1 offset is not 2a8");
	auto constexpr USquadPlayerInfoWidget_C_SizeBox_5_Offset = offsetof(USquadPlayerInfoWidget_C, SizeBox_5);
	static_assert(USquadPlayerInfoWidget_C_SizeBox_5_Offset == 0x2b0, "USquadPlayerInfoWidget_C::SizeBox_5 offset is not 2b0");
	auto constexpr USquadPlayerInfoWidget_C_StatusIcon_sizebox_Offset = offsetof(USquadPlayerInfoWidget_C, StatusIcon_sizebox);
	static_assert(USquadPlayerInfoWidget_C_StatusIcon_sizebox_Offset == 0x2b8, "USquadPlayerInfoWidget_C::StatusIcon_sizebox offset is not 2b8");
	auto constexpr USquadPlayerInfoWidget_C_TslHealthGaugeBpWidget_Hori_Offset = offsetof(USquadPlayerInfoWidget_C, TslHealthGaugeBpWidget_Hori);
	static_assert(USquadPlayerInfoWidget_C_TslHealthGaugeBpWidget_Hori_Offset == 0x2c0, "USquadPlayerInfoWidget_C::TslHealthGaugeBpWidget_Hori offset is not 2c0");
	auto constexpr USquadPlayerInfoWidget_C_Character_Offset = offsetof(USquadPlayerInfoWidget_C, Character);
	static_assert(USquadPlayerInfoWidget_C_Character_Offset == 0x2c8, "USquadPlayerInfoWidget_C::Character offset is not 2c8");
	auto constexpr USquadPlayerInfoWidget_C_IconMaterial_Offset = offsetof(USquadPlayerInfoWidget_C, IconMaterial);
	static_assert(USquadPlayerInfoWidget_C_IconMaterial_Offset == 0x2d0, "USquadPlayerInfoWidget_C::IconMaterial offset is not 2d0");
	auto constexpr USquadPlayerInfoWidget_C_boolField2D8_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2D8);
	static_assert(USquadPlayerInfoWidget_C_boolField2D8_Offset == 0x2d8, "USquadPlayerInfoWidget_C::boolField2D8 offset is not 2d8");
	auto constexpr USquadPlayerInfoWidget_C_boolField2D9_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2D9);
	static_assert(USquadPlayerInfoWidget_C_boolField2D9_Offset == 0x2d9, "USquadPlayerInfoWidget_C::boolField2D9 offset is not 2d9");
	auto constexpr USquadPlayerInfoWidget_C_KickButtonShowTimeCheck_Offset = offsetof(USquadPlayerInfoWidget_C, KickButtonShowTimeCheck);
	static_assert(USquadPlayerInfoWidget_C_KickButtonShowTimeCheck_Offset == 0x2dc, "USquadPlayerInfoWidget_C::KickButtonShowTimeCheck offset is not 2dc");
	auto constexpr USquadPlayerInfoWidget_C_KickButtonDelayTime_Offset = offsetof(USquadPlayerInfoWidget_C, KickButtonDelayTime);
	static_assert(USquadPlayerInfoWidget_C_KickButtonDelayTime_Offset == 0x2e0, "USquadPlayerInfoWidget_C::KickButtonDelayTime offset is not 2e0");
	auto constexpr USquadPlayerInfoWidget_C_boolField2E4_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2E4);
	static_assert(USquadPlayerInfoWidget_C_boolField2E4_Offset == 0x2e4, "USquadPlayerInfoWidget_C::boolField2E4 offset is not 2e4");
	auto constexpr USquadPlayerInfoWidget_C_boolField2E5_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2E5);
	static_assert(USquadPlayerInfoWidget_C_boolField2E5_Offset == 0x2e5, "USquadPlayerInfoWidget_C::boolField2E5 offset is not 2e5");
	auto constexpr USquadPlayerInfoWidget_C_PlayerController_Offset = offsetof(USquadPlayerInfoWidget_C, PlayerController);
	static_assert(USquadPlayerInfoWidget_C_PlayerController_Offset == 0x2e8, "USquadPlayerInfoWidget_C::PlayerController offset is not 2e8");
	auto constexpr USquadPlayerInfoWidget_C_boolField2F0_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2F0);
	static_assert(USquadPlayerInfoWidget_C_boolField2F0_Offset == 0x2f0, "USquadPlayerInfoWidget_C::boolField2F0 offset is not 2f0");
	auto constexpr USquadPlayerInfoWidget_C_boolField2F1_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2F1);
	static_assert(USquadPlayerInfoWidget_C_boolField2F1_Offset == 0x2f1, "USquadPlayerInfoWidget_C::boolField2F1 offset is not 2f1");
	auto constexpr USquadPlayerInfoWidget_C_boolField2F2_Offset = offsetof(USquadPlayerInfoWidget_C, boolField2F2);
	static_assert(USquadPlayerInfoWidget_C_boolField2F2_Offset == 0x2f2, "USquadPlayerInfoWidget_C::boolField2F2 offset is not 2f2");
	auto constexpr USquadPlayerInfoWidget_C_PlayerInfoType_Offset = offsetof(USquadPlayerInfoWidget_C, PlayerInfoType);
	static_assert(USquadPlayerInfoWidget_C_PlayerInfoType_Offset == 0x2f3, "USquadPlayerInfoWidget_C::PlayerInfoType offset is not 2f3");
	auto constexpr USquadPlayerInfoWidget_C_ShortcutNum_Offset = offsetof(USquadPlayerInfoWidget_C, ShortcutNum);
	static_assert(USquadPlayerInfoWidget_C_ShortcutNum_Offset == 0x2f4, "USquadPlayerInfoWidget_C::ShortcutNum offset is not 2f4");
	auto constexpr USquadPlayerInfoWidget_C_QuitColor_Offset = offsetof(USquadPlayerInfoWidget_C, QuitColor);
	static_assert(USquadPlayerInfoWidget_C_QuitColor_Offset == 0x2f8, "USquadPlayerInfoWidget_C::QuitColor offset is not 2f8");
	auto constexpr USquadPlayerInfoWidget_C_DeadColor_Offset = offsetof(USquadPlayerInfoWidget_C, DeadColor);
	static_assert(USquadPlayerInfoWidget_C_DeadColor_Offset == 0x308, "USquadPlayerInfoWidget_C::DeadColor offset is not 308");
	auto constexpr USquadPlayerInfoWidget_C_Team_Offset = offsetof(USquadPlayerInfoWidget_C, Team);
	static_assert(USquadPlayerInfoWidget_C_Team_Offset == 0x318, "USquadPlayerInfoWidget_C::Team offset is not 318");
	auto constexpr USquadPlayerInfoWidget_C_PlayerState_Offset = offsetof(USquadPlayerInfoWidget_C, PlayerState);
	static_assert(USquadPlayerInfoWidget_C_PlayerState_Offset == 0x320, "USquadPlayerInfoWidget_C::PlayerState offset is not 320");
	auto constexpr USquadPlayerInfoWidget_C_NormalColor_Offset = offsetof(USquadPlayerInfoWidget_C, NormalColor);
	static_assert(USquadPlayerInfoWidget_C_NormalColor_Offset == 0x328, "USquadPlayerInfoWidget_C::NormalColor offset is not 328");
	auto constexpr USquadPlayerInfoWidget_C_MaxNameLength_Offset = offsetof(USquadPlayerInfoWidget_C, MaxNameLength);
	static_assert(USquadPlayerInfoWidget_C_MaxNameLength_Offset == 0x338, "USquadPlayerInfoWidget_C::MaxNameLength offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
