#pragma once
#include "USceneComponent.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslSmokePropagationComponent // Size: 0x590
	: public USceneComponent // Size: 0x490
{
private:
	typedef UTslSmokePropagationComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1498); // id32("Class TslGame.TslSmokePropagationComponent")
		return ptr;
	}
	uint8_t UnknownData490[0x8];
	ExternalPtr<struct UTslSmokeParticleSystemComponent> SmokeParticle; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslSmokePropagationComponent.SmokeParticle */
	uint8_t UnknownData4A0[0x19];
	uint8_t boolField4B9;
	uint8_t UnknownData4BA[0x6];
	ExternalPtr<struct UClass> BlockingActorTemplate; /* Ofs: 0x4C0 Size: 0x8 - ClassProperty TslGame.TslSmokePropagationComponent.BlockingActorTemplate */
	float HalfHeightGlobal; /* Ofs: 0x4C8 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.HalfHeightGlobal */
	float HalfHeightLocalScalar; /* Ofs: 0x4CC Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.HalfHeightLocalScalar */
	float GlobalRadius; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.GlobalRadius */
	float GlobalAngle; /* Ofs: 0x4D4 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.GlobalAngle */
	int32_t RadialTryCount; /* Ofs: 0x4D8 Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.RadialTryCount */
	int32_t LoopCount; /* Ofs: 0x4DC Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.LoopCount */
	int32_t LastWorkerIndex; /* Ofs: 0x4E0 Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.LastWorkerIndex */
	float MaxDistanceFromHost; /* Ofs: 0x4E4 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.MaxDistanceFromHost */
	float CeilingTraceDistance; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.CeilingTraceDistance */
	FVector MainParticleVelocityScale_First; /* Ofs: 0x4EC Size: 0xC - StructProperty TslGame.TslSmokePropagationComponent.MainParticleVelocityScale_First */
	FVector MainParticleVelocityScale_Second; /* Ofs: 0x4F8 Size: 0xC - StructProperty TslGame.TslSmokePropagationComponent.MainParticleVelocityScale_Second */
	FVector MainParticleVelocityScale_Third; /* Ofs: 0x504 Size: 0xC - StructProperty TslGame.TslSmokePropagationComponent.MainParticleVelocityScale_Third */
	float HorizontalRayTraceOffset; /* Ofs: 0x510 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.HorizontalRayTraceOffset */
	float HorizontalRayRadiusScalar; /* Ofs: 0x514 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.HorizontalRayRadiusScalar */
	float HorizontalRayPropagateOffset; /* Ofs: 0x518 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.HorizontalRayPropagateOffset */
	float BlockerGroundTraceOffset; /* Ofs: 0x51C Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.BlockerGroundTraceOffset */
	FVector LowChildVelocityStaticVector; /* Ofs: 0x520 Size: 0xC - StructProperty TslGame.TslSmokePropagationComponent.LowChildVelocityStaticVector */
	FVector HighChildVelocityStaticVector; /* Ofs: 0x52C Size: 0xC - StructProperty TslGame.TslSmokePropagationComponent.HighChildVelocityStaticVector */
	FVector2D LowChildVelocityInMap; /* Ofs: 0x538 Size: 0x8 - StructProperty TslGame.TslSmokePropagationComponent.LowChildVelocityInMap */
	FVector2D LowChildVelocityOutMap; /* Ofs: 0x540 Size: 0x8 - StructProperty TslGame.TslSmokePropagationComponent.LowChildVelocityOutMap */
	FVector2D HighChildVelocityInMap; /* Ofs: 0x548 Size: 0x8 - StructProperty TslGame.TslSmokePropagationComponent.HighChildVelocityInMap */
	FVector2D HighChildVelocityOutMap; /* Ofs: 0x550 Size: 0x8 - StructProperty TslGame.TslSmokePropagationComponent.HighChildVelocityOutMap */
	int32_t CurrentRadialRay; /* Ofs: 0x558 Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.CurrentRadialRay */
	int32_t CurrentSpawnedChildCount; /* Ofs: 0x55C Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.CurrentSpawnedChildCount */
	int32_t MaxTicksAllowed; /* Ofs: 0x560 Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.MaxTicksAllowed */
	int32_t MaxChildrenAllowed; /* Ofs: 0x564 Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.MaxChildrenAllowed */
	float CustomTickInterval; /* Ofs: 0x568 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.CustomTickInterval */
	float StartDelay; /* Ofs: 0x56C Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.StartDelay */
	uint8_t boolField570;
	uint8_t boolField571;
	uint8_t UnknownData572[0x2];
	float ParticleLifetime; /* Ofs: 0x574 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.ParticleLifetime */
	FVector2D ParticleLifetimeRandomOffset; /* Ofs: 0x578 Size: 0x8 - StructProperty TslGame.TslSmokePropagationComponent.ParticleLifetimeRandomOffset */
	float ParticleToObjectLifeScale; /* Ofs: 0x580 Size: 0x4 - FloatProperty TslGame.TslSmokePropagationComponent.ParticleToObjectLifeScale */
	int32_t ParticleAllocationCount; /* Ofs: 0x584 Size: 0x4 - IntProperty TslGame.TslSmokePropagationComponent.ParticleAllocationCount */
	uint8_t UnknownData588[0x8];


	inline bool SetSmokeParticle(t_structHelper inst, ExternalPtr<struct UTslSmokeParticleSystemComponent> value) { inst.WriteOffset(0x498, value); }
	inline bool bSystemActivated()
	{
		return boolField4B9& 0x1;
	}
	inline bool SetbSystemActivated(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBlockingActorTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetHalfHeightGlobal(t_structHelper inst, float value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetHalfHeightLocalScalar(t_structHelper inst, float value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetGlobalRadius(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetGlobalAngle(t_structHelper inst, float value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetRadialTryCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetLoopCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetLastWorkerIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetMaxDistanceFromHost(t_structHelper inst, float value) { inst.WriteOffset(0x4E4, value); }
	inline bool SetCeilingTraceDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetMainParticleVelocityScale_First(t_structHelper inst, FVector value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetMainParticleVelocityScale_Second(t_structHelper inst, FVector value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetMainParticleVelocityScale_Third(t_structHelper inst, FVector value) { inst.WriteOffset(0x504, value); }
	inline bool SetHorizontalRayTraceOffset(t_structHelper inst, float value) { inst.WriteOffset(0x510, value); }
	inline bool SetHorizontalRayRadiusScalar(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetHorizontalRayPropagateOffset(t_structHelper inst, float value) { inst.WriteOffset(0x518, value); }
	inline bool SetBlockerGroundTraceOffset(t_structHelper inst, float value) { inst.WriteOffset(0x51C, value); }
	inline bool SetLowChildVelocityStaticVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x520, value); }
	inline bool SetHighChildVelocityStaticVector(t_structHelper inst, FVector value) { inst.WriteOffset(0x52C, value); }
	inline bool SetLowChildVelocityInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x538, value); }
	inline bool SetLowChildVelocityOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x540, value); }
	inline bool SetHighChildVelocityInMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x548, value); }
	inline bool SetHighChildVelocityOutMap(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x550, value); }
	inline bool SetCurrentRadialRay(t_structHelper inst, int32_t value) { inst.WriteOffset(0x558, value); }
	inline bool SetCurrentSpawnedChildCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x55C, value); }
	inline bool SetMaxTicksAllowed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x560, value); }
	inline bool SetMaxChildrenAllowed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x564, value); }
	inline bool SetCustomTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x568, value); }
	inline bool SetStartDelay(t_structHelper inst, float value) { inst.WriteOffset(0x56C, value); }
	inline bool bDebugPropagation()
	{
		return boolField570& 0x1;
	}
	inline bool SetbDebugPropagation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x570, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDebugTick()
	{
		return boolField571& 0x1;
	}
	inline bool SetbDebugTick(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x571, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetParticleLifetime(t_structHelper inst, float value) { inst.WriteOffset(0x574, value); }
	inline bool SetParticleLifetimeRandomOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x578, value); }
	inline bool SetParticleToObjectLifeScale(t_structHelper inst, float value) { inst.WriteOffset(0x580, value); }
	inline bool SetParticleAllocationCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x584, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslSmokePropagationComponent = sizeof(UTslSmokePropagationComponent); // 1424
    static_assert(sizeof(UTslSmokePropagationComponent) == 0x590, "Size of UTslSmokePropagationComponent is not correct.");
	auto constexpr UTslSmokePropagationComponent_SmokeParticle_Offset = offsetof(UTslSmokePropagationComponent, SmokeParticle);
	static_assert(UTslSmokePropagationComponent_SmokeParticle_Offset == 0x498, "UTslSmokePropagationComponent::SmokeParticle offset is not 498");
	auto constexpr UTslSmokePropagationComponent_boolField4B9_Offset = offsetof(UTslSmokePropagationComponent, boolField4B9);
	static_assert(UTslSmokePropagationComponent_boolField4B9_Offset == 0x4b9, "UTslSmokePropagationComponent::boolField4B9 offset is not 4b9");
	auto constexpr UTslSmokePropagationComponent_BlockingActorTemplate_Offset = offsetof(UTslSmokePropagationComponent, BlockingActorTemplate);
	static_assert(UTslSmokePropagationComponent_BlockingActorTemplate_Offset == 0x4c0, "UTslSmokePropagationComponent::BlockingActorTemplate offset is not 4c0");
	auto constexpr UTslSmokePropagationComponent_HalfHeightGlobal_Offset = offsetof(UTslSmokePropagationComponent, HalfHeightGlobal);
	static_assert(UTslSmokePropagationComponent_HalfHeightGlobal_Offset == 0x4c8, "UTslSmokePropagationComponent::HalfHeightGlobal offset is not 4c8");
	auto constexpr UTslSmokePropagationComponent_HalfHeightLocalScalar_Offset = offsetof(UTslSmokePropagationComponent, HalfHeightLocalScalar);
	static_assert(UTslSmokePropagationComponent_HalfHeightLocalScalar_Offset == 0x4cc, "UTslSmokePropagationComponent::HalfHeightLocalScalar offset is not 4cc");
	auto constexpr UTslSmokePropagationComponent_GlobalRadius_Offset = offsetof(UTslSmokePropagationComponent, GlobalRadius);
	static_assert(UTslSmokePropagationComponent_GlobalRadius_Offset == 0x4d0, "UTslSmokePropagationComponent::GlobalRadius offset is not 4d0");
	auto constexpr UTslSmokePropagationComponent_GlobalAngle_Offset = offsetof(UTslSmokePropagationComponent, GlobalAngle);
	static_assert(UTslSmokePropagationComponent_GlobalAngle_Offset == 0x4d4, "UTslSmokePropagationComponent::GlobalAngle offset is not 4d4");
	auto constexpr UTslSmokePropagationComponent_RadialTryCount_Offset = offsetof(UTslSmokePropagationComponent, RadialTryCount);
	static_assert(UTslSmokePropagationComponent_RadialTryCount_Offset == 0x4d8, "UTslSmokePropagationComponent::RadialTryCount offset is not 4d8");
	auto constexpr UTslSmokePropagationComponent_LoopCount_Offset = offsetof(UTslSmokePropagationComponent, LoopCount);
	static_assert(UTslSmokePropagationComponent_LoopCount_Offset == 0x4dc, "UTslSmokePropagationComponent::LoopCount offset is not 4dc");
	auto constexpr UTslSmokePropagationComponent_LastWorkerIndex_Offset = offsetof(UTslSmokePropagationComponent, LastWorkerIndex);
	static_assert(UTslSmokePropagationComponent_LastWorkerIndex_Offset == 0x4e0, "UTslSmokePropagationComponent::LastWorkerIndex offset is not 4e0");
	auto constexpr UTslSmokePropagationComponent_MaxDistanceFromHost_Offset = offsetof(UTslSmokePropagationComponent, MaxDistanceFromHost);
	static_assert(UTslSmokePropagationComponent_MaxDistanceFromHost_Offset == 0x4e4, "UTslSmokePropagationComponent::MaxDistanceFromHost offset is not 4e4");
	auto constexpr UTslSmokePropagationComponent_CeilingTraceDistance_Offset = offsetof(UTslSmokePropagationComponent, CeilingTraceDistance);
	static_assert(UTslSmokePropagationComponent_CeilingTraceDistance_Offset == 0x4e8, "UTslSmokePropagationComponent::CeilingTraceDistance offset is not 4e8");
	auto constexpr UTslSmokePropagationComponent_MainParticleVelocityScale_First_Offset = offsetof(UTslSmokePropagationComponent, MainParticleVelocityScale_First);
	static_assert(UTslSmokePropagationComponent_MainParticleVelocityScale_First_Offset == 0x4ec, "UTslSmokePropagationComponent::MainParticleVelocityScale_First offset is not 4ec");
	auto constexpr UTslSmokePropagationComponent_MainParticleVelocityScale_Second_Offset = offsetof(UTslSmokePropagationComponent, MainParticleVelocityScale_Second);
	static_assert(UTslSmokePropagationComponent_MainParticleVelocityScale_Second_Offset == 0x4f8, "UTslSmokePropagationComponent::MainParticleVelocityScale_Second offset is not 4f8");
	auto constexpr UTslSmokePropagationComponent_MainParticleVelocityScale_Third_Offset = offsetof(UTslSmokePropagationComponent, MainParticleVelocityScale_Third);
	static_assert(UTslSmokePropagationComponent_MainParticleVelocityScale_Third_Offset == 0x504, "UTslSmokePropagationComponent::MainParticleVelocityScale_Third offset is not 504");
	auto constexpr UTslSmokePropagationComponent_HorizontalRayTraceOffset_Offset = offsetof(UTslSmokePropagationComponent, HorizontalRayTraceOffset);
	static_assert(UTslSmokePropagationComponent_HorizontalRayTraceOffset_Offset == 0x510, "UTslSmokePropagationComponent::HorizontalRayTraceOffset offset is not 510");
	auto constexpr UTslSmokePropagationComponent_HorizontalRayRadiusScalar_Offset = offsetof(UTslSmokePropagationComponent, HorizontalRayRadiusScalar);
	static_assert(UTslSmokePropagationComponent_HorizontalRayRadiusScalar_Offset == 0x514, "UTslSmokePropagationComponent::HorizontalRayRadiusScalar offset is not 514");
	auto constexpr UTslSmokePropagationComponent_HorizontalRayPropagateOffset_Offset = offsetof(UTslSmokePropagationComponent, HorizontalRayPropagateOffset);
	static_assert(UTslSmokePropagationComponent_HorizontalRayPropagateOffset_Offset == 0x518, "UTslSmokePropagationComponent::HorizontalRayPropagateOffset offset is not 518");
	auto constexpr UTslSmokePropagationComponent_BlockerGroundTraceOffset_Offset = offsetof(UTslSmokePropagationComponent, BlockerGroundTraceOffset);
	static_assert(UTslSmokePropagationComponent_BlockerGroundTraceOffset_Offset == 0x51c, "UTslSmokePropagationComponent::BlockerGroundTraceOffset offset is not 51c");
	auto constexpr UTslSmokePropagationComponent_LowChildVelocityStaticVector_Offset = offsetof(UTslSmokePropagationComponent, LowChildVelocityStaticVector);
	static_assert(UTslSmokePropagationComponent_LowChildVelocityStaticVector_Offset == 0x520, "UTslSmokePropagationComponent::LowChildVelocityStaticVector offset is not 520");
	auto constexpr UTslSmokePropagationComponent_HighChildVelocityStaticVector_Offset = offsetof(UTslSmokePropagationComponent, HighChildVelocityStaticVector);
	static_assert(UTslSmokePropagationComponent_HighChildVelocityStaticVector_Offset == 0x52c, "UTslSmokePropagationComponent::HighChildVelocityStaticVector offset is not 52c");
	auto constexpr UTslSmokePropagationComponent_LowChildVelocityInMap_Offset = offsetof(UTslSmokePropagationComponent, LowChildVelocityInMap);
	static_assert(UTslSmokePropagationComponent_LowChildVelocityInMap_Offset == 0x538, "UTslSmokePropagationComponent::LowChildVelocityInMap offset is not 538");
	auto constexpr UTslSmokePropagationComponent_LowChildVelocityOutMap_Offset = offsetof(UTslSmokePropagationComponent, LowChildVelocityOutMap);
	static_assert(UTslSmokePropagationComponent_LowChildVelocityOutMap_Offset == 0x540, "UTslSmokePropagationComponent::LowChildVelocityOutMap offset is not 540");
	auto constexpr UTslSmokePropagationComponent_HighChildVelocityInMap_Offset = offsetof(UTslSmokePropagationComponent, HighChildVelocityInMap);
	static_assert(UTslSmokePropagationComponent_HighChildVelocityInMap_Offset == 0x548, "UTslSmokePropagationComponent::HighChildVelocityInMap offset is not 548");
	auto constexpr UTslSmokePropagationComponent_HighChildVelocityOutMap_Offset = offsetof(UTslSmokePropagationComponent, HighChildVelocityOutMap);
	static_assert(UTslSmokePropagationComponent_HighChildVelocityOutMap_Offset == 0x550, "UTslSmokePropagationComponent::HighChildVelocityOutMap offset is not 550");
	auto constexpr UTslSmokePropagationComponent_CurrentRadialRay_Offset = offsetof(UTslSmokePropagationComponent, CurrentRadialRay);
	static_assert(UTslSmokePropagationComponent_CurrentRadialRay_Offset == 0x558, "UTslSmokePropagationComponent::CurrentRadialRay offset is not 558");
	auto constexpr UTslSmokePropagationComponent_CurrentSpawnedChildCount_Offset = offsetof(UTslSmokePropagationComponent, CurrentSpawnedChildCount);
	static_assert(UTslSmokePropagationComponent_CurrentSpawnedChildCount_Offset == 0x55c, "UTslSmokePropagationComponent::CurrentSpawnedChildCount offset is not 55c");
	auto constexpr UTslSmokePropagationComponent_MaxTicksAllowed_Offset = offsetof(UTslSmokePropagationComponent, MaxTicksAllowed);
	static_assert(UTslSmokePropagationComponent_MaxTicksAllowed_Offset == 0x560, "UTslSmokePropagationComponent::MaxTicksAllowed offset is not 560");
	auto constexpr UTslSmokePropagationComponent_MaxChildrenAllowed_Offset = offsetof(UTslSmokePropagationComponent, MaxChildrenAllowed);
	static_assert(UTslSmokePropagationComponent_MaxChildrenAllowed_Offset == 0x564, "UTslSmokePropagationComponent::MaxChildrenAllowed offset is not 564");
	auto constexpr UTslSmokePropagationComponent_CustomTickInterval_Offset = offsetof(UTslSmokePropagationComponent, CustomTickInterval);
	static_assert(UTslSmokePropagationComponent_CustomTickInterval_Offset == 0x568, "UTslSmokePropagationComponent::CustomTickInterval offset is not 568");
	auto constexpr UTslSmokePropagationComponent_StartDelay_Offset = offsetof(UTslSmokePropagationComponent, StartDelay);
	static_assert(UTslSmokePropagationComponent_StartDelay_Offset == 0x56c, "UTslSmokePropagationComponent::StartDelay offset is not 56c");
	auto constexpr UTslSmokePropagationComponent_boolField570_Offset = offsetof(UTslSmokePropagationComponent, boolField570);
	static_assert(UTslSmokePropagationComponent_boolField570_Offset == 0x570, "UTslSmokePropagationComponent::boolField570 offset is not 570");
	auto constexpr UTslSmokePropagationComponent_boolField571_Offset = offsetof(UTslSmokePropagationComponent, boolField571);
	static_assert(UTslSmokePropagationComponent_boolField571_Offset == 0x571, "UTslSmokePropagationComponent::boolField571 offset is not 571");
	auto constexpr UTslSmokePropagationComponent_ParticleLifetime_Offset = offsetof(UTslSmokePropagationComponent, ParticleLifetime);
	static_assert(UTslSmokePropagationComponent_ParticleLifetime_Offset == 0x574, "UTslSmokePropagationComponent::ParticleLifetime offset is not 574");
	auto constexpr UTslSmokePropagationComponent_ParticleLifetimeRandomOffset_Offset = offsetof(UTslSmokePropagationComponent, ParticleLifetimeRandomOffset);
	static_assert(UTslSmokePropagationComponent_ParticleLifetimeRandomOffset_Offset == 0x578, "UTslSmokePropagationComponent::ParticleLifetimeRandomOffset offset is not 578");
	auto constexpr UTslSmokePropagationComponent_ParticleToObjectLifeScale_Offset = offsetof(UTslSmokePropagationComponent, ParticleToObjectLifeScale);
	static_assert(UTslSmokePropagationComponent_ParticleToObjectLifeScale_Offset == 0x580, "UTslSmokePropagationComponent::ParticleToObjectLifeScale offset is not 580");
	auto constexpr UTslSmokePropagationComponent_ParticleAllocationCount_Offset = offsetof(UTslSmokePropagationComponent, ParticleAllocationCount);
	static_assert(UTslSmokePropagationComponent_ParticleAllocationCount_Offset == 0x584, "UTslSmokePropagationComponent::ParticleAllocationCount offset is not 584");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
