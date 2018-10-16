#pragma once
#include "ETextShapingMethod.hpp"
#include "ETextFlowDirection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FShapedTextOptions // Size: 0x8
{
public:
    bool bOverride_TextShapingMethod : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty UMG.ShapedTextOptions.bOverride_TextShapingMethod */
    bool bOverride_TextFlowDirection : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty UMG.ShapedTextOptions.bOverride_TextFlowDirection */
    uint8_t UnknownData1[0x3];
    TEnumAsByte<enum ETextShapingMethod> TextShapingMethod; /* Ofs: 0x4 Size: 0x1 EnumProperty UMG.ShapedTextOptions.TextShapingMethod */
    TEnumAsByte<enum ETextFlowDirection> TextFlowDirection; /* Ofs: 0x5 Size: 0x1 EnumProperty UMG.ShapedTextOptions.TextFlowDirection */
    uint8_t UnknownData6[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFShapedTextOptions = sizeof(FShapedTextOptions); // 8
    static_assert(sizeof(FShapedTextOptions) == 0x8, "Size of FShapedTextOptions is not correct.");
	auto constexpr FShapedTextOptions_TextShapingMethod_Offset = offsetof(FShapedTextOptions, TextShapingMethod);
	static_assert(FShapedTextOptions_TextShapingMethod_Offset == 0x4, "FShapedTextOptions::TextShapingMethod offset is not 4");
	auto constexpr FShapedTextOptions_TextFlowDirection_Offset = offsetof(FShapedTextOptions, TextFlowDirection);
	static_assert(FShapedTextOptions_TextFlowDirection_Offset == 0x5, "FShapedTextOptions::TextFlowDirection offset is not 5");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
