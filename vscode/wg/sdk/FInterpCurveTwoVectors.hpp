#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurveTwoVectors // Size: 0x18
{
public:
    TArray<struct FInterpCurvePointTwoVectors> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty CoreUObject.InterpCurveTwoVectors.Points */
    bool bIsLooped; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.InterpCurveTwoVectors.bIsLooped */
    uint8_t UnknownData11[0x3];
    float LoopKeyOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty CoreUObject.InterpCurveTwoVectors.LoopKeyOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurveTwoVectors = sizeof(FInterpCurveTwoVectors); // 24
    static_assert(sizeof(FInterpCurveTwoVectors) == 0x18, "Size of FInterpCurveTwoVectors is not correct.");
	auto constexpr FInterpCurveTwoVectors_Points_Offset = offsetof(FInterpCurveTwoVectors, Points);
	static_assert(FInterpCurveTwoVectors_Points_Offset == 0x0, "FInterpCurveTwoVectors::Points offset is not 0");
	auto constexpr FInterpCurveTwoVectors_LoopKeyOffset_Offset = offsetof(FInterpCurveTwoVectors, LoopKeyOffset);
	static_assert(FInterpCurveTwoVectors_LoopKeyOffset_Offset == 0x14, "FInterpCurveTwoVectors::LoopKeyOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
