#pragma once
#include "UInputDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputAxisDelegateBinding // Size: 0x40
	: public UInputDelegateBinding // Size: 0x30
{
private:
	typedef UInputAxisDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(758); // id32("Class Engine.InputAxisDelegateBinding")
		return ptr;
	}
	TArray<struct FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InputAxisDelegateBinding.InputAxisDelegateBindings */


	inline bool SetInputAxisDelegateBindings(t_structHelper inst, TArray<struct FBlueprintInputAxisDelegateBinding> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputAxisDelegateBinding = sizeof(UInputAxisDelegateBinding); // 64
    static_assert(sizeof(UInputAxisDelegateBinding) == 0x40, "Size of UInputAxisDelegateBinding is not correct.");
	auto constexpr UInputAxisDelegateBinding_InputAxisDelegateBindings_Offset = offsetof(UInputAxisDelegateBinding, InputAxisDelegateBindings);
	static_assert(UInputAxisDelegateBinding_InputAxisDelegateBindings_Offset == 0x30, "UInputAxisDelegateBinding::InputAxisDelegateBindings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
