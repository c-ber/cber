#pragma once
#include "ULight.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDirectionalLight // Size: 0x420
	: public ULight // Size: 0x420
{
private:
	typedef UDirectionalLight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1749); // id32("Class Engine.DirectionalLight")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDirectionalLight = sizeof(UDirectionalLight); // 1056
    static_assert(sizeof(UDirectionalLight) == 0x420, "Size of UDirectionalLight is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
