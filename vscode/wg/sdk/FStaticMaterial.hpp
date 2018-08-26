#pragma once
#include "FMeshUVChannelInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStaticMaterial // Size: 0x28
{
public:
    ExternalPtr<struct UMaterialInterface> MaterialInterface; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.StaticMaterial.MaterialInterface */
    FName MaterialSlotName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.StaticMaterial.MaterialSlotName */
    FMeshUVChannelInfo UVChannelData; /* Ofs: 0x10 Size: 0x14 StructProperty Engine.StaticMaterial.UVChannelData */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStaticMaterial = sizeof(FStaticMaterial); // 40
    static_assert(sizeof(FStaticMaterial) == 0x28, "Size of FStaticMaterial is not correct.");
	auto constexpr FStaticMaterial_MaterialInterface_Offset = offsetof(FStaticMaterial, MaterialInterface);
	static_assert(FStaticMaterial_MaterialInterface_Offset == 0x0, "FStaticMaterial::MaterialInterface offset is not 0");
	auto constexpr FStaticMaterial_MaterialSlotName_Offset = offsetof(FStaticMaterial, MaterialSlotName);
	static_assert(FStaticMaterial_MaterialSlotName_Offset == 0x8, "FStaticMaterial::MaterialSlotName offset is not 8");
	auto constexpr FStaticMaterial_UVChannelData_Offset = offsetof(FStaticMaterial, UVChannelData);
	static_assert(FStaticMaterial_UVChannelData_Offset == 0x10, "FStaticMaterial::UVChannelData offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
