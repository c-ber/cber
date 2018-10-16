#pragma once
#include "FPredictProjectilePathPointData.hpp"
#include "FHitResult.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPredictProjectilePathResult // Size: 0xB8
{
public:
    TArray<struct FPredictProjectilePathPointData> PathData; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.PredictProjectilePathResult.PathData */
    FPredictProjectilePathPointData LastTraceDestination; /* Ofs: 0x10 Size: 0x1C StructProperty Engine.PredictProjectilePathResult.LastTraceDestination */
    uint8_t UnknownData2C[0x4];
    FHitResult HitResult; /* Ofs: 0x30 Size: 0x88 StructProperty Engine.PredictProjectilePathResult.HitResult */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPredictProjectilePathResult = sizeof(FPredictProjectilePathResult); // 184
    static_assert(sizeof(FPredictProjectilePathResult) == 0xB8, "Size of FPredictProjectilePathResult is not correct.");
	auto constexpr FPredictProjectilePathResult_PathData_Offset = offsetof(FPredictProjectilePathResult, PathData);
	static_assert(FPredictProjectilePathResult_PathData_Offset == 0x0, "FPredictProjectilePathResult::PathData offset is not 0");
	auto constexpr FPredictProjectilePathResult_LastTraceDestination_Offset = offsetof(FPredictProjectilePathResult, LastTraceDestination);
	static_assert(FPredictProjectilePathResult_LastTraceDestination_Offset == 0x10, "FPredictProjectilePathResult::LastTraceDestination offset is not 10");
	auto constexpr FPredictProjectilePathResult_HitResult_Offset = offsetof(FPredictProjectilePathResult, HitResult);
	static_assert(FPredictProjectilePathResult_HitResult_Offset == 0x30, "FPredictProjectilePathResult::HitResult offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
