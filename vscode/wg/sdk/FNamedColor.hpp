#pragma once
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedColor // Size: 0x10
{
public:
    FColor Value; /* Ofs: 0x0 Size: 0x4 StructProperty Engine.NamedColor.Value */
    uint8_t UnknownData4[0x4];
    FName Name; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.NamedColor.Name */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedColor = sizeof(FNamedColor); // 16
    static_assert(sizeof(FNamedColor) == 0x10, "Size of FNamedColor is not correct.");
	auto constexpr FNamedColor_Value_Offset = offsetof(FNamedColor, Value);
	static_assert(FNamedColor_Value_Offset == 0x0, "FNamedColor::Value offset is not 0");
	auto constexpr FNamedColor_Name_Offset = offsetof(FNamedColor, Name);
	static_assert(FNamedColor_Name_Offset == 0x8, "FNamedColor::Name offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
