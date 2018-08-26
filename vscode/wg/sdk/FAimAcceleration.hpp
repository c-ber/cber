#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAimAcceleration // Size: 0x8
{
public:
    ExternalPtr<struct UCurveFloat> RampUpTimeForTargetingCurve; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.AimAcceleration.RampUpTimeForTargetingCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAimAcceleration = sizeof(FAimAcceleration); // 8
    static_assert(sizeof(FAimAcceleration) == 0x8, "Size of FAimAcceleration is not correct.");
	auto constexpr FAimAcceleration_RampUpTimeForTargetingCurve_Offset = offsetof(FAimAcceleration, RampUpTimeForTargetingCurve);
	static_assert(FAimAcceleration_RampUpTimeForTargetingCurve_Offset == 0x0, "FAimAcceleration::RampUpTimeForTargetingCurve offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
