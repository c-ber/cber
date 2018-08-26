#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPlayerStatisticsNotReplicated // Size: 0xB0
{
public:
    float MovedDistanceOnFeetMeter; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.TslPlayerStatisticsNotReplicated.MovedDistanceOnFeetMeter */
    float MovedDistanceOnVehicleMeter; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.TslPlayerStatisticsNotReplicated.MovedDistanceOnVehicleMeter */
    int32_t NumAssistToRevive; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.TslPlayerStatisticsNotReplicated.NumAssistToRevive */
    uint8_t UnknownDataC[0x4];
    TMap<struct FString, struct FPlayerAttackInfo> AttacksGivenInfos; /* Ofs: 0x10 Size: 0x50 MapProperty TslGame.TslPlayerStatisticsNotReplicated.AttacksGivenInfos */
    TMap<struct FString, struct FPlayerAttackInfo> AttacksTakenInfos; /* Ofs: 0x60 Size: 0x50 MapProperty TslGame.TslPlayerStatisticsNotReplicated.AttacksTakenInfos */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPlayerStatisticsNotReplicated = sizeof(FTslPlayerStatisticsNotReplicated); // 176
    static_assert(sizeof(FTslPlayerStatisticsNotReplicated) == 0xB0, "Size of FTslPlayerStatisticsNotReplicated is not correct.");
	auto constexpr FTslPlayerStatisticsNotReplicated_MovedDistanceOnFeetMeter_Offset = offsetof(FTslPlayerStatisticsNotReplicated, MovedDistanceOnFeetMeter);
	static_assert(FTslPlayerStatisticsNotReplicated_MovedDistanceOnFeetMeter_Offset == 0x0, "FTslPlayerStatisticsNotReplicated::MovedDistanceOnFeetMeter offset is not 0");
	auto constexpr FTslPlayerStatisticsNotReplicated_MovedDistanceOnVehicleMeter_Offset = offsetof(FTslPlayerStatisticsNotReplicated, MovedDistanceOnVehicleMeter);
	static_assert(FTslPlayerStatisticsNotReplicated_MovedDistanceOnVehicleMeter_Offset == 0x4, "FTslPlayerStatisticsNotReplicated::MovedDistanceOnVehicleMeter offset is not 4");
	auto constexpr FTslPlayerStatisticsNotReplicated_NumAssistToRevive_Offset = offsetof(FTslPlayerStatisticsNotReplicated, NumAssistToRevive);
	static_assert(FTslPlayerStatisticsNotReplicated_NumAssistToRevive_Offset == 0x8, "FTslPlayerStatisticsNotReplicated::NumAssistToRevive offset is not 8");
	auto constexpr FTslPlayerStatisticsNotReplicated_AttacksGivenInfos_Offset = offsetof(FTslPlayerStatisticsNotReplicated, AttacksGivenInfos);
	static_assert(FTslPlayerStatisticsNotReplicated_AttacksGivenInfos_Offset == 0x10, "FTslPlayerStatisticsNotReplicated::AttacksGivenInfos offset is not 10");
	auto constexpr FTslPlayerStatisticsNotReplicated_AttacksTakenInfos_Offset = offsetof(FTslPlayerStatisticsNotReplicated, AttacksTakenInfos);
	static_assert(FTslPlayerStatisticsNotReplicated_AttacksTakenInfos_Offset == 0x60, "FTslPlayerStatisticsNotReplicated::AttacksTakenInfos offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
