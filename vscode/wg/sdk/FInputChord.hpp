#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInputChord // Size: 0x20
{
public:
    FKey Key; /* Ofs: 0x0 Size: 0x18 StructProperty Slate.InputChord.Key */
    bool bShift : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Slate.InputChord.bShift */
    bool bCtrl : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 02 BoolProperty Slate.InputChord.bCtrl */
    bool bAlt : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 04 BoolProperty Slate.InputChord.bAlt */
    bool bCmd : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 08 BoolProperty Slate.InputChord.bCmd */
    uint8_t UnknownData19[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInputChord = sizeof(FInputChord); // 32
    static_assert(sizeof(FInputChord) == 0x20, "Size of FInputChord is not correct.");
	auto constexpr FInputChord_Key_Offset = offsetof(FInputChord, Key);
	static_assert(FInputChord_Key_Offset == 0x0, "FInputChord::Key offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
