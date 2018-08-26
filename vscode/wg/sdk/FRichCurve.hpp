#pragma once
#include "FIndexedCurve.hpp"
#include "ERichCurveExtrapolation.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRichCurve // Size: 0x70
 : public FIndexedCurve // Size: 0x58
{
public:
    TEnumAsByte<enum ERichCurveExtrapolation> PreInfinityExtrap; /* Ofs: 0x58 Size: 0x1 ByteProperty Engine.RichCurve.PreInfinityExtrap */
    TEnumAsByte<enum ERichCurveExtrapolation> PostInfinityExtrap; /* Ofs: 0x59 Size: 0x1 ByteProperty Engine.RichCurve.PostInfinityExtrap */
    uint8_t UnknownData5A[0x2];
    float DefaultValue; /* Ofs: 0x5C Size: 0x4 FloatProperty Engine.RichCurve.DefaultValue */
    TArray<struct FRichCurveKey> Keys; /* Ofs: 0x60 Size: 0x10 ArrayProperty Engine.RichCurve.Keys */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRichCurve = sizeof(FRichCurve); // 112
    static_assert(sizeof(FRichCurve) == 0x70, "Size of FRichCurve is not correct.");
	auto constexpr FRichCurve_PreInfinityExtrap_Offset = offsetof(FRichCurve, PreInfinityExtrap);
	static_assert(FRichCurve_PreInfinityExtrap_Offset == 0x58, "FRichCurve::PreInfinityExtrap offset is not 58");
	auto constexpr FRichCurve_PostInfinityExtrap_Offset = offsetof(FRichCurve, PostInfinityExtrap);
	static_assert(FRichCurve_PostInfinityExtrap_Offset == 0x59, "FRichCurve::PostInfinityExtrap offset is not 59");
	auto constexpr FRichCurve_DefaultValue_Offset = offsetof(FRichCurve, DefaultValue);
	static_assert(FRichCurve_DefaultValue_Offset == 0x5c, "FRichCurve::DefaultValue offset is not 5c");
	auto constexpr FRichCurve_Keys_Offset = offsetof(FRichCurve, Keys);
	static_assert(FRichCurve_Keys_Offset == 0x60, "FRichCurve::Keys offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
