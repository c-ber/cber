#pragma once
#include "UInputDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputActionDelegateBinding // Size: 0x40
	: public UInputDelegateBinding // Size: 0x30
{
private:
	typedef UInputActionDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(757); // id32("Class Engine.InputActionDelegateBinding")
		return ptr;
	}
	TArray<struct FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InputActionDelegateBinding.InputActionDelegateBindings */


	inline bool SetInputActionDelegateBindings(t_structHelper inst, TArray<struct FBlueprintInputActionDelegateBinding> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputActionDelegateBinding = sizeof(UInputActionDelegateBinding); // 64
    static_assert(sizeof(UInputActionDelegateBinding) == 0x40, "Size of UInputActionDelegateBinding is not correct.");
	auto constexpr UInputActionDelegateBinding_InputActionDelegateBindings_Offset = offsetof(UInputActionDelegateBinding, InputActionDelegateBindings);
	static_assert(UInputActionDelegateBinding_InputActionDelegateBindings_Offset == 0x30, "UInputActionDelegateBinding::InputActionDelegateBindings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
