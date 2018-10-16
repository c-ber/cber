#pragma once
#include "USplineComponent.hpp"
#include "FVector2D.hpp"
#include "FVector.hpp"
#include "EObjectTypeQuery.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslThrowableTrajectoryViewComponent // Size: 0xAA0
	: public USplineComponent // Size: 0x9D0
{
private:
	typedef UTslThrowableTrajectoryViewComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1510); // id32("Class TslGame.TslThrowableTrajectoryViewComponent")
		return ptr;
	}
	ExternalPtr<struct UStaticMesh> SplineSegmentMesh; /* Ofs: 0x9D0 Size: 0x8 - ObjectProperty TslGame.TslThrowableTrajectoryViewComponent.SplineSegmentMesh */
	ExternalPtr<struct UMaterialInterface> SplineSegmentMeshMaterial; /* Ofs: 0x9D8 Size: 0x8 - ObjectProperty TslGame.TslThrowableTrajectoryViewComponent.SplineSegmentMeshMaterial */
	FVector2D SegmentMeshScale; /* Ofs: 0x9E0 Size: 0x8 - StructProperty TslGame.TslThrowableTrajectoryViewComponent.SegmentMeshScale */
	ExternalPtr<struct UStaticMesh> ImpactMesh; /* Ofs: 0x9E8 Size: 0x8 - ObjectProperty TslGame.TslThrowableTrajectoryViewComponent.ImpactMesh */
	ExternalPtr<struct UMaterialInterface> ImpactMeshMaterial; /* Ofs: 0x9F0 Size: 0x8 - ObjectProperty TslGame.TslThrowableTrajectoryViewComponent.ImpactMeshMaterial */
	FVector ImpactMeshScale; /* Ofs: 0x9F8 Size: 0xC - StructProperty TslGame.TslThrowableTrajectoryViewComponent.ImpactMeshScale */
	uint8_t UnknownDataA04[0x4];
	TSet<EObjectTypeQuery> TraceObjectTypes; /* Ofs: 0xA08 Size: 0x50 - SetProperty TslGame.TslThrowableTrajectoryViewComponent.TraceObjectTypes */
	float PredictionTime; /* Ofs: 0xA58 Size: 0x4 - FloatProperty TslGame.TslThrowableTrajectoryViewComponent.PredictionTime */
	float DistanceScaleFactor; /* Ofs: 0xA5C Size: 0x4 - FloatProperty TslGame.TslThrowableTrajectoryViewComponent.DistanceScaleFactor */
	FName MaterialParam_NearDepthFadeOrigin; /* Ofs: 0xA60 Size: 0x8 - NameProperty TslGame.TslThrowableTrajectoryViewComponent.MaterialParam_NearDepthFadeOrigin */
	FName MaterialParam_FarDepthFadeOrigin; /* Ofs: 0xA68 Size: 0x8 - NameProperty TslGame.TslThrowableTrajectoryViewComponent.MaterialParam_FarDepthFadeOrigin */
	float SplineGenerationAngThresholdDeg; /* Ofs: 0xA70 Size: 0x4 - FloatProperty TslGame.TslThrowableTrajectoryViewComponent.SplineGenerationAngThresholdDeg */
	uint8_t UnknownDataA74[0xC];
	ExternalPtr<struct UStaticMeshComponent> ImpactMeshComponent; /* Ofs: 0xA80 Size: 0x8 - ObjectProperty TslGame.TslThrowableTrajectoryViewComponent.ImpactMeshComponent */
	TArray<ExternalPtr<struct USplineMeshComponent>> SplineMeshArray; /* Ofs: 0xA88 Size: 0x10 - ArrayProperty TslGame.TslThrowableTrajectoryViewComponent.SplineMeshArray */
	ExternalPtr<struct UMaterialInstanceDynamic> SplineSegmentMeshMaterialDynamic; /* Ofs: 0xA98 Size: 0x8 - ObjectProperty TslGame.TslThrowableTrajectoryViewComponent.SplineSegmentMeshMaterialDynamic */


	inline bool SetSplineSegmentMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x9D0, value); }
	inline bool SetSplineSegmentMeshMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetSegmentMeshScale(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x9E0, value); }
	inline bool SetImpactMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x9E8, value); }
	inline bool SetImpactMeshMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetImpactMeshScale(t_structHelper inst, FVector value) { inst.WriteOffset(0x9F8, value); }
	inline bool SetTraceObjectTypes(t_structHelper inst, TSet<EObjectTypeQuery> value) { inst.WriteOffset(0xA08, value); }
	inline bool SetPredictionTime(t_structHelper inst, float value) { inst.WriteOffset(0xA58, value); }
	inline bool SetDistanceScaleFactor(t_structHelper inst, float value) { inst.WriteOffset(0xA5C, value); }
	inline bool SetMaterialParam_NearDepthFadeOrigin(t_structHelper inst, FName value) { inst.WriteOffset(0xA60, value); }
	inline bool SetMaterialParam_FarDepthFadeOrigin(t_structHelper inst, FName value) { inst.WriteOffset(0xA68, value); }
	inline bool SetSplineGenerationAngThresholdDeg(t_structHelper inst, float value) { inst.WriteOffset(0xA70, value); }
	inline bool SetImpactMeshComponent(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0xA80, value); }
	inline bool SetSplineMeshArray(t_structHelper inst, TArray<ExternalPtr<struct USplineMeshComponent>> value) { inst.WriteOffset(0xA88, value); }
	inline bool SetSplineSegmentMeshMaterialDynamic(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0xA98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslThrowableTrajectoryViewComponent = sizeof(UTslThrowableTrajectoryViewComponent); // 2720
    static_assert(sizeof(UTslThrowableTrajectoryViewComponent) == 0xAA0, "Size of UTslThrowableTrajectoryViewComponent is not correct.");
	auto constexpr UTslThrowableTrajectoryViewComponent_SplineSegmentMesh_Offset = offsetof(UTslThrowableTrajectoryViewComponent, SplineSegmentMesh);
	static_assert(UTslThrowableTrajectoryViewComponent_SplineSegmentMesh_Offset == 0x9d0, "UTslThrowableTrajectoryViewComponent::SplineSegmentMesh offset is not 9d0");
	auto constexpr UTslThrowableTrajectoryViewComponent_SplineSegmentMeshMaterial_Offset = offsetof(UTslThrowableTrajectoryViewComponent, SplineSegmentMeshMaterial);
	static_assert(UTslThrowableTrajectoryViewComponent_SplineSegmentMeshMaterial_Offset == 0x9d8, "UTslThrowableTrajectoryViewComponent::SplineSegmentMeshMaterial offset is not 9d8");
	auto constexpr UTslThrowableTrajectoryViewComponent_SegmentMeshScale_Offset = offsetof(UTslThrowableTrajectoryViewComponent, SegmentMeshScale);
	static_assert(UTslThrowableTrajectoryViewComponent_SegmentMeshScale_Offset == 0x9e0, "UTslThrowableTrajectoryViewComponent::SegmentMeshScale offset is not 9e0");
	auto constexpr UTslThrowableTrajectoryViewComponent_ImpactMesh_Offset = offsetof(UTslThrowableTrajectoryViewComponent, ImpactMesh);
	static_assert(UTslThrowableTrajectoryViewComponent_ImpactMesh_Offset == 0x9e8, "UTslThrowableTrajectoryViewComponent::ImpactMesh offset is not 9e8");
	auto constexpr UTslThrowableTrajectoryViewComponent_ImpactMeshMaterial_Offset = offsetof(UTslThrowableTrajectoryViewComponent, ImpactMeshMaterial);
	static_assert(UTslThrowableTrajectoryViewComponent_ImpactMeshMaterial_Offset == 0x9f0, "UTslThrowableTrajectoryViewComponent::ImpactMeshMaterial offset is not 9f0");
	auto constexpr UTslThrowableTrajectoryViewComponent_ImpactMeshScale_Offset = offsetof(UTslThrowableTrajectoryViewComponent, ImpactMeshScale);
	static_assert(UTslThrowableTrajectoryViewComponent_ImpactMeshScale_Offset == 0x9f8, "UTslThrowableTrajectoryViewComponent::ImpactMeshScale offset is not 9f8");
	auto constexpr UTslThrowableTrajectoryViewComponent_TraceObjectTypes_Offset = offsetof(UTslThrowableTrajectoryViewComponent, TraceObjectTypes);
	static_assert(UTslThrowableTrajectoryViewComponent_TraceObjectTypes_Offset == 0xa08, "UTslThrowableTrajectoryViewComponent::TraceObjectTypes offset is not a08");
	auto constexpr UTslThrowableTrajectoryViewComponent_PredictionTime_Offset = offsetof(UTslThrowableTrajectoryViewComponent, PredictionTime);
	static_assert(UTslThrowableTrajectoryViewComponent_PredictionTime_Offset == 0xa58, "UTslThrowableTrajectoryViewComponent::PredictionTime offset is not a58");
	auto constexpr UTslThrowableTrajectoryViewComponent_DistanceScaleFactor_Offset = offsetof(UTslThrowableTrajectoryViewComponent, DistanceScaleFactor);
	static_assert(UTslThrowableTrajectoryViewComponent_DistanceScaleFactor_Offset == 0xa5c, "UTslThrowableTrajectoryViewComponent::DistanceScaleFactor offset is not a5c");
	auto constexpr UTslThrowableTrajectoryViewComponent_MaterialParam_NearDepthFadeOrigin_Offset = offsetof(UTslThrowableTrajectoryViewComponent, MaterialParam_NearDepthFadeOrigin);
	static_assert(UTslThrowableTrajectoryViewComponent_MaterialParam_NearDepthFadeOrigin_Offset == 0xa60, "UTslThrowableTrajectoryViewComponent::MaterialParam_NearDepthFadeOrigin offset is not a60");
	auto constexpr UTslThrowableTrajectoryViewComponent_MaterialParam_FarDepthFadeOrigin_Offset = offsetof(UTslThrowableTrajectoryViewComponent, MaterialParam_FarDepthFadeOrigin);
	static_assert(UTslThrowableTrajectoryViewComponent_MaterialParam_FarDepthFadeOrigin_Offset == 0xa68, "UTslThrowableTrajectoryViewComponent::MaterialParam_FarDepthFadeOrigin offset is not a68");
	auto constexpr UTslThrowableTrajectoryViewComponent_SplineGenerationAngThresholdDeg_Offset = offsetof(UTslThrowableTrajectoryViewComponent, SplineGenerationAngThresholdDeg);
	static_assert(UTslThrowableTrajectoryViewComponent_SplineGenerationAngThresholdDeg_Offset == 0xa70, "UTslThrowableTrajectoryViewComponent::SplineGenerationAngThresholdDeg offset is not a70");
	auto constexpr UTslThrowableTrajectoryViewComponent_ImpactMeshComponent_Offset = offsetof(UTslThrowableTrajectoryViewComponent, ImpactMeshComponent);
	static_assert(UTslThrowableTrajectoryViewComponent_ImpactMeshComponent_Offset == 0xa80, "UTslThrowableTrajectoryViewComponent::ImpactMeshComponent offset is not a80");
	auto constexpr UTslThrowableTrajectoryViewComponent_SplineMeshArray_Offset = offsetof(UTslThrowableTrajectoryViewComponent, SplineMeshArray);
	static_assert(UTslThrowableTrajectoryViewComponent_SplineMeshArray_Offset == 0xa88, "UTslThrowableTrajectoryViewComponent::SplineMeshArray offset is not a88");
	auto constexpr UTslThrowableTrajectoryViewComponent_SplineSegmentMeshMaterialDynamic_Offset = offsetof(UTslThrowableTrajectoryViewComponent, SplineSegmentMeshMaterialDynamic);
	static_assert(UTslThrowableTrajectoryViewComponent_SplineSegmentMeshMaterialDynamic_Offset == 0xa98, "UTslThrowableTrajectoryViewComponent::SplineSegmentMeshMaterialDynamic offset is not a98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
