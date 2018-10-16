#pragma once
#include "EInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlockInput_Action // Size: 0x10
{
public:
    FName ActionName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.BlockInput_Action.ActionName */
    TEnumAsByte<enum EInputEvent> KeyEvent; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.BlockInput_Action.KeyEvent */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlockInput_Action = sizeof(FBlockInput_Action); // 16
    static_assert(sizeof(FBlockInput_Action) == 0x10, "Size of FBlockInput_Action is not correct.");
	auto constexpr FBlockInput_Action_ActionName_Offset = offsetof(FBlockInput_Action, ActionName);
	static_assert(FBlockInput_Action_ActionName_Offset == 0x0, "FBlockInput_Action::ActionName offset is not 0");
	auto constexpr FBlockInput_Action_KeyEvent_Offset = offsetof(FBlockInput_Action, KeyEvent);
	static_assert(FBlockInput_Action_KeyEvent_Offset == 0x8, "FBlockInput_Action::KeyEvent offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
