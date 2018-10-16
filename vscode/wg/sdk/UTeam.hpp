#pragma once
#include "UActor.hpp"
#include "FVector_NetQuantize100.hpp"
#include "FRotator.hpp"
#include "FVector2D.hpp"
#include "ETeamVehicleType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTeam // Size: 0x490
	: public UActor // Size: 0x410
{
private:
	typedef UTeam t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1881); // id32("Class TslGame.Team")
		return ptr;
	}
//	FVector_NetQuantize100 PlayerLocation; /* Ofs: 0x408 Size: 0xC - StructProperty TslGame.Team.PlayerLocation */
	uint8_t UnknownData410[0x4];
	FRotator PlayerRotation; /* Ofs: 0x414 Size: 0xC - StructProperty TslGame.Team.PlayerRotation */
	FString PlayerName; /* Ofs: 0x420 Size: 0x10 - StrProperty TslGame.Team.PlayerName */
	uint8_t Health; /* Ofs: 0x430 Size: 0x1 - ByteProperty TslGame.Team.Health */
	uint8_t HealthMax; /* Ofs: 0x431 Size: 0x1 - ByteProperty TslGame.Team.HealthMax */
	uint8_t GroggyHealth; /* Ofs: 0x432 Size: 0x1 - ByteProperty TslGame.Team.GroggyHealth */
	uint8_t GroggyHealthMax; /* Ofs: 0x433 Size: 0x1 - ByteProperty TslGame.Team.GroggyHealthMax */
	FVector2D MapMarkerPosition; /* Ofs: 0x434 Size: 0x8 - StructProperty TslGame.Team.MapMarkerPosition */
	uint8_t boolField43C;
	TEnumAsByte<enum ETeamVehicleType> TeamVehicleType; /* Ofs: 0x43D Size: 0x1 - EnumProperty TslGame.Team.TeamVehicleType */
	uint8_t UnknownData43E[0x2];
	float BoostGauge; /* Ofs: 0x440 Size: 0x4 - FloatProperty TslGame.Team.BoostGauge */
	int8_t MemberNumber; /* Ofs: 0x444 Size: 0x1 - Int8Property TslGame.Team.MemberNumber */
	uint8_t boolField445;
	int8_t SquadIndex; /* Ofs: 0x446 Size: 0x1 - Int8Property TslGame.Team.SquadIndex */
	int8_t SquadMemberIndex; /* Ofs: 0x447 Size: 0x1 - Int8Property TslGame.Team.SquadMemberIndex */
	ExternalPtr<struct UTslCharacter> TslCharacter; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.Team.TslCharacter */
	uint8_t UnknownData450[0x20];
	FString UniqueId; /* Ofs: 0x470 Size: 0x10 - StrProperty TslGame.Team.UniqueId */
	ExternalPtr<struct UTslPlayerState> CachedTslPlayerState; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.Team.CachedTslPlayerState */
	uint8_t UnknownData488[0x8];


