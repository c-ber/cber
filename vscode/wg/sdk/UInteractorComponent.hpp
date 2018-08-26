#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractorComponent // Size: 0x1F0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UInteractorComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1900); // id32("Class TslGame.InteractorComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractorComponent = sizeof(UInteractorComponent); // 496
    static_assert(sizeof(UInteractorComponent) == 0x1F0, "Size of UInteractorComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
