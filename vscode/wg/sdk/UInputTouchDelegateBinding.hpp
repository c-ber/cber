#pragma once
#include "UInputDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputTouchDelegateBinding // Size: 0x40
	: public UInputDelegateBinding // Size: 0x30
{
private:
	typedef UInputTouchDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(762); // id32("Class Engine.InputTouchDelegateBinding")
		return ptr;
	}
	TArray<struct FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.InputTouchDelegateBinding.InputTouchDelegateBindings */


	inline bool SetInputTouchDelegateBindings(t_structHelper inst, TArray<struct FBlueprintInputTouchDelegateBinding> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputTouchDelegateBinding = sizeof(UInputTouchDelegateBinding); // 64
    static_assert(sizeof(UInputTouchDelegateBinding) == 0x40, "Size of UInputTouchDelegateBinding is not correct.");
	auto constexpr UInputTouchDelegateBinding_InputTouchDelegateBindings_Offset = offsetof(UInputTouchDelegateBinding, InputTouchDelegateBindings);
	static_assert(UInputTouchDelegateBinding_InputTouchDelegateBindings_Offset == 0x30, "UInputTouchDelegateBinding::InputTouchDelegateBindings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
