#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurveLinearColor // Size: 0x18
{
public:
    TArray<struct FInterpCurvePointLinearColor> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty CoreUObject.InterpCurveLinearColor.Points */
    bool bIsLooped; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.InterpCurveLinearColor.bIsLooped */
    uint8_t UnknownData11[0x3];
    float LoopKeyOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty CoreUObject.InterpCurveLinearColor.LoopKeyOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurveLinearColor = sizeof(FInterpCurveLinearColor); // 24
    static_assert(sizeof(FInterpCurveLinearColor) == 0x18, "Size of FInterpCurveLinearColor is not correct.");
	auto constexpr FInterpCurveLinearColor_Points_Offset = offsetof(FInterpCurveLinearColor, Points);
	static_assert(FInterpCurveLinearColor_Points_Offset == 0x0, "FInterpCurveLinearColor::Points offset is not 0");
	auto constexpr FInterpCurveLinearColor_LoopKeyOffset_Offset = offsetof(FInterpCurveLinearColor, LoopKeyOffset);
	static_assert(FInterpCurveLinearColor_LoopKeyOffset_Offset == 0x14, "FInterpCurveLinearColor::LoopKeyOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
