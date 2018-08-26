#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurveVector2D // Size: 0x18
{
public:
    TArray<struct FInterpCurvePointVector2D> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty CoreUObject.InterpCurveVector2D.Points */
    bool bIsLooped; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.InterpCurveVector2D.bIsLooped */
    uint8_t UnknownData11[0x3];
    float LoopKeyOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty CoreUObject.InterpCurveVector2D.LoopKeyOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurveVector2D = sizeof(FInterpCurveVector2D); // 24
    static_assert(sizeof(FInterpCurveVector2D) == 0x18, "Size of FInterpCurveVector2D is not correct.");
	auto constexpr FInterpCurveVector2D_Points_Offset = offsetof(FInterpCurveVector2D, Points);
	static_assert(FInterpCurveVector2D_Points_Offset == 0x0, "FInterpCurveVector2D::Points offset is not 0");
	auto constexpr FInterpCurveVector2D_LoopKeyOffset_Offset = offsetof(FInterpCurveVector2D, LoopKeyOffset);
	static_assert(FInterpCurveVector2D_LoopKeyOffset_Offset == 0x14, "FInterpCurveVector2D::LoopKeyOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
