#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlueprintInputDelegateBinding // Size: 0x4
{
public:
    bool bConsumeInput : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.BlueprintInputDelegateBinding.bConsumeInput */
    bool bExecuteWhenPaused : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.BlueprintInputDelegateBinding.bExecuteWhenPaused */
    bool bOverrideParentBinding : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.BlueprintInputDelegateBinding.bOverrideParentBinding */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlueprintInputDelegateBinding = sizeof(FBlueprintInputDelegateBinding); // 4
    static_assert(sizeof(FBlueprintInputDelegateBinding) == 0x4, "Size of FBlueprintInputDelegateBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
