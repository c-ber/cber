#pragma once
#include "FKey.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslInputKey // Size: 0x20
{
public:
    FKey Key; /* Ofs: 0x0 Size: 0x18 StructProperty TslGame.TslInputKey.Key */
    bool bShift : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslInputKey.bShift */
    bool bCtrl : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 02 BoolProperty TslGame.TslInputKey.bCtrl */
    bool bAlt : 1; /* Ofs: 0x18 Size: 0x1 BitMask: 04 BoolProperty TslGame.TslInputKey.bAlt */
    uint8_t UnknownData19[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslInputKey = sizeof(FTslInputKey); // 32
    static_assert(sizeof(FTslInputKey) == 0x20, "Size of FTslInputKey is not correct.");
	auto constexpr FTslInputKey_Key_Offset = offsetof(FTslInputKey, Key);
	static_assert(FTslInputKey_Key_Offset == 0x0, "FTslInputKey::Key offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
