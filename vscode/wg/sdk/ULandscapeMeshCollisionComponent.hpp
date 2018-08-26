#pragma once
#include "ULandscapeHeightfieldCollisionComponent.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeMeshCollisionComponent // Size: 0x9E0
	: public ULandscapeHeightfieldCollisionComponent // Size: 0x9D0
{
private:
	typedef ULandscapeMeshCollisionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1288); // id32("Class Landscape.LandscapeMeshCollisionComponent")
		return ptr;
	}
//	FGuid MeshGuid; /* Ofs: 0x9C8 Size: 0x10 - StructProperty Landscape.LandscapeMeshCollisionComponent.MeshGuid */
	uint8_t UnknownData9D0[0x10];


//	inline bool SetMeshGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x9C8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeMeshCollisionComponent = sizeof(ULandscapeMeshCollisionComponent); // 2528
    static_assert(sizeof(ULandscapeMeshCollisionComponent) == 0x9E0, "Size of ULandscapeMeshCollisionComponent is not correct.");
//	auto constexpr ULandscapeMeshCollisionComponent_MeshGuid_Offset = offsetof(ULandscapeMeshCollisionComponent, MeshGuid);
//	static_assert(ULandscapeMeshCollisionComponent_MeshGuid_Offset == 0x9c8, "ULandscapeMeshCollisionComponent::MeshGuid offset is not 9c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
