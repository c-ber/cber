#pragma once
#include "UPrimitiveComponent.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOceanMeshComponent // Size: 0x920
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UOceanMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2060); // id32("Class OceanPlugin.OceanMeshComponent")
		return ptr;
	}
//	ExternalPtr<struct UStaticMesh> SourceMesh; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty OceanPlugin.OceanMeshComponent.SourceMesh */
	ExternalPtr<struct UMaterialInterface> DefaultMaterial; /* Ofs: 0x8F0 Size: 0x8 - ObjectProperty OceanPlugin.OceanMeshComponent.DefaultMaterial */
	ExternalPtr<struct UMaterialInterface> LODMaterial; /* Ofs: 0x8F8 Size: 0x8 - ObjectProperty OceanPlugin.OceanMeshComponent.LODMaterial */
	ExternalPtr<struct UMaterialInterface> SimpleMaterial; /* Ofs: 0x900 Size: 0x8 - ObjectProperty OceanPlugin.OceanMeshComponent.SimpleMaterial */
	FVector BoundsExtent; /* Ofs: 0x908 Size: 0xC - StructProperty OceanPlugin.OceanMeshComponent.BoundsExtent */
	float LODTransitionStart; /* Ofs: 0x914 Size: 0x4 - FloatProperty OceanPlugin.OceanMeshComponent.LODTransitionStart */
	float LODTransitionEnd; /* Ofs: 0x918 Size: 0x4 - FloatProperty OceanPlugin.OceanMeshComponent.LODTransitionEnd */
	uint8_t UnknownData91C[0x4];


//	inline bool SetSourceMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetDefaultMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetLODMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetSimpleMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x900, value); }
	inline bool SetBoundsExtent(t_structHelper inst, FVector value) { inst.WriteOffset(0x908, value); }
	inline bool SetLODTransitionStart(t_structHelper inst, float value) { inst.WriteOffset(0x914, value); }
	inline bool SetLODTransitionEnd(t_structHelper inst, float value) { inst.WriteOffset(0x918, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOceanMeshComponent = sizeof(UOceanMeshComponent); // 2336
    static_assert(sizeof(UOceanMeshComponent) == 0x920, "Size of UOceanMeshComponent is not correct.");
//	auto constexpr UOceanMeshComponent_SourceMesh_Offset = offsetof(UOceanMeshComponent, SourceMesh);
//	static_assert(UOceanMeshComponent_SourceMesh_Offset == 0x8e8, "UOceanMeshComponent::SourceMesh offset is not 8e8");
	auto constexpr UOceanMeshComponent_DefaultMaterial_Offset = offsetof(UOceanMeshComponent, DefaultMaterial);
	static_assert(UOceanMeshComponent_DefaultMaterial_Offset == 0x8f0, "UOceanMeshComponent::DefaultMaterial offset is not 8f0");
	auto constexpr UOceanMeshComponent_LODMaterial_Offset = offsetof(UOceanMeshComponent, LODMaterial);
	static_assert(UOceanMeshComponent_LODMaterial_Offset == 0x8f8, "UOceanMeshComponent::LODMaterial offset is not 8f8");
	auto constexpr UOceanMeshComponent_SimpleMaterial_Offset = offsetof(UOceanMeshComponent, SimpleMaterial);
	static_assert(UOceanMeshComponent_SimpleMaterial_Offset == 0x900, "UOceanMeshComponent::SimpleMaterial offset is not 900");
	auto constexpr UOceanMeshComponent_BoundsExtent_Offset = offsetof(UOceanMeshComponent, BoundsExtent);
	static_assert(UOceanMeshComponent_BoundsExtent_Offset == 0x908, "UOceanMeshComponent::BoundsExtent offset is not 908");
	auto constexpr UOceanMeshComponent_LODTransitionStart_Offset = offsetof(UOceanMeshComponent, LODTransitionStart);
	static_assert(UOceanMeshComponent_LODTransitionStart_Offset == 0x914, "UOceanMeshComponent::LODTransitionStart offset is not 914");
	auto constexpr UOceanMeshComponent_LODTransitionEnd_Offset = offsetof(UOceanMeshComponent, LODTransitionEnd);
	static_assert(UOceanMeshComponent_LODTransitionEnd_Offset == 0x918, "UOceanMeshComponent::LODTransitionEnd offset is not 918");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
