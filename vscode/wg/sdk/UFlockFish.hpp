#pragma once
#include "UPawn.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFlockFish // Size: 0x5F0
	: public UPawn // Size: 0x470
{
private:
	typedef UFlockFish t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2058); // id32("Class OceanPlugin.FlockFish")
		return ptr;
	}
	uint8_t UnknownData470[0x10];
	ExternalPtr<struct USphereComponent> FishInteractionSphere; /* Ofs: 0x480 Size: 0x8 - ObjectProperty OceanPlugin.FlockFish.FishInteractionSphere */
	uint8_t boolField488;
	uint8_t UnknownData489[0x7];
	TArray<ExternalPtr<struct UClass>> enemyTypes; /* Ofs: 0x490 Size: 0x10 - ArrayProperty OceanPlugin.FlockFish.enemyTypes */
	TArray<ExternalPtr<struct UClass>> preyTypes; /* Ofs: 0x4A0 Size: 0x10 - ArrayProperty OceanPlugin.FlockFish.preyTypes */
	ExternalPtr<struct UClass> neighborType; /* Ofs: 0x4B0 Size: 0x8 - ClassProperty OceanPlugin.FlockFish.neighborType */
	float followDist; /* Ofs: 0x4B8 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.followDist */
	float Speed; /* Ofs: 0x4BC Size: 0x4 - FloatProperty OceanPlugin.FlockFish.Speed */
	float MaxSpeed; /* Ofs: 0x4C0 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.MaxSpeed */
	float turnSpeed; /* Ofs: 0x4C4 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.turnSpeed */
	float turnFrequency; /* Ofs: 0x4C8 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.turnFrequency */
	float hungerResetTime; /* Ofs: 0x4CC Size: 0x4 - FloatProperty OceanPlugin.FlockFish.hungerResetTime */
	float distBehindSpeedUpRange; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.distBehindSpeedUpRange */
	float SeperationDistanceMultiplier; /* Ofs: 0x4D4 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.SeperationDistanceMultiplier */
	float FleeDistanceMultiplier; /* Ofs: 0x4D8 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.FleeDistanceMultiplier */
	float FleeAccelerationMultiplier; /* Ofs: 0x4DC Size: 0x4 - FloatProperty OceanPlugin.FlockFish.FleeAccelerationMultiplier */
	float ChaseAccelerationMultiplier; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.ChaseAccelerationMultiplier */
	float SeekDecelerationMultiplier; /* Ofs: 0x4E4 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.SeekDecelerationMultiplier */
	float AvoidForceMultiplier; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.AvoidForceMultiplier */
	float AvoidanceForce; /* Ofs: 0x4EC Size: 0x4 - FloatProperty OceanPlugin.FlockFish.AvoidanceForce */
	ExternalPtr<struct UClass> playerType; /* Ofs: 0x4F0 Size: 0x8 - ClassProperty OceanPlugin.FlockFish.playerType */
	FVector underwaterMin; /* Ofs: 0x4F8 Size: 0xC - StructProperty OceanPlugin.FlockFish.underwaterMin */
	FVector underwaterMax; /* Ofs: 0x504 Size: 0xC - StructProperty OceanPlugin.FlockFish.underwaterMax */
	float CustomZSeekMin; /* Ofs: 0x510 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.CustomZSeekMin */
	float CustomZSeekMax; /* Ofs: 0x514 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.CustomZSeekMax */
	float NumNeighborsToEvaluate; /* Ofs: 0x518 Size: 0x4 - FloatProperty OceanPlugin.FlockFish.NumNeighborsToEvaluate */
	float UpdateEveryTick; /* Ofs: 0x51C Size: 0x4 - FloatProperty OceanPlugin.FlockFish.UpdateEveryTick */
	uint8_t UnknownData520[0x10];
	uint8_t boolField530;
	uint8_t UnknownData531[0xBF];


	inline bool SetFishInteractionSphere(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x480, value); }
	inline bool isLeader()
	{
		return boolField488& 0x1;
	}
	inline bool SetisLeader(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x488, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetenemyTypes(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x490, value); }
	inline bool SetpreyTypes(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetneighborType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetfollowDist(t_structHelper inst, float value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x4BC, value); }
	inline bool SetMaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetturnSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x4C4, value); }
	inline bool SetturnFrequency(t_structHelper inst, float value) { inst.WriteOffset(0x4C8, value); }
	inline bool SethungerResetTime(t_structHelper inst, float value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetdistBehindSpeedUpRange(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetSeperationDistanceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetFleeDistanceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetFleeAccelerationMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetChaseAccelerationMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetSeekDecelerationMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4E4, value); }
	inline bool SetAvoidForceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetAvoidanceForce(t_structHelper inst, float value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetplayerType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetunderwaterMin(t_structHelper inst, FVector value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetunderwaterMax(t_structHelper inst, FVector value) { inst.WriteOffset(0x504, value); }
	inline bool SetCustomZSeekMin(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetCustomZSeekMax(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetNumNeighborsToEvaluate(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetUpdateEveryTick(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool DebugMode()
	{
		return boolField530& 0x1;
	}
	inline bool SetDebugMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x530, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFlockFish = sizeof(UFlockFish); // 1520
    static_assert(sizeof(UFlockFish) == 0x5F0, "Size of UFlockFish is not correct.");
	auto constexpr UFlockFish_FishInteractionSphere_Offset = offsetof(UFlockFish, FishInteractionSphere);
	static_assert(UFlockFish_FishInteractionSphere_Offset == 0x480, "UFlockFish::FishInteractionSphere offset is not 480");
	auto constexpr UFlockFish_boolField488_Offset = offsetof(UFlockFish, boolField488);
	static_assert(UFlockFish_boolField488_Offset == 0x488, "UFlockFish::boolField488 offset is not 488");
	auto constexpr UFlockFish_enemyTypes_Offset = offsetof(UFlockFish, enemyTypes);
	static_assert(UFlockFish_enemyTypes_Offset == 0x490, "UFlockFish::enemyTypes offset is not 490");
	auto constexpr UFlockFish_preyTypes_Offset = offsetof(UFlockFish, preyTypes);
	static_assert(UFlockFish_preyTypes_Offset == 0x4a0, "UFlockFish::preyTypes offset is not 4a0");
	auto constexpr UFlockFish_neighborType_Offset = offsetof(UFlockFish, neighborType);
	static_assert(UFlockFish_neighborType_Offset == 0x4b0, "UFlockFish::neighborType offset is not 4b0");
	auto constexpr UFlockFish_followDist_Offset = offsetof(UFlockFish, followDist);
	static_assert(UFlockFish_followDist_Offset == 0x4b8, "UFlockFish::followDist offset is not 4b8");
	auto constexpr UFlockFish_Speed_Offset = offsetof(UFlockFish, Speed);
	static_assert(UFlockFish_Speed_Offset == 0x4bc, "UFlockFish::Speed offset is not 4bc");
	auto constexpr UFlockFish_MaxSpeed_Offset = offsetof(UFlockFish, MaxSpeed);
	static_assert(UFlockFish_MaxSpeed_Offset == 0x4c0, "UFlockFish::MaxSpeed offset is not 4c0");
	auto constexpr UFlockFish_turnSpeed_Offset = offsetof(UFlockFish, turnSpeed);
	static_assert(UFlockFish_turnSpeed_Offset == 0x4c4, "UFlockFish::turnSpeed offset is not 4c4");
	auto constexpr UFlockFish_turnFrequency_Offset = offsetof(UFlockFish, turnFrequency);
	static_assert(UFlockFish_turnFrequency_Offset == 0x4c8, "UFlockFish::turnFrequency offset is not 4c8");
	auto constexpr UFlockFish_hungerResetTime_Offset = offsetof(UFlockFish, hungerResetTime);
	static_assert(UFlockFish_hungerResetTime_Offset == 0x4cc, "UFlockFish::hungerResetTime offset is not 4cc");
	auto constexpr UFlockFish_distBehindSpeedUpRange_Offset = offsetof(UFlockFish, distBehindSpeedUpRange);
	static_assert(UFlockFish_distBehindSpeedUpRange_Offset == 0x4d0, "UFlockFish::distBehindSpeedUpRange offset is not 4d0");
	auto constexpr UFlockFish_SeperationDistanceMultiplier_Offset = offsetof(UFlockFish, SeperationDistanceMultiplier);
	static_assert(UFlockFish_SeperationDistanceMultiplier_Offset == 0x4d4, "UFlockFish::SeperationDistanceMultiplier offset is not 4d4");
	auto constexpr UFlockFish_FleeDistanceMultiplier_Offset = offsetof(UFlockFish, FleeDistanceMultiplier);
	static_assert(UFlockFish_FleeDistanceMultiplier_Offset == 0x4d8, "UFlockFish::FleeDistanceMultiplier offset is not 4d8");
	auto constexpr UFlockFish_FleeAccelerationMultiplier_Offset = offsetof(UFlockFish, FleeAccelerationMultiplier);
	static_assert(UFlockFish_FleeAccelerationMultiplier_Offset == 0x4dc, "UFlockFish::FleeAccelerationMultiplier offset is not 4dc");
	auto constexpr UFlockFish_ChaseAccelerationMultiplier_Offset = offsetof(UFlockFish, ChaseAccelerationMultiplier);
	static_assert(UFlockFish_ChaseAccelerationMultiplier_Offset == 0x4e0, "UFlockFish::ChaseAccelerationMultiplier offset is not 4e0");
	auto constexpr UFlockFish_SeekDecelerationMultiplier_Offset = offsetof(UFlockFish, SeekDecelerationMultiplier);
	static_assert(UFlockFish_SeekDecelerationMultiplier_Offset == 0x4e4, "UFlockFish::SeekDecelerationMultiplier offset is not 4e4");
	auto constexpr UFlockFish_AvoidForceMultiplier_Offset = offsetof(UFlockFish, AvoidForceMultiplier);
	static_assert(UFlockFish_AvoidForceMultiplier_Offset == 0x4e8, "UFlockFish::AvoidForceMultiplier offset is not 4e8");
	auto constexpr UFlockFish_AvoidanceForce_Offset = offsetof(UFlockFish, AvoidanceForce);
	static_assert(UFlockFish_AvoidanceForce_Offset == 0x4ec, "UFlockFish::AvoidanceForce offset is not 4ec");
	auto constexpr UFlockFish_playerType_Offset = offsetof(UFlockFish, playerType);
	static_assert(UFlockFish_playerType_Offset == 0x4f0, "UFlockFish::playerType offset is not 4f0");
	auto constexpr UFlockFish_underwaterMin_Offset = offsetof(UFlockFish, underwaterMin);
	static_assert(UFlockFish_underwaterMin_Offset == 0x4f8, "UFlockFish::underwaterMin offset is not 4f8");
	auto constexpr UFlockFish_underwaterMax_Offset = offsetof(UFlockFish, underwaterMax);
	static_assert(UFlockFish_underwaterMax_Offset == 0x504, "UFlockFish::underwaterMax offset is not 504");
	auto constexpr UFlockFish_CustomZSeekMin_Offset = offsetof(UFlockFish, CustomZSeekMin);
	static_assert(UFlockFish_CustomZSeekMin_Offset == 0x510, "UFlockFish::CustomZSeekMin offset is not 510");
	auto constexpr UFlockFish_CustomZSeekMax_Offset = offsetof(UFlockFish, CustomZSeekMax);
	static_assert(UFlockFish_CustomZSeekMax_Offset == 0x514, "UFlockFish::CustomZSeekMax offset is not 514");
	auto constexpr UFlockFish_NumNeighborsToEvaluate_Offset = offsetof(UFlockFish, NumNeighborsToEvaluate);
	static_assert(UFlockFish_NumNeighborsToEvaluate_Offset == 0x518, "UFlockFish::NumNeighborsToEvaluate offset is not 518");
	auto constexpr UFlockFish_UpdateEveryTick_Offset = offsetof(UFlockFish, UpdateEveryTick);
	static_assert(UFlockFish_UpdateEveryTick_Offset == 0x51c, "UFlockFish::UpdateEveryTick offset is not 51c");
	auto constexpr UFlockFish_boolField530_Offset = offsetof(UFlockFish, boolField530);
	static_assert(UFlockFish_boolField530_Offset == 0x530, "UFlockFish::boolField530 offset is not 530");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
