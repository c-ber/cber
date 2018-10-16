#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogGameState // Size: 0x44
{
public:
    int32_t ElapsedTime; /* Ofs: 0x0 Size: 0x4 IntProperty TslGame.WuLogGameState.ElapsedTime */
    int32_t NumAliveTeams; /* Ofs: 0x4 Size: 0x4 IntProperty TslGame.WuLogGameState.NumAliveTeams */
    int32_t NumJoinPlayers; /* Ofs: 0x8 Size: 0x4 IntProperty TslGame.WuLogGameState.NumJoinPlayers */
    int32_t NumStartPlayers; /* Ofs: 0xC Size: 0x4 IntProperty TslGame.WuLogGameState.NumStartPlayers */
    int32_t NumAlivePlayers; /* Ofs: 0x10 Size: 0x4 IntProperty TslGame.WuLogGameState.NumAlivePlayers */
    FVector SafetyZonePosition; /* Ofs: 0x14 Size: 0xC StructProperty TslGame.WuLogGameState.SafetyZonePosition */
    float SafetyZoneRadius; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.WuLogGameState.SafetyZoneRadius */
    FVector PoisonGasWarningPosition; /* Ofs: 0x24 Size: 0xC StructProperty TslGame.WuLogGameState.PoisonGasWarningPosition */
    float PoisonGasWarningRadius; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.WuLogGameState.PoisonGasWarningRadius */
    FVector RedZonePosition; /* Ofs: 0x34 Size: 0xC StructProperty TslGame.WuLogGameState.RedZonePosition */
    float RedZoneRadius; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.WuLogGameState.RedZoneRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogGameState = sizeof(FWuLogGameState); // 68
    static_assert(sizeof(FWuLogGameState) == 0x44, "Size of FWuLogGameState is not correct.");
	auto constexpr FWuLogGameState_ElapsedTime_Offset = offsetof(FWuLogGameState, ElapsedTime);
	static_assert(FWuLogGameState_ElapsedTime_Offset == 0x0, "FWuLogGameState::ElapsedTime offset is not 0");
	auto constexpr FWuLogGameState_NumAliveTeams_Offset = offsetof(FWuLogGameState, NumAliveTeams);
	static_assert(FWuLogGameState_NumAliveTeams_Offset == 0x4, "FWuLogGameState::NumAliveTeams offset is not 4");
	auto constexpr FWuLogGameState_NumJoinPlayers_Offset = offsetof(FWuLogGameState, NumJoinPlayers);
	static_assert(FWuLogGameState_NumJoinPlayers_Offset == 0x8, "FWuLogGameState::NumJoinPlayers offset is not 8");
	auto constexpr FWuLogGameState_NumStartPlayers_Offset = offsetof(FWuLogGameState, NumStartPlayers);
	static_assert(FWuLogGameState_NumStartPlayers_Offset == 0xc, "FWuLogGameState::NumStartPlayers offset is not c");
	auto constexpr FWuLogGameState_NumAlivePlayers_Offset = offsetof(FWuLogGameState, NumAlivePlayers);
	static_assert(FWuLogGameState_NumAlivePlayers_Offset == 0x10, "FWuLogGameState::NumAlivePlayers offset is not 10");
	auto constexpr FWuLogGameState_SafetyZonePosition_Offset = offsetof(FWuLogGameState, SafetyZonePosition);
	static_assert(FWuLogGameState_SafetyZonePosition_Offset == 0x14, "FWuLogGameState::SafetyZonePosition offset is not 14");
	auto constexpr FWuLogGameState_SafetyZoneRadius_Offset = offsetof(FWuLogGameState, SafetyZoneRadius);
	static_assert(FWuLogGameState_SafetyZoneRadius_Offset == 0x20, "FWuLogGameState::SafetyZoneRadius offset is not 20");
	auto constexpr FWuLogGameState_PoisonGasWarningPosition_Offset = offsetof(FWuLogGameState, PoisonGasWarningPosition);
	static_assert(FWuLogGameState_PoisonGasWarningPosition_Offset == 0x24, "FWuLogGameState::PoisonGasWarningPosition offset is not 24");
	auto constexpr FWuLogGameState_PoisonGasWarningRadius_Offset = offsetof(FWuLogGameState, PoisonGasWarningRadius);
	static_assert(FWuLogGameState_PoisonGasWarningRadius_Offset == 0x30, "FWuLogGameState::PoisonGasWarningRadius offset is not 30");
	auto constexpr FWuLogGameState_RedZonePosition_Offset = offsetof(FWuLogGameState, RedZonePosition);
	static_assert(FWuLogGameState_RedZonePosition_Offset == 0x34, "FWuLogGameState::RedZonePosition offset is not 34");
	auto constexpr FWuLogGameState_RedZoneRadius_Offset = offsetof(FWuLogGameState, RedZoneRadius);
	static_assert(FWuLogGameState_RedZoneRadius_Offset == 0x40, "FWuLogGameState::RedZoneRadius offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
