#pragma once
#include "UInputDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputKeyDelegateBinding // Size: 0x40
	: public UInputDelegateBinding // Size: 0x30
{
private:
	typedef UInputKeyDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(761); // id32("Class Engine.InputKeyDelegateBinding")
		return ptr;
	}
	TArray<struct FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InputKeyDelegateBinding.InputKeyDelegateBindings */


	inline bool SetInputKeyDelegateBindings(t_structHelper inst, TArray<struct FBlueprintInputKeyDelegateBinding> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputKeyDelegateBinding = sizeof(UInputKeyDelegateBinding); // 64
    static_assert(sizeof(UInputKeyDelegateBinding) == 0x40, "Size of UInputKeyDelegateBinding is not correct.");
	auto constexpr UInputKeyDelegateBinding_InputKeyDelegateBindings_Offset = offsetof(UInputKeyDelegateBinding, InputKeyDelegateBindings);
	static_assert(UInputKeyDelegateBinding_InputKeyDelegateBindings_Offset == 0x30, "UInputKeyDelegateBinding::InputKeyDelegateBindings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
