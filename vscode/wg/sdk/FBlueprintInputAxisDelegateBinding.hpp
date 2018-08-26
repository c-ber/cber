#pragma once
#include "FBlueprintInputDelegateBinding.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintInputAxisDelegateBinding // Size: 0x18
 : public FBlueprintInputDelegateBinding // Size: 0x4
{
public:
    uint8_t UnknownData4[0x4];
    FName InputAxisName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.BlueprintInputAxisDelegateBinding.InputAxisName */
    FName FunctionNameToBind; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.BlueprintInputAxisDelegateBinding.FunctionNameToBind */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintInputAxisDelegateBinding = sizeof(FBlueprintInputAxisDelegateBinding); // 24
    static_assert(sizeof(FBlueprintInputAxisDelegateBinding) == 0x18, "Size of FBlueprintInputAxisDelegateBinding is not correct.");
	auto constexpr FBlueprintInputAxisDelegateBinding_InputAxisName_Offset = offsetof(FBlueprintInputAxisDelegateBinding, InputAxisName);
	static_assert(FBlueprintInputAxisDelegateBinding_InputAxisName_Offset == 0x8, "FBlueprintInputAxisDelegateBinding::InputAxisName offset is not 8");
	auto constexpr FBlueprintInputAxisDelegateBinding_FunctionNameToBind_Offset = offsetof(FBlueprintInputAxisDelegateBinding, FunctionNameToBind);
	static_assert(FBlueprintInputAxisDelegateBinding_FunctionNameToBind_Offset == 0x10, "FBlueprintInputAxisDelegateBinding::FunctionNameToBind offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
