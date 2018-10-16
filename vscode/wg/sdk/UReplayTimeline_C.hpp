#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FWidgetTransform.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReplayTimeline_C // Size: 0x4B8
	: public UUserWidget // Size: 0x248
{
private:
	typedef UReplayTimeline_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69259); // id32("WidgetBlueprintGeneratedClass ReplayTimeline.ReplayTimeline_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty ReplayTimeline.ReplayTimeline_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> JumpingTimeline; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.JumpingTimeline */
	ExternalPtr<struct UBorder> BorderTimeline; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BorderTimeline */
	ExternalPtr<struct UButton> BtnPause; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BtnPause */
	ExternalPtr<struct UButton> BtnPlay; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BtnPlay */
	ExternalPtr<struct UButton> BtnRec; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BtnRec */
	ExternalPtr<struct UButton> BtnSpeedDown; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BtnSpeedDown */
	ExternalPtr<struct UButton> BtnSpeedUp; /* Ofs: 0x280 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BtnSpeedUp */
	ExternalPtr<struct UButton> BtnStop; /* Ofs: 0x288 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.BtnStop */
	ExternalPtr<struct UButton> ButtonReport; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.ButtonReport */
	ExternalPtr<struct UCheckBox> CheckBoxGroggys; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.CheckBoxGroggys */
	ExternalPtr<struct UCheckBox> CheckBoxKills; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.CheckBoxKills */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.Image_1 */
	ExternalPtr<struct USizeBox> LeftClipCover; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.LeftClipCover */
	ExternalPtr<struct UOverlay> Overlay_Timeline; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.Overlay_Timeline */
	ExternalPtr<struct UBorder> ReplayPanel; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.ReplayPanel */
	ExternalPtr<struct USizeBox> ReportButtonSizeBox; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.ReportButtonSizeBox */
	ExternalPtr<struct USizeBox> RightClipCover; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.RightClipCover */
	ExternalPtr<struct UTextBlock> TextJumpingTimeline; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TextJumpingTimeline */
	ExternalPtr<struct UTextBlock> TextTimeNow; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TextTimeNow */
	ExternalPtr<struct UTextBlock> TextTimeSpeed; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TextTimeSpeed */
	ExternalPtr<struct UTextBlock> TextTimeTotal; /* Ofs: 0x2F0 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TextTimeTotal */
	ExternalPtr<struct UOverlay> TimelineControls; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TimelineControls */
	ExternalPtr<struct UHorizontalBox> TimelineHorizontalBox; /* Ofs: 0x300 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TimelineHorizontalBox */
	ExternalPtr<struct UHorizontalBox> TimelineOptionsHorizontalBox; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TimelineOptionsHorizontalBox */
	ExternalPtr<struct USizeBox> TimelineSizeBox; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TimelineSizeBox */
	ExternalPtr<struct USlider> TimelineSlider; /* Ofs: 0x318 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TimelineSlider */
	ExternalPtr<struct UOverlay> TimlineOvelay; /* Ofs: 0x320 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TimlineOvelay */
	ExternalPtr<struct UTslGameInstance> TslGameInstance; /* Ofs: 0x328 Size: 0x8 - ObjectProperty ReplayTimeline.ReplayTimeline_C.TslGameInstance */
	float TimelinePercent; /* Ofs: 0x330 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.TimelinePercent */
	float ReplayCurTime; /* Ofs: 0x334 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.ReplayCurTime */
	float CurTimeSpeed; /* Ofs: 0x338 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.CurTimeSpeed */
	float MaxTimeSpeed; /* Ofs: 0x33C Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.MaxTimeSpeed */
	float MinTimeSpeed; /* Ofs: 0x340 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.MinTimeSpeed */
	FWidgetTransform KillEventItemTransform; /* Ofs: 0x344 Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.KillEventItemTransform */
	float TimelineWidth; /* Ofs: 0x360 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.TimelineWidth */
	uint8_t boolField364;
	uint8_t boolField365;
	uint8_t UnknownData366[0x2];
	FTimerHandle GetKillEventsTimer; /* Ofs: 0x368 Size: 0x8 - StructProperty ReplayTimeline.ReplayTimeline_C.GetKillEventsTimer */
	FTimerHandle GetGroggyEventsTimer; /* Ofs: 0x370 Size: 0x8 - StructProperty ReplayTimeline.ReplayTimeline_C.GetGroggyEventsTimer */
	float RecordStartTime; /* Ofs: 0x378 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.RecordStartTime */
	FWidgetTransform TimelineBarInitTransform; /* Ofs: 0x37C Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.TimelineBarInitTransform */
	FWidgetTransform TimelineBarMinimizeTransform; /* Ofs: 0x398 Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.TimelineBarMinimizeTransform */
	uint8_t boolField3B4;
	uint8_t boolField3B5;
	uint8_t boolField3B6;
	uint8_t UnknownData3B7[0x1];
	FString KillerIDToFind; /* Ofs: 0x3B8 Size: 0x10 - StrProperty ReplayTimeline.ReplayTimeline_C.KillerIDToFind */
	FString KillerNameToFind; /* Ofs: 0x3C8 Size: 0x10 - StrProperty ReplayTimeline.ReplayTimeline_C.KillerNameToFind */
	FString VictimIDToFind; /* Ofs: 0x3D8 Size: 0x10 - StrProperty ReplayTimeline.ReplayTimeline_C.VictimIDToFind */
	FString VictimNameToFind; /* Ofs: 0x3E8 Size: 0x10 - StrProperty ReplayTimeline.ReplayTimeline_C.VictimNameToFind */
	int32_t CountForFindingKillerOrVictim; /* Ofs: 0x3F8 Size: 0x4 - IntProperty ReplayTimeline.ReplayTimeline_C.CountForFindingKillerOrVictim */
	int32_t CountForFindingCharacter; /* Ofs: 0x3FC Size: 0x4 - IntProperty ReplayTimeline.ReplayTimeline_C.CountForFindingCharacter */
	FWidgetTransform NowTimeInitTransform; /* Ofs: 0x400 Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.NowTimeInitTransform */
	FWidgetTransform NowTimeMinimizeTransform; /* Ofs: 0x41C Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.NowTimeMinimizeTransform */
	FWidgetTransform TotalTimeInitTransform; /* Ofs: 0x438 Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.TotalTimeInitTransform */
	FWidgetTransform TotalTimeMinimizeTransform; /* Ofs: 0x454 Size: 0x1C - StructProperty ReplayTimeline.ReplayTimeline_C.TotalTimeMinimizeTransform */
	uint8_t boolField470;
	uint8_t UnknownData471[0x7];
	FText TimelineJumpTo; /* Ofs: 0x478 Size: 0x18 - TextProperty ReplayTimeline.ReplayTimeline_C.TimelineJumpTo */
	float NewVar_1; /* Ofs: 0x490 Size: 0x4 - FloatProperty ReplayTimeline.ReplayTimeline_C.NewVar_1 */
	uint8_t UnknownData494[0x4];
	TArray<ExternalPtr<struct UReplayTimelineKillEventItem_C>> KillEventItemWidgets; /* Ofs: 0x498 Size: 0x10 - ArrayProperty ReplayTimeline.ReplayTimeline_C.KillEventItemWidgets */
	TArray<ExternalPtr<struct UReplayTimelineDBNOEventItem_C>> DBNOEventItemWidgets; /* Ofs: 0x4A8 Size: 0x10 - ArrayProperty ReplayTimeline.ReplayTimeline_C.DBNOEventItemWidgets */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetJumpingTimeline(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBorderTimeline(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x258, value); }
	inline bool SetBtnPause(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x260, value); }
	inline bool SetBtnPlay(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x268, value); }
	inline bool SetBtnRec(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x270, value); }
	inline bool SetBtnSpeedDown(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x278, value); }
	inline bool SetBtnSpeedUp(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x280, value); }
	inline bool SetBtnStop(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x288, value); }
	inline bool SetButtonReport(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x290, value); }
	inline bool SetCheckBoxGroggys(t_structHelper inst, ExternalPtr<struct UCheckBox> value) { inst.WriteOffset(0x298, value); }
	inline bool SetCheckBoxKills(t_structHelper inst, ExternalPtr<struct UCheckBox> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetLeftClipCover(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetOverlay_Timeline(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetReplayPanel(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetReportButtonSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetRightClipCover(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetTextJumpingTimeline(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetTextTimeNow(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetTextTimeSpeed(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetTextTimeTotal(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetTimelineControls(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetTimelineHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x300, value); }
	inline bool SetTimelineOptionsHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x308, value); }
	inline bool SetTimelineSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x310, value); }
	inline bool SetTimelineSlider(t_structHelper inst, ExternalPtr<struct USlider> value) { inst.WriteOffset(0x318, value); }
	inline bool SetTimlineOvelay(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x320, value); }
	inline bool SetTslGameInstance(t_structHelper inst, ExternalPtr<struct UTslGameInstance> value) { inst.WriteOffset(0x328, value); }
	inline bool SetTimelinePercent(t_structHelper inst, float value) { inst.WriteOffset(0x330, value); }
	inline bool SetReplayCurTime(t_structHelper inst, float value) { inst.WriteOffset(0x334, value); }
	inline bool SetCurTimeSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x338, value); }
	inline bool SetMaxTimeSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x33C, value); }
	inline bool SetMinTimeSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x340, value); }
	inline bool SetKillEventItemTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x344, value); }
	inline bool SetTimelineWidth(t_structHelper inst, float value) { inst.WriteOffset(0x360, value); }
	inline bool IsPaused()
	{
		return boolField364& 0x1;
	}
	inline bool SetIsPaused(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x364, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsCtlVisible()
	{
		return boolField365& 0x1;
	}
	inline bool SetIsCtlVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x365, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGetKillEventsTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x368, value); }
	inline bool SetGetGroggyEventsTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x370, value); }
	inline bool SetRecordStartTime(t_structHelper inst, float value) { inst.WriteOffset(0x378, value); }
	inline bool SetTimelineBarInitTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x37C, value); }
	inline bool SetTimelineBarMinimizeTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x398, value); }
	inline bool IsTimelineMinimize()
	{
		return boolField3B4& 0x1;
	}
	inline bool SetIsTimelineMinimize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsFirstConstruct()
	{
		return boolField3B5& 0x1;
	}
	inline bool SetIsFirstConstruct(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool IsRecording()
	{
		return boolField3B6& 0x1;
	}
	inline bool SetIsRecording(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B6, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKillerIDToFind(t_structHelper inst, FString value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetKillerNameToFind(t_structHelper inst, FString value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetVictimIDToFind(t_structHelper inst, FString value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetVictimNameToFind(t_structHelper inst, FString value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetCountForFindingKillerOrVictim(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetCountForFindingCharacter(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3FC, value); }
	inline bool SetNowTimeInitTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x400, value); }
	inline bool SetNowTimeMinimizeTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x41C, value); }
	inline bool SetTotalTimeInitTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x438, value); }
	inline bool SetTotalTimeMinimizeTransform(t_structHelper inst, FWidgetTransform value) { inst.WriteOffset(0x454, value); }
	inline bool IsJumpProcessing()
	{
		return boolField470& 0x1;
	}
	inline bool SetIsJumpProcessing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x470, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTimelineJumpTo(t_structHelper inst, FText value) { inst.WriteOffset(0x478, value); }
	inline bool SetNewVar_1(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetKillEventItemWidgets(t_structHelper inst, TArray<ExternalPtr<struct UReplayTimelineKillEventItem_C>> value) { inst.WriteOffset(0x498, value); }
	inline bool SetDBNOEventItemWidgets(t_structHelper inst, TArray<ExternalPtr<struct UReplayTimelineDBNOEventItem_C>> value) { inst.WriteOffset(0x4A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReplayTimeline_C = sizeof(UReplayTimeline_C); // 1208
    static_assert(sizeof(UReplayTimeline_C) == 0x4B8, "Size of UReplayTimeline_C is not correct.");
	auto constexpr UReplayTimeline_C_UberGraphFrame_Offset = offsetof(UReplayTimeline_C, UberGraphFrame);
	static_assert(UReplayTimeline_C_UberGraphFrame_Offset == 0x248, "UReplayTimeline_C::UberGraphFrame offset is not 248");
	auto constexpr UReplayTimeline_C_JumpingTimeline_Offset = offsetof(UReplayTimeline_C, JumpingTimeline);
	static_assert(UReplayTimeline_C_JumpingTimeline_Offset == 0x250, "UReplayTimeline_C::JumpingTimeline offset is not 250");
	auto constexpr UReplayTimeline_C_BorderTimeline_Offset = offsetof(UReplayTimeline_C, BorderTimeline);
	static_assert(UReplayTimeline_C_BorderTimeline_Offset == 0x258, "UReplayTimeline_C::BorderTimeline offset is not 258");
	auto constexpr UReplayTimeline_C_BtnPause_Offset = offsetof(UReplayTimeline_C, BtnPause);
	static_assert(UReplayTimeline_C_BtnPause_Offset == 0x260, "UReplayTimeline_C::BtnPause offset is not 260");
	auto constexpr UReplayTimeline_C_BtnPlay_Offset = offsetof(UReplayTimeline_C, BtnPlay);
	static_assert(UReplayTimeline_C_BtnPlay_Offset == 0x268, "UReplayTimeline_C::BtnPlay offset is not 268");
	auto constexpr UReplayTimeline_C_BtnRec_Offset = offsetof(UReplayTimeline_C, BtnRec);
	static_assert(UReplayTimeline_C_BtnRec_Offset == 0x270, "UReplayTimeline_C::BtnRec offset is not 270");
	auto constexpr UReplayTimeline_C_BtnSpeedDown_Offset = offsetof(UReplayTimeline_C, BtnSpeedDown);
	static_assert(UReplayTimeline_C_BtnSpeedDown_Offset == 0x278, "UReplayTimeline_C::BtnSpeedDown offset is not 278");
	auto constexpr UReplayTimeline_C_BtnSpeedUp_Offset = offsetof(UReplayTimeline_C, BtnSpeedUp);
	static_assert(UReplayTimeline_C_BtnSpeedUp_Offset == 0x280, "UReplayTimeline_C::BtnSpeedUp offset is not 280");
	auto constexpr UReplayTimeline_C_BtnStop_Offset = offsetof(UReplayTimeline_C, BtnStop);
	static_assert(UReplayTimeline_C_BtnStop_Offset == 0x288, "UReplayTimeline_C::BtnStop offset is not 288");
	auto constexpr UReplayTimeline_C_ButtonReport_Offset = offsetof(UReplayTimeline_C, ButtonReport);
	static_assert(UReplayTimeline_C_ButtonReport_Offset == 0x290, "UReplayTimeline_C::ButtonReport offset is not 290");
	auto constexpr UReplayTimeline_C_CheckBoxGroggys_Offset = offsetof(UReplayTimeline_C, CheckBoxGroggys);
	static_assert(UReplayTimeline_C_CheckBoxGroggys_Offset == 0x298, "UReplayTimeline_C::CheckBoxGroggys offset is not 298");
	auto constexpr UReplayTimeline_C_CheckBoxKills_Offset = offsetof(UReplayTimeline_C, CheckBoxKills);
	static_assert(UReplayTimeline_C_CheckBoxKills_Offset == 0x2a0, "UReplayTimeline_C::CheckBoxKills offset is not 2a0");
	auto constexpr UReplayTimeline_C_Image_1_Offset = offsetof(UReplayTimeline_C, Image_1);
	static_assert(UReplayTimeline_C_Image_1_Offset == 0x2a8, "UReplayTimeline_C::Image_1 offset is not 2a8");
	auto constexpr UReplayTimeline_C_LeftClipCover_Offset = offsetof(UReplayTimeline_C, LeftClipCover);
	static_assert(UReplayTimeline_C_LeftClipCover_Offset == 0x2b0, "UReplayTimeline_C::LeftClipCover offset is not 2b0");
	auto constexpr UReplayTimeline_C_Overlay_Timeline_Offset = offsetof(UReplayTimeline_C, Overlay_Timeline);
	static_assert(UReplayTimeline_C_Overlay_Timeline_Offset == 0x2b8, "UReplayTimeline_C::Overlay_Timeline offset is not 2b8");
	auto constexpr UReplayTimeline_C_ReplayPanel_Offset = offsetof(UReplayTimeline_C, ReplayPanel);
	static_assert(UReplayTimeline_C_ReplayPanel_Offset == 0x2c0, "UReplayTimeline_C::ReplayPanel offset is not 2c0");
	auto constexpr UReplayTimeline_C_ReportButtonSizeBox_Offset = offsetof(UReplayTimeline_C, ReportButtonSizeBox);
	static_assert(UReplayTimeline_C_ReportButtonSizeBox_Offset == 0x2c8, "UReplayTimeline_C::ReportButtonSizeBox offset is not 2c8");
	auto constexpr UReplayTimeline_C_RightClipCover_Offset = offsetof(UReplayTimeline_C, RightClipCover);
	static_assert(UReplayTimeline_C_RightClipCover_Offset == 0x2d0, "UReplayTimeline_C::RightClipCover offset is not 2d0");
	auto constexpr UReplayTimeline_C_TextJumpingTimeline_Offset = offsetof(UReplayTimeline_C, TextJumpingTimeline);
	static_assert(UReplayTimeline_C_TextJumpingTimeline_Offset == 0x2d8, "UReplayTimeline_C::TextJumpingTimeline offset is not 2d8");
	auto constexpr UReplayTimeline_C_TextTimeNow_Offset = offsetof(UReplayTimeline_C, TextTimeNow);
	static_assert(UReplayTimeline_C_TextTimeNow_Offset == 0x2e0, "UReplayTimeline_C::TextTimeNow offset is not 2e0");
	auto constexpr UReplayTimeline_C_TextTimeSpeed_Offset = offsetof(UReplayTimeline_C, TextTimeSpeed);
	static_assert(UReplayTimeline_C_TextTimeSpeed_Offset == 0x2e8, "UReplayTimeline_C::TextTimeSpeed offset is not 2e8");
	auto constexpr UReplayTimeline_C_TextTimeTotal_Offset = offsetof(UReplayTimeline_C, TextTimeTotal);
	static_assert(UReplayTimeline_C_TextTimeTotal_Offset == 0x2f0, "UReplayTimeline_C::TextTimeTotal offset is not 2f0");
	auto constexpr UReplayTimeline_C_TimelineControls_Offset = offsetof(UReplayTimeline_C, TimelineControls);
	static_assert(UReplayTimeline_C_TimelineControls_Offset == 0x2f8, "UReplayTimeline_C::TimelineControls offset is not 2f8");
	auto constexpr UReplayTimeline_C_TimelineHorizontalBox_Offset = offsetof(UReplayTimeline_C, TimelineHorizontalBox);
	static_assert(UReplayTimeline_C_TimelineHorizontalBox_Offset == 0x300, "UReplayTimeline_C::TimelineHorizontalBox offset is not 300");
	auto constexpr UReplayTimeline_C_TimelineOptionsHorizontalBox_Offset = offsetof(UReplayTimeline_C, TimelineOptionsHorizontalBox);
	static_assert(UReplayTimeline_C_TimelineOptionsHorizontalBox_Offset == 0x308, "UReplayTimeline_C::TimelineOptionsHorizontalBox offset is not 308");
	auto constexpr UReplayTimeline_C_TimelineSizeBox_Offset = offsetof(UReplayTimeline_C, TimelineSizeBox);
	static_assert(UReplayTimeline_C_TimelineSizeBox_Offset == 0x310, "UReplayTimeline_C::TimelineSizeBox offset is not 310");
	auto constexpr UReplayTimeline_C_TimelineSlider_Offset = offsetof(UReplayTimeline_C, TimelineSlider);
	static_assert(UReplayTimeline_C_TimelineSlider_Offset == 0x318, "UReplayTimeline_C::TimelineSlider offset is not 318");
	auto constexpr UReplayTimeline_C_TimlineOvelay_Offset = offsetof(UReplayTimeline_C, TimlineOvelay);
	static_assert(UReplayTimeline_C_TimlineOvelay_Offset == 0x320, "UReplayTimeline_C::TimlineOvelay offset is not 320");
	auto constexpr UReplayTimeline_C_TslGameInstance_Offset = offsetof(UReplayTimeline_C, TslGameInstance);
	static_assert(UReplayTimeline_C_TslGameInstance_Offset == 0x328, "UReplayTimeline_C::TslGameInstance offset is not 328");
	auto constexpr UReplayTimeline_C_TimelinePercent_Offset = offsetof(UReplayTimeline_C, TimelinePercent);
	static_assert(UReplayTimeline_C_TimelinePercent_Offset == 0x330, "UReplayTimeline_C::TimelinePercent offset is not 330");
	auto constexpr UReplayTimeline_C_ReplayCurTime_Offset = offsetof(UReplayTimeline_C, ReplayCurTime);
	static_assert(UReplayTimeline_C_ReplayCurTime_Offset == 0x334, "UReplayTimeline_C::ReplayCurTime offset is not 334");
	auto constexpr UReplayTimeline_C_CurTimeSpeed_Offset = offsetof(UReplayTimeline_C, CurTimeSpeed);
	static_assert(UReplayTimeline_C_CurTimeSpeed_Offset == 0x338, "UReplayTimeline_C::CurTimeSpeed offset is not 338");
	auto constexpr UReplayTimeline_C_MaxTimeSpeed_Offset = offsetof(UReplayTimeline_C, MaxTimeSpeed);
	static_assert(UReplayTimeline_C_MaxTimeSpeed_Offset == 0x33c, "UReplayTimeline_C::MaxTimeSpeed offset is not 33c");
	auto constexpr UReplayTimeline_C_MinTimeSpeed_Offset = offsetof(UReplayTimeline_C, MinTimeSpeed);
	static_assert(UReplayTimeline_C_MinTimeSpeed_Offset == 0x340, "UReplayTimeline_C::MinTimeSpeed offset is not 340");
	auto constexpr UReplayTimeline_C_KillEventItemTransform_Offset = offsetof(UReplayTimeline_C, KillEventItemTransform);
	static_assert(UReplayTimeline_C_KillEventItemTransform_Offset == 0x344, "UReplayTimeline_C::KillEventItemTransform offset is not 344");
	auto constexpr UReplayTimeline_C_TimelineWidth_Offset = offsetof(UReplayTimeline_C, TimelineWidth);
	static_assert(UReplayTimeline_C_TimelineWidth_Offset == 0x360, "UReplayTimeline_C::TimelineWidth offset is not 360");
	auto constexpr UReplayTimeline_C_boolField364_Offset = offsetof(UReplayTimeline_C, boolField364);
	static_assert(UReplayTimeline_C_boolField364_Offset == 0x364, "UReplayTimeline_C::boolField364 offset is not 364");
	auto constexpr UReplayTimeline_C_boolField365_Offset = offsetof(UReplayTimeline_C, boolField365);
	static_assert(UReplayTimeline_C_boolField365_Offset == 0x365, "UReplayTimeline_C::boolField365 offset is not 365");
	auto constexpr UReplayTimeline_C_GetKillEventsTimer_Offset = offsetof(UReplayTimeline_C, GetKillEventsTimer);
	static_assert(UReplayTimeline_C_GetKillEventsTimer_Offset == 0x368, "UReplayTimeline_C::GetKillEventsTimer offset is not 368");
	auto constexpr UReplayTimeline_C_GetGroggyEventsTimer_Offset = offsetof(UReplayTimeline_C, GetGroggyEventsTimer);
	static_assert(UReplayTimeline_C_GetGroggyEventsTimer_Offset == 0x370, "UReplayTimeline_C::GetGroggyEventsTimer offset is not 370");
	auto constexpr UReplayTimeline_C_RecordStartTime_Offset = offsetof(UReplayTimeline_C, RecordStartTime);
	static_assert(UReplayTimeline_C_RecordStartTime_Offset == 0x378, "UReplayTimeline_C::RecordStartTime offset is not 378");
	auto constexpr UReplayTimeline_C_TimelineBarInitTransform_Offset = offsetof(UReplayTimeline_C, TimelineBarInitTransform);
	static_assert(UReplayTimeline_C_TimelineBarInitTransform_Offset == 0x37c, "UReplayTimeline_C::TimelineBarInitTransform offset is not 37c");
	auto constexpr UReplayTimeline_C_TimelineBarMinimizeTransform_Offset = offsetof(UReplayTimeline_C, TimelineBarMinimizeTransform);
	static_assert(UReplayTimeline_C_TimelineBarMinimizeTransform_Offset == 0x398, "UReplayTimeline_C::TimelineBarMinimizeTransform offset is not 398");
	auto constexpr UReplayTimeline_C_boolField3B4_Offset = offsetof(UReplayTimeline_C, boolField3B4);
	static_assert(UReplayTimeline_C_boolField3B4_Offset == 0x3b4, "UReplayTimeline_C::boolField3B4 offset is not 3b4");
	auto constexpr UReplayTimeline_C_boolField3B5_Offset = offsetof(UReplayTimeline_C, boolField3B5);
	static_assert(UReplayTimeline_C_boolField3B5_Offset == 0x3b5, "UReplayTimeline_C::boolField3B5 offset is not 3b5");
	auto constexpr UReplayTimeline_C_boolField3B6_Offset = offsetof(UReplayTimeline_C, boolField3B6);
	static_assert(UReplayTimeline_C_boolField3B6_Offset == 0x3b6, "UReplayTimeline_C::boolField3B6 offset is not 3b6");
	auto constexpr UReplayTimeline_C_KillerIDToFind_Offset = offsetof(UReplayTimeline_C, KillerIDToFind);
	static_assert(UReplayTimeline_C_KillerIDToFind_Offset == 0x3b8, "UReplayTimeline_C::KillerIDToFind offset is not 3b8");
	auto constexpr UReplayTimeline_C_KillerNameToFind_Offset = offsetof(UReplayTimeline_C, KillerNameToFind);
	static_assert(UReplayTimeline_C_KillerNameToFind_Offset == 0x3c8, "UReplayTimeline_C::KillerNameToFind offset is not 3c8");
	auto constexpr UReplayTimeline_C_VictimIDToFind_Offset = offsetof(UReplayTimeline_C, VictimIDToFind);
	static_assert(UReplayTimeline_C_VictimIDToFind_Offset == 0x3d8, "UReplayTimeline_C::VictimIDToFind offset is not 3d8");
	auto constexpr UReplayTimeline_C_VictimNameToFind_Offset = offsetof(UReplayTimeline_C, VictimNameToFind);
	static_assert(UReplayTimeline_C_VictimNameToFind_Offset == 0x3e8, "UReplayTimeline_C::VictimNameToFind offset is not 3e8");
	auto constexpr UReplayTimeline_C_CountForFindingKillerOrVictim_Offset = offsetof(UReplayTimeline_C, CountForFindingKillerOrVictim);
	static_assert(UReplayTimeline_C_CountForFindingKillerOrVictim_Offset == 0x3f8, "UReplayTimeline_C::CountForFindingKillerOrVictim offset is not 3f8");
	auto constexpr UReplayTimeline_C_CountForFindingCharacter_Offset = offsetof(UReplayTimeline_C, CountForFindingCharacter);
	static_assert(UReplayTimeline_C_CountForFindingCharacter_Offset == 0x3fc, "UReplayTimeline_C::CountForFindingCharacter offset is not 3fc");
	auto constexpr UReplayTimeline_C_NowTimeInitTransform_Offset = offsetof(UReplayTimeline_C, NowTimeInitTransform);
	static_assert(UReplayTimeline_C_NowTimeInitTransform_Offset == 0x400, "UReplayTimeline_C::NowTimeInitTransform offset is not 400");
	auto constexpr UReplayTimeline_C_NowTimeMinimizeTransform_Offset = offsetof(UReplayTimeline_C, NowTimeMinimizeTransform);
	static_assert(UReplayTimeline_C_NowTimeMinimizeTransform_Offset == 0x41c, "UReplayTimeline_C::NowTimeMinimizeTransform offset is not 41c");
	auto constexpr UReplayTimeline_C_TotalTimeInitTransform_Offset = offsetof(UReplayTimeline_C, TotalTimeInitTransform);
	static_assert(UReplayTimeline_C_TotalTimeInitTransform_Offset == 0x438, "UReplayTimeline_C::TotalTimeInitTransform offset is not 438");
	auto constexpr UReplayTimeline_C_TotalTimeMinimizeTransform_Offset = offsetof(UReplayTimeline_C, TotalTimeMinimizeTransform);
	static_assert(UReplayTimeline_C_TotalTimeMinimizeTransform_Offset == 0x454, "UReplayTimeline_C::TotalTimeMinimizeTransform offset is not 454");
	auto constexpr UReplayTimeline_C_boolField470_Offset = offsetof(UReplayTimeline_C, boolField470);
	static_assert(UReplayTimeline_C_boolField470_Offset == 0x470, "UReplayTimeline_C::boolField470 offset is not 470");
	auto constexpr UReplayTimeline_C_TimelineJumpTo_Offset = offsetof(UReplayTimeline_C, TimelineJumpTo);
	static_assert(UReplayTimeline_C_TimelineJumpTo_Offset == 0x478, "UReplayTimeline_C::TimelineJumpTo offset is not 478");
	auto constexpr UReplayTimeline_C_NewVar_1_Offset = offsetof(UReplayTimeline_C, NewVar_1);
	static_assert(UReplayTimeline_C_NewVar_1_Offset == 0x490, "UReplayTimeline_C::NewVar_1 offset is not 490");
	auto constexpr UReplayTimeline_C_KillEventItemWidgets_Offset = offsetof(UReplayTimeline_C, KillEventItemWidgets);
	static_assert(UReplayTimeline_C_KillEventItemWidgets_Offset == 0x498, "UReplayTimeline_C::KillEventItemWidgets offset is not 498");
	auto constexpr UReplayTimeline_C_DBNOEventItemWidgets_Offset = offsetof(UReplayTimeline_C, DBNOEventItemWidgets);
	static_assert(UReplayTimeline_C_DBNOEventItemWidgets_Offset == 0x4a8, "UReplayTimeline_C::DBNOEventItemWidgets offset is not 4a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
