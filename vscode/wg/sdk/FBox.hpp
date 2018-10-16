#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBox // Size: 0x1C
{
public:
    FVector Min; /* Ofs: 0x0 Size: 0xC StructProperty CoreUObject.Box.Min */
    FVector Max; /* Ofs: 0xC Size: 0xC StructProperty CoreUObject.Box.Max */
    uint8_t IsValid; /* Ofs: 0x18 Size: 0x1 ByteProperty CoreUObject.Box.IsValid */
    uint8_t UnknownData19[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBox = sizeof(FBox); // 28
    static_assert(sizeof(FBox) == 0x1C, "Size of FBox is not correct.");
	auto constexpr FBox_Min_Offset = offsetof(FBox, Min);
	static_assert(FBox_Min_Offset == 0x0, "FBox::Min offset is not 0");
	auto constexpr FBox_Max_Offset = offsetof(FBox, Max);
	static_assert(FBox_Max_Offset == 0xc, "FBox::Max offset is not c");
	auto constexpr FBox_IsValid_Offset = offsetof(FBox, IsValid);
	static_assert(FBox_IsValid_Offset == 0x18, "FBox::IsValid offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
