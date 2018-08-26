#pragma once
#include "FBlueprintInputDelegateBinding.hpp"
#include "EInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintInputTouchDelegateBinding // Size: 0x10
 : public FBlueprintInputDelegateBinding // Size: 0x4
{
public:
    TEnumAsByte<enum EInputEvent> InputKeyEvent; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.BlueprintInputTouchDelegateBinding.InputKeyEvent */
    uint8_t UnknownData5[0x3];
    FName FunctionNameToBind; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.BlueprintInputTouchDelegateBinding.FunctionNameToBind */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintInputTouchDelegateBinding = sizeof(FBlueprintInputTouchDelegateBinding); // 16
    static_assert(sizeof(FBlueprintInputTouchDelegateBinding) == 0x10, "Size of FBlueprintInputTouchDelegateBinding is not correct.");
	auto constexpr FBlueprintInputTouchDelegateBinding_InputKeyEvent_Offset = offsetof(FBlueprintInputTouchDelegateBinding, InputKeyEvent);
	static_assert(FBlueprintInputTouchDelegateBinding_InputKeyEvent_Offset == 0x4, "FBlueprintInputTouchDelegateBinding::InputKeyEvent offset is not 4");
	auto constexpr FBlueprintInputTouchDelegateBinding_FunctionNameToBind_Offset = offsetof(FBlueprintInputTouchDelegateBinding, FunctionNameToBind);
	static_assert(FBlueprintInputTouchDelegateBinding_FunctionNameToBind_Offset == 0x8, "FBlueprintInputTouchDelegateBinding::FunctionNameToBind offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
