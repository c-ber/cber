#pragma once
#include "FHitResult.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFindFloorResult // Size: 0x98
{
public:
    bool bBlockingHit : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.FindFloorResult.bBlockingHit */
    bool bWalkableFloor : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.FindFloorResult.bWalkableFloor */
    bool bLineTrace : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.FindFloorResult.bLineTrace */
    uint8_t UnknownData1[0x3];
    float FloorDist; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.FindFloorResult.FloorDist */
    float LineDist; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.FindFloorResult.LineDist */
    uint8_t UnknownDataC[0x4];
    FHitResult HitResult; /* Ofs: 0x10 Size: 0x88 StructProperty Engine.FindFloorResult.HitResult */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFindFloorResult = sizeof(FFindFloorResult); // 152
    static_assert(sizeof(FFindFloorResult) == 0x98, "Size of FFindFloorResult is not correct.");
	auto constexpr FFindFloorResult_FloorDist_Offset = offsetof(FFindFloorResult, FloorDist);
	static_assert(FFindFloorResult_FloorDist_Offset == 0x4, "FFindFloorResult::FloorDist offset is not 4");
	auto constexpr FFindFloorResult_LineDist_Offset = offsetof(FFindFloorResult, LineDist);
	static_assert(FFindFloorResult_LineDist_Offset == 0x8, "FFindFloorResult::LineDist offset is not 8");
	auto constexpr FFindFloorResult_HitResult_Offset = offsetof(FFindFloorResult, HitResult);
	static_assert(FFindFloorResult_HitResult_Offset == 0x10, "FFindFloorResult::HitResult offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
