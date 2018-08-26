#pragma once
#include "UFoliageType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFoliageType_InstancedStaticMesh // Size: 0x470
	: public UFoliageType // Size: 0x450
{
private:
	typedef UFoliageType_InstancedStaticMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(389); // id32("Class Foliage.FoliageType_InstancedStaticMesh")
		return ptr;
	}
//	ExternalPtr<struct UStaticMesh> Mesh; /* Ofs: 0x448 Size: 0x8 - ObjectProperty Foliage.FoliageType_InstancedStaticMesh.Mesh */
	TArray<ExternalPtr<struct UMaterialInterface>> OverrideMaterials; /* Ofs: 0x450 Size: 0x10 - ArrayProperty Foliage.FoliageType_InstancedStaticMesh.OverrideMaterials */
	ExternalPtr<struct UClass> ComponentClass; /* Ofs: 0x460 Size: 0x8 - ClassProperty Foliage.FoliageType_InstancedStaticMesh.ComponentClass */
	uint8_t UnknownData468[0x8];


//	inline bool SetMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x448, value); }
	inline bool SetOverrideMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x450, value); }
	inline bool SetComponentClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x460, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFoliageType_InstancedStaticMesh = sizeof(UFoliageType_InstancedStaticMesh); // 1136
    static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x470, "Size of UFoliageType_InstancedStaticMesh is not correct.");
//	auto constexpr UFoliageType_InstancedStaticMesh_Mesh_Offset = offsetof(UFoliageType_InstancedStaticMesh, Mesh);
//	static_assert(UFoliageType_InstancedStaticMesh_Mesh_Offset == 0x448, "UFoliageType_InstancedStaticMesh::Mesh offset is not 448");
	auto constexpr UFoliageType_InstancedStaticMesh_OverrideMaterials_Offset = offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials);
	static_assert(UFoliageType_InstancedStaticMesh_OverrideMaterials_Offset == 0x450, "UFoliageType_InstancedStaticMesh::OverrideMaterials offset is not 450");
	auto constexpr UFoliageType_InstancedStaticMesh_ComponentClass_Offset = offsetof(UFoliageType_InstancedStaticMesh, ComponentClass);
	static_assert(UFoliageType_InstancedStaticMesh_ComponentClass_Offset == 0x460, "UFoliageType_InstancedStaticMesh::ComponentClass offset is not 460");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
