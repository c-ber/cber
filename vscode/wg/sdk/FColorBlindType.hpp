#pragma once
#include "EColorBlindType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FColorBlindType // Size: 0x20
{
public:
    TEnumAsByte<enum EColorBlindType> Key; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.ColorBlindType.Key */
    uint8_t UnknownData1[0x7];
    FText DisplayName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.ColorBlindType.DisplayName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFColorBlindType = sizeof(FColorBlindType); // 32
    static_assert(sizeof(FColorBlindType) == 0x20, "Size of FColorBlindType is not correct.");
	auto constexpr FColorBlindType_Key_Offset = offsetof(FColorBlindType, Key);
	static_assert(FColorBlindType_Key_Offset == 0x0, "FColorBlindType::Key offset is not 0");
	auto constexpr FColorBlindType_DisplayName_Offset = offsetof(FColorBlindType, DisplayName);
	static_assert(FColorBlindType_DisplayName_Offset == 0x8, "FColorBlindType::DisplayName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
