#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavMeshRenderingComponent // Size: 0x900
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UNavMeshRenderingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(219); // id32("Class Engine.NavMeshRenderingComponent")
		return ptr;
	}
	uint8_t UnknownData8F0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavMeshRenderingComponent = sizeof(UNavMeshRenderingComponent); // 2304
    static_assert(sizeof(UNavMeshRenderingComponent) == 0x900, "Size of UNavMeshRenderingComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
