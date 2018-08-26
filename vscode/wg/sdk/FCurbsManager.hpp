#pragma once
#include "FVector.hpp"
#include "FInterpCurveVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCurbsManager // Size: 0x88
{
public:
    ExternalPtr<struct UActor> Owner; /* Ofs: 0x0 Size: 0x8 ObjectProperty RoadRuntime.CurbsManager.Owner */
    ExternalPtr<struct UStaticMesh> Prototype; /* Ofs: 0x8 Size: 0x8 ObjectProperty RoadRuntime.CurbsManager.Prototype */
    ExternalPtr<struct UStaticMesh> StartPrototype; /* Ofs: 0x10 Size: 0x8 ObjectProperty RoadRuntime.CurbsManager.StartPrototype */
    ExternalPtr<struct UStaticMesh> EndPrototype; /* Ofs: 0x18 Size: 0x8 ObjectProperty RoadRuntime.CurbsManager.EndPrototype */
    TArray<ExternalPtr<struct USplineMeshComponent>> CurbsComp; /* Ofs: 0x20 Size: 0x10 ArrayProperty RoadRuntime.CurbsManager.CurbsComp */
    ExternalPtr<struct USplineComponent> Spline; /* Ofs: 0x30 Size: 0x8 ObjectProperty RoadRuntime.CurbsManager.Spline */
    int32_t SplineIndex; /* Ofs: 0x38 Size: 0x4 IntProperty RoadRuntime.CurbsManager.SplineIndex */
    int32_t SocketIndex; /* Ofs: 0x3C Size: 0x4 IntProperty RoadRuntime.CurbsManager.SocketIndex */
    int32_t Segmentation; /* Ofs: 0x40 Size: 0x4 IntProperty RoadRuntime.CurbsManager.Segmentation */
    int32_t StepGeneration; /* Ofs: 0x44 Size: 0x4 IntProperty RoadRuntime.CurbsManager.StepGeneration */
    FVector Offset; /* Ofs: 0x48 Size: 0xC StructProperty RoadRuntime.CurbsManager.Offset */
    FVector Scale; /* Ofs: 0x54 Size: 0xC StructProperty RoadRuntime.CurbsManager.Scale */
    bool CurbEnable; /* Ofs: 0x60 Size: 0x1 BitMask: 01 BoolProperty RoadRuntime.CurbsManager.CurbEnable */
    bool StartEnable; /* Ofs: 0x61 Size: 0x1 BitMask: 01 BoolProperty RoadRuntime.CurbsManager.StartEnable */
    bool EndEnable; /* Ofs: 0x62 Size: 0x1 BitMask: 01 BoolProperty RoadRuntime.CurbsManager.EndEnable */
    uint8_t UnknownData63[0x5];
    FInterpCurveVector SplineInfo; /* Ofs: 0x68 Size: 0x18 StructProperty RoadRuntime.CurbsManager.SplineInfo */
    float StartRoll; /* Ofs: 0x80 Size: 0x4 FloatProperty RoadRuntime.CurbsManager.StartRoll */
    float EndRoll; /* Ofs: 0x84 Size: 0x4 FloatProperty RoadRuntime.CurbsManager.EndRoll */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCurbsManager = sizeof(FCurbsManager); // 136
    static_assert(sizeof(FCurbsManager) == 0x88, "Size of FCurbsManager is not correct.");
	auto constexpr FCurbsManager_Owner_Offset = offsetof(FCurbsManager, Owner);
	static_assert(FCurbsManager_Owner_Offset == 0x0, "FCurbsManager::Owner offset is not 0");
	auto constexpr FCurbsManager_Prototype_Offset = offsetof(FCurbsManager, Prototype);
	static_assert(FCurbsManager_Prototype_Offset == 0x8, "FCurbsManager::Prototype offset is not 8");
	auto constexpr FCurbsManager_StartPrototype_Offset = offsetof(FCurbsManager, StartPrototype);
	static_assert(FCurbsManager_StartPrototype_Offset == 0x10, "FCurbsManager::StartPrototype offset is not 10");
	auto constexpr FCurbsManager_EndPrototype_Offset = offsetof(FCurbsManager, EndPrototype);
	static_assert(FCurbsManager_EndPrototype_Offset == 0x18, "FCurbsManager::EndPrototype offset is not 18");
	auto constexpr FCurbsManager_CurbsComp_Offset = offsetof(FCurbsManager, CurbsComp);
	static_assert(FCurbsManager_CurbsComp_Offset == 0x20, "FCurbsManager::CurbsComp offset is not 20");
	auto constexpr FCurbsManager_Spline_Offset = offsetof(FCurbsManager, Spline);
	static_assert(FCurbsManager_Spline_Offset == 0x30, "FCurbsManager::Spline offset is not 30");
	auto constexpr FCurbsManager_SplineIndex_Offset = offsetof(FCurbsManager, SplineIndex);
	static_assert(FCurbsManager_SplineIndex_Offset == 0x38, "FCurbsManager::SplineIndex offset is not 38");
	auto constexpr FCurbsManager_SocketIndex_Offset = offsetof(FCurbsManager, SocketIndex);
	static_assert(FCurbsManager_SocketIndex_Offset == 0x3c, "FCurbsManager::SocketIndex offset is not 3c");
	auto constexpr FCurbsManager_Segmentation_Offset = offsetof(FCurbsManager, Segmentation);
	static_assert(FCurbsManager_Segmentation_Offset == 0x40, "FCurbsManager::Segmentation offset is not 40");
	auto constexpr FCurbsManager_StepGeneration_Offset = offsetof(FCurbsManager, StepGeneration);
	static_assert(FCurbsManager_StepGeneration_Offset == 0x44, "FCurbsManager::StepGeneration offset is not 44");
	auto constexpr FCurbsManager_Offset_Offset = offsetof(FCurbsManager, Offset);
	static_assert(FCurbsManager_Offset_Offset == 0x48, "FCurbsManager::Offset offset is not 48");
	auto constexpr FCurbsManager_Scale_Offset = offsetof(FCurbsManager, Scale);
	static_assert(FCurbsManager_Scale_Offset == 0x54, "FCurbsManager::Scale offset is not 54");
	auto constexpr FCurbsManager_SplineInfo_Offset = offsetof(FCurbsManager, SplineInfo);
	static_assert(FCurbsManager_SplineInfo_Offset == 0x68, "FCurbsManager::SplineInfo offset is not 68");
	auto constexpr FCurbsManager_StartRoll_Offset = offsetof(FCurbsManager, StartRoll);
	static_assert(FCurbsManager_StartRoll_Offset == 0x80, "FCurbsManager::StartRoll offset is not 80");
	auto constexpr FCurbsManager_EndRoll_Offset = offsetof(FCurbsManager, EndRoll);
	static_assert(FCurbsManager_EndRoll_Offset == 0x84, "FCurbsManager::EndRoll offset is not 84");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
