#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKeyBind // Size: 0x30
{
public:
    FKey Key; /* Ofs: 0x0 Size: 0x18 StructProperty Engine.KeyBind.Key */
    FString Command; /* Ofs: 0x18 Size: 0x10 StrProperty Engine.KeyBind.Command */
    bool Control : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.KeyBind.Control */
    bool Shift : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 02 BoolProperty Engine.KeyBind.Shift */
    bool Alt : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 04 BoolProperty Engine.KeyBind.Alt */
    bool Cmd : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 08 BoolProperty Engine.KeyBind.Cmd */
    bool bIgnoreCtrl : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 10 BoolProperty Engine.KeyBind.bIgnoreCtrl */
    bool bIgnoreShift : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 20 BoolProperty Engine.KeyBind.bIgnoreShift */
    bool bIgnoreAlt : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 40 BoolProperty Engine.KeyBind.bIgnoreAlt */
    bool bIgnoreCmd : 1; /* Ofs: 0x28 Size: 0x1 BitMask: 80 BoolProperty Engine.KeyBind.bIgnoreCmd */
    bool bDisabled; /* Ofs: 0x29 Size: 0x1 BitMask: 01 BoolProperty Engine.KeyBind.bDisabled */
    uint8_t UnknownData2A[0x6];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKeyBind = sizeof(FKeyBind); // 48
    static_assert(sizeof(FKeyBind) == 0x30, "Size of FKeyBind is not correct.");
	auto constexpr FKeyBind_Key_Offset = offsetof(FKeyBind, Key);
	static_assert(FKeyBind_Key_Offset == 0x0, "FKeyBind::Key offset is not 0");
	auto constexpr FKeyBind_Command_Offset = offsetof(FKeyBind, Command);
	static_assert(FKeyBind_Command_Offset == 0x18, "FKeyBind::Command offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
