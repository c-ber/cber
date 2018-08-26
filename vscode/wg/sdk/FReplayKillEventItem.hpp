#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplayKillEventItem // Size: 0x78
{
public:
    FString ID; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.ID */
    FString Group; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.Group */
    FString MetaData; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.MetaData */
    int32_t Time1; /* Ofs: 0x30 Size: 0x4 IntProperty TslGame.ReplayKillEventItem.Time1 */
    int32_t Time2; /* Ofs: 0x34 Size: 0x4 IntProperty TslGame.ReplayKillEventItem.Time2 */
    FString KillerName; /* Ofs: 0x38 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.KillerName */
    FString KillerNetId; /* Ofs: 0x48 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.KillerNetId */
    FString VictimName; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.VictimName */
    FString VictimNetId; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.ReplayKillEventItem.VictimNetId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplayKillEventItem = sizeof(FReplayKillEventItem); // 120
    static_assert(sizeof(FReplayKillEventItem) == 0x78, "Size of FReplayKillEventItem is not correct.");
	auto constexpr FReplayKillEventItem_ID_Offset = offsetof(FReplayKillEventItem, ID);
	static_assert(FReplayKillEventItem_ID_Offset == 0x0, "FReplayKillEventItem::ID offset is not 0");
	auto constexpr FReplayKillEventItem_Group_Offset = offsetof(FReplayKillEventItem, Group);
	static_assert(FReplayKillEventItem_Group_Offset == 0x10, "FReplayKillEventItem::Group offset is not 10");
	auto constexpr FReplayKillEventItem_MetaData_Offset = offsetof(FReplayKillEventItem, MetaData);
	static_assert(FReplayKillEventItem_MetaData_Offset == 0x20, "FReplayKillEventItem::MetaData offset is not 20");
	auto constexpr FReplayKillEventItem_Time1_Offset = offsetof(FReplayKillEventItem, Time1);
	static_assert(FReplayKillEventItem_Time1_Offset == 0x30, "FReplayKillEventItem::Time1 offset is not 30");
	auto constexpr FReplayKillEventItem_Time2_Offset = offsetof(FReplayKillEventItem, Time2);
	static_assert(FReplayKillEventItem_Time2_Offset == 0x34, "FReplayKillEventItem::Time2 offset is not 34");
	auto constexpr FReplayKillEventItem_KillerName_Offset = offsetof(FReplayKillEventItem, KillerName);
	static_assert(FReplayKillEventItem_KillerName_Offset == 0x38, "FReplayKillEventItem::KillerName offset is not 38");
	auto constexpr FReplayKillEventItem_KillerNetId_Offset = offsetof(FReplayKillEventItem, KillerNetId);
	static_assert(FReplayKillEventItem_KillerNetId_Offset == 0x48, "FReplayKillEventItem::KillerNetId offset is not 48");
	auto constexpr FReplayKillEventItem_VictimName_Offset = offsetof(FReplayKillEventItem, VictimName);
	static_assert(FReplayKillEventItem_VictimName_Offset == 0x58, "FReplayKillEventItem::VictimName offset is not 58");
	auto constexpr FReplayKillEventItem_VictimNetId_Offset = offsetof(FReplayKillEventItem, VictimNetId);
	static_assert(FReplayKillEventItem_VictimNetId_Offset == 0x68, "FReplayKillEventItem::VictimNetId offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
