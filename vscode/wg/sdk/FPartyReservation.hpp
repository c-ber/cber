#pragma once
#include "FUniqueNetIdRepl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPartyReservation // Size: 0x30
{
public:
    int32_t TeamNum; /* Ofs: 0x0 Size: 0x4 IntProperty OnlineSubsystemUtils.PartyReservation.TeamNum */
    uint8_t UnknownData4[0x4];
    FUniqueNetIdRepl PartyLeader; /* Ofs: 0x8 Size: 0x18 StructProperty OnlineSubsystemUtils.PartyReservation.PartyLeader */
    TArray<struct FPlayerReservation> PartyMembers; /* Ofs: 0x20 Size: 0x10 ArrayProperty OnlineSubsystemUtils.PartyReservation.PartyMembers */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPartyReservation = sizeof(FPartyReservation); // 48
    static_assert(sizeof(FPartyReservation) == 0x30, "Size of FPartyReservation is not correct.");
	auto constexpr FPartyReservation_TeamNum_Offset = offsetof(FPartyReservation, TeamNum);
	static_assert(FPartyReservation_TeamNum_Offset == 0x0, "FPartyReservation::TeamNum offset is not 0");
	auto constexpr FPartyReservation_PartyLeader_Offset = offsetof(FPartyReservation, PartyLeader);
	static_assert(FPartyReservation_PartyLeader_Offset == 0x8, "FPartyReservation::PartyLeader offset is not 8");
	auto constexpr FPartyReservation_PartyMembers_Offset = offsetof(FPartyReservation, PartyMembers);
	static_assert(FPartyReservation_PartyMembers_Offset == 0x20, "FPartyReservation::PartyMembers offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
