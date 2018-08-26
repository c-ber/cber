#pragma once
#include "FBlueprintInputDelegateBinding.hpp"
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintInputAxisKeyDelegateBinding // Size: 0x28
 : public FBlueprintInputDelegateBinding // Size: 0x4
{
public:
    uint8_t UnknownData4[0x4];
    FKey AxisKey; /* Ofs: 0x8 Size: 0x18 StructProperty Engine.BlueprintInputAxisKeyDelegateBinding.AxisKey */
    FName FunctionNameToBind; /* Ofs: 0x20 Size: 0x8 NameProperty Engine.BlueprintInputAxisKeyDelegateBinding.FunctionNameToBind */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintInputAxisKeyDelegateBinding = sizeof(FBlueprintInputAxisKeyDelegateBinding); // 40
    static_assert(sizeof(FBlueprintInputAxisKeyDelegateBinding) == 0x28, "Size of FBlueprintInputAxisKeyDelegateBinding is not correct.");
	auto constexpr FBlueprintInputAxisKeyDelegateBinding_AxisKey_Offset = offsetof(FBlueprintInputAxisKeyDelegateBinding, AxisKey);
	static_assert(FBlueprintInputAxisKeyDelegateBinding_AxisKey_Offset == 0x8, "FBlueprintInputAxisKeyDelegateBinding::AxisKey offset is not 8");
	auto constexpr FBlueprintInputAxisKeyDelegateBinding_FunctionNameToBind_Offset = offsetof(FBlueprintInputAxisKeyDelegateBinding, FunctionNameToBind);
	static_assert(FBlueprintInputAxisKeyDelegateBinding_FunctionNameToBind_Offset == 0x20, "FBlueprintInputAxisKeyDelegateBinding::FunctionNameToBind offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
