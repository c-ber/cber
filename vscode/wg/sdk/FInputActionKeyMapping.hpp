#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputActionKeyMapping // Size: 0x28
{
public:
    FName ActionName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.InputActionKeyMapping.ActionName */
    FKey Key; /* Ofs: 0x8 Size: 0x18 StructProperty Engine.InputActionKeyMapping.Key */
    bool bShift : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.InputActionKeyMapping.bShift */
    bool bCtrl : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 02 BoolProperty Engine.InputActionKeyMapping.bCtrl */
    bool bAlt : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 04 BoolProperty Engine.InputActionKeyMapping.bAlt */
    bool bCmd : 1; /* Ofs: 0x20 Size: 0x1 BitMask: 08 BoolProperty Engine.InputActionKeyMapping.bCmd */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputActionKeyMapping = sizeof(FInputActionKeyMapping); // 40
    static_assert(sizeof(FInputActionKeyMapping) == 0x28, "Size of FInputActionKeyMapping is not correct.");
	auto constexpr FInputActionKeyMapping_ActionName_Offset = offsetof(FInputActionKeyMapping, ActionName);
	static_assert(FInputActionKeyMapping_ActionName_Offset == 0x0, "FInputActionKeyMapping::ActionName offset is not 0");
	auto constexpr FInputActionKeyMapping_Key_Offset = offsetof(FInputActionKeyMapping, Key);
	static_assert(FInputActionKeyMapping_Key_Offset == 0x8, "FInputActionKeyMapping::Key offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
