#pragma once
#include "UInputAxisKeyDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputVectorAxisDelegateBinding // Size: 0x40
	: public UInputAxisKeyDelegateBinding // Size: 0x40
{
private:
	typedef UInputVectorAxisDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(760); // id32("Class Engine.InputVectorAxisDelegateBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputVectorAxisDelegateBinding = sizeof(UInputVectorAxisDelegateBinding); // 64
    static_assert(sizeof(UInputVectorAxisDelegateBinding) == 0x40, "Size of UInputVectorAxisDelegateBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
