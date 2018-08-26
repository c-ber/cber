#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintComponentDelegateBinding // Size: 0x18
{
public:
    FName ComponentPropertyName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BlueprintComponentDelegateBinding.ComponentPropertyName */
    FName DelegatePropertyName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.BlueprintComponentDelegateBinding.DelegatePropertyName */
    FName FunctionNameToBind; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.BlueprintComponentDelegateBinding.FunctionNameToBind */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintComponentDelegateBinding = sizeof(FBlueprintComponentDelegateBinding); // 24
    static_assert(sizeof(FBlueprintComponentDelegateBinding) == 0x18, "Size of FBlueprintComponentDelegateBinding is not correct.");
	auto constexpr FBlueprintComponentDelegateBinding_ComponentPropertyName_Offset = offsetof(FBlueprintComponentDelegateBinding, ComponentPropertyName);
	static_assert(FBlueprintComponentDelegateBinding_ComponentPropertyName_Offset == 0x0, "FBlueprintComponentDelegateBinding::ComponentPropertyName offset is not 0");
	auto constexpr FBlueprintComponentDelegateBinding_DelegatePropertyName_Offset = offsetof(FBlueprintComponentDelegateBinding, DelegatePropertyName);
	static_assert(FBlueprintComponentDelegateBinding_DelegatePropertyName_Offset == 0x8, "FBlueprintComponentDelegateBinding::DelegatePropertyName offset is not 8");
	auto constexpr FBlueprintComponentDelegateBinding_FunctionNameToBind_Offset = offsetof(FBlueprintComponentDelegateBinding, FunctionNameToBind);
	static_assert(FBlueprintComponentDelegateBinding_FunctionNameToBind_Offset == 0x10, "FBlueprintComponentDelegateBinding::FunctionNameToBind offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
