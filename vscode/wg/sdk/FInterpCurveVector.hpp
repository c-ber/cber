#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurveVector // Size: 0x18
{
public:
    TArray<struct FInterpCurvePointVector> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty CoreUObject.InterpCurveVector.Points */
    bool bIsLooped; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.InterpCurveVector.bIsLooped */
    uint8_t UnknownData11[0x3];
    float LoopKeyOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty CoreUObject.InterpCurveVector.LoopKeyOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurveVector = sizeof(FInterpCurveVector); // 24
    static_assert(sizeof(FInterpCurveVector) == 0x18, "Size of FInterpCurveVector is not correct.");
	auto constexpr FInterpCurveVector_Points_Offset = offsetof(FInterpCurveVector, Points);
	static_assert(FInterpCurveVector_Points_Offset == 0x0, "FInterpCurveVector::Points offset is not 0");
	auto constexpr FInterpCurveVector_LoopKeyOffset_Offset = offsetof(FInterpCurveVector, LoopKeyOffset);
	static_assert(FInterpCurveVector_LoopKeyOffset_Offset == 0x14, "FInterpCurveVector::LoopKeyOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
