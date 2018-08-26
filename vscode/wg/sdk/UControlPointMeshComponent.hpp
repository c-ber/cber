#pragma once
#include "UStaticMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UControlPointMeshComponent // Size: 0xA80
	: public UStaticMeshComponent // Size: 0xA80
{
private:
	typedef UControlPointMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1281); // id32("Class Landscape.ControlPointMeshComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUControlPointMeshComponent = sizeof(UControlPointMeshComponent); // 2688
    static_assert(sizeof(UControlPointMeshComponent) == 0xA80, "Size of UControlPointMeshComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
