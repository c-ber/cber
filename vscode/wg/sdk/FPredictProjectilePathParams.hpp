#pragma once
#include "FVector.hpp"
#include "ECollisionChannel.hpp"
#include "EObjectTypeQuery.hpp"
#include "EDrawDebugTrace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPredictProjectilePathParams // Size: 0x68
{
public:
    FVector StartLocation; /* Ofs: 0x0 Size: 0xC StructProperty Engine.PredictProjectilePathParams.StartLocation */
    FVector LaunchVelocity; /* Ofs: 0xC Size: 0xC StructProperty Engine.PredictProjectilePathParams.LaunchVelocity */
    bool bTraceWithCollision; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Engine.PredictProjectilePathParams.bTraceWithCollision */
    uint8_t UnknownData19[0x3];
    float ProjectileRadius; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.PredictProjectilePathParams.ProjectileRadius */
    float MaxSimTime; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.PredictProjectilePathParams.MaxSimTime */
    bool bTraceWithChannel; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty Engine.PredictProjectilePathParams.bTraceWithChannel */
    bool bTraceWithProfile; /* Ofs: 0x25 Size: 0x1 BitMask: 01 BoolProperty Engine.PredictProjectilePathParams.bTraceWithProfile */
    TEnumAsByte<enum ECollisionChannel> TraceChannel; /* Ofs: 0x26 Size: 0x1 ByteProperty Engine.PredictProjectilePathParams.TraceChannel */
    uint8_t UnknownData27[0x1];
    FName TraceProfile; /* Ofs: 0x28 Size: 0x8 NameProperty Engine.PredictProjectilePathParams.TraceProfile */
    TArray<EObjectTypeQuery> ObjectTypes; /* Ofs: 0x30 Size: 0x10 ArrayProperty Engine.PredictProjectilePathParams.ObjectTypes */
    TArray<ExternalPtr<struct UActor>> ActorsToIgnore; /* Ofs: 0x40 Size: 0x10 ArrayProperty Engine.PredictProjectilePathParams.ActorsToIgnore */
    float SimFrequency; /* Ofs: 0x50 Size: 0x4 FloatProperty Engine.PredictProjectilePathParams.SimFrequency */
    float OverrideGravityZ; /* Ofs: 0x54 Size: 0x4 FloatProperty Engine.PredictProjectilePathParams.OverrideGravityZ */
    TEnumAsByte<enum EDrawDebugTrace> DrawDebugType; /* Ofs: 0x58 Size: 0x1 ByteProperty Engine.PredictProjectilePathParams.DrawDebugType */
    uint8_t UnknownData59[0x3];
    float DrawDebugTime; /* Ofs: 0x5C Size: 0x4 FloatProperty Engine.PredictProjectilePathParams.DrawDebugTime */
    bool bTraceComplex; /* Ofs: 0x60 Size: 0x1 BitMask: 01 BoolProperty Engine.PredictProjectilePathParams.bTraceComplex */
    uint8_t UnknownData61[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPredictProjectilePathParams = sizeof(FPredictProjectilePathParams); // 104
    static_assert(sizeof(FPredictProjectilePathParams) == 0x68, "Size of FPredictProjectilePathParams is not correct.");
	auto constexpr FPredictProjectilePathParams_StartLocation_Offset = offsetof(FPredictProjectilePathParams, StartLocation);
	static_assert(FPredictProjectilePathParams_StartLocation_Offset == 0x0, "FPredictProjectilePathParams::StartLocation offset is not 0");
	auto constexpr FPredictProjectilePathParams_LaunchVelocity_Offset = offsetof(FPredictProjectilePathParams, LaunchVelocity);
	static_assert(FPredictProjectilePathParams_LaunchVelocity_Offset == 0xc, "FPredictProjectilePathParams::LaunchVelocity offset is not c");
	auto constexpr FPredictProjectilePathParams_ProjectileRadius_Offset = offsetof(FPredictProjectilePathParams, ProjectileRadius);
	static_assert(FPredictProjectilePathParams_ProjectileRadius_Offset == 0x1c, "FPredictProjectilePathParams::ProjectileRadius offset is not 1c");
	auto constexpr FPredictProjectilePathParams_MaxSimTime_Offset = offsetof(FPredictProjectilePathParams, MaxSimTime);
	static_assert(FPredictProjectilePathParams_MaxSimTime_Offset == 0x20, "FPredictProjectilePathParams::MaxSimTime offset is not 20");
	auto constexpr FPredictProjectilePathParams_TraceChannel_Offset = offsetof(FPredictProjectilePathParams, TraceChannel);
	static_assert(FPredictProjectilePathParams_TraceChannel_Offset == 0x26, "FPredictProjectilePathParams::TraceChannel offset is not 26");
	auto constexpr FPredictProjectilePathParams_TraceProfile_Offset = offsetof(FPredictProjectilePathParams, TraceProfile);
	static_assert(FPredictProjectilePathParams_TraceProfile_Offset == 0x28, "FPredictProjectilePathParams::TraceProfile offset is not 28");
	auto constexpr FPredictProjectilePathParams_ObjectTypes_Offset = offsetof(FPredictProjectilePathParams, ObjectTypes);
	static_assert(FPredictProjectilePathParams_ObjectTypes_Offset == 0x30, "FPredictProjectilePathParams::ObjectTypes offset is not 30");
	auto constexpr FPredictProjectilePathParams_ActorsToIgnore_Offset = offsetof(FPredictProjectilePathParams, ActorsToIgnore);
	static_assert(FPredictProjectilePathParams_ActorsToIgnore_Offset == 0x40, "FPredictProjectilePathParams::ActorsToIgnore offset is not 40");
	auto constexpr FPredictProjectilePathParams_SimFrequency_Offset = offsetof(FPredictProjectilePathParams, SimFrequency);
	static_assert(FPredictProjectilePathParams_SimFrequency_Offset == 0x50, "FPredictProjectilePathParams::SimFrequency offset is not 50");
	auto constexpr FPredictProjectilePathParams_OverrideGravityZ_Offset = offsetof(FPredictProjectilePathParams, OverrideGravityZ);
	static_assert(FPredictProjectilePathParams_OverrideGravityZ_Offset == 0x54, "FPredictProjectilePathParams::OverrideGravityZ offset is not 54");
	auto constexpr FPredictProjectilePathParams_DrawDebugType_Offset = offsetof(FPredictProjectilePathParams, DrawDebugType);
	static_assert(FPredictProjectilePathParams_DrawDebugType_Offset == 0x58, "FPredictProjectilePathParams::DrawDebugType offset is not 58");
	auto constexpr FPredictProjectilePathParams_DrawDebugTime_Offset = offsetof(FPredictProjectilePathParams, DrawDebugTime);
	static_assert(FPredictProjectilePathParams_DrawDebugTime_Offset == 0x5c, "FPredictProjectilePathParams::DrawDebugTime offset is not 5c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
