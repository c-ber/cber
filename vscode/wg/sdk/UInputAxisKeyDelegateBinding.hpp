#pragma once
#include "UInputDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputAxisKeyDelegateBinding // Size: 0x40
	: public UInputDelegateBinding // Size: 0x30
{
private:
	typedef UInputAxisKeyDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(759); // id32("Class Engine.InputAxisKeyDelegateBinding")
		return ptr;
	}
	TArray<struct FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InputAxisKeyDelegateBinding.InputAxisKeyDelegateBindings */


	inline bool SetInputAxisKeyDelegateBindings(t_structHelper inst, TArray<struct FBlueprintInputAxisKeyDelegateBinding> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputAxisKeyDelegateBinding = sizeof(UInputAxisKeyDelegateBinding); // 64
    static_assert(sizeof(UInputAxisKeyDelegateBinding) == 0x40, "Size of UInputAxisKeyDelegateBinding is not correct.");
	auto constexpr UInputAxisKeyDelegateBinding_InputAxisKeyDelegateBindings_Offset = offsetof(UInputAxisKeyDelegateBinding, InputAxisKeyDelegateBindings);
	static_assert(UInputAxisKeyDelegateBinding_InputAxisKeyDelegateBindings_Offset == 0x30, "UInputAxisKeyDelegateBinding::InputAxisKeyDelegateBindings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
