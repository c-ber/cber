#pragma once
#include "EColorBlindType.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FColorBlindColorData // Size: 0x14
{
public:
    TEnumAsByte<enum EColorBlindType> Type; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.ColorBlindColorData.Type */
    uint8_t UnknownData1[0x3];
    FLinearColor Color; /* Ofs: 0x4 Size: 0x10 StructProperty TslGame.ColorBlindColorData.Color */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFColorBlindColorData = sizeof(FColorBlindColorData); // 20
    static_assert(sizeof(FColorBlindColorData) == 0x14, "Size of FColorBlindColorData is not correct.");
	auto constexpr FColorBlindColorData_Type_Offset = offsetof(FColorBlindColorData, Type);
	static_assert(FColorBlindColorData_Type_Offset == 0x0, "FColorBlindColorData::Type offset is not 0");
	auto constexpr FColorBlindColorData_Color_Offset = offsetof(FColorBlindColorData, Color);
	static_assert(FColorBlindColorData_Color_Offset == 0x4, "FColorBlindColorData::Color offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
