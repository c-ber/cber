#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPredictProjectilePathPointData // Size: 0x1C
{
public:
    FVector Location; /* Ofs: 0x0 Size: 0xC StructProperty Engine.PredictProjectilePathPointData.Location */
    FVector Velocity; /* Ofs: 0xC Size: 0xC StructProperty Engine.PredictProjectilePathPointData.Velocity */
    float Time; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.PredictProjectilePathPointData.Time */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPredictProjectilePathPointData = sizeof(FPredictProjectilePathPointData); // 28
    static_assert(sizeof(FPredictProjectilePathPointData) == 0x1C, "Size of FPredictProjectilePathPointData is not correct.");
	auto constexpr FPredictProjectilePathPointData_Location_Offset = offsetof(FPredictProjectilePathPointData, Location);
	static_assert(FPredictProjectilePathPointData_Location_Offset == 0x0, "FPredictProjectilePathPointData::Location offset is not 0");
	auto constexpr FPredictProjectilePathPointData_Velocity_Offset = offsetof(FPredictProjectilePathPointData, Velocity);
	static_assert(FPredictProjectilePathPointData_Velocity_Offset == 0xc, "FPredictProjectilePathPointData::Velocity offset is not c");
	auto constexpr FPredictProjectilePathPointData_Time_Offset = offsetof(FPredictProjectilePathPointData, Time);
	static_assert(FPredictProjectilePathPointData_Time_Offset == 0x18, "FPredictProjectilePathPointData::Time offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
