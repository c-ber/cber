#pragma once
#include "UMeshComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomMeshComponent // Size: 0xA00
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UCustomMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2082); // id32("Class CustomMeshComponent.CustomMeshComponent")
		return ptr;
	}
	uint8_t UnknownData9F0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomMeshComponent = sizeof(UCustomMeshComponent); // 2560
    static_assert(sizeof(UCustomMeshComponent) == 0xA00, "Size of UCustomMeshComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
