#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPartyBeaconState // Size: 0x78
	: public UObject // Size: 0x30
{
private:
	typedef UPartyBeaconState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2106); // id32("Class OnlineSubsystemUtils.PartyBeaconState")
		return ptr;
	}
	FName SessionName; /* Ofs: 0x30 Size: 0x8 - NameProperty OnlineSubsystemUtils.PartyBeaconState.SessionName */
	int32_t NumConsumedReservations; /* Ofs: 0x38 Size: 0x4 - IntProperty OnlineSubsystemUtils.PartyBeaconState.NumConsumedReservations */
	int32_t MaxReservations; /* Ofs: 0x3C Size: 0x4 - IntProperty OnlineSubsystemUtils.PartyBeaconState.MaxReservations */
	int32_t NumTeams; /* Ofs: 0x40 Size: 0x4 - IntProperty OnlineSubsystemUtils.PartyBeaconState.NumTeams */
	int32_t NumPlayersPerTeam; /* Ofs: 0x44 Size: 0x4 - IntProperty OnlineSubsystemUtils.PartyBeaconState.NumPlayersPerTeam */
	FName TeamAssignmentMethod; /* Ofs: 0x48 Size: 0x8 - NameProperty OnlineSubsystemUtils.PartyBeaconState.TeamAssignmentMethod */
	int32_t ReservedHostTeamNum; /* Ofs: 0x50 Size: 0x4 - IntProperty OnlineSubsystemUtils.PartyBeaconState.ReservedHostTeamNum */
	int32_t ForceTeamNum; /* Ofs: 0x54 Size: 0x4 - IntProperty OnlineSubsystemUtils.PartyBeaconState.ForceTeamNum */
	TArray<struct FPartyReservation> Reservations; /* Ofs: 0x58 Size: 0x10 - ArrayProperty OnlineSubsystemUtils.PartyBeaconState.Reservations */
	uint8_t UnknownData68[0x10];


	inline bool SetSessionName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetNumConsumedReservations(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetMaxReservations(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetNumTeams(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
	inline bool SetNumPlayersPerTeam(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetTeamAssignmentMethod(t_structHelper inst, FName value) { inst.WriteOffset(0x48, value); }
	inline bool SetReservedHostTeamNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetForceTeamNum(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetReservations(t_structHelper inst, TArray<struct FPartyReservation> value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPartyBeaconState = sizeof(UPartyBeaconState); // 120
    static_assert(sizeof(UPartyBeaconState) == 0x78, "Size of UPartyBeaconState is not correct.");
	auto constexpr UPartyBeaconState_SessionName_Offset = offsetof(UPartyBeaconState, SessionName);
	static_assert(UPartyBeaconState_SessionName_Offset == 0x30, "UPartyBeaconState::SessionName offset is not 30");
	auto constexpr UPartyBeaconState_NumConsumedReservations_Offset = offsetof(UPartyBeaconState, NumConsumedReservations);
	static_assert(UPartyBeaconState_NumConsumedReservations_Offset == 0x38, "UPartyBeaconState::NumConsumedReservations offset is not 38");
	auto constexpr UPartyBeaconState_MaxReservations_Offset = offsetof(UPartyBeaconState, MaxReservations);
	static_assert(UPartyBeaconState_MaxReservations_Offset == 0x3c, "UPartyBeaconState::MaxReservations offset is not 3c");
	auto constexpr UPartyBeaconState_NumTeams_Offset = offsetof(UPartyBeaconState, NumTeams);
	static_assert(UPartyBeaconState_NumTeams_Offset == 0x40, "UPartyBeaconState::NumTeams offset is not 40");
	auto constexpr UPartyBeaconState_NumPlayersPerTeam_Offset = offsetof(UPartyBeaconState, NumPlayersPerTeam);
	static_assert(UPartyBeaconState_NumPlayersPerTeam_Offset == 0x44, "UPartyBeaconState::NumPlayersPerTeam offset is not 44");
	auto constexpr UPartyBeaconState_TeamAssignmentMethod_Offset = offsetof(UPartyBeaconState, TeamAssignmentMethod);
	static_assert(UPartyBeaconState_TeamAssignmentMethod_Offset == 0x48, "UPartyBeaconState::TeamAssignmentMethod offset is not 48");
	auto constexpr UPartyBeaconState_ReservedHostTeamNum_Offset = offsetof(UPartyBeaconState, ReservedHostTeamNum);
	static_assert(UPartyBeaconState_ReservedHostTeamNum_Offset == 0x50, "UPartyBeaconState::ReservedHostTeamNum offset is not 50");
	auto constexpr UPartyBeaconState_ForceTeamNum_Offset = offsetof(UPartyBeaconState, ForceTeamNum);
	static_assert(UPartyBeaconState_ForceTeamNum_Offset == 0x54, "UPartyBeaconState::ForceTeamNum offset is not 54");
	auto constexpr UPartyBeaconState_Reservations_Offset = offsetof(UPartyBeaconState, Reservations);
	static_assert(UPartyBeaconState_Reservations_Offset == 0x58, "UPartyBeaconState::Reservations offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
