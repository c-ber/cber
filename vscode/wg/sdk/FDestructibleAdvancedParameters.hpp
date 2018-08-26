#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDestructibleAdvancedParameters // Size: 0x10
{
public:
    float DamageCap; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.DestructibleAdvancedParameters.DamageCap */
    float ImpactVelocityThreshold; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.DestructibleAdvancedParameters.ImpactVelocityThreshold */
    float MaxChunkSpeed; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.DestructibleAdvancedParameters.MaxChunkSpeed */
    float FractureImpulseScale; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.DestructibleAdvancedParameters.FractureImpulseScale */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDestructibleAdvancedParameters = sizeof(FDestructibleAdvancedParameters); // 16
    static_assert(sizeof(FDestructibleAdvancedParameters) == 0x10, "Size of FDestructibleAdvancedParameters is not correct.");
	auto constexpr FDestructibleAdvancedParameters_DamageCap_Offset = offsetof(FDestructibleAdvancedParameters, DamageCap);
	static_assert(FDestructibleAdvancedParameters_DamageCap_Offset == 0x0, "FDestructibleAdvancedParameters::DamageCap offset is not 0");
	auto constexpr FDestructibleAdvancedParameters_ImpactVelocityThreshold_Offset = offsetof(FDestructibleAdvancedParameters, ImpactVelocityThreshold);
	static_assert(FDestructibleAdvancedParameters_ImpactVelocityThreshold_Offset == 0x4, "FDestructibleAdvancedParameters::ImpactVelocityThreshold offset is not 4");
	auto constexpr FDestructibleAdvancedParameters_MaxChunkSpeed_Offset = offsetof(FDestructibleAdvancedParameters, MaxChunkSpeed);
	static_assert(FDestructibleAdvancedParameters_MaxChunkSpeed_Offset == 0x8, "FDestructibleAdvancedParameters::MaxChunkSpeed offset is not 8");
	auto constexpr FDestructibleAdvancedParameters_FractureImpulseScale_Offset = offsetof(FDestructibleAdvancedParameters, FractureImpulseScale);
	static_assert(FDestructibleAdvancedParameters_FractureImpulseScale_Offset == 0xc, "FDestructibleAdvancedParameters::FractureImpulseScale offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
