#pragma once
#include "FBlueprintInputDelegateBinding.hpp"
#include "FInputChord.hpp"
#include "EInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintInputKeyDelegateBinding // Size: 0x38
 : public FBlueprintInputDelegateBinding // Size: 0x4
{
public:
    uint8_t UnknownData4[0x4];
    FInputChord InputChord; /* Ofs: 0x8 Size: 0x20 StructProperty Engine.BlueprintInputKeyDelegateBinding.InputChord */
    TEnumAsByte<enum EInputEvent> InputKeyEvent; /* Ofs: 0x28 Size: 0x1 ByteProperty Engine.BlueprintInputKeyDelegateBinding.InputKeyEvent */
    uint8_t UnknownData29[0x7];
    FName FunctionNameToBind; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.BlueprintInputKeyDelegateBinding.FunctionNameToBind */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintInputKeyDelegateBinding = sizeof(FBlueprintInputKeyDelegateBinding); // 56
    static_assert(sizeof(FBlueprintInputKeyDelegateBinding) == 0x38, "Size of FBlueprintInputKeyDelegateBinding is not correct.");
	auto constexpr FBlueprintInputKeyDelegateBinding_InputChord_Offset = offsetof(FBlueprintInputKeyDelegateBinding, InputChord);
	static_assert(FBlueprintInputKeyDelegateBinding_InputChord_Offset == 0x8, "FBlueprintInputKeyDelegateBinding::InputChord offset is not 8");
	auto constexpr FBlueprintInputKeyDelegateBinding_InputKeyEvent_Offset = offsetof(FBlueprintInputKeyDelegateBinding, InputKeyEvent);
	static_assert(FBlueprintInputKeyDelegateBinding_InputKeyEvent_Offset == 0x28, "FBlueprintInputKeyDelegateBinding::InputKeyEvent offset is not 28");
	auto constexpr FBlueprintInputKeyDelegateBinding_FunctionNameToBind_Offset = offsetof(FBlueprintInputKeyDelegateBinding, FunctionNameToBind);
	static_assert(FBlueprintInputKeyDelegateBinding_FunctionNameToBind_Offset == 0x30, "FBlueprintInputKeyDelegateBinding::FunctionNameToBind offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
