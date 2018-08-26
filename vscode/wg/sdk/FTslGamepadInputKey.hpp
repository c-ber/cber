#pragma once
#include "FKey.hpp"
#include "EGamepadInputResponseTypes.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslGamepadInputKey // Size: 0x28
{
public:
    FKey Key; /* Ofs: 0x0 Size: 0x18 StructProperty TslGame.TslGamepadInputKey.Key */
    TEnumAsByte<enum EGamepadInputResponseTypes> ResponseType; /* Ofs: 0x18 Size: 0x1 EnumProperty TslGame.TslGamepadInputKey.ResponseType */
    uint8_t UnknownData19[0x3];
    float ResponseTime; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.TslGamepadInputKey.ResponseTime */
    bool bBlockDuplicatedKeyAction; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslGamepadInputKey.bBlockDuplicatedKeyAction */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslGamepadInputKey = sizeof(FTslGamepadInputKey); // 40
    static_assert(sizeof(FTslGamepadInputKey) == 0x28, "Size of FTslGamepadInputKey is not correct.");
	auto constexpr FTslGamepadInputKey_Key_Offset = offsetof(FTslGamepadInputKey, Key);
	static_assert(FTslGamepadInputKey_Key_Offset == 0x0, "FTslGamepadInputKey::Key offset is not 0");
	auto constexpr FTslGamepadInputKey_ResponseType_Offset = offsetof(FTslGamepadInputKey, ResponseType);
	static_assert(FTslGamepadInputKey_ResponseType_Offset == 0x18, "FTslGamepadInputKey::ResponseType offset is not 18");
	auto constexpr FTslGamepadInputKey_ResponseTime_Offset = offsetof(FTslGamepadInputKey, ResponseTime);
	static_assert(FTslGamepadInputKey_ResponseTime_Offset == 0x1c, "FTslGamepadInputKey::ResponseTime offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
