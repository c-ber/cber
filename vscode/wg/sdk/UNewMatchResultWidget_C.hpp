#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNewMatchResultWidget_C // Size: 0x820
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UNewMatchResultWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(165076); // id32("WidgetBlueprintGeneratedClass NewMatchResultWidget.NewMatchResultWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty NewMatchResultWidget.NewMatchResultWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> ObserverMatchResult; /* Ofs: 0x338 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ObserverMatchResult */
	ExternalPtr<struct UWidgetAnimation> ObserverMatchResultContentBoxEmerging; /* Ofs: 0x340 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ObserverMatchResultContentBoxEmerging */
	ExternalPtr<struct UWidgetAnimation> ReportButtonVanishing; /* Ofs: 0x348 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ReportButtonVanishing */
	ExternalPtr<struct UWidgetAnimation> ReportButtonEmerging; /* Ofs: 0x350 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ReportButtonEmerging */
	ExternalPtr<struct UWidgetAnimation> DetailScoreLayerEmerging; /* Ofs: 0x358 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.DetailScoreLayerEmerging */
	ExternalPtr<struct UWidgetAnimation> BigRankBoxEmerging; /* Ofs: 0x360 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.BigRankBoxEmerging */
	ExternalPtr<struct UWidgetAnimation> SpectatimgButtonVanishing; /* Ofs: 0x368 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.SpectatimgButtonVanishing */
	ExternalPtr<struct UWidgetAnimation> SpectatimgButtonEmerging; /* Ofs: 0x370 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.SpectatimgButtonEmerging */
	ExternalPtr<struct UWidgetAnimation> ResultEmerging; /* Ofs: 0x378 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ResultEmerging */
	ExternalPtr<struct UHorizontalBox> BigRankBox; /* Ofs: 0x380 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.BigRankBox */
	ExternalPtr<struct UBorder> Border_255; /* Ofs: 0x388 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Border_255 */
	ExternalPtr<struct UBorder> Border_461; /* Ofs: 0x390 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Border_461 */
	ExternalPtr<struct UImage> BROLogo; /* Ofs: 0x398 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.BROLogo */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Button_1 */
	ExternalPtr<struct UButton> Button_2; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Button_2 */
	ExternalPtr<struct UButton> Button_6; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Button_6 */
	ExternalPtr<struct UButton> Button_8; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Button_8 */
	ExternalPtr<struct UButton> ButtonKillcam; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ButtonKillcam */
	ExternalPtr<struct UTextBlock> ButtonKillcamText; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ButtonKillcamText */
	ExternalPtr<struct UButton> ButtonLobby; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ButtonLobby */
	ExternalPtr<struct UButton> ButtonReport; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ButtonReport */
	ExternalPtr<struct UButton> ButtonSpectator; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ButtonSpectator */
	ExternalPtr<struct UBorder> ButtonSpectatorLayer; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ButtonSpectatorLayer */
	ExternalPtr<struct UBorder> DetailScoreLayer; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.DetailScoreLayer */
	ExternalPtr<struct UTextBlock> FinalRankText; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.FinalRankText */
	ExternalPtr<struct UTextBlock> HitBPText; /* Ofs: 0x400 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.HitBPText */
	ExternalPtr<struct UHorizontalBox> HorizontalBox_7; /* Ofs: 0x408 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.HorizontalBox_7 */
	ExternalPtr<struct UHorizontalBox> HorizontalBox_8; /* Ofs: 0x410 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.HorizontalBox_8 */
	ExternalPtr<struct USizeBox> HumansBOx; /* Ofs: 0x418 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.HumansBOx */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x420 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x428 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Image_2 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x430 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Image_3 */
	ExternalPtr<struct UImage> Image_4; /* Ofs: 0x438 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Image_4 */
	ExternalPtr<struct UImage> Image_5; /* Ofs: 0x440 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Image_5 */
	ExternalPtr<struct UImage> Image_6; /* Ofs: 0x448 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.Image_6 */
	ExternalPtr<struct UTextBlock> KillBPText; /* Ofs: 0x450 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.KillBPText */
	ExternalPtr<struct UTextBlock> KillCountPlayersText; /* Ofs: 0x458 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.KillCountPlayersText */
	ExternalPtr<struct UTextBlock> KillCountText; /* Ofs: 0x460 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.KillCountText */
	ExternalPtr<struct UImage> LogoImage; /* Ofs: 0x468 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.LogoImage */
	ExternalPtr<struct UWidgetSwitcher> MatchResultExitButtonSwitcher; /* Ofs: 0x470 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResultExitButtonSwitcher */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_1; /* Ofs: 0x478 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_1 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_2; /* Ofs: 0x480 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_2 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_3; /* Ofs: 0x488 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_3 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_4; /* Ofs: 0x490 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_4 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_5; /* Ofs: 0x498 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_5 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_6; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_6 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_7; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_7 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_8; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_8 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_9; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_9 */
	ExternalPtr<struct UObserverMatchResultNameWidget_C> MatchResulttInfo_10; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResulttInfo_10 */
	ExternalPtr<struct UBorder> MatchResultWindow; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.MatchResultWindow */
	ExternalPtr<struct UScrollBox> OtherScrollSizeBox; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.OtherScrollSizeBox */
	ExternalPtr<struct UTextBlock> PlayerNameText; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.PlayerNameText */
	ExternalPtr<struct UTextBlock> RankBPText; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.RankBPText */
	ExternalPtr<struct UTextBlock> RankBPTitleText; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.RankBPTitleText */
	ExternalPtr<struct UTextBlock> RankText; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.RankText */
	ExternalPtr<struct UTextBlock> RankTitleText; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.RankTitleText */
	ExternalPtr<struct UTextBlock> ResultMsgText; /* Ofs: 0x500 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ResultMsgText */
	ExternalPtr<struct UTextBlock> RewardPointsTotal; /* Ofs: 0x508 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.RewardPointsTotal */
	ExternalPtr<struct UVerticalBox> RewardsBlock; /* Ofs: 0x510 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.RewardsBlock */
	ExternalPtr<struct UWidgetSwitcher> ScoreSwitcher; /* Ofs: 0x518 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ScoreSwitcher */
	ExternalPtr<struct UScrollBox> ScrollBox_6; /* Ofs: 0x520 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ScrollBox_6 */
	ExternalPtr<struct UTextBlock> TextBlock_73; /* Ofs: 0x528 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.TextBlock_73 */
	ExternalPtr<struct UTextBlock> TextBlock_74; /* Ofs: 0x530 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.TextBlock_74 */
	ExternalPtr<struct UTextBlock> TextBlock_380; /* Ofs: 0x538 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.TextBlock_380 */
	ExternalPtr<struct UTextBlock> TextBlock_888; /* Ofs: 0x540 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.TextBlock_888 */
	ExternalPtr<struct UTextBlock> TextBlock_932; /* Ofs: 0x548 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.TextBlock_932 */
	ExternalPtr<struct UTextBlock> TotalPlayersText; /* Ofs: 0x550 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.TotalPlayersText */
	ExternalPtr<struct UVerticalBox> VerticalBox_2; /* Ofs: 0x558 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.VerticalBox_2 */
	ExternalPtr<struct UWidgetSwitcher> WidgetSwitcher_1; /* Ofs: 0x560 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.WidgetSwitcher_1 */
	ExternalPtr<struct UTextBlock> WinRatingText; /* Ofs: 0x568 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.WinRatingText */
	ExternalPtr<struct USizeBox> ZombieBox; /* Ofs: 0x570 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.ZombieBox */
	ExternalPtr<struct UTslGameState> refTSLGameState; /* Ofs: 0x578 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.refTSLGameState */
	ExternalPtr<struct UTslPlayerState> refTSLPlayerState; /* Ofs: 0x580 Size: 0x8 - ObjectProperty NewMatchResultWidget.NewMatchResultWidget_C.refTSLPlayerState */
	FText PlayerName; /* Ofs: 0x588 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.PlayerName */
	FText Rank; /* Ofs: 0x5A0 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.Rank */
	FText KillCount; /* Ofs: 0x5B8 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillCount */
	FText RewardTotal; /* Ofs: 0x5D0 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.RewardTotal */
	FText WinRating; /* Ofs: 0x5E8 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.WinRating */
	FText KillRating; /* Ofs: 0x600 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillRating */
	FText TotalPlayerCount; /* Ofs: 0x618 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.TotalPlayerCount */
	FText RewardRank; /* Ofs: 0x630 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.RewardRank */
	FText RewardKill; /* Ofs: 0x648 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.RewardKill */
	FText RewardHit; /* Ofs: 0x660 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.RewardHit */
	FText ResultMessage; /* Ofs: 0x678 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.ResultMessage */
	FText PlayerText; /* Ofs: 0x690 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.PlayerText */
	uint8_t boolField6A8;
	uint8_t boolField6A9;
	uint8_t boolField6AA;
	uint8_t boolField6AB;
	uint8_t boolField6AC;
	uint8_t UnknownData6AD[0x3];
	int32_t RankNum; /* Ofs: 0x6B0 Size: 0x4 - IntProperty NewMatchResultWidget.NewMatchResultWidget_C.RankNum */
	uint8_t boolField6B4;
	uint8_t UnknownData6B5[0x3];
	TArray<int32_t> AddedTeamList; /* Ofs: 0x6B8 Size: 0x10 - ArrayProperty NewMatchResultWidget.NewMatchResultWidget_C.AddedTeamList */
	TArray<ExternalPtr<struct UObserverMatchResultNameGroupWidget_C>> PlayerMatchResultGroup; /* Ofs: 0x6C8 Size: 0x10 - ArrayProperty NewMatchResultWidget.NewMatchResultWidget_C.PlayerMatchResultGroup */
	int32_t LastPlayerInfoNums; /* Ofs: 0x6D8 Size: 0x4 - IntProperty NewMatchResultWidget.NewMatchResultWidget_C.LastPlayerInfoNums */
	uint8_t boolField6DC;
	uint8_t UnknownData6DD[0x3];
	FText KillcamDisableTooltipText; /* Ofs: 0x6E0 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillcamDisableTooltipText */
	FText KillcamCountingTextFormat; /* Ofs: 0x6F8 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillcamCountingTextFormat */
	FText KillcamFailToLoadTooltipText; /* Ofs: 0x710 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillcamFailToLoadTooltipText */
	FText ReplayKillcamText; /* Ofs: 0x728 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.ReplayKillcamText */
	FText KillcamPlayText; /* Ofs: 0x740 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillcamPlayText */
	FText KillcamTooltipText; /* Ofs: 0x758 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillcamTooltipText */
	int32_t LastHumanInfoNums; /* Ofs: 0x770 Size: 0x4 - IntProperty NewMatchResultWidget.NewMatchResultWidget_C.LastHumanInfoNums */
	int32_t LastZombieInfoNums; /* Ofs: 0x774 Size: 0x4 - IntProperty NewMatchResultWidget.NewMatchResultWidget_C.LastZombieInfoNums */
	TArray<ExternalPtr<struct UZombieGroupWidget_C>> ZombieGroupWidgets; /* Ofs: 0x778 Size: 0x10 - ArrayProperty NewMatchResultWidget.NewMatchResultWidget_C.ZombieGroupWidgets */
	TArray<int32_t> ZombieTeamList; /* Ofs: 0x788 Size: 0x10 - ArrayProperty NewMatchResultWidget.NewMatchResultWidget_C.ZombieTeamList */
	FLinearColor WinColor; /* Ofs: 0x798 Size: 0x10 - StructProperty NewMatchResultWidget.NewMatchResultWidget_C.WinColor */
	FLinearColor LoseColor; /* Ofs: 0x7A8 Size: 0x10 - StructProperty NewMatchResultWidget.NewMatchResultWidget_C.LoseColor */
	FText WinText; /* Ofs: 0x7B8 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.WinText */
	FText LoseText; /* Ofs: 0x7D0 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.LoseText */
	uint8_t boolField7E8;
	uint8_t UnknownData7E9[0x7];
	FText UnableReplayKillcamTooltipText; /* Ofs: 0x7F0 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.UnableReplayKillcamTooltipText */
	FText KillcamUnusualMovementTooltip; /* Ofs: 0x808 Size: 0x18 - TextProperty NewMatchResultWidget.NewMatchResultWidget_C.KillcamUnusualMovementTooltip */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetObserverMatchResult(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x338, value); }
	inline bool SetObserverMatchResultContentBoxEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x340, value); }
	inline bool SetReportButtonVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x348, value); }
	inline bool SetReportButtonEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x350, value); }
	inline bool SetDetailScoreLayerEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x358, value); }
	inline bool SetBigRankBoxEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x360, value); }
	inline bool SetSpectatimgButtonVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x368, value); }
	inline bool SetSpectatimgButtonEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x370, value); }
	inline bool SetResultEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x378, value); }
	inline bool SetBigRankBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x380, value); }
	inline bool SetBorder_255(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x388, value); }
	inline bool SetBorder_461(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x390, value); }
	inline bool SetBROLogo(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetButton_2(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetButton_6(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetButton_8(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetButtonKillcam(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetButtonKillcamText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetButtonLobby(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetButtonReport(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetButtonSpectator(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetButtonSpectatorLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetDetailScoreLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetFinalRankText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetHitBPText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x400, value); }
	inline bool SetHorizontalBox_7(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x408, value); }
	inline bool SetHorizontalBox_8(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x410, value); }
	inline bool SetHumansBOx(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x418, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x420, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x428, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x430, value); }
	inline bool SetImage_4(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x438, value); }
	inline bool SetImage_5(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x440, value); }
	inline bool SetImage_6(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x448, value); }
	inline bool SetKillBPText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x450, value); }
	inline bool SetKillCountPlayersText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x458, value); }
	inline bool SetKillCountText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x460, value); }
	inline bool SetLogoImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x468, value); }
	inline bool SetMatchResultExitButtonSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x470, value); }
	inline bool SetMatchResulttInfo_1(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x478, value); }
	inline bool SetMatchResulttInfo_2(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x480, value); }
	inline bool SetMatchResulttInfo_3(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x488, value); }
	inline bool SetMatchResulttInfo_4(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x490, value); }
	inline bool SetMatchResulttInfo_5(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x498, value); }
	inline bool SetMatchResulttInfo_6(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetMatchResulttInfo_7(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetMatchResulttInfo_8(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetMatchResulttInfo_9(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetMatchResulttInfo_10(t_structHelper inst, ExternalPtr<struct UObserverMatchResultNameWidget_C> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetMatchResultWindow(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetOtherScrollSizeBox(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetPlayerNameText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetRankBPText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetRankBPTitleText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetRankText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetRankTitleText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetResultMsgText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x500, value); }
	inline bool SetRewardPointsTotal(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x508, value); }
	inline bool SetRewardsBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x510, value); }
	inline bool SetScoreSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x518, value); }
	inline bool SetScrollBox_6(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x520, value); }
	inline bool SetTextBlock_73(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x528, value); }
	inline bool SetTextBlock_74(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x530, value); }
	inline bool SetTextBlock_380(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x538, value); }
	inline bool SetTextBlock_888(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x540, value); }
	inline bool SetTextBlock_932(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x548, value); }
	inline bool SetTotalPlayersText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x550, value); }
	inline bool SetVerticalBox_2(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x558, value); }
	inline bool SetWidgetSwitcher_1(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x560, value); }
	inline bool SetWinRatingText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x568, value); }
	inline bool SetZombieBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x570, value); }
	inline bool SetrefTSLGameState(t_structHelper inst, ExternalPtr<struct UTslGameState> value) { inst.WriteOffset(0x578, value); }
	inline bool SetrefTSLPlayerState(t_structHelper inst, ExternalPtr<struct UTslPlayerState> value) { inst.WriteOffset(0x580, value); }
	inline bool SetPlayerName(t_structHelper inst, FText value) { inst.WriteOffset(0x588, value); }
	inline bool SetRank(t_structHelper inst, FText value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetKillCount(t_structHelper inst, FText value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetRewardTotal(t_structHelper inst, FText value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetWinRating(t_structHelper inst, FText value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetKillRating(t_structHelper inst, FText value) { inst.WriteOffset(0x600, value); }
	inline bool SetTotalPlayerCount(t_structHelper inst, FText value) { inst.WriteOffset(0x618, value); }
	inline bool SetRewardRank(t_structHelper inst, FText value) { inst.WriteOffset(0x630, value); }
	inline bool SetRewardKill(t_structHelper inst, FText value) { inst.WriteOffset(0x648, value); }
	inline bool SetRewardHit(t_structHelper inst, FText value) { inst.WriteOffset(0x660, value); }
	inline bool SetResultMessage(t_structHelper inst, FText value) { inst.WriteOffset(0x678, value); }
	inline bool SetPlayerText(t_structHelper inst, FText value) { inst.WriteOffset(0x690, value); }
	inline bool bIsSpectatingButtonVanishing()
	{
		return boolField6A8& 0x1;
	}
	inline bool SetbIsSpectatingButtonVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bISBigRankBoxVanishing()
	{
		return boolField6A9& 0x1;
	}
	inline bool SetbISBigRankBoxVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsDetailScoreLayerVanishing()
	{
		return boolField6AA& 0x1;
	}
	inline bool SetbIsDetailScoreLayerVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsResultLayerVanishing()
	{
		return boolField6AB& 0x1;
	}
	inline bool SetbIsResultLayerVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AB, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool isTeamPlaySession()
	{
		return boolField6AC& 0x1;
	}
	inline bool SetisTeamPlaySession(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRankNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6B0, value); }
	inline bool bIsGameOver()
	{
		return boolField6B4& 0x1;
	}
	inline bool SetbIsGameOver(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAddedTeamList(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetPlayerMatchResultGroup(t_structHelper inst, TArray<ExternalPtr<struct UObserverMatchResultNameGroupWidget_C>> value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetLastPlayerInfoNums(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6D8, value); }
	inline bool bIsReportButtonVanishing()
	{
		return boolField6DC& 0x1;
	}
	inline bool SetbIsReportButtonVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6DC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKillcamDisableTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetKillcamCountingTextFormat(t_structHelper inst, FText value) { inst.WriteOffset(0x6F8, value); }
	inline bool SetKillcamFailToLoadTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x710, value); }
	inline bool SetReplayKillcamText(t_structHelper inst, FText value) { inst.WriteOffset(0x728, value); }
	inline bool SetKillcamPlayText(t_structHelper inst, FText value) { inst.WriteOffset(0x740, value); }
	inline bool SetKillcamTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x758, value); }
	inline bool SetLastHumanInfoNums(t_structHelper inst, int32_t value) { inst.WriteOffset(0x770, value); }
	inline bool SetLastZombieInfoNums(t_structHelper inst, int32_t value) { inst.WriteOffset(0x774, value); }
	inline bool SetZombieGroupWidgets(t_structHelper inst, TArray<ExternalPtr<struct UZombieGroupWidget_C>> value) { inst.WriteOffset(0x778, value); }
	inline bool SetZombieTeamList(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x788, value); }
	inline bool SetWinColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x798, value); }
	inline bool SetLoseColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x7A8, value); }
	inline bool SetWinText(t_structHelper inst, FText value) { inst.WriteOffset(0x7B8, value); }
	inline bool SetLoseText(t_structHelper inst, FText value) { inst.WriteOffset(0x7D0, value); }
	inline bool SwapHumanZombieBox()
	{
		return boolField7E8& 0x1;
	}
	inline bool SetSwapHumanZombieBox(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUnableReplayKillcamTooltipText(t_structHelper inst, FText value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetKillcamUnusualMovementTooltip(t_structHelper inst, FText value) { inst.WriteOffset(0x808, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNewMatchResultWidget_C = sizeof(UNewMatchResultWidget_C); // 2080
    static_assert(sizeof(UNewMatchResultWidget_C) == 0x820, "Size of UNewMatchResultWidget_C is not correct.");
	auto constexpr UNewMatchResultWidget_C_UberGraphFrame_Offset = offsetof(UNewMatchResultWidget_C, UberGraphFrame);
	static_assert(UNewMatchResultWidget_C_UberGraphFrame_Offset == 0x330, "UNewMatchResultWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UNewMatchResultWidget_C_ObserverMatchResult_Offset = offsetof(UNewMatchResultWidget_C, ObserverMatchResult);
	static_assert(UNewMatchResultWidget_C_ObserverMatchResult_Offset == 0x338, "UNewMatchResultWidget_C::ObserverMatchResult offset is not 338");
	auto constexpr UNewMatchResultWidget_C_ObserverMatchResultContentBoxEmerging_Offset = offsetof(UNewMatchResultWidget_C, ObserverMatchResultContentBoxEmerging);
	static_assert(UNewMatchResultWidget_C_ObserverMatchResultContentBoxEmerging_Offset == 0x340, "UNewMatchResultWidget_C::ObserverMatchResultContentBoxEmerging offset is not 340");
	auto constexpr UNewMatchResultWidget_C_ReportButtonVanishing_Offset = offsetof(UNewMatchResultWidget_C, ReportButtonVanishing);
	static_assert(UNewMatchResultWidget_C_ReportButtonVanishing_Offset == 0x348, "UNewMatchResultWidget_C::ReportButtonVanishing offset is not 348");
	auto constexpr UNewMatchResultWidget_C_ReportButtonEmerging_Offset = offsetof(UNewMatchResultWidget_C, ReportButtonEmerging);
	static_assert(UNewMatchResultWidget_C_ReportButtonEmerging_Offset == 0x350, "UNewMatchResultWidget_C::ReportButtonEmerging offset is not 350");
	auto constexpr UNewMatchResultWidget_C_DetailScoreLayerEmerging_Offset = offsetof(UNewMatchResultWidget_C, DetailScoreLayerEmerging);
	static_assert(UNewMatchResultWidget_C_DetailScoreLayerEmerging_Offset == 0x358, "UNewMatchResultWidget_C::DetailScoreLayerEmerging offset is not 358");
	auto constexpr UNewMatchResultWidget_C_BigRankBoxEmerging_Offset = offsetof(UNewMatchResultWidget_C, BigRankBoxEmerging);
	static_assert(UNewMatchResultWidget_C_BigRankBoxEmerging_Offset == 0x360, "UNewMatchResultWidget_C::BigRankBoxEmerging offset is not 360");
	auto constexpr UNewMatchResultWidget_C_SpectatimgButtonVanishing_Offset = offsetof(UNewMatchResultWidget_C, SpectatimgButtonVanishing);
	static_assert(UNewMatchResultWidget_C_SpectatimgButtonVanishing_Offset == 0x368, "UNewMatchResultWidget_C::SpectatimgButtonVanishing offset is not 368");
	auto constexpr UNewMatchResultWidget_C_SpectatimgButtonEmerging_Offset = offsetof(UNewMatchResultWidget_C, SpectatimgButtonEmerging);
	static_assert(UNewMatchResultWidget_C_SpectatimgButtonEmerging_Offset == 0x370, "UNewMatchResultWidget_C::SpectatimgButtonEmerging offset is not 370");
	auto constexpr UNewMatchResultWidget_C_ResultEmerging_Offset = offsetof(UNewMatchResultWidget_C, ResultEmerging);
	static_assert(UNewMatchResultWidget_C_ResultEmerging_Offset == 0x378, "UNewMatchResultWidget_C::ResultEmerging offset is not 378");
	auto constexpr UNewMatchResultWidget_C_BigRankBox_Offset = offsetof(UNewMatchResultWidget_C, BigRankBox);
	static_assert(UNewMatchResultWidget_C_BigRankBox_Offset == 0x380, "UNewMatchResultWidget_C::BigRankBox offset is not 380");
	auto constexpr UNewMatchResultWidget_C_Border_255_Offset = offsetof(UNewMatchResultWidget_C, Border_255);
	static_assert(UNewMatchResultWidget_C_Border_255_Offset == 0x388, "UNewMatchResultWidget_C::Border_255 offset is not 388");
	auto constexpr UNewMatchResultWidget_C_Border_461_Offset = offsetof(UNewMatchResultWidget_C, Border_461);
	static_assert(UNewMatchResultWidget_C_Border_461_Offset == 0x390, "UNewMatchResultWidget_C::Border_461 offset is not 390");
	auto constexpr UNewMatchResultWidget_C_BROLogo_Offset = offsetof(UNewMatchResultWidget_C, BROLogo);
	static_assert(UNewMatchResultWidget_C_BROLogo_Offset == 0x398, "UNewMatchResultWidget_C::BROLogo offset is not 398");
	auto constexpr UNewMatchResultWidget_C_Button_1_Offset = offsetof(UNewMatchResultWidget_C, Button_1);
	static_assert(UNewMatchResultWidget_C_Button_1_Offset == 0x3a0, "UNewMatchResultWidget_C::Button_1 offset is not 3a0");
	auto constexpr UNewMatchResultWidget_C_Button_2_Offset = offsetof(UNewMatchResultWidget_C, Button_2);
	static_assert(UNewMatchResultWidget_C_Button_2_Offset == 0x3a8, "UNewMatchResultWidget_C::Button_2 offset is not 3a8");
	auto constexpr UNewMatchResultWidget_C_Button_6_Offset = offsetof(UNewMatchResultWidget_C, Button_6);
	static_assert(UNewMatchResultWidget_C_Button_6_Offset == 0x3b0, "UNewMatchResultWidget_C::Button_6 offset is not 3b0");
	auto constexpr UNewMatchResultWidget_C_Button_8_Offset = offsetof(UNewMatchResultWidget_C, Button_8);
	static_assert(UNewMatchResultWidget_C_Button_8_Offset == 0x3b8, "UNewMatchResultWidget_C::Button_8 offset is not 3b8");
	auto constexpr UNewMatchResultWidget_C_ButtonKillcam_Offset = offsetof(UNewMatchResultWidget_C, ButtonKillcam);
	static_assert(UNewMatchResultWidget_C_ButtonKillcam_Offset == 0x3c0, "UNewMatchResultWidget_C::ButtonKillcam offset is not 3c0");
	auto constexpr UNewMatchResultWidget_C_ButtonKillcamText_Offset = offsetof(UNewMatchResultWidget_C, ButtonKillcamText);
	static_assert(UNewMatchResultWidget_C_ButtonKillcamText_Offset == 0x3c8, "UNewMatchResultWidget_C::ButtonKillcamText offset is not 3c8");
	auto constexpr UNewMatchResultWidget_C_ButtonLobby_Offset = offsetof(UNewMatchResultWidget_C, ButtonLobby);
	static_assert(UNewMatchResultWidget_C_ButtonLobby_Offset == 0x3d0, "UNewMatchResultWidget_C::ButtonLobby offset is not 3d0");
	auto constexpr UNewMatchResultWidget_C_ButtonReport_Offset = offsetof(UNewMatchResultWidget_C, ButtonReport);
	static_assert(UNewMatchResultWidget_C_ButtonReport_Offset == 0x3d8, "UNewMatchResultWidget_C::ButtonReport offset is not 3d8");
	auto constexpr UNewMatchResultWidget_C_ButtonSpectator_Offset = offsetof(UNewMatchResultWidget_C, ButtonSpectator);
	static_assert(UNewMatchResultWidget_C_ButtonSpectator_Offset == 0x3e0, "UNewMatchResultWidget_C::ButtonSpectator offset is not 3e0");
	auto constexpr UNewMatchResultWidget_C_ButtonSpectatorLayer_Offset = offsetof(UNewMatchResultWidget_C, ButtonSpectatorLayer);
	static_assert(UNewMatchResultWidget_C_ButtonSpectatorLayer_Offset == 0x3e8, "UNewMatchResultWidget_C::ButtonSpectatorLayer offset is not 3e8");
	auto constexpr UNewMatchResultWidget_C_DetailScoreLayer_Offset = offsetof(UNewMatchResultWidget_C, DetailScoreLayer);
	static_assert(UNewMatchResultWidget_C_DetailScoreLayer_Offset == 0x3f0, "UNewMatchResultWidget_C::DetailScoreLayer offset is not 3f0");
	auto constexpr UNewMatchResultWidget_C_FinalRankText_Offset = offsetof(UNewMatchResultWidget_C, FinalRankText);
	static_assert(UNewMatchResultWidget_C_FinalRankText_Offset == 0x3f8, "UNewMatchResultWidget_C::FinalRankText offset is not 3f8");
	auto constexpr UNewMatchResultWidget_C_HitBPText_Offset = offsetof(UNewMatchResultWidget_C, HitBPText);
	static_assert(UNewMatchResultWidget_C_HitBPText_Offset == 0x400, "UNewMatchResultWidget_C::HitBPText offset is not 400");
	auto constexpr UNewMatchResultWidget_C_HorizontalBox_7_Offset = offsetof(UNewMatchResultWidget_C, HorizontalBox_7);
	static_assert(UNewMatchResultWidget_C_HorizontalBox_7_Offset == 0x408, "UNewMatchResultWidget_C::HorizontalBox_7 offset is not 408");
	auto constexpr UNewMatchResultWidget_C_HorizontalBox_8_Offset = offsetof(UNewMatchResultWidget_C, HorizontalBox_8);
	static_assert(UNewMatchResultWidget_C_HorizontalBox_8_Offset == 0x410, "UNewMatchResultWidget_C::HorizontalBox_8 offset is not 410");
	auto constexpr UNewMatchResultWidget_C_HumansBOx_Offset = offsetof(UNewMatchResultWidget_C, HumansBOx);
	static_assert(UNewMatchResultWidget_C_HumansBOx_Offset == 0x418, "UNewMatchResultWidget_C::HumansBOx offset is not 418");
	auto constexpr UNewMatchResultWidget_C_Image_1_Offset = offsetof(UNewMatchResultWidget_C, Image_1);
	static_assert(UNewMatchResultWidget_C_Image_1_Offset == 0x420, "UNewMatchResultWidget_C::Image_1 offset is not 420");
	auto constexpr UNewMatchResultWidget_C_Image_2_Offset = offsetof(UNewMatchResultWidget_C, Image_2);
	static_assert(UNewMatchResultWidget_C_Image_2_Offset == 0x428, "UNewMatchResultWidget_C::Image_2 offset is not 428");
	auto constexpr UNewMatchResultWidget_C_Image_3_Offset = offsetof(UNewMatchResultWidget_C, Image_3);
	static_assert(UNewMatchResultWidget_C_Image_3_Offset == 0x430, "UNewMatchResultWidget_C::Image_3 offset is not 430");
	auto constexpr UNewMatchResultWidget_C_Image_4_Offset = offsetof(UNewMatchResultWidget_C, Image_4);
	static_assert(UNewMatchResultWidget_C_Image_4_Offset == 0x438, "UNewMatchResultWidget_C::Image_4 offset is not 438");
	auto constexpr UNewMatchResultWidget_C_Image_5_Offset = offsetof(UNewMatchResultWidget_C, Image_5);
	static_assert(UNewMatchResultWidget_C_Image_5_Offset == 0x440, "UNewMatchResultWidget_C::Image_5 offset is not 440");
	auto constexpr UNewMatchResultWidget_C_Image_6_Offset = offsetof(UNewMatchResultWidget_C, Image_6);
	static_assert(UNewMatchResultWidget_C_Image_6_Offset == 0x448, "UNewMatchResultWidget_C::Image_6 offset is not 448");
	auto constexpr UNewMatchResultWidget_C_KillBPText_Offset = offsetof(UNewMatchResultWidget_C, KillBPText);
	static_assert(UNewMatchResultWidget_C_KillBPText_Offset == 0x450, "UNewMatchResultWidget_C::KillBPText offset is not 450");
	auto constexpr UNewMatchResultWidget_C_KillCountPlayersText_Offset = offsetof(UNewMatchResultWidget_C, KillCountPlayersText);
	static_assert(UNewMatchResultWidget_C_KillCountPlayersText_Offset == 0x458, "UNewMatchResultWidget_C::KillCountPlayersText offset is not 458");
	auto constexpr UNewMatchResultWidget_C_KillCountText_Offset = offsetof(UNewMatchResultWidget_C, KillCountText);
	static_assert(UNewMatchResultWidget_C_KillCountText_Offset == 0x460, "UNewMatchResultWidget_C::KillCountText offset is not 460");
	auto constexpr UNewMatchResultWidget_C_LogoImage_Offset = offsetof(UNewMatchResultWidget_C, LogoImage);
	static_assert(UNewMatchResultWidget_C_LogoImage_Offset == 0x468, "UNewMatchResultWidget_C::LogoImage offset is not 468");
	auto constexpr UNewMatchResultWidget_C_MatchResultExitButtonSwitcher_Offset = offsetof(UNewMatchResultWidget_C, MatchResultExitButtonSwitcher);
	static_assert(UNewMatchResultWidget_C_MatchResultExitButtonSwitcher_Offset == 0x470, "UNewMatchResultWidget_C::MatchResultExitButtonSwitcher offset is not 470");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_1_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_1);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_1_Offset == 0x478, "UNewMatchResultWidget_C::MatchResulttInfo_1 offset is not 478");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_2_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_2);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_2_Offset == 0x480, "UNewMatchResultWidget_C::MatchResulttInfo_2 offset is not 480");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_3_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_3);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_3_Offset == 0x488, "UNewMatchResultWidget_C::MatchResulttInfo_3 offset is not 488");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_4_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_4);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_4_Offset == 0x490, "UNewMatchResultWidget_C::MatchResulttInfo_4 offset is not 490");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_5_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_5);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_5_Offset == 0x498, "UNewMatchResultWidget_C::MatchResulttInfo_5 offset is not 498");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_6_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_6);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_6_Offset == 0x4a0, "UNewMatchResultWidget_C::MatchResulttInfo_6 offset is not 4a0");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_7_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_7);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_7_Offset == 0x4a8, "UNewMatchResultWidget_C::MatchResulttInfo_7 offset is not 4a8");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_8_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_8);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_8_Offset == 0x4b0, "UNewMatchResultWidget_C::MatchResulttInfo_8 offset is not 4b0");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_9_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_9);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_9_Offset == 0x4b8, "UNewMatchResultWidget_C::MatchResulttInfo_9 offset is not 4b8");
	auto constexpr UNewMatchResultWidget_C_MatchResulttInfo_10_Offset = offsetof(UNewMatchResultWidget_C, MatchResulttInfo_10);
	static_assert(UNewMatchResultWidget_C_MatchResulttInfo_10_Offset == 0x4c0, "UNewMatchResultWidget_C::MatchResulttInfo_10 offset is not 4c0");
	auto constexpr UNewMatchResultWidget_C_MatchResultWindow_Offset = offsetof(UNewMatchResultWidget_C, MatchResultWindow);
	static_assert(UNewMatchResultWidget_C_MatchResultWindow_Offset == 0x4c8, "UNewMatchResultWidget_C::MatchResultWindow offset is not 4c8");
	auto constexpr UNewMatchResultWidget_C_OtherScrollSizeBox_Offset = offsetof(UNewMatchResultWidget_C, OtherScrollSizeBox);
	static_assert(UNewMatchResultWidget_C_OtherScrollSizeBox_Offset == 0x4d0, "UNewMatchResultWidget_C::OtherScrollSizeBox offset is not 4d0");
	auto constexpr UNewMatchResultWidget_C_PlayerNameText_Offset = offsetof(UNewMatchResultWidget_C, PlayerNameText);
	static_assert(UNewMatchResultWidget_C_PlayerNameText_Offset == 0x4d8, "UNewMatchResultWidget_C::PlayerNameText offset is not 4d8");
	auto constexpr UNewMatchResultWidget_C_RankBPText_Offset = offsetof(UNewMatchResultWidget_C, RankBPText);
	static_assert(UNewMatchResultWidget_C_RankBPText_Offset == 0x4e0, "UNewMatchResultWidget_C::RankBPText offset is not 4e0");
	auto constexpr UNewMatchResultWidget_C_RankBPTitleText_Offset = offsetof(UNewMatchResultWidget_C, RankBPTitleText);
	static_assert(UNewMatchResultWidget_C_RankBPTitleText_Offset == 0x4e8, "UNewMatchResultWidget_C::RankBPTitleText offset is not 4e8");
	auto constexpr UNewMatchResultWidget_C_RankText_Offset = offsetof(UNewMatchResultWidget_C, RankText);
	static_assert(UNewMatchResultWidget_C_RankText_Offset == 0x4f0, "UNewMatchResultWidget_C::RankText offset is not 4f0");
	auto constexpr UNewMatchResultWidget_C_RankTitleText_Offset = offsetof(UNewMatchResultWidget_C, RankTitleText);
	static_assert(UNewMatchResultWidget_C_RankTitleText_Offset == 0x4f8, "UNewMatchResultWidget_C::RankTitleText offset is not 4f8");
	auto constexpr UNewMatchResultWidget_C_ResultMsgText_Offset = offsetof(UNewMatchResultWidget_C, ResultMsgText);
	static_assert(UNewMatchResultWidget_C_ResultMsgText_Offset == 0x500, "UNewMatchResultWidget_C::ResultMsgText offset is not 500");
	auto constexpr UNewMatchResultWidget_C_RewardPointsTotal_Offset = offsetof(UNewMatchResultWidget_C, RewardPointsTotal);
	static_assert(UNewMatchResultWidget_C_RewardPointsTotal_Offset == 0x508, "UNewMatchResultWidget_C::RewardPointsTotal offset is not 508");
	auto constexpr UNewMatchResultWidget_C_RewardsBlock_Offset = offsetof(UNewMatchResultWidget_C, RewardsBlock);
	static_assert(UNewMatchResultWidget_C_RewardsBlock_Offset == 0x510, "UNewMatchResultWidget_C::RewardsBlock offset is not 510");
	auto constexpr UNewMatchResultWidget_C_ScoreSwitcher_Offset = offsetof(UNewMatchResultWidget_C, ScoreSwitcher);
	static_assert(UNewMatchResultWidget_C_ScoreSwitcher_Offset == 0x518, "UNewMatchResultWidget_C::ScoreSwitcher offset is not 518");
	auto constexpr UNewMatchResultWidget_C_ScrollBox_6_Offset = offsetof(UNewMatchResultWidget_C, ScrollBox_6);
	static_assert(UNewMatchResultWidget_C_ScrollBox_6_Offset == 0x520, "UNewMatchResultWidget_C::ScrollBox_6 offset is not 520");
	auto constexpr UNewMatchResultWidget_C_TextBlock_73_Offset = offsetof(UNewMatchResultWidget_C, TextBlock_73);
	static_assert(UNewMatchResultWidget_C_TextBlock_73_Offset == 0x528, "UNewMatchResultWidget_C::TextBlock_73 offset is not 528");
	auto constexpr UNewMatchResultWidget_C_TextBlock_74_Offset = offsetof(UNewMatchResultWidget_C, TextBlock_74);
	static_assert(UNewMatchResultWidget_C_TextBlock_74_Offset == 0x530, "UNewMatchResultWidget_C::TextBlock_74 offset is not 530");
	auto constexpr UNewMatchResultWidget_C_TextBlock_380_Offset = offsetof(UNewMatchResultWidget_C, TextBlock_380);
	static_assert(UNewMatchResultWidget_C_TextBlock_380_Offset == 0x538, "UNewMatchResultWidget_C::TextBlock_380 offset is not 538");
	auto constexpr UNewMatchResultWidget_C_TextBlock_888_Offset = offsetof(UNewMatchResultWidget_C, TextBlock_888);
	static_assert(UNewMatchResultWidget_C_TextBlock_888_Offset == 0x540, "UNewMatchResultWidget_C::TextBlock_888 offset is not 540");
	auto constexpr UNewMatchResultWidget_C_TextBlock_932_Offset = offsetof(UNewMatchResultWidget_C, TextBlock_932);
	static_assert(UNewMatchResultWidget_C_TextBlock_932_Offset == 0x548, "UNewMatchResultWidget_C::TextBlock_932 offset is not 548");
	auto constexpr UNewMatchResultWidget_C_TotalPlayersText_Offset = offsetof(UNewMatchResultWidget_C, TotalPlayersText);
	static_assert(UNewMatchResultWidget_C_TotalPlayersText_Offset == 0x550, "UNewMatchResultWidget_C::TotalPlayersText offset is not 550");
	auto constexpr UNewMatchResultWidget_C_VerticalBox_2_Offset = offsetof(UNewMatchResultWidget_C, VerticalBox_2);
	static_assert(UNewMatchResultWidget_C_VerticalBox_2_Offset == 0x558, "UNewMatchResultWidget_C::VerticalBox_2 offset is not 558");
	auto constexpr UNewMatchResultWidget_C_WidgetSwitcher_1_Offset = offsetof(UNewMatchResultWidget_C, WidgetSwitcher_1);
	static_assert(UNewMatchResultWidget_C_WidgetSwitcher_1_Offset == 0x560, "UNewMatchResultWidget_C::WidgetSwitcher_1 offset is not 560");
	auto constexpr UNewMatchResultWidget_C_WinRatingText_Offset = offsetof(UNewMatchResultWidget_C, WinRatingText);
	static_assert(UNewMatchResultWidget_C_WinRatingText_Offset == 0x568, "UNewMatchResultWidget_C::WinRatingText offset is not 568");
	auto constexpr UNewMatchResultWidget_C_ZombieBox_Offset = offsetof(UNewMatchResultWidget_C, ZombieBox);
	static_assert(UNewMatchResultWidget_C_ZombieBox_Offset == 0x570, "UNewMatchResultWidget_C::ZombieBox offset is not 570");
	auto constexpr UNewMatchResultWidget_C_refTSLGameState_Offset = offsetof(UNewMatchResultWidget_C, refTSLGameState);
	static_assert(UNewMatchResultWidget_C_refTSLGameState_Offset == 0x578, "UNewMatchResultWidget_C::refTSLGameState offset is not 578");
	auto constexpr UNewMatchResultWidget_C_refTSLPlayerState_Offset = offsetof(UNewMatchResultWidget_C, refTSLPlayerState);
	static_assert(UNewMatchResultWidget_C_refTSLPlayerState_Offset == 0x580, "UNewMatchResultWidget_C::refTSLPlayerState offset is not 580");
	auto constexpr UNewMatchResultWidget_C_PlayerName_Offset = offsetof(UNewMatchResultWidget_C, PlayerName);
	static_assert(UNewMatchResultWidget_C_PlayerName_Offset == 0x588, "UNewMatchResultWidget_C::PlayerName offset is not 588");
	auto constexpr UNewMatchResultWidget_C_Rank_Offset = offsetof(UNewMatchResultWidget_C, Rank);
	static_assert(UNewMatchResultWidget_C_Rank_Offset == 0x5a0, "UNewMatchResultWidget_C::Rank offset is not 5a0");
	auto constexpr UNewMatchResultWidget_C_KillCount_Offset = offsetof(UNewMatchResultWidget_C, KillCount);
	static_assert(UNewMatchResultWidget_C_KillCount_Offset == 0x5b8, "UNewMatchResultWidget_C::KillCount offset is not 5b8");
	auto constexpr UNewMatchResultWidget_C_RewardTotal_Offset = offsetof(UNewMatchResultWidget_C, RewardTotal);
	static_assert(UNewMatchResultWidget_C_RewardTotal_Offset == 0x5d0, "UNewMatchResultWidget_C::RewardTotal offset is not 5d0");
	auto constexpr UNewMatchResultWidget_C_WinRating_Offset = offsetof(UNewMatchResultWidget_C, WinRating);
	static_assert(UNewMatchResultWidget_C_WinRating_Offset == 0x5e8, "UNewMatchResultWidget_C::WinRating offset is not 5e8");
	auto constexpr UNewMatchResultWidget_C_KillRating_Offset = offsetof(UNewMatchResultWidget_C, KillRating);
	static_assert(UNewMatchResultWidget_C_KillRating_Offset == 0x600, "UNewMatchResultWidget_C::KillRating offset is not 600");
	auto constexpr UNewMatchResultWidget_C_TotalPlayerCount_Offset = offsetof(UNewMatchResultWidget_C, TotalPlayerCount);
	static_assert(UNewMatchResultWidget_C_TotalPlayerCount_Offset == 0x618, "UNewMatchResultWidget_C::TotalPlayerCount offset is not 618");
	auto constexpr UNewMatchResultWidget_C_RewardRank_Offset = offsetof(UNewMatchResultWidget_C, RewardRank);
	static_assert(UNewMatchResultWidget_C_RewardRank_Offset == 0x630, "UNewMatchResultWidget_C::RewardRank offset is not 630");
	auto constexpr UNewMatchResultWidget_C_RewardKill_Offset = offsetof(UNewMatchResultWidget_C, RewardKill);
	static_assert(UNewMatchResultWidget_C_RewardKill_Offset == 0x648, "UNewMatchResultWidget_C::RewardKill offset is not 648");
	auto constexpr UNewMatchResultWidget_C_RewardHit_Offset = offsetof(UNewMatchResultWidget_C, RewardHit);
	static_assert(UNewMatchResultWidget_C_RewardHit_Offset == 0x660, "UNewMatchResultWidget_C::RewardHit offset is not 660");
	auto constexpr UNewMatchResultWidget_C_ResultMessage_Offset = offsetof(UNewMatchResultWidget_C, ResultMessage);
	static_assert(UNewMatchResultWidget_C_ResultMessage_Offset == 0x678, "UNewMatchResultWidget_C::ResultMessage offset is not 678");
	auto constexpr UNewMatchResultWidget_C_PlayerText_Offset = offsetof(UNewMatchResultWidget_C, PlayerText);
	static_assert(UNewMatchResultWidget_C_PlayerText_Offset == 0x690, "UNewMatchResultWidget_C::PlayerText offset is not 690");
	auto constexpr UNewMatchResultWidget_C_boolField6A8_Offset = offsetof(UNewMatchResultWidget_C, boolField6A8);
	static_assert(UNewMatchResultWidget_C_boolField6A8_Offset == 0x6a8, "UNewMatchResultWidget_C::boolField6A8 offset is not 6a8");
	auto constexpr UNewMatchResultWidget_C_boolField6A9_Offset = offsetof(UNewMatchResultWidget_C, boolField6A9);
	static_assert(UNewMatchResultWidget_C_boolField6A9_Offset == 0x6a9, "UNewMatchResultWidget_C::boolField6A9 offset is not 6a9");
	auto constexpr UNewMatchResultWidget_C_boolField6AA_Offset = offsetof(UNewMatchResultWidget_C, boolField6AA);
	static_assert(UNewMatchResultWidget_C_boolField6AA_Offset == 0x6aa, "UNewMatchResultWidget_C::boolField6AA offset is not 6aa");
	auto constexpr UNewMatchResultWidget_C_boolField6AB_Offset = offsetof(UNewMatchResultWidget_C, boolField6AB);
	static_assert(UNewMatchResultWidget_C_boolField6AB_Offset == 0x6ab, "UNewMatchResultWidget_C::boolField6AB offset is not 6ab");
	auto constexpr UNewMatchResultWidget_C_boolField6AC_Offset = offsetof(UNewMatchResultWidget_C, boolField6AC);
	static_assert(UNewMatchResultWidget_C_boolField6AC_Offset == 0x6ac, "UNewMatchResultWidget_C::boolField6AC offset is not 6ac");
	auto constexpr UNewMatchResultWidget_C_RankNum_Offset = offsetof(UNewMatchResultWidget_C, RankNum);
	static_assert(UNewMatchResultWidget_C_RankNum_Offset == 0x6b0, "UNewMatchResultWidget_C::RankNum offset is not 6b0");
	auto constexpr UNewMatchResultWidget_C_boolField6B4_Offset = offsetof(UNewMatchResultWidget_C, boolField6B4);
	static_assert(UNewMatchResultWidget_C_boolField6B4_Offset == 0x6b4, "UNewMatchResultWidget_C::boolField6B4 offset is not 6b4");
	auto constexpr UNewMatchResultWidget_C_AddedTeamList_Offset = offsetof(UNewMatchResultWidget_C, AddedTeamList);
	static_assert(UNewMatchResultWidget_C_AddedTeamList_Offset == 0x6b8, "UNewMatchResultWidget_C::AddedTeamList offset is not 6b8");
	auto constexpr UNewMatchResultWidget_C_PlayerMatchResultGroup_Offset = offsetof(UNewMatchResultWidget_C, PlayerMatchResultGroup);
	static_assert(UNewMatchResultWidget_C_PlayerMatchResultGroup_Offset == 0x6c8, "UNewMatchResultWidget_C::PlayerMatchResultGroup offset is not 6c8");
	auto constexpr UNewMatchResultWidget_C_LastPlayerInfoNums_Offset = offsetof(UNewMatchResultWidget_C, LastPlayerInfoNums);
	static_assert(UNewMatchResultWidget_C_LastPlayerInfoNums_Offset == 0x6d8, "UNewMatchResultWidget_C::LastPlayerInfoNums offset is not 6d8");
	auto constexpr UNewMatchResultWidget_C_boolField6DC_Offset = offsetof(UNewMatchResultWidget_C, boolField6DC);
	static_assert(UNewMatchResultWidget_C_boolField6DC_Offset == 0x6dc, "UNewMatchResultWidget_C::boolField6DC offset is not 6dc");
	auto constexpr UNewMatchResultWidget_C_KillcamDisableTooltipText_Offset = offsetof(UNewMatchResultWidget_C, KillcamDisableTooltipText);
	static_assert(UNewMatchResultWidget_C_KillcamDisableTooltipText_Offset == 0x6e0, "UNewMatchResultWidget_C::KillcamDisableTooltipText offset is not 6e0");
	auto constexpr UNewMatchResultWidget_C_KillcamCountingTextFormat_Offset = offsetof(UNewMatchResultWidget_C, KillcamCountingTextFormat);
	static_assert(UNewMatchResultWidget_C_KillcamCountingTextFormat_Offset == 0x6f8, "UNewMatchResultWidget_C::KillcamCountingTextFormat offset is not 6f8");
	auto constexpr UNewMatchResultWidget_C_KillcamFailToLoadTooltipText_Offset = offsetof(UNewMatchResultWidget_C, KillcamFailToLoadTooltipText);
	static_assert(UNewMatchResultWidget_C_KillcamFailToLoadTooltipText_Offset == 0x710, "UNewMatchResultWidget_C::KillcamFailToLoadTooltipText offset is not 710");
	auto constexpr UNewMatchResultWidget_C_ReplayKillcamText_Offset = offsetof(UNewMatchResultWidget_C, ReplayKillcamText);
	static_assert(UNewMatchResultWidget_C_ReplayKillcamText_Offset == 0x728, "UNewMatchResultWidget_C::ReplayKillcamText offset is not 728");
	auto constexpr UNewMatchResultWidget_C_KillcamPlayText_Offset = offsetof(UNewMatchResultWidget_C, KillcamPlayText);
	static_assert(UNewMatchResultWidget_C_KillcamPlayText_Offset == 0x740, "UNewMatchResultWidget_C::KillcamPlayText offset is not 740");
	auto constexpr UNewMatchResultWidget_C_KillcamTooltipText_Offset = offsetof(UNewMatchResultWidget_C, KillcamTooltipText);
	static_assert(UNewMatchResultWidget_C_KillcamTooltipText_Offset == 0x758, "UNewMatchResultWidget_C::KillcamTooltipText offset is not 758");
	auto constexpr UNewMatchResultWidget_C_LastHumanInfoNums_Offset = offsetof(UNewMatchResultWidget_C, LastHumanInfoNums);
	static_assert(UNewMatchResultWidget_C_LastHumanInfoNums_Offset == 0x770, "UNewMatchResultWidget_C::LastHumanInfoNums offset is not 770");
	auto constexpr UNewMatchResultWidget_C_LastZombieInfoNums_Offset = offsetof(UNewMatchResultWidget_C, LastZombieInfoNums);
	static_assert(UNewMatchResultWidget_C_LastZombieInfoNums_Offset == 0x774, "UNewMatchResultWidget_C::LastZombieInfoNums offset is not 774");
	auto constexpr UNewMatchResultWidget_C_ZombieGroupWidgets_Offset = offsetof(UNewMatchResultWidget_C, ZombieGroupWidgets);
	static_assert(UNewMatchResultWidget_C_ZombieGroupWidgets_Offset == 0x778, "UNewMatchResultWidget_C::ZombieGroupWidgets offset is not 778");
	auto constexpr UNewMatchResultWidget_C_ZombieTeamList_Offset = offsetof(UNewMatchResultWidget_C, ZombieTeamList);
	static_assert(UNewMatchResultWidget_C_ZombieTeamList_Offset == 0x788, "UNewMatchResultWidget_C::ZombieTeamList offset is not 788");
	auto constexpr UNewMatchResultWidget_C_WinColor_Offset = offsetof(UNewMatchResultWidget_C, WinColor);
	static_assert(UNewMatchResultWidget_C_WinColor_Offset == 0x798, "UNewMatchResultWidget_C::WinColor offset is not 798");
	auto constexpr UNewMatchResultWidget_C_LoseColor_Offset = offsetof(UNewMatchResultWidget_C, LoseColor);
	static_assert(UNewMatchResultWidget_C_LoseColor_Offset == 0x7a8, "UNewMatchResultWidget_C::LoseColor offset is not 7a8");
	auto constexpr UNewMatchResultWidget_C_WinText_Offset = offsetof(UNewMatchResultWidget_C, WinText);
	static_assert(UNewMatchResultWidget_C_WinText_Offset == 0x7b8, "UNewMatchResultWidget_C::WinText offset is not 7b8");
	auto constexpr UNewMatchResultWidget_C_LoseText_Offset = offsetof(UNewMatchResultWidget_C, LoseText);
	static_assert(UNewMatchResultWidget_C_LoseText_Offset == 0x7d0, "UNewMatchResultWidget_C::LoseText offset is not 7d0");
	auto constexpr UNewMatchResultWidget_C_boolField7E8_Offset = offsetof(UNewMatchResultWidget_C, boolField7E8);
	static_assert(UNewMatchResultWidget_C_boolField7E8_Offset == 0x7e8, "UNewMatchResultWidget_C::boolField7E8 offset is not 7e8");
	auto constexpr UNewMatchResultWidget_C_UnableReplayKillcamTooltipText_Offset = offsetof(UNewMatchResultWidget_C, UnableReplayKillcamTooltipText);
	static_assert(UNewMatchResultWidget_C_UnableReplayKillcamTooltipText_Offset == 0x7f0, "UNewMatchResultWidget_C::UnableReplayKillcamTooltipText offset is not 7f0");
	auto constexpr UNewMatchResultWidget_C_KillcamUnusualMovementTooltip_Offset = offsetof(UNewMatchResultWidget_C, KillcamUnusualMovementTooltip);
	static_assert(UNewMatchResultWidget_C_KillcamUnusualMovementTooltip_Offset == 0x808, "UNewMatchResultWidget_C::KillcamUnusualMovementTooltip offset is not 808");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
