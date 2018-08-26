#pragma once
#include "UActor.hpp"
#include "ESplineMeshAxis.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URoadActor // Size: 0x490
	: public UActor // Size: 0x410
{
private:
	typedef URoadActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2065); // id32("Class RoadRuntime.RoadActor")
		return ptr;
	}
//	TEnumAsByte<enum ESplineMeshAxis> SplineMeshAxis; /* Ofs: 0x408 Size: 0x1 - ByteProperty RoadRuntime.RoadActor.SplineMeshAxis */
//	FVector LocalOffset; /* Ofs: 0x40C Size: 0xC - StructProperty RoadRuntime.RoadActor.LocalOffset */
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct URoadActor> Father; /* Ofs: 0x418 Size: 0x8 - ObjectProperty RoadRuntime.RoadActor.Father */
	FString UniqueKey; /* Ofs: 0x420 Size: 0x10 - StrProperty RoadRuntime.RoadActor.UniqueKey */
	ExternalPtr<struct USplineComponent> Spline; /* Ofs: 0x430 Size: 0x8 - ObjectProperty RoadRuntime.RoadActor.Spline */
	int32_t Index; /* Ofs: 0x438 Size: 0x4 - IntProperty RoadRuntime.RoadActor.Index */
	int32_t Segmentation; /* Ofs: 0x43C Size: 0x4 - IntProperty RoadRuntime.RoadActor.Segmentation */
	int32_t StepGeneration; /* Ofs: 0x440 Size: 0x4 - IntProperty RoadRuntime.RoadActor.StepGeneration */
	float Size; /* Ofs: 0x444 Size: 0x4 - FloatProperty RoadRuntime.RoadActor.Size */
	ExternalPtr<struct UStaticMesh> RoadMesh; /* Ofs: 0x448 Size: 0x8 - ObjectProperty RoadRuntime.RoadActor.RoadMesh */
	TArray<ExternalPtr<struct USplineMeshComponent>> RoadMeshesComp; /* Ofs: 0x450 Size: 0x10 - ArrayProperty RoadRuntime.RoadActor.RoadMeshesComp */
	TArray<struct FSideActorManager> SideActors; /* Ofs: 0x460 Size: 0x10 - ArrayProperty RoadRuntime.RoadActor.SideActors */
	TArray<struct FSideMeshManager> SideMeshes; /* Ofs: 0x470 Size: 0x10 - ArrayProperty RoadRuntime.RoadActor.SideMeshes */
	TArray<struct FCurbsManager> SideCurbs; /* Ofs: 0x480 Size: 0x10 - ArrayProperty RoadRuntime.RoadActor.SideCurbs */


//	inline bool SetSplineMeshAxis(t_structHelper inst, TEnumAsByte<enum ESplineMeshAxis> value) { inst.WriteOffset(0x408, value); }
//	inline bool SetLocalOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x40C, value); }
	inline bool SetFather(t_structHelper inst, ExternalPtr<struct URoadActor> value) { inst.WriteOffset(0x418, value); }
	inline bool SetUniqueKey(t_structHelper inst, FString value) { inst.WriteOffset(0x420, value); }
	inline bool SetSpline(t_structHelper inst, ExternalPtr<struct USplineComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x438, value); }
	inline bool SetSegmentation(t_structHelper inst, int32_t value) { inst.WriteOffset(0x43C, value); }
	inline bool SetStepGeneration(t_structHelper inst, int32_t value) { inst.WriteOffset(0x440, value); }
	inline bool SetSize(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetRoadMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x448, value); }
	inline bool SetRoadMeshesComp(t_structHelper inst, TArray<ExternalPtr<struct USplineMeshComponent>> value) { inst.WriteOffset(0x450, value); }
	inline bool SetSideActors(t_structHelper inst, TArray<struct FSideActorManager> value) { inst.WriteOffset(0x460, value); }
	inline bool SetSideMeshes(t_structHelper inst, TArray<struct FSideMeshManager> value) { inst.WriteOffset(0x470, value); }
	inline bool SetSideCurbs(t_structHelper inst, TArray<struct FCurbsManager> value) { inst.WriteOffset(0x480, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURoadActor = sizeof(URoadActor); // 1168
    static_assert(sizeof(URoadActor) == 0x490, "Size of URoadActor is not correct.");
//	auto constexpr URoadActor_SplineMeshAxis_Offset = offsetof(URoadActor, SplineMeshAxis);
//	static_assert(URoadActor_SplineMeshAxis_Offset == 0x408, "URoadActor::SplineMeshAxis offset is not 408");
//	auto constexpr URoadActor_LocalOffset_Offset = offsetof(URoadActor, LocalOffset);
//	static_assert(URoadActor_LocalOffset_Offset == 0x40c, "URoadActor::LocalOffset offset is not 40c");
	auto constexpr URoadActor_Father_Offset = offsetof(URoadActor, Father);
	static_assert(URoadActor_Father_Offset == 0x418, "URoadActor::Father offset is not 418");
	auto constexpr URoadActor_UniqueKey_Offset = offsetof(URoadActor, UniqueKey);
	static_assert(URoadActor_UniqueKey_Offset == 0x420, "URoadActor::UniqueKey offset is not 420");
	auto constexpr URoadActor_Spline_Offset = offsetof(URoadActor, Spline);
	static_assert(URoadActor_Spline_Offset == 0x430, "URoadActor::Spline offset is not 430");
	auto constexpr URoadActor_Index_Offset = offsetof(URoadActor, Index);
	static_assert(URoadActor_Index_Offset == 0x438, "URoadActor::Index offset is not 438");
	auto constexpr URoadActor_Segmentation_Offset = offsetof(URoadActor, Segmentation);
	static_assert(URoadActor_Segmentation_Offset == 0x43c, "URoadActor::Segmentation offset is not 43c");
	auto constexpr URoadActor_StepGeneration_Offset = offsetof(URoadActor, StepGeneration);
	static_assert(URoadActor_StepGeneration_Offset == 0x440, "URoadActor::StepGeneration offset is not 440");
	auto constexpr URoadActor_Size_Offset = offsetof(URoadActor, Size);
	static_assert(URoadActor_Size_Offset == 0x444, "URoadActor::Size offset is not 444");
	auto constexpr URoadActor_RoadMesh_Offset = offsetof(URoadActor, RoadMesh);
	static_assert(URoadActor_RoadMesh_Offset == 0x448, "URoadActor::RoadMesh offset is not 448");
	auto constexpr URoadActor_RoadMeshesComp_Offset = offsetof(URoadActor, RoadMeshesComp);
	static_assert(URoadActor_RoadMeshesComp_Offset == 0x450, "URoadActor::RoadMeshesComp offset is not 450");
	auto constexpr URoadActor_SideActors_Offset = offsetof(URoadActor, SideActors);
	static_assert(URoadActor_SideActors_Offset == 0x460, "URoadActor::SideActors offset is not 460");
	auto constexpr URoadActor_SideMeshes_Offset = offsetof(URoadActor, SideMeshes);
	static_assert(URoadActor_SideMeshes_Offset == 0x470, "URoadActor::SideMeshes offset is not 470");
	auto constexpr URoadActor_SideCurbs_Offset = offsetof(URoadActor, SideCurbs);
	static_assert(URoadActor_SideCurbs_Offset == 0x480, "URoadActor::SideCurbs offset is not 480");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
