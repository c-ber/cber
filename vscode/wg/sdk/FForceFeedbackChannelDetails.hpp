#pragma once
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FForceFeedbackChannelDetails // Size: 0x80
{
public:
    bool bAffectsLeftLarge : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.ForceFeedbackChannelDetails.bAffectsLeftLarge */
    bool bAffectsLeftSmall : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.ForceFeedbackChannelDetails.bAffectsLeftSmall */
    bool bAffectsRightLarge : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.ForceFeedbackChannelDetails.bAffectsRightLarge */
    bool bAffectsRightSmall : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.ForceFeedbackChannelDetails.bAffectsRightSmall */
    uint8_t UnknownData1[0x7];
    FRuntimeFloatCurve Curve; /* Ofs: 0x8 Size: 0x78 StructProperty Engine.ForceFeedbackChannelDetails.Curve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFForceFeedbackChannelDetails = sizeof(FForceFeedbackChannelDetails); // 128
    static_assert(sizeof(FForceFeedbackChannelDetails) == 0x80, "Size of FForceFeedbackChannelDetails is not correct.");
	auto constexpr FForceFeedbackChannelDetails_Curve_Offset = offsetof(FForceFeedbackChannelDetails, Curve);
	static_assert(FForceFeedbackChannelDetails_Curve_Offset == 0x8, "FForceFeedbackChannelDetails::Curve offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
