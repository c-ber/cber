#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPhysicalMaterialPenetrationConfig // Size: 0x8
{
public:
    float Resistanse; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.PhysicalMaterialPenetrationConfig.Resistanse */
    float Deflection; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.PhysicalMaterialPenetrationConfig.Deflection */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPhysicalMaterialPenetrationConfig = sizeof(FPhysicalMaterialPenetrationConfig); // 8
    static_assert(sizeof(FPhysicalMaterialPenetrationConfig) == 0x8, "Size of FPhysicalMaterialPenetrationConfig is not correct.");
	auto constexpr FPhysicalMaterialPenetrationConfig_Resistanse_Offset = offsetof(FPhysicalMaterialPenetrationConfig, Resistanse);
	static_assert(FPhysicalMaterialPenetrationConfig_Resistanse_Offset == 0x0, "FPhysicalMaterialPenetrationConfig::Resistanse offset is not 0");
	auto constexpr FPhysicalMaterialPenetrationConfig_Deflection_Offset = offsetof(FPhysicalMaterialPenetrationConfig, Deflection);
	static_assert(FPhysicalMaterialPenetrationConfig_Deflection_Offset == 0x4, "FPhysicalMaterialPenetrationConfig::Deflection offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
