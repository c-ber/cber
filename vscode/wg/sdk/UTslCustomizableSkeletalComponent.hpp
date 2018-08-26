#pragma once
#include "UCustomizableSkeletalComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCustomizableSkeletalComponent // Size: 0x4E0
	: public UCustomizableSkeletalComponent // Size: 0x4E0
{
private:
	typedef UTslCustomizableSkeletalComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1357); // id32("Class TslGame.TslCustomizableSkeletalComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCustomizableSkeletalComponent = sizeof(UTslCustomizableSkeletalComponent); // 1248
    static_assert(sizeof(UTslCustomizableSkeletalComponent) == 0x4E0, "Size of UTslCustomizableSkeletalComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
