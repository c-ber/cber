#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULODParentComponent // Size: 0xA80
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef ULODParentComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(214); // id32("Class Engine.LODParentComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULODParentComponent = sizeof(ULODParentComponent); // 2688
    static_assert(sizeof(ULODParentComponent) == 0xA80, "Size of ULODParentComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
