#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInterpControlPoint // Size: 0x1C
{
public:
    FVector PositionControlPoint; /* Ofs: 0x0 Size: 0xC StructProperty Engine.InterpControlPoint.PositionControlPoint */
    bool bPositionIsRelative; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.InterpControlPoint.bPositionIsRelative */
    uint8_t UnknownDataD[0xF];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInterpControlPoint = sizeof(FInterpControlPoint); // 28
    static_assert(sizeof(FInterpControlPoint) == 0x1C, "Size of FInterpControlPoint is not correct.");
	auto constexpr FInterpControlPoint_PositionControlPoint_Offset = offsetof(FInterpControlPoint, PositionControlPoint);
	static_assert(FInterpControlPoint_PositionControlPoint_Offset == 0x0, "FInterpControlPoint::PositionControlPoint offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
