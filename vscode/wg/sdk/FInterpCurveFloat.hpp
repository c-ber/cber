#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurveFloat // Size: 0x18
{
public:
    TArray<struct FInterpCurvePointFloat> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty CoreUObject.InterpCurveFloat.Points */
    bool bIsLooped; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.InterpCurveFloat.bIsLooped */
    uint8_t UnknownData11[0x3];
    float LoopKeyOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty CoreUObject.InterpCurveFloat.LoopKeyOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurveFloat = sizeof(FInterpCurveFloat); // 24
    static_assert(sizeof(FInterpCurveFloat) == 0x18, "Size of FInterpCurveFloat is not correct.");
	auto constexpr FInterpCurveFloat_Points_Offset = offsetof(FInterpCurveFloat, Points);
	static_assert(FInterpCurveFloat_Points_Offset == 0x0, "FInterpCurveFloat::Points offset is not 0");
	auto constexpr FInterpCurveFloat_LoopKeyOffset_Offset = offsetof(FInterpCurveFloat, LoopKeyOffset);
	static_assert(FInterpCurveFloat_LoopKeyOffset_Offset == 0x14, "FInterpCurveFloat::LoopKeyOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
