#pragma once
#include "ETraceTypeQuery.hpp"
#include "ECollisionChannel.hpp"
#include "EEnvTraceShape.hpp"
#include "EEnvQueryTrace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvTraceData // Size: 0x30
{
public:
    int32_t VersionNum; /* Ofs: 0x0 Size: 0x4 IntProperty AIModule.EnvTraceData.VersionNum */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UClass> NavigationFilter; /* Ofs: 0x8 Size: 0x8 ClassProperty AIModule.EnvTraceData.NavigationFilter */
    float ProjectDown; /* Ofs: 0x10 Size: 0x4 FloatProperty AIModule.EnvTraceData.ProjectDown */
    float ProjectUp; /* Ofs: 0x14 Size: 0x4 FloatProperty AIModule.EnvTraceData.ProjectUp */
    float ExtentX; /* Ofs: 0x18 Size: 0x4 FloatProperty AIModule.EnvTraceData.ExtentX */
    float ExtentY; /* Ofs: 0x1C Size: 0x4 FloatProperty AIModule.EnvTraceData.ExtentY */
    float ExtentZ; /* Ofs: 0x20 Size: 0x4 FloatProperty AIModule.EnvTraceData.ExtentZ */
    float PostProjectionVerticalOffset; /* Ofs: 0x24 Size: 0x4 FloatProperty AIModule.EnvTraceData.PostProjectionVerticalOffset */
    TEnumAsByte<enum ETraceTypeQuery> TraceChannel; /* Ofs: 0x28 Size: 0x1 ByteProperty AIModule.EnvTraceData.TraceChannel */
    TEnumAsByte<enum ECollisionChannel> SerializedChannel; /* Ofs: 0x29 Size: 0x1 ByteProperty AIModule.EnvTraceData.SerializedChannel */
    TEnumAsByte<enum EEnvTraceShape> TraceShape; /* Ofs: 0x2A Size: 0x1 ByteProperty AIModule.EnvTraceData.TraceShape */
    TEnumAsByte<enum EEnvQueryTrace> TraceMode; /* Ofs: 0x2B Size: 0x1 ByteProperty AIModule.EnvTraceData.TraceMode */
    bool bTraceComplex : 1; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty AIModule.EnvTraceData.bTraceComplex */
    bool bOnlyBlockingHits : 1; /* Ofs: 0x2C Size: 0x1 BitMask: 02 BoolProperty AIModule.EnvTraceData.bOnlyBlockingHits */
    bool bCanTraceOnNavMesh : 1; /* Ofs: 0x2C Size: 0x1 BitMask: 04 BoolProperty AIModule.EnvTraceData.bCanTraceOnNavMesh */
    bool bCanTraceOnGeometry : 1; /* Ofs: 0x2C Size: 0x1 BitMask: 08 BoolProperty AIModule.EnvTraceData.bCanTraceOnGeometry */
    bool bCanDisableTrace : 1; /* Ofs: 0x2C Size: 0x1 BitMask: 10 BoolProperty AIModule.EnvTraceData.bCanDisableTrace */
    bool bCanProjectDown : 1; /* Ofs: 0x2C Size: 0x1 BitMask: 20 BoolProperty AIModule.EnvTraceData.bCanProjectDown */
    uint8_t UnknownData2D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvTraceData = sizeof(FEnvTraceData); // 48
    static_assert(sizeof(FEnvTraceData) == 0x30, "Size of FEnvTraceData is not correct.");
	auto constexpr FEnvTraceData_VersionNum_Offset = offsetof(FEnvTraceData, VersionNum);
	static_assert(FEnvTraceData_VersionNum_Offset == 0x0, "FEnvTraceData::VersionNum offset is not 0");
	auto constexpr FEnvTraceData_NavigationFilter_Offset = offsetof(FEnvTraceData, NavigationFilter);
	static_assert(FEnvTraceData_NavigationFilter_Offset == 0x8, "FEnvTraceData::NavigationFilter offset is not 8");
	auto constexpr FEnvTraceData_ProjectDown_Offset = offsetof(FEnvTraceData, ProjectDown);
	static_assert(FEnvTraceData_ProjectDown_Offset == 0x10, "FEnvTraceData::ProjectDown offset is not 10");
	auto constexpr FEnvTraceData_ProjectUp_Offset = offsetof(FEnvTraceData, ProjectUp);
	static_assert(FEnvTraceData_ProjectUp_Offset == 0x14, "FEnvTraceData::ProjectUp offset is not 14");
	auto constexpr FEnvTraceData_ExtentX_Offset = offsetof(FEnvTraceData, ExtentX);
	static_assert(FEnvTraceData_ExtentX_Offset == 0x18, "FEnvTraceData::ExtentX offset is not 18");
	auto constexpr FEnvTraceData_ExtentY_Offset = offsetof(FEnvTraceData, ExtentY);
	static_assert(FEnvTraceData_ExtentY_Offset == 0x1c, "FEnvTraceData::ExtentY offset is not 1c");
	auto constexpr FEnvTraceData_ExtentZ_Offset = offsetof(FEnvTraceData, ExtentZ);
	static_assert(FEnvTraceData_ExtentZ_Offset == 0x20, "FEnvTraceData::ExtentZ offset is not 20");
	auto constexpr FEnvTraceData_PostProjectionVerticalOffset_Offset = offsetof(FEnvTraceData, PostProjectionVerticalOffset);
	static_assert(FEnvTraceData_PostProjectionVerticalOffset_Offset == 0x24, "FEnvTraceData::PostProjectionVerticalOffset offset is not 24");
	auto constexpr FEnvTraceData_TraceChannel_Offset = offsetof(FEnvTraceData, TraceChannel);
	static_assert(FEnvTraceData_TraceChannel_Offset == 0x28, "FEnvTraceData::TraceChannel offset is not 28");
	auto constexpr FEnvTraceData_SerializedChannel_Offset = offsetof(FEnvTraceData, SerializedChannel);
	static_assert(FEnvTraceData_SerializedChannel_Offset == 0x29, "FEnvTraceData::SerializedChannel offset is not 29");
	auto constexpr FEnvTraceData_TraceShape_Offset = offsetof(FEnvTraceData, TraceShape);
	static_assert(FEnvTraceData_TraceShape_Offset == 0x2a, "FEnvTraceData::TraceShape offset is not 2a");
	auto constexpr FEnvTraceData_TraceMode_Offset = offsetof(FEnvTraceData, TraceMode);
	static_assert(FEnvTraceData_TraceMode_Offset == 0x2b, "FEnvTraceData::TraceMode offset is not 2b");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
