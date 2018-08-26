#pragma once
#include "UNewSystemMessageWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FDeathMessage.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKillMessageWidget_C // Size: 0x650
	: public UNewSystemMessageWidget_C // Size: 0x300
{
private:
	typedef UKillMessageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163840); // id32("WidgetBlueprintGeneratedClass KillMessageWidget.KillMessageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x300 Size: 0x8 - StructProperty KillMessageWidget.KillMessageWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> KillMsgVanishing; /* Ofs: 0x308 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.KillMsgVanishing */
	ExternalPtr<struct UWidgetAnimation> KillMsgEmerging; /* Ofs: 0x310 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.KillMsgEmerging */
	ExternalPtr<struct UTextBlock> AlivePlayer; /* Ofs: 0x318 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.AlivePlayer */
	ExternalPtr<struct UBorder> Border_2; /* Ofs: 0x320 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.Border_2 */
	ExternalPtr<struct UHorizontalBox> HorizontalBox_1; /* Ofs: 0x328 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.HorizontalBox_1 */
	ExternalPtr<struct UOverlay> KillCountLayer; /* Ofs: 0x330 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.KillCountLayer */
	ExternalPtr<struct UTextBlock> KillMsgBlock; /* Ofs: 0x338 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.KillMsgBlock */
	ExternalPtr<struct UTextBlock> MyKills; /* Ofs: 0x340 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.MyKills */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x348 Size: 0x8 - ObjectProperty KillMessageWidget.KillMessageWidget_C.VerticalBox_1 */
	FDeathMessage DeathMessage; /* Ofs: 0x350 Size: 0xA0 - StructProperty KillMessageWidget.KillMessageWidget_C.DeathMessage */
	FSlateColor TeamColor; /* Ofs: 0x3F0 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.TeamColor */
	FSlateColor ImportantColor; /* Ofs: 0x418 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.ImportantColor */
	FSlateColor NormalColor; /* Ofs: 0x440 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.NormalColor */
	FText KillerNameText; /* Ofs: 0x468 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.KillerNameText */
	FText ReasonText; /* Ofs: 0x480 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.ReasonText */
	FText VictimNameText; /* Ofs: 0x498 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.VictimNameText */
	FText WhatHappenedText; /* Ofs: 0x4B0 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.WhatHappenedText */
	FText OptionText; /* Ofs: 0x4C8 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.OptionText */
	FText MethodText; /* Ofs: 0x4E0 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.MethodText */
	uint8_t boolField4F8;
	uint8_t UnknownData4F9[0x3];
	int32_t tmpInt; /* Ofs: 0x4FC Size: 0x4 - IntProperty KillMessageWidget.KillMessageWidget_C.tmpInt */
	FText MyKillMsg; /* Ofs: 0x500 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.MyKillMsg */
	FText KillMsgText; /* Ofs: 0x518 Size: 0x18 - TextProperty KillMessageWidget.KillMessageWidget_C.KillMsgText */
	FSlateColor TeamKillerColor; /* Ofs: 0x530 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.TeamKillerColor */
	FSlateColor TeamKillerDBNOColor; /* Ofs: 0x558 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.TeamKillerDBNOColor */
	FSlateColor TeamVictimColor; /* Ofs: 0x580 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.TeamVictimColor */
	FSlateColor TeamVictimDBNOColor; /* Ofs: 0x5A8 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.TeamVictimDBNOColor */
	FSlateColor MyMsgColor; /* Ofs: 0x5D0 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.MyMsgColor */
	FSlateColor NormalDBNOColor; /* Ofs: 0x5F8 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.NormalDBNOColor */
	uint8_t boolField620;
	uint8_t boolField621;
	uint8_t UnknownData622[0x6];
	FSlateColor MyKillLogColor; /* Ofs: 0x628 Size: 0x28 - StructProperty KillMessageWidget.KillMessageWidget_C.MyKillLogColor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x300, value); }
	inline bool SetKillMsgVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x308, value); }
	inline bool SetKillMsgEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x310, value); }
	inline bool SetAlivePlayer(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x318, value); }
	inline bool SetBorder_2(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x320, value); }
	inline bool SetHorizontalBox_1(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x328, value); }
	inline bool SetKillCountLayer(t_structHelper inst, ExternalPtr<struct UOverlay> value) { inst.WriteOffset(0x330, value); }
	inline bool SetKillMsgBlock(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x338, value); }
	inline bool SetMyKills(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x340, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x348, value); }
	inline bool SetDeathMessage(t_structHelper inst, FDeathMessage value) { inst.WriteOffset(0x350, value); }
	inline bool SetTeamColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetImportantColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x418, value); }
	inline bool SetNormalColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x440, value); }
	inline bool SetKillerNameText(t_structHelper inst, FText value) { inst.WriteOffset(0x468, value); }
	inline bool SetReasonText(t_structHelper inst, FText value) { inst.WriteOffset(0x480, value); }
	inline bool SetVictimNameText(t_structHelper inst, FText value) { inst.WriteOffset(0x498, value); }
	inline bool SetWhatHappenedText(t_structHelper inst, FText value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetOptionText(t_structHelper inst, FText value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetMethodText(t_structHelper inst, FText value) { inst.WriteOffset(0x4E0, value); }
	inline bool bNotDisplayKiller()
	{
		return boolField4F8& 0x1;
	}
	inline bool SetbNotDisplayKiller(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SettmpInt(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4FC, value); }
	inline bool SetMyKillMsg(t_structHelper inst, FText value) { inst.WriteOffset(0x500, value); }
	inline bool SetKillMsgText(t_structHelper inst, FText value) { inst.WriteOffset(0x518, value); }
	inline bool SetTeamKillerColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x530, value); }
	inline bool SetTeamKillerDBNOColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x558, value); }
	inline bool SetTeamVictimColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x580, value); }
	inline bool SetTeamVictimDBNOColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetMyMsgColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetNormalDBNOColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x5F8, value); }
	inline bool bIsStealFriendlyFire()
	{
		return boolField620& 0x1;
	}
	inline bool SetbIsStealFriendlyFire(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x620, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDetailKillMessage()
	{
		return boolField621& 0x1;
	}
	inline bool SetbDetailKillMessage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x621, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMyKillLogColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x628, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKillMessageWidget_C = sizeof(UKillMessageWidget_C); // 1616
    static_assert(sizeof(UKillMessageWidget_C) == 0x650, "Size of UKillMessageWidget_C is not correct.");
	auto constexpr UKillMessageWidget_C_UberGraphFrame_Offset = offsetof(UKillMessageWidget_C, UberGraphFrame);
	static_assert(UKillMessageWidget_C_UberGraphFrame_Offset == 0x300, "UKillMessageWidget_C::UberGraphFrame offset is not 300");
	auto constexpr UKillMessageWidget_C_KillMsgVanishing_Offset = offsetof(UKillMessageWidget_C, KillMsgVanishing);
	static_assert(UKillMessageWidget_C_KillMsgVanishing_Offset == 0x308, "UKillMessageWidget_C::KillMsgVanishing offset is not 308");
	auto constexpr UKillMessageWidget_C_KillMsgEmerging_Offset = offsetof(UKillMessageWidget_C, KillMsgEmerging);
	static_assert(UKillMessageWidget_C_KillMsgEmerging_Offset == 0x310, "UKillMessageWidget_C::KillMsgEmerging offset is not 310");
	auto constexpr UKillMessageWidget_C_AlivePlayer_Offset = offsetof(UKillMessageWidget_C, AlivePlayer);
	static_assert(UKillMessageWidget_C_AlivePlayer_Offset == 0x318, "UKillMessageWidget_C::AlivePlayer offset is not 318");
	auto constexpr UKillMessageWidget_C_Border_2_Offset = offsetof(UKillMessageWidget_C, Border_2);
	static_assert(UKillMessageWidget_C_Border_2_Offset == 0x320, "UKillMessageWidget_C::Border_2 offset is not 320");
	auto constexpr UKillMessageWidget_C_HorizontalBox_1_Offset = offsetof(UKillMessageWidget_C, HorizontalBox_1);
	static_assert(UKillMessageWidget_C_HorizontalBox_1_Offset == 0x328, "UKillMessageWidget_C::HorizontalBox_1 offset is not 328");
	auto constexpr UKillMessageWidget_C_KillCountLayer_Offset = offsetof(UKillMessageWidget_C, KillCountLayer);
	static_assert(UKillMessageWidget_C_KillCountLayer_Offset == 0x330, "UKillMessageWidget_C::KillCountLayer offset is not 330");
	auto constexpr UKillMessageWidget_C_KillMsgBlock_Offset = offsetof(UKillMessageWidget_C, KillMsgBlock);
	static_assert(UKillMessageWidget_C_KillMsgBlock_Offset == 0x338, "UKillMessageWidget_C::KillMsgBlock offset is not 338");
	auto constexpr UKillMessageWidget_C_MyKills_Offset = offsetof(UKillMessageWidget_C, MyKills);
	static_assert(UKillMessageWidget_C_MyKills_Offset == 0x340, "UKillMessageWidget_C::MyKills offset is not 340");
	auto constexpr UKillMessageWidget_C_VerticalBox_1_Offset = offsetof(UKillMessageWidget_C, VerticalBox_1);
	static_assert(UKillMessageWidget_C_VerticalBox_1_Offset == 0x348, "UKillMessageWidget_C::VerticalBox_1 offset is not 348");
	auto constexpr UKillMessageWidget_C_DeathMessage_Offset = offsetof(UKillMessageWidget_C, DeathMessage);
	static_assert(UKillMessageWidget_C_DeathMessage_Offset == 0x350, "UKillMessageWidget_C::DeathMessage offset is not 350");
	auto constexpr UKillMessageWidget_C_TeamColor_Offset = offsetof(UKillMessageWidget_C, TeamColor);
	static_assert(UKillMessageWidget_C_TeamColor_Offset == 0x3f0, "UKillMessageWidget_C::TeamColor offset is not 3f0");
	auto constexpr UKillMessageWidget_C_ImportantColor_Offset = offsetof(UKillMessageWidget_C, ImportantColor);
	static_assert(UKillMessageWidget_C_ImportantColor_Offset == 0x418, "UKillMessageWidget_C::ImportantColor offset is not 418");
	auto constexpr UKillMessageWidget_C_NormalColor_Offset = offsetof(UKillMessageWidget_C, NormalColor);
	static_assert(UKillMessageWidget_C_NormalColor_Offset == 0x440, "UKillMessageWidget_C::NormalColor offset is not 440");
	auto constexpr UKillMessageWidget_C_KillerNameText_Offset = offsetof(UKillMessageWidget_C, KillerNameText);
	static_assert(UKillMessageWidget_C_KillerNameText_Offset == 0x468, "UKillMessageWidget_C::KillerNameText offset is not 468");
	auto constexpr UKillMessageWidget_C_ReasonText_Offset = offsetof(UKillMessageWidget_C, ReasonText);
	static_assert(UKillMessageWidget_C_ReasonText_Offset == 0x480, "UKillMessageWidget_C::ReasonText offset is not 480");
	auto constexpr UKillMessageWidget_C_VictimNameText_Offset = offsetof(UKillMessageWidget_C, VictimNameText);
	static_assert(UKillMessageWidget_C_VictimNameText_Offset == 0x498, "UKillMessageWidget_C::VictimNameText offset is not 498");
	auto constexpr UKillMessageWidget_C_WhatHappenedText_Offset = offsetof(UKillMessageWidget_C, WhatHappenedText);
	static_assert(UKillMessageWidget_C_WhatHappenedText_Offset == 0x4b0, "UKillMessageWidget_C::WhatHappenedText offset is not 4b0");
	auto constexpr UKillMessageWidget_C_OptionText_Offset = offsetof(UKillMessageWidget_C, OptionText);
	static_assert(UKillMessageWidget_C_OptionText_Offset == 0x4c8, "UKillMessageWidget_C::OptionText offset is not 4c8");
	auto constexpr UKillMessageWidget_C_MethodText_Offset = offsetof(UKillMessageWidget_C, MethodText);
	static_assert(UKillMessageWidget_C_MethodText_Offset == 0x4e0, "UKillMessageWidget_C::MethodText offset is not 4e0");
	auto constexpr UKillMessageWidget_C_boolField4F8_Offset = offsetof(UKillMessageWidget_C, boolField4F8);
	static_assert(UKillMessageWidget_C_boolField4F8_Offset == 0x4f8, "UKillMessageWidget_C::boolField4F8 offset is not 4f8");
	auto constexpr UKillMessageWidget_C_tmpInt_Offset = offsetof(UKillMessageWidget_C, tmpInt);
	static_assert(UKillMessageWidget_C_tmpInt_Offset == 0x4fc, "UKillMessageWidget_C::tmpInt offset is not 4fc");
	auto constexpr UKillMessageWidget_C_MyKillMsg_Offset = offsetof(UKillMessageWidget_C, MyKillMsg);
	static_assert(UKillMessageWidget_C_MyKillMsg_Offset == 0x500, "UKillMessageWidget_C::MyKillMsg offset is not 500");
	auto constexpr UKillMessageWidget_C_KillMsgText_Offset = offsetof(UKillMessageWidget_C, KillMsgText);
	static_assert(UKillMessageWidget_C_KillMsgText_Offset == 0x518, "UKillMessageWidget_C::KillMsgText offset is not 518");
	auto constexpr UKillMessageWidget_C_TeamKillerColor_Offset = offsetof(UKillMessageWidget_C, TeamKillerColor);
	static_assert(UKillMessageWidget_C_TeamKillerColor_Offset == 0x530, "UKillMessageWidget_C::TeamKillerColor offset is not 530");
	auto constexpr UKillMessageWidget_C_TeamKillerDBNOColor_Offset = offsetof(UKillMessageWidget_C, TeamKillerDBNOColor);
	static_assert(UKillMessageWidget_C_TeamKillerDBNOColor_Offset == 0x558, "UKillMessageWidget_C::TeamKillerDBNOColor offset is not 558");
	auto constexpr UKillMessageWidget_C_TeamVictimColor_Offset = offsetof(UKillMessageWidget_C, TeamVictimColor);
	static_assert(UKillMessageWidget_C_TeamVictimColor_Offset == 0x580, "UKillMessageWidget_C::TeamVictimColor offset is not 580");
	auto constexpr UKillMessageWidget_C_TeamVictimDBNOColor_Offset = offsetof(UKillMessageWidget_C, TeamVictimDBNOColor);
	static_assert(UKillMessageWidget_C_TeamVictimDBNOColor_Offset == 0x5a8, "UKillMessageWidget_C::TeamVictimDBNOColor offset is not 5a8");
	auto constexpr UKillMessageWidget_C_MyMsgColor_Offset = offsetof(UKillMessageWidget_C, MyMsgColor);
	static_assert(UKillMessageWidget_C_MyMsgColor_Offset == 0x5d0, "UKillMessageWidget_C::MyMsgColor offset is not 5d0");
	auto constexpr UKillMessageWidget_C_NormalDBNOColor_Offset = offsetof(UKillMessageWidget_C, NormalDBNOColor);
	static_assert(UKillMessageWidget_C_NormalDBNOColor_Offset == 0x5f8, "UKillMessageWidget_C::NormalDBNOColor offset is not 5f8");
	auto constexpr UKillMessageWidget_C_boolField620_Offset = offsetof(UKillMessageWidget_C, boolField620);
	static_assert(UKillMessageWidget_C_boolField620_Offset == 0x620, "UKillMessageWidget_C::boolField620 offset is not 620");
	auto constexpr UKillMessageWidget_C_boolField621_Offset = offsetof(UKillMessageWidget_C, boolField621);
	static_assert(UKillMessageWidget_C_boolField621_Offset == 0x621, "UKillMessageWidget_C::boolField621 offset is not 621");
	auto constexpr UKillMessageWidget_C_MyKillLogColor_Offset = offsetof(UKillMessageWidget_C, MyKillLogColor);
	static_assert(UKillMessageWidget_C_MyKillLogColor_Offset == 0x628, "UKillMessageWidget_C::MyKillLogColor offset is not 628");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
