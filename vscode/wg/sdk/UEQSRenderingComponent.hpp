#pragma once
#include "UPrimitiveComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEQSRenderingComponent // Size: 0x920
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UEQSRenderingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(650); // id32("Class AIModule.EQSRenderingComponent")
		return ptr;
	}
	uint8_t UnknownData8F0[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEQSRenderingComponent = sizeof(UEQSRenderingComponent); // 2336
    static_assert(sizeof(UEQSRenderingComponent) == 0x920, "Size of UEQSRenderingComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
