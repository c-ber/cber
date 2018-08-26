#pragma once
#include "FBlueprintInputDelegateBinding.hpp"
#include "EInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintInputActionDelegateBinding // Size: 0x20
 : public FBlueprintInputDelegateBinding // Size: 0x4
{
public:
    uint8_t UnknownData4[0x4];
    FName InputActionName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.BlueprintInputActionDelegateBinding.InputActionName */
    TEnumAsByte<enum EInputEvent> InputKeyEvent; /* Ofs: 0x10 Size: 0x1 ByteProperty Engine.BlueprintInputActionDelegateBinding.InputKeyEvent */
    uint8_t UnknownData11[0x7];
    FName FunctionNameToBind; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.BlueprintInputActionDelegateBinding.FunctionNameToBind */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintInputActionDelegateBinding = sizeof(FBlueprintInputActionDelegateBinding); // 32
    static_assert(sizeof(FBlueprintInputActionDelegateBinding) == 0x20, "Size of FBlueprintInputActionDelegateBinding is not correct.");
	auto constexpr FBlueprintInputActionDelegateBinding_InputActionName_Offset = offsetof(FBlueprintInputActionDelegateBinding, InputActionName);
	static_assert(FBlueprintInputActionDelegateBinding_InputActionName_Offset == 0x8, "FBlueprintInputActionDelegateBinding::InputActionName offset is not 8");
	auto constexpr FBlueprintInputActionDelegateBinding_InputKeyEvent_Offset = offsetof(FBlueprintInputActionDelegateBinding, InputKeyEvent);
	static_assert(FBlueprintInputActionDelegateBinding_InputKeyEvent_Offset == 0x10, "FBlueprintInputActionDelegateBinding::InputKeyEvent offset is not 10");
	auto constexpr FBlueprintInputActionDelegateBinding_FunctionNameToBind_Offset = offsetof(FBlueprintInputActionDelegateBinding, FunctionNameToBind);
	static_assert(FBlueprintInputActionDelegateBinding_FunctionNameToBind_Offset == 0x18, "FBlueprintInputActionDelegateBinding::FunctionNameToBind offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
