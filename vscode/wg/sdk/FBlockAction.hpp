#pragma once
#include "EInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlockAction // Size: 0x10
{
public:
    FName ActionName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.BlockAction.ActionName */
    TEnumAsByte<enum EInputEvent> KeyEvent; /* Ofs: 0x8 Size: 0x1 ByteProperty TslGame.BlockAction.KeyEvent */
    uint8_t UnknownData9[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlockAction = sizeof(FBlockAction); // 16
    static_assert(sizeof(FBlockAction) == 0x10, "Size of FBlockAction is not correct.");
	auto constexpr FBlockAction_ActionName_Offset = offsetof(FBlockAction, ActionName);
	static_assert(FBlockAction_ActionName_Offset == 0x0, "FBlockAction::ActionName offset is not 0");
	auto constexpr FBlockAction_KeyEvent_Offset = offsetof(FBlockAction, KeyEvent);
	static_assert(FBlockAction_KeyEvent_Offset == 0x8, "FBlockAction::KeyEvent offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
