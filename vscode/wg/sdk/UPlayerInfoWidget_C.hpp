#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "PlayerInfoType.hpp"
#include "ESubjectToReport.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerInfoWidget_C // Size: 0x351
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPlayerInfoWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187079); // id32("WidgetBlueprintGeneratedClass PlayerInfoWidget.PlayerInfoWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty PlayerInfoWidget.PlayerInfoWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> KickButton_Out; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.KickButton_Out */
	ExternalPtr<struct UWidgetAnimation> KickButton_In; /* Ofs: 0x258 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.KickButton_In */
	ExternalPtr<struct UWidgetAnimation> PlayInfoState_shot; /* Ofs: 0x260 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.PlayInfoState_shot */
	ExternalPtr<struct UWidgetAnimation> PlayInfoState_attack; /* Ofs: 0x268 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.PlayInfoState_attack */
	ExternalPtr<struct UBorder> Border_1; /* Ofs: 0x270 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.Border_1 */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x278 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.Button_1 */
	ExternalPtr<struct UHorizontalBox> HorizontalBox_2; /* Ofs: 0x280 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.HorizontalBox_2 */
	ExternalPtr<struct USizeBox> HPGaugeSizeBox_Hori; /* Ofs: 0x288 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.HPGaugeSizeBox_Hori */
	ExternalPtr<struct UImage> IconImage; /* Ofs: 0x290 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.IconImage */
	ExternalPtr<struct UButton> KickOrReportButton; /* Ofs: 0x298 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.KickOrReportButton */
	ExternalPtr<struct UTextBlock> KickOrReportText; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.KickOrReportText */
	ExternalPtr<struct UTextBlock> KillCount; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.KillCount */
	ExternalPtr<struct USizeBox> ObserverCamera_sizebox; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.ObserverCamera_sizebox */
	ExternalPtr<struct UImage> ObserverCameraImage; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.ObserverCameraImage */
	ExternalPtr<struct UTextBlock> PlayerName; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.PlayerName */
	ExternalPtr<struct USizeBox> SizeBox_1; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.SizeBox_1 */
	ExternalPtr<struct USizeBox> StatusIcon_sizebox; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.StatusIcon_sizebox */
	ExternalPtr<struct UTextBlock> TextDistance; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.TextDistance */
	ExternalPtr<struct UTextBlock> TextTeamNumber; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.TextTeamNumber */
	ExternalPtr<struct UTslHealthGaugeBpWidget_C> TslHealthGaugeBpWidget_Hori; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.TslHealthGaugeBpWidget_Hori */
	ExternalPtr<struct UTslHealthGaugeBpWidget_C> TslHealthGaugeBpWidget_Vert; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.TslHealthGaugeBpWidget_Vert */
	ExternalPtr<struct USizeBox> VertHPGauge_sizebox; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.VertHPGauge_sizebox */
	ExternalPtr<struct UTslCharacter> Character; /* Ofs: 0x300 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.Character */
	ExternalPtr<struct UMaterialInstanceDynamic> IconMaterial; /* Ofs: 0x308 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.IconMaterial */
	uint8_t boolField310;
	uint8_t boolField311;
	uint8_t UnknownData312[0x6];
	FText OldPlayerName; /* Ofs: 0x318 Size: 0x18 - TextProperty PlayerInfoWidget.PlayerInfoWidget_C.OldPlayerName */
	float KickButtonShowTimeCheck; /* Ofs: 0x330 Size: 0x4 - FloatProperty PlayerInfoWidget.PlayerInfoWidget_C.KickButtonShowTimeCheck */
	float KickButtonDelayTime; /* Ofs: 0x334 Size: 0x4 - FloatProperty PlayerInfoWidget.PlayerInfoWidget_C.KickButtonDelayTime */
	uint8_t boolField338;
	uint8_t boolField339;
	uint8_t UnknownData33A[0x6];
	ExternalPtr<struct UTslPlayerController> PlayerController; /* Ofs: 0x340 Size: 0x8 - ObjectProperty PlayerInfoWidget.PlayerInfoWidget_C.PlayerController */
	uint8_t boolField348;
	uint8_t boolField349;
	uint8_t boolField34A;
	TEnumAsByte<enum PlayerInfoType> PlayerInfoType; /* Ofs: 0x34B Size: 0x1 - ByteProperty PlayerInfoWidget.PlayerInfoWidget_C.PlayerInfoType */
	int32_t ShortcutNum; /* Ofs: 0x34C Size: 0x4 - IntProperty PlayerInfoWidget.PlayerInfoWidget_C.ShortcutNum */
	TEnumAsByte<enum ESubjectToReport> SubjectToReportType; /* Ofs: 0x350 Size: 0x1 - EnumProperty PlayerInfoWidget.PlayerInfoWidget_C.SubjectToReportType */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetKickButton_Out(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetKickButton_In(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetPlayInfoState_shot(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetPlayInfoState_attack(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x268, value); }
	inline bool SetBorder_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x270, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x278, value); }
	inline bool SetHorizontalBox_2(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x280, value); }
	inline bool SetHPGaugeSizeBox_Hori(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x288, value); }
	inline bool SetIconImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x290, value); }
	inline bool SetKickOrReportButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x298, value); }
	inline bool SetKickOrReportText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetKillCount(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetObserverCamera_sizebox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetObserverCameraImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetPlayerName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetSizeBox_1(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetStatusIcon_sizebox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetTextDistance(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetTextTeamNumber(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetTslHealthGaugeBpWidget_Hori(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeBpWidget_C> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetTslHealthGaugeBpWidget_Vert(t_structHelper inst, ExternalPtr<struct UTslHealthGaugeBpWidget_C> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetVertHPGauge_sizebox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x300, value); }
	inline bool SetIconMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x308, value); }
	inline bool bShow()
	{
		return boolField310& 0x1;
	}
	inline bool SetbShow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x310, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCachedSelect()
	{
		return boolField311& 0x1;
	}
	inline bool SetbCachedSelect(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x311, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOldPlayerName(t_structHelper inst, FText value) { inst.WriteOffset(0x318, value); }
	inline bool SetKickButtonShowTimeCheck(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetKickButtonDelayTime(t_structHelper inst, float value) { inst.WriteOffset(0x334, value); }
	inline bool bShowMouseOn()
	{
		return boolField338& 0x1;
	}
	inline bool SetbShowMouseOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x338, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsShowKickButton()
	{
		return boolField339& 0x1;
	}
	inline bool SetbIsShowKickButton(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x339, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerController(t_structHelper inst, ExternalPtr<struct UTslPlayerController> value) { inst.WriteOffset(0x340, value); }
	inline bool IsLeftCtrlDown()
	{
		return boolField348& 0x1;
	}
	inline bool SetIsLeftCtrlDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x348, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsBlink()
	{
		return boolField349& 0x1;
	}
	inline bool SetIsBlink(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x349, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsButtonMouseOvered()
	{
		return boolField34A& 0x1;
	}
	inline bool SetIsButtonMouseOvered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x34A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlayerInfoType(t_structHelper inst, TEnumAsByte<enum PlayerInfoType> value) { inst.WriteOffset(0x34B, value); }
	inline bool SetShortcutNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34C, value); }
	inline bool SetSubjectToReportType(t_structHelper inst, TEnumAsByte<enum ESubjectToReport> value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerInfoWidget_C = sizeof(UPlayerInfoWidget_C); // 849
    static_assert(sizeof(UPlayerInfoWidget_C) == 0x351, "Size of UPlayerInfoWidget_C is not correct.");
	auto constexpr UPlayerInfoWidget_C_UberGraphFrame_Offset = offsetof(UPlayerInfoWidget_C, UberGraphFrame);
	static_assert(UPlayerInfoWidget_C_UberGraphFrame_Offset == 0x248, "UPlayerInfoWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UPlayerInfoWidget_C_KickButton_Out_Offset = offsetof(UPlayerInfoWidget_C, KickButton_Out);
	static_assert(UPlayerInfoWidget_C_KickButton_Out_Offset == 0x250, "UPlayerInfoWidget_C::KickButton_Out offset is not 250");
	auto constexpr UPlayerInfoWidget_C_KickButton_In_Offset = offsetof(UPlayerInfoWidget_C, KickButton_In);
	static_assert(UPlayerInfoWidget_C_KickButton_In_Offset == 0x258, "UPlayerInfoWidget_C::KickButton_In offset is not 258");
	auto constexpr UPlayerInfoWidget_C_PlayInfoState_shot_Offset = offsetof(UPlayerInfoWidget_C, PlayInfoState_shot);
	static_assert(UPlayerInfoWidget_C_PlayInfoState_shot_Offset == 0x260, "UPlayerInfoWidget_C::PlayInfoState_shot offset is not 260");
	auto constexpr UPlayerInfoWidget_C_PlayInfoState_attack_Offset = offsetof(UPlayerInfoWidget_C, PlayInfoState_attack);
	static_assert(UPlayerInfoWidget_C_PlayInfoState_attack_Offset == 0x268, "UPlayerInfoWidget_C::PlayInfoState_attack offset is not 268");
	auto constexpr UPlayerInfoWidget_C_Border_1_Offset = offsetof(UPlayerInfoWidget_C, Border_1);
	static_assert(UPlayerInfoWidget_C_Border_1_Offset == 0x270, "UPlayerInfoWidget_C::Border_1 offset is not 270");
	auto constexpr UPlayerInfoWidget_C_Button_1_Offset = offsetof(UPlayerInfoWidget_C, Button_1);
	static_assert(UPlayerInfoWidget_C_Button_1_Offset == 0x278, "UPlayerInfoWidget_C::Button_1 offset is not 278");
	auto constexpr UPlayerInfoWidget_C_HorizontalBox_2_Offset = offsetof(UPlayerInfoWidget_C, HorizontalBox_2);
	static_assert(UPlayerInfoWidget_C_HorizontalBox_2_Offset == 0x280, "UPlayerInfoWidget_C::HorizontalBox_2 offset is not 280");
	auto constexpr UPlayerInfoWidget_C_HPGaugeSizeBox_Hori_Offset = offsetof(UPlayerInfoWidget_C, HPGaugeSizeBox_Hori);
	static_assert(UPlayerInfoWidget_C_HPGaugeSizeBox_Hori_Offset == 0x288, "UPlayerInfoWidget_C::HPGaugeSizeBox_Hori offset is not 288");
	auto constexpr UPlayerInfoWidget_C_IconImage_Offset = offsetof(UPlayerInfoWidget_C, IconImage);
	static_assert(UPlayerInfoWidget_C_IconImage_Offset == 0x290, "UPlayerInfoWidget_C::IconImage offset is not 290");
	auto constexpr UPlayerInfoWidget_C_KickOrReportButton_Offset = offsetof(UPlayerInfoWidget_C, KickOrReportButton);
	static_assert(UPlayerInfoWidget_C_KickOrReportButton_Offset == 0x298, "UPlayerInfoWidget_C::KickOrReportButton offset is not 298");
	auto constexpr UPlayerInfoWidget_C_KickOrReportText_Offset = offsetof(UPlayerInfoWidget_C, KickOrReportText);
	static_assert(UPlayerInfoWidget_C_KickOrReportText_Offset == 0x2a0, "UPlayerInfoWidget_C::KickOrReportText offset is not 2a0");
	auto constexpr UPlayerInfoWidget_C_KillCount_Offset = offsetof(UPlayerInfoWidget_C, KillCount);
	static_assert(UPlayerInfoWidget_C_KillCount_Offset == 0x2a8, "UPlayerInfoWidget_C::KillCount offset is not 2a8");
	auto constexpr UPlayerInfoWidget_C_ObserverCamera_sizebox_Offset = offsetof(UPlayerInfoWidget_C, ObserverCamera_sizebox);
	static_assert(UPlayerInfoWidget_C_ObserverCamera_sizebox_Offset == 0x2b0, "UPlayerInfoWidget_C::ObserverCamera_sizebox offset is not 2b0");
	auto constexpr UPlayerInfoWidget_C_ObserverCameraImage_Offset = offsetof(UPlayerInfoWidget_C, ObserverCameraImage);
	static_assert(UPlayerInfoWidget_C_ObserverCameraImage_Offset == 0x2b8, "UPlayerInfoWidget_C::ObserverCameraImage offset is not 2b8");
	auto constexpr UPlayerInfoWidget_C_PlayerName_Offset = offsetof(UPlayerInfoWidget_C, PlayerName);
	static_assert(UPlayerInfoWidget_C_PlayerName_Offset == 0x2c0, "UPlayerInfoWidget_C::PlayerName offset is not 2c0");
	auto constexpr UPlayerInfoWidget_C_SizeBox_1_Offset = offsetof(UPlayerInfoWidget_C, SizeBox_1);
	static_assert(UPlayerInfoWidget_C_SizeBox_1_Offset == 0x2c8, "UPlayerInfoWidget_C::SizeBox_1 offset is not 2c8");
	auto constexpr UPlayerInfoWidget_C_StatusIcon_sizebox_Offset = offsetof(UPlayerInfoWidget_C, StatusIcon_sizebox);
	static_assert(UPlayerInfoWidget_C_StatusIcon_sizebox_Offset == 0x2d0, "UPlayerInfoWidget_C::StatusIcon_sizebox offset is not 2d0");
	auto constexpr UPlayerInfoWidget_C_TextDistance_Offset = offsetof(UPlayerInfoWidget_C, TextDistance);
	static_assert(UPlayerInfoWidget_C_TextDistance_Offset == 0x2d8, "UPlayerInfoWidget_C::TextDistance offset is not 2d8");
	auto constexpr UPlayerInfoWidget_C_TextTeamNumber_Offset = offsetof(UPlayerInfoWidget_C, TextTeamNumber);
	static_assert(UPlayerInfoWidget_C_TextTeamNumber_Offset == 0x2e0, "UPlayerInfoWidget_C::TextTeamNumber offset is not 2e0");
	auto constexpr UPlayerInfoWidget_C_TslHealthGaugeBpWidget_Hori_Offset = offsetof(UPlayerInfoWidget_C, TslHealthGaugeBpWidget_Hori);
	static_assert(UPlayerInfoWidget_C_TslHealthGaugeBpWidget_Hori_Offset == 0x2e8, "UPlayerInfoWidget_C::TslHealthGaugeBpWidget_Hori offset is not 2e8");
	auto constexpr UPlayerInfoWidget_C_TslHealthGaugeBpWidget_Vert_Offset = offsetof(UPlayerInfoWidget_C, TslHealthGaugeBpWidget_Vert);
	static_assert(UPlayerInfoWidget_C_TslHealthGaugeBpWidget_Vert_Offset == 0x2f0, "UPlayerInfoWidget_C::TslHealthGaugeBpWidget_Vert offset is not 2f0");
	auto constexpr UPlayerInfoWidget_C_VertHPGauge_sizebox_Offset = offsetof(UPlayerInfoWidget_C, VertHPGauge_sizebox);
	static_assert(UPlayerInfoWidget_C_VertHPGauge_sizebox_Offset == 0x2f8, "UPlayerInfoWidget_C::VertHPGauge_sizebox offset is not 2f8");
	auto constexpr UPlayerInfoWidget_C_Character_Offset = offsetof(UPlayerInfoWidget_C, Character);
	static_assert(UPlayerInfoWidget_C_Character_Offset == 0x300, "UPlayerInfoWidget_C::Character offset is not 300");
	auto constexpr UPlayerInfoWidget_C_IconMaterial_Offset = offsetof(UPlayerInfoWidget_C, IconMaterial);
	static_assert(UPlayerInfoWidget_C_IconMaterial_Offset == 0x308, "UPlayerInfoWidget_C::IconMaterial offset is not 308");
	auto constexpr UPlayerInfoWidget_C_boolField310_Offset = offsetof(UPlayerInfoWidget_C, boolField310);
	static_assert(UPlayerInfoWidget_C_boolField310_Offset == 0x310, "UPlayerInfoWidget_C::boolField310 offset is not 310");
	auto constexpr UPlayerInfoWidget_C_boolField311_Offset = offsetof(UPlayerInfoWidget_C, boolField311);
	static_assert(UPlayerInfoWidget_C_boolField311_Offset == 0x311, "UPlayerInfoWidget_C::boolField311 offset is not 311");
	auto constexpr UPlayerInfoWidget_C_OldPlayerName_Offset = offsetof(UPlayerInfoWidget_C, OldPlayerName);
	static_assert(UPlayerInfoWidget_C_OldPlayerName_Offset == 0x318, "UPlayerInfoWidget_C::OldPlayerName offset is not 318");
	auto constexpr UPlayerInfoWidget_C_KickButtonShowTimeCheck_Offset = offsetof(UPlayerInfoWidget_C, KickButtonShowTimeCheck);
	static_assert(UPlayerInfoWidget_C_KickButtonShowTimeCheck_Offset == 0x330, "UPlayerInfoWidget_C::KickButtonShowTimeCheck offset is not 330");
	auto constexpr UPlayerInfoWidget_C_KickButtonDelayTime_Offset = offsetof(UPlayerInfoWidget_C, KickButtonDelayTime);
	static_assert(UPlayerInfoWidget_C_KickButtonDelayTime_Offset == 0x334, "UPlayerInfoWidget_C::KickButtonDelayTime offset is not 334");
	auto constexpr UPlayerInfoWidget_C_boolField338_Offset = offsetof(UPlayerInfoWidget_C, boolField338);
	static_assert(UPlayerInfoWidget_C_boolField338_Offset == 0x338, "UPlayerInfoWidget_C::boolField338 offset is not 338");
	auto constexpr UPlayerInfoWidget_C_boolField339_Offset = offsetof(UPlayerInfoWidget_C, boolField339);
	static_assert(UPlayerInfoWidget_C_boolField339_Offset == 0x339, "UPlayerInfoWidget_C::boolField339 offset is not 339");
	auto constexpr UPlayerInfoWidget_C_PlayerController_Offset = offsetof(UPlayerInfoWidget_C, PlayerController);
	static_assert(UPlayerInfoWidget_C_PlayerController_Offset == 0x340, "UPlayerInfoWidget_C::PlayerController offset is not 340");
	auto constexpr UPlayerInfoWidget_C_boolField348_Offset = offsetof(UPlayerInfoWidget_C, boolField348);
	static_assert(UPlayerInfoWidget_C_boolField348_Offset == 0x348, "UPlayerInfoWidget_C::boolField348 offset is not 348");
	auto constexpr UPlayerInfoWidget_C_boolField349_Offset = offsetof(UPlayerInfoWidget_C, boolField349);
	static_assert(UPlayerInfoWidget_C_boolField349_Offset == 0x349, "UPlayerInfoWidget_C::boolField349 offset is not 349");
	auto constexpr UPlayerInfoWidget_C_boolField34A_Offset = offsetof(UPlayerInfoWidget_C, boolField34A);
	static_assert(UPlayerInfoWidget_C_boolField34A_Offset == 0x34a, "UPlayerInfoWidget_C::boolField34A offset is not 34a");
	auto constexpr UPlayerInfoWidget_C_PlayerInfoType_Offset = offsetof(UPlayerInfoWidget_C, PlayerInfoType);
	static_assert(UPlayerInfoWidget_C_PlayerInfoType_Offset == 0x34b, "UPlayerInfoWidget_C::PlayerInfoType offset is not 34b");
	auto constexpr UPlayerInfoWidget_C_ShortcutNum_Offset = offsetof(UPlayerInfoWidget_C, ShortcutNum);
	static_assert(UPlayerInfoWidget_C_ShortcutNum_Offset == 0x34c, "UPlayerInfoWidget_C::ShortcutNum offset is not 34c");
	auto constexpr UPlayerInfoWidget_C_SubjectToReportType_Offset = offsetof(UPlayerInfoWidget_C, SubjectToReportType);
	static_assert(UPlayerInfoWidget_C_SubjectToReportType_Offset == 0x350, "UPlayerInfoWidget_C::SubjectToReportType offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
