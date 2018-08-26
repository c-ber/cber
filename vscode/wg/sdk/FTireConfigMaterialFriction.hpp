#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTireConfigMaterialFriction // Size: 0x10
{
public:
    ExternalPtr<struct UPhysicalMaterial> PhysicalMaterial; /* Ofs: 0x0 Size: 0x8 ObjectProperty PhysXVehicles.TireConfigMaterialFriction.PhysicalMaterial */
    float FrictionScale; /* Ofs: 0x8 Size: 0x4 FloatProperty PhysXVehicles.TireConfigMaterialFriction.FrictionScale */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTireConfigMaterialFriction = sizeof(FTireConfigMaterialFriction); // 16
    static_assert(sizeof(FTireConfigMaterialFriction) == 0x10, "Size of FTireConfigMaterialFriction is not correct.");
	auto constexpr FTireConfigMaterialFriction_PhysicalMaterial_Offset = offsetof(FTireConfigMaterialFriction, PhysicalMaterial);
	static_assert(FTireConfigMaterialFriction_PhysicalMaterial_Offset == 0x0, "FTireConfigMaterialFriction::PhysicalMaterial offset is not 0");
	auto constexpr FTireConfigMaterialFriction_FrictionScale_Offset = offsetof(FTireConfigMaterialFriction, FrictionScale);
	static_assert(FTireConfigMaterialFriction_FrictionScale_Offset == 0x8, "FTireConfigMaterialFriction::FrictionScale offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
