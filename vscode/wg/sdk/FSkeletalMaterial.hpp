#pragma once
#include "FMeshUVChannelInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkeletalMaterial // Size: 0x30
{
public:
    ExternalPtr<struct UMaterialInterface> MaterialInterface; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.SkeletalMaterial.MaterialInterface */
    bool bEnableShadowCasting; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMaterial.bEnableShadowCasting */
    bool bRecomputeTangent; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty Engine.SkeletalMaterial.bRecomputeTangent */
    uint8_t UnknownDataA[0x6];
    FName MaterialSlotName; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.SkeletalMaterial.MaterialSlotName */
    FMeshUVChannelInfo UVChannelData; /* Ofs: 0x18 Size: 0x14 StructProperty Engine.SkeletalMaterial.UVChannelData */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkeletalMaterial = sizeof(FSkeletalMaterial); // 48
    static_assert(sizeof(FSkeletalMaterial) == 0x30, "Size of FSkeletalMaterial is not correct.");
	auto constexpr FSkeletalMaterial_MaterialInterface_Offset = offsetof(FSkeletalMaterial, MaterialInterface);
	static_assert(FSkeletalMaterial_MaterialInterface_Offset == 0x0, "FSkeletalMaterial::MaterialInterface offset is not 0");
	auto constexpr FSkeletalMaterial_MaterialSlotName_Offset = offsetof(FSkeletalMaterial, MaterialSlotName);
	static_assert(FSkeletalMaterial_MaterialSlotName_Offset == 0x10, "FSkeletalMaterial::MaterialSlotName offset is not 10");
	auto constexpr FSkeletalMaterial_UVChannelData_Offset = offsetof(FSkeletalMaterial, UVChannelData);
	static_assert(FSkeletalMaterial_UVChannelData_Offset == 0x18, "FSkeletalMaterial::UVChannelData offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
