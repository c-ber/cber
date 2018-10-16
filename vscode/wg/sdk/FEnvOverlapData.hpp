#pragma once
#include "FVector.hpp"
#include "ECollisionChannel.hpp"
#include "EEnvOverlapShape.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvOverlapData // Size: 0x20
{
public:
    float ExtentX; /* Ofs: 0x0 Size: 0x4 FloatProperty AIModule.EnvOverlapData.ExtentX */
    float ExtentY; /* Ofs: 0x4 Size: 0x4 FloatProperty AIModule.EnvOverlapData.ExtentY */
    float ExtentZ; /* Ofs: 0x8 Size: 0x4 FloatProperty AIModule.EnvOverlapData.ExtentZ */
    FVector ShapeOffset; /* Ofs: 0xC Size: 0xC StructProperty AIModule.EnvOverlapData.ShapeOffset */
    TEnumAsByte<enum ECollisionChannel> OverlapChannel; /* Ofs: 0x18 Size: 0x1 ByteProperty AIModule.EnvOverlapData.OverlapChannel */
    TEnumAsByte<enum EEnvOverlapShape> OverlapShape; /* Ofs: 0x19 Size: 0x1 ByteProperty AIModule.EnvOverlapData.OverlapShape */
    uint8_t UnknownData1A[0x2];
    bool bOnlyBlockingHits : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty AIModule.EnvOverlapData.bOnlyBlockingHits */
    bool bOverlapComplex : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 02 BoolProperty AIModule.EnvOverlapData.bOverlapComplex */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvOverlapData = sizeof(FEnvOverlapData); // 32
    static_assert(sizeof(FEnvOverlapData) == 0x20, "Size of FEnvOverlapData is not correct.");
	auto constexpr FEnvOverlapData_ExtentX_Offset = offsetof(FEnvOverlapData, ExtentX);
	static_assert(FEnvOverlapData_ExtentX_Offset == 0x0, "FEnvOverlapData::ExtentX offset is not 0");
	auto constexpr FEnvOverlapData_ExtentY_Offset = offsetof(FEnvOverlapData, ExtentY);
	static_assert(FEnvOverlapData_ExtentY_Offset == 0x4, "FEnvOverlapData::ExtentY offset is not 4");
	auto constexpr FEnvOverlapData_ExtentZ_Offset = offsetof(FEnvOverlapData, ExtentZ);
	static_assert(FEnvOverlapData_ExtentZ_Offset == 0x8, "FEnvOverlapData::ExtentZ offset is not 8");
	auto constexpr FEnvOverlapData_ShapeOffset_Offset = offsetof(FEnvOverlapData, ShapeOffset);
	static_assert(FEnvOverlapData_ShapeOffset_Offset == 0xc, "FEnvOverlapData::ShapeOffset offset is not c");
	auto constexpr FEnvOverlapData_OverlapChannel_Offset = offsetof(FEnvOverlapData, OverlapChannel);
	static_assert(FEnvOverlapData_OverlapChannel_Offset == 0x18, "FEnvOverlapData::OverlapChannel offset is not 18");
	auto constexpr FEnvOverlapData_OverlapShape_Offset = offsetof(FEnvOverlapData, OverlapShape);
	static_assert(FEnvOverlapData_OverlapShape_Offset == 0x19, "FEnvOverlapData::OverlapShape offset is not 19");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
