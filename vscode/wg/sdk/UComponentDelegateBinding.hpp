#pragma once
#include "UDynamicBlueprintBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UComponentDelegateBinding // Size: 0x40
	: public UDynamicBlueprintBinding // Size: 0x30
{
private:
	typedef UComponentDelegateBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(755); // id32("Class Engine.ComponentDelegateBinding")
		return ptr;
	}
	TArray<struct FBlueprintComponentDelegateBinding> ComponentDelegateBindings; /* Ofs: 0x30 Size: 0x10 - ArrayProperty Engine.ComponentDelegateBinding.ComponentDelegateBindings */


	inline bool SetComponentDelegateBindings(t_structHelper inst, TArray<struct FBlueprintComponentDelegateBinding> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUComponentDelegateBinding = sizeof(UComponentDelegateBinding); // 64
    static_assert(sizeof(UComponentDelegateBinding) == 0x40, "Size of UComponentDelegateBinding is not correct.");
	auto constexpr UComponentDelegateBinding_ComponentDelegateBindings_Offset = offsetof(UComponentDelegateBinding, ComponentDelegateBindings);
	static_assert(UComponentDelegateBinding_ComponentDelegateBindings_Offset == 0x30, "UComponentDelegateBinding::ComponentDelegateBindings offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
