#pragma once
#include "UDynamicBlueprintBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputDelegateBinding // Size: 0x30
	: public UDynamicBlueprintBinding // Size: 0x30
{
private:
	typedef UInputDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(756); // id32("Class Engine.InputDelegateBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputDelegateBinding = sizeof(UInputDelegateBinding); // 48
    static_assert(sizeof(UInputDelegateBinding) == 0x30, "Size of UInputDelegateBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
