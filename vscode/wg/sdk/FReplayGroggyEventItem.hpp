#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplayGroggyEventItem // Size: 0x78
{
public:
    FString ID; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.ID */
    FString Group; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.Group */
    FString MetaData; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.MetaData */
    int32_t Time1; /* Ofs: 0x30 Size: 0x4 IntProperty TslGame.ReplayGroggyEventItem.Time1 */
    int32_t Time2; /* Ofs: 0x34 Size: 0x4 IntProperty TslGame.ReplayGroggyEventItem.Time2 */
    FString InstigatorName; /* Ofs: 0x38 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.InstigatorName */
    FString InstigatorNetId; /* Ofs: 0x48 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.InstigatorNetId */
    FString VictimName; /* Ofs: 0x58 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.VictimName */
    FString VictimNetId; /* Ofs: 0x68 Size: 0x10 StrProperty TslGame.ReplayGroggyEventItem.VictimNetId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplayGroggyEventItem = sizeof(FReplayGroggyEventItem); // 120
    static_assert(sizeof(FReplayGroggyEventItem) == 0x78, "Size of FReplayGroggyEventItem is not correct.");
	auto constexpr FReplayGroggyEventItem_ID_Offset = offsetof(FReplayGroggyEventItem, ID);
	static_assert(FReplayGroggyEventItem_ID_Offset == 0x0, "FReplayGroggyEventItem::ID offset is not 0");
	auto constexpr FReplayGroggyEventItem_Group_Offset = offsetof(FReplayGroggyEventItem, Group);
	static_assert(FReplayGroggyEventItem_Group_Offset == 0x10, "FReplayGroggyEventItem::Group offset is not 10");
	auto constexpr FReplayGroggyEventItem_MetaData_Offset = offsetof(FReplayGroggyEventItem, MetaData);
	static_assert(FReplayGroggyEventItem_MetaData_Offset == 0x20, "FReplayGroggyEventItem::MetaData offset is not 20");
	auto constexpr FReplayGroggyEventItem_Time1_Offset = offsetof(FReplayGroggyEventItem, Time1);
	static_assert(FReplayGroggyEventItem_Time1_Offset == 0x30, "FReplayGroggyEventItem::Time1 offset is not 30");
	auto constexpr FReplayGroggyEventItem_Time2_Offset = offsetof(FReplayGroggyEventItem, Time2);
	static_assert(FReplayGroggyEventItem_Time2_Offset == 0x34, "FReplayGroggyEventItem::Time2 offset is not 34");
	auto constexpr FReplayGroggyEventItem_InstigatorName_Offset = offsetof(FReplayGroggyEventItem, InstigatorName);
	static_assert(FReplayGroggyEventItem_InstigatorName_Offset == 0x38, "FReplayGroggyEventItem::InstigatorName offset is not 38");
	auto constexpr FReplayGroggyEventItem_InstigatorNetId_Offset = offsetof(FReplayGroggyEventItem, InstigatorNetId);
	static_assert(FReplayGroggyEventItem_InstigatorNetId_Offset == 0x48, "FReplayGroggyEventItem::InstigatorNetId offset is not 48");
	auto constexpr FReplayGroggyEventItem_VictimName_Offset = offsetof(FReplayGroggyEventItem, VictimName);
	static_assert(FReplayGroggyEventItem_VictimName_Offset == 0x58, "FReplayGroggyEventItem::VictimName offset is not 58");
	auto constexpr FReplayGroggyEventItem_VictimNetId_Offset = offsetof(FReplayGroggyEventItem, VictimNetId);
	static_assert(FReplayGroggyEventItem_VictimNetId_Offset == 0x68, "FReplayGroggyEventItem::VictimNetId offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
