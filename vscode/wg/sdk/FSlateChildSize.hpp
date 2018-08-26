#pragma once
#include "ESlateSizeRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlateChildSize // Size: 0x8
{
public:
    float Value; /* Ofs: 0x0 Size: 0x4 FloatProperty UMG.SlateChildSize.Value */
    TEnumAsByte<enum ESlateSizeRule> SizeRule; /* Ofs: 0x4 Size: 0x1 ByteProperty UMG.SlateChildSize.SizeRule */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlateChildSize = sizeof(FSlateChildSize); // 8
    static_assert(sizeof(FSlateChildSize) == 0x8, "Size of FSlateChildSize is not correct.");
	auto constexpr FSlateChildSize_Value_Offset = offsetof(FSlateChildSize, Value);
	static_assert(FSlateChildSize_Value_Offset == 0x0, "FSlateChildSize::Value offset is not 0");
	auto constexpr FSlateChildSize_SizeRule_Offset = offsetof(FSlateChildSize, SizeRule);
	static_assert(FSlateChildSize_SizeRule_Offset == 0x4, "FSlateChildSize::SizeRule offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
