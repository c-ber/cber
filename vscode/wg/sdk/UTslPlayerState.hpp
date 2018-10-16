#pragma once
#include "UPlayerState.hpp"
#include "FTslPlayerStatisticsForOwner.hpp"
#include "FEmoteBitArray.hpp"
#include "FTslPlayerScores.hpp"
#include "EObserverAuthorityType.hpp"
#include "FTslPlayerStatistics.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPlayerState // Size: 0x7A0
	: public UPlayerState // Size: 0x4A0
{
private:
	typedef UTslPlayerState t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1480); // id32("Class TslGame.TslPlayerState")
		return ptr;
	}
	FString AccountId; /* Ofs: 0x4A0 Size: 0x10 - StrProperty TslGame.TslPlayerState.AccountId */
	uint8_t UnknownData4B0[0x10];
	FTslPlayerStatisticsForOwner PlayerStatisticsForOwner; /* Ofs: 0x4C0 Size: 0x10 - StructProperty TslGame.TslPlayerState.PlayerStatisticsForOwner */
	uint8_t UnknownData4D0[0x8];
	uint8_t boolField4D8;
	uint8_t UnknownData4D9[0x7];
	FEmoteBitArray EmoteBitArray; /* Ofs: 0x4E0 Size: 0x20 - StructProperty TslGame.TslPlayerState.EmoteBitArray */
	uint8_t UnknownData500[0x4];
	FTslPlayerScores PlayerScores; /* Ofs: 0x504 Size: 0x10 - StructProperty TslGame.TslPlayerState.PlayerScores */
	TEnumAsByte<enum EObserverAuthorityType> ObserverAuthorityType; /* Ofs: 0x514 Size: 0x1 - EnumProperty TslGame.TslPlayerState.ObserverAuthorityType */
	uint8_t UnknownData515[0x127];
	FTslPlayerStatistics PlayerStatistics; /* Ofs: 0x63C Size: 0x4 - StructProperty TslGame.TslPlayerState.PlayerStatistics */
	uint8_t boolField640;
	uint8_t UnknownData641[0x7];
	int32_t TeamNumber; /* Ofs: 0x648 Size: 0x4 - IntProperty TslGame.TslPlayerState.TeamNumber */
	uint8_t UnknownData64C[0x4];
	uint8_t boolField650;
	uint8_t UnknownData651[0x3];
	FVector2D MapMarkerPosition; /* Ofs: 0x654 Size: 0x8 - StructProperty TslGame.TslPlayerState.MapMarkerPosition */
	uint8_t UnknownData65C[0xC];
	uint8_t boolField668;
	uint8_t boolField669;
	uint8_t UnknownData66A[0x6];
	TArray<struct FReplicatedCastableItem> ReplicatedCastableItems; /* Ofs: 0x670 Size: 0x10 - ArrayProperty TslGame.TslPlayerState.ReplicatedCastableItems */
	uint8_t UnknownData680[0x4];
	int32_t Ranking; /* Ofs: 0x684 Size: 0x4 - IntProperty TslGame.TslPlayerState.Ranking */
	TArray<struct FReplicatedEquipableItem> ReplicatedEquipableItems; /* Ofs: 0x688 Size: 0x10 - ArrayProperty TslGame.TslPlayerState.ReplicatedEquipableItems */
	uint8_t UnknownData698[0x8];
	FString ReportToken; /* Ofs: 0x6A0 Size: 0x10 - StrProperty TslGame.TslPlayerState.ReportToken */
	uint8_t UnknownData6B0[0xB4];
	uint8_t boolField764;
	uint8_t UnknownData765[0x3];
	float LastHitTime; /* Ofs: 0x768 Size: 0x4 - FloatProperty TslGame.TslPlayerState.LastHitTime */
	uint8_t UnknownData76C[0x4];
	FString CurrentAttackerPlayerNetId; /* Ofs: 0x770 Size: 0x10 - StrProperty TslGame.TslPlayerState.CurrentAttackerPlayerNetId */
	FScriptMulticastDelegate OnUniqueIdReplicated; /* Ofs: 0x780 Size: 0x10 - MulticastDelegateProperty TslGame.TslPlayerState.OnUniqueIdReplicated */
	uint8_t UnknownData790[0xC];
	int32_t MyGameScoreInTeam; /* Ofs: 0x79C Size: 0x4 - IntProperty TslGame.TslPlayerState.MyGameScoreInTeam */


	inline bool SetAccountId(t_structHelper inst, FString value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetPlayerStatisticsForOwner(t_structHelper inst, FTslPlayerStatisticsForOwner value) { inst.WriteOffset(0x4C0, value); }
	inline bool bKilled()
	{
		return boolField4D8& 0x1;
	}
	inline bool SetbKilled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEmoteBitArray(t_structHelper inst, FEmoteBitArray value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetPlayerScores(t_structHelper inst, FTslPlayerScores value) { inst.WriteOffset(0x504, value); }
	inline bool SetObserverAuthorityType(t_structHelper inst, TEnumAsByte<enum EObserverAuthorityType> value) { inst.WriteOffset(0x514, value); }
	inline bool SetPlayerStatistics(t_structHelper inst, FTslPlayerStatistics value) { inst.WriteOffset(0x63C, value); }
	inline bool bShowMapMarker()
	{
		return boolField640& 0x1;
	}
	inline bool SetbShowMapMarker(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x640, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTeamNumber(t_structHelper inst, int32_t value) { inst.WriteOffset(0x648, value); }
	inline bool bQuitter()
	{
		return boolField650& 0x1;
	}
	inline bool SetbQuitter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x650, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMapMarkerPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x654, value); }
	inline bool bEmptyReplicatedCastableItems()
	{
		return boolField668& 0x1;
	}
	inline bool SetbEmptyReplicatedCastableItems(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x668, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsZombie()
	{
		return boolField669& 0x1;
	}
	inline bool SetbIsZombie(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x669, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReplicatedCastableItems(t_structHelper inst, TArray<struct FReplicatedCastableItem> value) { inst.WriteOffset(0x670, value); }
	inline bool SetRanking(t_structHelper inst, int32_t value) { inst.WriteOffset(0x684, value); }
	inline bool SetReplicatedEquipableItems(t_structHelper inst, TArray<struct FReplicatedEquipableItem> value) { inst.WriteOffset(0x688, value); }
	inline bool SetReportToken(t_structHelper inst, FString value) { inst.WriteOffset(0x6A0, value); }
	inline bool bIsInAircraft()
	{
		return boolField764& 0x1;
	}
	inline bool SetbIsInAircraft(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x764, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLastHitTime(t_structHelper inst, float value) { inst.WriteOffset(0x768, value); }
	inline bool SetCurrentAttackerPlayerNetId(t_structHelper inst, FString value) { inst.WriteOffset(0x770, value); }
	inline bool SetOnUniqueIdReplicated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x780, value); }
	inline bool SetMyGameScoreInTeam(t_structHelper inst, int32_t value) { inst.WriteOffset(0x79C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPlayerState = sizeof(UTslPlayerState); // 1952
    static_assert(sizeof(UTslPlayerState) == 0x7A0, "Size of UTslPlayerState is not correct.");
	auto constexpr UTslPlayerState_AccountId_Offset = offsetof(UTslPlayerState, AccountId);
	static_assert(UTslPlayerState_AccountId_Offset == 0x4a0, "UTslPlayerState::AccountId offset is not 4a0");
	auto constexpr UTslPlayerState_PlayerStatisticsForOwner_Offset = offsetof(UTslPlayerState, PlayerStatisticsForOwner);
	static_assert(UTslPlayerState_PlayerStatisticsForOwner_Offset == 0x4c0, "UTslPlayerState::PlayerStatisticsForOwner offset is not 4c0");
	auto constexpr UTslPlayerState_boolField4D8_Offset = offsetof(UTslPlayerState, boolField4D8);
	static_assert(UTslPlayerState_boolField4D8_Offset == 0x4d8, "UTslPlayerState::boolField4D8 offset is not 4d8");
	auto constexpr UTslPlayerState_EmoteBitArray_Offset = offsetof(UTslPlayerState, EmoteBitArray);
	static_assert(UTslPlayerState_EmoteBitArray_Offset == 0x4e0, "UTslPlayerState::EmoteBitArray offset is not 4e0");
	auto constexpr UTslPlayerState_PlayerScores_Offset = offsetof(UTslPlayerState, PlayerScores);
	static_assert(UTslPlayerState_PlayerScores_Offset == 0x504, "UTslPlayerState::PlayerScores offset is not 504");
	auto constexpr UTslPlayerState_ObserverAuthorityType_Offset = offsetof(UTslPlayerState, ObserverAuthorityType);
	static_assert(UTslPlayerState_ObserverAuthorityType_Offset == 0x514, "UTslPlayerState::ObserverAuthorityType offset is not 514");
	auto constexpr UTslPlayerState_PlayerStatistics_Offset = offsetof(UTslPlayerState, PlayerStatistics);
	static_assert(UTslPlayerState_PlayerStatistics_Offset == 0x63c, "UTslPlayerState::PlayerStatistics offset is not 63c");
	auto constexpr UTslPlayerState_boolField640_Offset = offsetof(UTslPlayerState, boolField640);
	static_assert(UTslPlayerState_boolField640_Offset == 0x640, "UTslPlayerState::boolField640 offset is not 640");
	auto constexpr UTslPlayerState_TeamNumber_Offset = offsetof(UTslPlayerState, TeamNumber);
	static_assert(UTslPlayerState_TeamNumber_Offset == 0x648, "UTslPlayerState::TeamNumber offset is not 648");
	auto constexpr UTslPlayerState_boolField650_Offset = offsetof(UTslPlayerState, boolField650);
	static_assert(UTslPlayerState_boolField650_Offset == 0x650, "UTslPlayerState::boolField650 offset is not 650");
	auto constexpr UTslPlayerState_MapMarkerPosition_Offset = offsetof(UTslPlayerState, MapMarkerPosition);
	static_assert(UTslPlayerState_MapMarkerPosition_Offset == 0x654, "UTslPlayerState::MapMarkerPosition offset is not 654");
	auto constexpr UTslPlayerState_boolField668_Offset = offsetof(UTslPlayerState, boolField668);
	static_assert(UTslPlayerState_boolField668_Offset == 0x668, "UTslPlayerState::boolField668 offset is not 668");
	auto constexpr UTslPlayerState_boolField669_Offset = offsetof(UTslPlayerState, boolField669);
	static_assert(UTslPlayerState_boolField669_Offset == 0x669, "UTslPlayerState::boolField669 offset is not 669");
	auto constexpr UTslPlayerState_ReplicatedCastableItems_Offset = offsetof(UTslPlayerState, ReplicatedCastableItems);
	static_assert(UTslPlayerState_ReplicatedCastableItems_Offset == 0x670, "UTslPlayerState::ReplicatedCastableItems offset is not 670");
	auto constexpr UTslPlayerState_Ranking_Offset = offsetof(UTslPlayerState, Ranking);
	static_assert(UTslPlayerState_Ranking_Offset == 0x684, "UTslPlayerState::Ranking offset is not 684");
	auto constexpr UTslPlayerState_ReplicatedEquipableItems_Offset = offsetof(UTslPlayerState, ReplicatedEquipableItems);
	static_assert(UTslPlayerState_ReplicatedEquipableItems_Offset == 0x688, "UTslPlayerState::ReplicatedEquipableItems offset is not 688");
	auto constexpr UTslPlayerState_ReportToken_Offset = offsetof(UTslPlayerState, ReportToken);
	static_assert(UTslPlayerState_ReportToken_Offset == 0x6a0, "UTslPlayerState::ReportToken offset is not 6a0");
	auto constexpr UTslPlayerState_boolField764_Offset = offsetof(UTslPlayerState, boolField764);
	static_assert(UTslPlayerState_boolField764_Offset == 0x764, "UTslPlayerState::boolField764 offset is not 764");
	auto constexpr UTslPlayerState_LastHitTime_Offset = offsetof(UTslPlayerState, LastHitTime);
	static_assert(UTslPlayerState_LastHitTime_Offset == 0x768, "UTslPlayerState::LastHitTime offset is not 768");
	auto constexpr UTslPlayerState_CurrentAttackerPlayerNetId_Offset = offsetof(UTslPlayerState, CurrentAttackerPlayerNetId);
	static_assert(UTslPlayerState_CurrentAttackerPlayerNetId_Offset == 0x770, "UTslPlayerState::CurrentAttackerPlayerNetId offset is not 770");
	auto constexpr UTslPlayerState_OnUniqueIdReplicated_Offset = offsetof(UTslPlayerState, OnUniqueIdReplicated);
	static_assert(UTslPlayerState_OnUniqueIdReplicated_Offset == 0x780, "UTslPlayerState::OnUniqueIdReplicated offset is not 780");
	auto constexpr UTslPlayerState_MyGameScoreInTeam_Offset = offsetof(UTslPlayerState, MyGameScoreInTeam);
	static_assert(UTslPlayerState_MyGameScoreInTeam_Offset == 0x79c, "UTslPlayerState::MyGameScoreInTeam offset is not 79c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
