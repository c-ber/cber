#pragma once
#include "EWalkableSlopeBehavior.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWalkableSlopeOverride // Size: 0x10
{
public:
    TEnumAsByte<enum EWalkableSlopeBehavior> WalkableSlopeBehavior; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.WalkableSlopeOverride.WalkableSlopeBehavior */
    uint8_t UnknownData1[0x3];
    float WalkableSlopeAngle; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.WalkableSlopeOverride.WalkableSlopeAngle */
    uint8_t UnknownData8[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWalkableSlopeOverride = sizeof(FWalkableSlopeOverride); // 16
    static_assert(sizeof(FWalkableSlopeOverride) == 0x10, "Size of FWalkableSlopeOverride is not correct.");
	auto constexpr FWalkableSlopeOverride_WalkableSlopeBehavior_Offset = offsetof(FWalkableSlopeOverride, WalkableSlopeBehavior);
	static_assert(FWalkableSlopeOverride_WalkableSlopeBehavior_Offset == 0x0, "FWalkableSlopeOverride::WalkableSlopeBehavior offset is not 0");
	auto constexpr FWalkableSlopeOverride_WalkableSlopeAngle_Offset = offsetof(FWalkableSlopeOverride, WalkableSlopeAngle);
	static_assert(FWalkableSlopeOverride_WalkableSlopeAngle_Offset == 0x4, "FWalkableSlopeOverride::WalkableSlopeAngle offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
