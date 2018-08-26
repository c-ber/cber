#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMeshComponent // Size: 0x9F0
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(205); // id32("Class Engine.MeshComponent")
		return ptr;
	}
//	TArray<ExternalPtr<struct UMaterialInterface>> OverrideMaterials; /* Ofs: 0x8E8 Size: 0x10 - ArrayProperty Engine.MeshComponent.OverrideMaterials */
	uint8_t UnknownData8F0[0x100];


//	inline bool SetOverrideMaterials(t_structHelper inst, TArray<ExternalPtr<struct UMaterialInterface>> value) { inst.WriteOffset(0x8E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMeshComponent = sizeof(UMeshComponent); // 2544
    static_assert(sizeof(UMeshComponent) == 0x9F0, "Size of UMeshComponent is not correct.");
//	auto constexpr UMeshComponent_OverrideMaterials_Offset = offsetof(UMeshComponent, OverrideMaterials);
//	static_assert(UMeshComponent_OverrideMaterials_Offset == 0x8e8, "UMeshComponent::OverrideMaterials offset is not 8e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