//	inline bool SetPlayerLocation(t_structHelper inst, FVector_NetQuantize100 value) { inst.WriteOffset(0x408, value); }
	inline bool SetPlayerRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x414, value); }
	inline bool SetPlayerName(t_structHelper inst, FString value) { inst.WriteOffset(0x420, value); }
	inline bool SetHealth(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x430, value); }
	inline bool SetHealthMax(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x431, value); }
	inline bool SetGroggyHealth(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x432, value); }
	inline bool SetGroggyHealthMax(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x433, value); }
	inline bool SetMapMarkerPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x434, value); }
	inline bool bIsDying()
	{
		return boolField43C& 0x1;
	}
	inline bool SetbIsDying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsGroggying()
	{
		return boolField43C& 0x2;
	}
	inline bool SetbIsGroggying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bQuitter()
	{
		return boolField43C& 0x4;
	}
	inline bool SetbQuitter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43C, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bShowMapMarker()
	{
		return boolField43C& 0x8;
	}
	inline bool SetbShowMapMarker(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43C, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetTeamVehicleType(t_structHelper inst, TEnumAsByte<enum ETeamVehicleType> value) { inst.WriteOffset(0x43D, value); }
	inline bool SetBoostGauge(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetMemberNumber(t_structHelper inst, int8_t value) { inst.WriteOffset(0x444, value); }
	inline bool bUsingSquadInTeam()
	{
		return boolField445& 0x1;
	}
	inline bool SetbUsingSquadInTeam(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSquadIndex(t_structHelper inst, int8_t value) { inst.WriteOffset(0x446, value); }
	inline bool SetSquadMemberIndex(t_structHelper inst, int8_t value) { inst.WriteOffset(0x447, value); }
	inline bool SetTslCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x448, value); }
	inline bool SetUniqueId(t_structHelper inst, FString value) { inst.WriteOffset(0x470, value); }
	inline bool SetCachedTslPlayerState(t_structHelper inst, ExternalPtr<struct UTslPlayerState> value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTeam = sizeof(UTeam); // 1168
    static_assert(sizeof(UTeam) == 0x490, "Size of UTeam is not correct.");
//	auto constexpr UTeam_PlayerLocation_Offset = offsetof(UTeam, PlayerLocation);
//	static_assert(UTeam_PlayerLocation_Offset == 0x408, "UTeam::PlayerLocation offset is not 408");
	auto constexpr UTeam_PlayerRotation_Offset = offsetof(UTeam, PlayerRotation);
	static_assert(UTeam_PlayerRotation_Offset == 0x414, "UTeam::PlayerRotation offset is not 414");
	auto constexpr UTeam_PlayerName_Offset = offsetof(UTeam, PlayerName);
	static_assert(UTeam_PlayerName_Offset == 0x420, "UTeam::PlayerName offset is not 420");
	auto constexpr UTeam_Health_Offset = offsetof(UTeam, Health);
	static_assert(UTeam_Health_Offset == 0x430, "UTeam::Health offset is not 430");
	auto constexpr UTeam_HealthMax_Offset = offsetof(UTeam, HealthMax);
	static_assert(UTeam_HealthMax_Offset == 0x431, "UTeam::HealthMax offset is not 431");
	auto constexpr UTeam_GroggyHealth_Offset = offsetof(UTeam, GroggyHealth);
	static_assert(UTeam_GroggyHealth_Offset == 0x432, "UTeam::GroggyHealth offset is not 432");
	auto constexpr UTeam_GroggyHealthMax_Offset = offsetof(UTeam, GroggyHealthMax);
	static_assert(UTeam_GroggyHealthMax_Offset == 0x433, "UTeam::GroggyHealthMax offset is not 433");
	auto constexpr UTeam_MapMarkerPosition_Offset = offsetof(UTeam, MapMarkerPosition);
	static_assert(UTeam_MapMarkerPosition_Offset == 0x434, "UTeam::MapMarkerPosition offset is not 434");
	auto constexpr UTeam_boolField43C_Offset = offsetof(UTeam, boolField43C);
	static_assert(UTeam_boolField43C_Offset == 0x43c, "UTeam::boolField43C offset is not 43c");
	auto constexpr UTeam_TeamVehicleType_Offset = offsetof(UTeam, TeamVehicleType);
	static_assert(UTeam_TeamVehicleType_Offset == 0x43d, "UTeam::TeamVehicleType offset is not 43d");
	auto constexpr UTeam_BoostGauge_Offset = offsetof(UTeam, BoostGauge);
	static_assert(UTeam_BoostGauge_Offset == 0x440, "UTeam::BoostGauge offset is not 440");
	auto constexpr UTeam_MemberNumber_Offset = offsetof(UTeam, MemberNumber);
	static_assert(UTeam_MemberNumber_Offset == 0x444, "UTeam::MemberNumber offset is not 444");
	auto constexpr UTeam_boolField445_Offset = offsetof(UTeam, boolField445);
	static_assert(UTeam_boolField445_Offset == 0x445, "UTeam::boolField445 offset is not 445");
	auto constexpr UTeam_SquadIndex_Offset = offsetof(UTeam, SquadIndex);
	static_assert(UTeam_SquadIndex_Offset == 0x446, "UTeam::SquadIndex offset is not 446");
	auto constexpr UTeam_SquadMemberIndex_Offset = offsetof(UTeam, SquadMemberIndex);
	static_assert(UTeam_SquadMemberIndex_Offset == 0x447, "UTeam::SquadMemberIndex offset is not 447");
	auto constexpr UTeam_TslCharacter_Offset = offsetof(UTeam, TslCharacter);
	static_assert(UTeam_TslCharacter_Offset == 0x448, "UTeam::TslCharacter offset is not 448");
	auto constexpr UTeam_UniqueId_Offset = offsetof(UTeam, UniqueId);
	static_assert(UTeam_UniqueId_Offset == 0x470, "UTeam::UniqueId offset is not 470");
	auto constexpr UTeam_CachedTslPlayerState_Offset = offsetof(UTeam, CachedTslPlayerState);
	static_assert(UTeam_CachedTslPlayerState_Offset == 0x480, "UTeam::CachedTslPlayerState offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
