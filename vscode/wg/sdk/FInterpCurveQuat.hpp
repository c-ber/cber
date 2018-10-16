#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpCurveQuat // Size: 0x18
{
public:
    TArray<struct FInterpCurvePointQuat> Points; /* Ofs: 0x0 Size: 0x10 ArrayProperty CoreUObject.InterpCurveQuat.Points */
    bool bIsLooped; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CoreUObject.InterpCurveQuat.bIsLooped */
    uint8_t UnknownData11[0x3];
    float LoopKeyOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty CoreUObject.InterpCurveQuat.LoopKeyOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpCurveQuat = sizeof(FInterpCurveQuat); // 24
    static_assert(sizeof(FInterpCurveQuat) == 0x18, "Size of FInterpCurveQuat is not correct.");
	auto constexpr FInterpCurveQuat_Points_Offset = offsetof(FInterpCurveQuat, Points);
	static_assert(FInterpCurveQuat_Points_Offset == 0x0, "FInterpCurveQuat::Points offset is not 0");
	auto constexpr FInterpCurveQuat_LoopKeyOffset_Offset = offsetof(FInterpCurveQuat, LoopKeyOffset);
	static_assert(FInterpCurveQuat_LoopKeyOffset_Offset == 0x14, "FInterpCurveQuat::LoopKeyOffset offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
