#pragma once
#include "UHierarchicalInstancedStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGridInstancedStaticMeshComponent // Size: 0xCA0
	: public UHierarchicalInstancedStaticMeshComponent // Size: 0xCA0
{
private:
	typedef UGridInstancedStaticMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(213); // id32("Class Engine.GridInstancedStaticMeshComponent")
		return ptr;
	}
//	int32_t MinVertsToSplitNodeForGrid; /* Ofs: 0xC98 Size: 0x4 - IntProperty Engine.GridInstancedStaticMeshComponent.MinVertsToSplitNodeForGrid */


//	inline bool SetMinVertsToSplitNodeForGrid(t_structHelper inst, int32_t value) { inst.WriteOffset(0xC98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGridInstancedStaticMeshComponent = sizeof(UGridInstancedStaticMeshComponent); // 3232
    static_assert(sizeof(UGridInstancedStaticMeshComponent) == 0xCA0, "Size of UGridInstancedStaticMeshComponent is not correct.");
//	auto constexpr UGridInstancedStaticMeshComponent_MinVertsToSplitNodeForGrid_Offset = offsetof(UGridInstancedStaticMeshComponent, MinVertsToSplitNodeForGrid);
//	static_assert(UGridInstancedStaticMeshComponent_MinVertsToSplitNodeForGrid_Offset == 0xc98, "UGridInstancedStaticMeshComponent::MinVertsToSplitNodeForGrid offset is not c98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
