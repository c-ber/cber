#pragma once
#include "FDateTime.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplayItem // Size: 0xE0
{
public:
    FString FriendlyName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ReplayItem.FriendlyName */
    FString Name; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.ReplayItem.Name */
    bool bIsLive; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bIsLive */
    uint8_t UnknownData21[0x7];
    FDateTime Date; /* Ofs: 0x28 Size: 0x8 StructProperty TslGame.ReplayItem.Date */
    int32_t SizeInBytes; /* Ofs: 0x30 Size: 0x4 IntProperty TslGame.ReplayItem.SizeInBytes */
    int32_t LengthInMS; /* Ofs: 0x34 Size: 0x4 IntProperty TslGame.ReplayItem.LengthInMS */
    int32_t NumViewers; /* Ofs: 0x38 Size: 0x4 IntProperty TslGame.ReplayItem.NumViewers */
    bool bIncomplete; /* Ofs: 0x3C Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bIncomplete */
    bool bIsVersionCompatible; /* Ofs: 0x3D Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bIsVersionCompatible */
    bool bIsCorrupted; /* Ofs: 0x3E Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bIsCorrupted */
    bool bIsServerRecording; /* Ofs: 0x3F Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bIsServerRecording */
    bool bShouldKeep; /* Ofs: 0x40 Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bShouldKeep */
    bool bArchived; /* Ofs: 0x41 Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bArchived */
    uint8_t UnknownData42[0x6];
    FString Mode; /* Ofs: 0x48 Size: 0x10 StrProperty TslGame.ReplayItem.Mode */
    FString RecordUserId; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.ReplayItem.RecordUserId */
    FString RecordUserNickName; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.ReplayItem.RecordUserNickName */
    FString MapName; /* Ofs: 0x78 Size: 0x10 StrProperty TslGame.ReplayItem.MapName */
    bool bAllDeadOrWin; /* Ofs: 0x88 Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bAllDeadOrWin */
    uint8_t UnknownData89[0x3];
    int32_t ArchiveSizeInBytes; /* Ofs: 0x8C Size: 0x4 IntProperty TslGame.ReplayItem.ArchiveSizeInBytes */
    bool bIsClip; /* Ofs: 0x90 Size: 0x1 BitMask: 01 BoolProperty TslGame.ReplayItem.bIsClip */
    uint8_t UnknownData91[0x3];
    int32_t ClipTime; /* Ofs: 0x94 Size: 0x4 IntProperty TslGame.ReplayItem.ClipTime */
    int32_t ClipStartTime; /* Ofs: 0x98 Size: 0x4 IntProperty TslGame.ReplayItem.ClipStartTime */
    int32_t ClipEndTime; /* Ofs: 0x9C Size: 0x4 IntProperty TslGame.ReplayItem.ClipEndTime */
    FString ClipTargetUserId; /* Ofs: 0xA0 Size: 0x10 StrProperty TslGame.ReplayItem.ClipTargetUserId */
    FString ClipTargetUserNickName; /* Ofs: 0xB0 Size: 0x10 StrProperty TslGame.ReplayItem.ClipTargetUserNickName */
    FString ReportToken; /* Ofs: 0xC0 Size: 0x10 StrProperty TslGame.ReplayItem.ReportToken */
    FString RecordAccountId; /* Ofs: 0xD0 Size: 0x10 StrProperty TslGame.ReplayItem.RecordAccountId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplayItem = sizeof(FReplayItem); // 224
    static_assert(sizeof(FReplayItem) == 0xE0, "Size of FReplayItem is not correct.");
	auto constexpr FReplayItem_FriendlyName_Offset = offsetof(FReplayItem, FriendlyName);
	static_assert(FReplayItem_FriendlyName_Offset == 0x0, "FReplayItem::FriendlyName offset is not 0");
	auto constexpr FReplayItem_Name_Offset = offsetof(FReplayItem, Name);
	static_assert(FReplayItem_Name_Offset == 0x10, "FReplayItem::Name offset is not 10");
	auto constexpr FReplayItem_Date_Offset = offsetof(FReplayItem, Date);
	static_assert(FReplayItem_Date_Offset == 0x28, "FReplayItem::Date offset is not 28");
	auto constexpr FReplayItem_SizeInBytes_Offset = offsetof(FReplayItem, SizeInBytes);
	static_assert(FReplayItem_SizeInBytes_Offset == 0x30, "FReplayItem::SizeInBytes offset is not 30");
	auto constexpr FReplayItem_LengthInMS_Offset = offsetof(FReplayItem, LengthInMS);
	static_assert(FReplayItem_LengthInMS_Offset == 0x34, "FReplayItem::LengthInMS offset is not 34");
	auto constexpr FReplayItem_NumViewers_Offset = offsetof(FReplayItem, NumViewers);
	static_assert(FReplayItem_NumViewers_Offset == 0x38, "FReplayItem::NumViewers offset is not 38");
	auto constexpr FReplayItem_Mode_Offset = offsetof(FReplayItem, Mode);
	static_assert(FReplayItem_Mode_Offset == 0x48, "FReplayItem::Mode offset is not 48");
	auto constexpr FReplayItem_RecordUserId_Offset = offsetof(FReplayItem, RecordUserId);
	static_assert(FReplayItem_RecordUserId_Offset == 0x58, "FReplayItem::RecordUserId offset is not 58");
	auto constexpr FReplayItem_RecordUserNickName_Offset = offsetof(FReplayItem, RecordUserNickName);
	static_assert(FReplayItem_RecordUserNickName_Offset == 0x68, "FReplayItem::RecordUserNickName offset is not 68");
	auto constexpr FReplayItem_MapName_Offset = offsetof(FReplayItem, MapName);
	static_assert(FReplayItem_MapName_Offset == 0x78, "FReplayItem::MapName offset is not 78");
	auto constexpr FReplayItem_ArchiveSizeInBytes_Offset = offsetof(FReplayItem, ArchiveSizeInBytes);
	static_assert(FReplayItem_ArchiveSizeInBytes_Offset == 0x8c, "FReplayItem::ArchiveSizeInBytes offset is not 8c");
	auto constexpr FReplayItem_ClipTime_Offset = offsetof(FReplayItem, ClipTime);
	static_assert(FReplayItem_ClipTime_Offset == 0x94, "FReplayItem::ClipTime offset is not 94");
	auto constexpr FReplayItem_ClipStartTime_Offset = offsetof(FReplayItem, ClipStartTime);
	static_assert(FReplayItem_ClipStartTime_Offset == 0x98, "FReplayItem::ClipStartTime offset is not 98");
	auto constexpr FReplayItem_ClipEndTime_Offset = offsetof(FReplayItem, ClipEndTime);
	static_assert(FReplayItem_ClipEndTime_Offset == 0x9c, "FReplayItem::ClipEndTime offset is not 9c");
	auto constexpr FReplayItem_ClipTargetUserId_Offset = offsetof(FReplayItem, ClipTargetUserId);
	static_assert(FReplayItem_ClipTargetUserId_Offset == 0xa0, "FReplayItem::ClipTargetUserId offset is not a0");
	auto constexpr FReplayItem_ClipTargetUserNickName_Offset = offsetof(FReplayItem, ClipTargetUserNickName);
	static_assert(FReplayItem_ClipTargetUserNickName_Offset == 0xb0, "FReplayItem::ClipTargetUserNickName offset is not b0");
	auto constexpr FReplayItem_ReportToken_Offset = offsetof(FReplayItem, ReportToken);
	static_assert(FReplayItem_ReportToken_Offset == 0xc0, "FReplayItem::ReportToken offset is not c0");
	auto constexpr FReplayItem_RecordAccountId_Offset = offsetof(FReplayItem, RecordAccountId);
	static_assert(FReplayItem_RecordAccountId_Offset == 0xd0, "FReplayItem::RecordAccountId offset is not d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
