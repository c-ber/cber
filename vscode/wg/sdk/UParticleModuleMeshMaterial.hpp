#pragma once
#include "UParticleModuleMaterialBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleMeshMaterial // Size: 0x48
	: public UParticleModuleMaterialBase // Size: 0x38
{
private:
	typedef UParticleModuleMeshMaterial t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1113); // id32("Class Engine.ParticleModuleMeshMaterial")
		return ptr;
	}
	TArray<ExternalPtr<struct UMaterialInterface>> MeshMaterials; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.ParticleModuleMeshMaterial.MeshMaterials */


	inline bool SetMeshMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleMeshMaterial = sizeof(UParticleModuleMeshMaterial); // 72
    static_assert(sizeof(UParticleModuleMeshMaterial) == 0x48, "Size of UParticleModuleMeshMaterial is not correct.");
	auto constexpr UParticleModuleMeshMaterial_MeshMaterials_Offset = offsetof(UParticleModuleMeshMaterial, MeshMaterials);
	static_assert(UParticleModuleMeshMaterial_MeshMaterials_Offset == 0x38, "UParticleModuleMeshMaterial::MeshMaterials offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
