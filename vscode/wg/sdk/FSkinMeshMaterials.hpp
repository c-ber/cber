#pragma once
#include "ESkinApplicationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinMeshMaterials // Size: 0x18
{
public:
    TEnumAsByte<enum ESkinApplicationType> SkinApplicationType; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.SkinMeshMaterials.SkinApplicationType */
    uint8_t UnknownData1[0x7];
    TArray<struct FSkinMaterialData> SkinMaterials; /* Ofs: 0x8 Size: 0x10 ArrayProperty TslGame.SkinMeshMaterials.SkinMaterials */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinMeshMaterials = sizeof(FSkinMeshMaterials); // 24
    static_assert(sizeof(FSkinMeshMaterials) == 0x18, "Size of FSkinMeshMaterials is not correct.");
	auto constexpr FSkinMeshMaterials_SkinApplicationType_Offset = offsetof(FSkinMeshMaterials, SkinApplicationType);
	static_assert(FSkinMeshMaterials_SkinApplicationType_Offset == 0x0, "FSkinMeshMaterials::SkinApplicationType offset is not 0");
	auto constexpr FSkinMeshMaterials_SkinMaterials_Offset = offsetof(FSkinMeshMaterials, SkinMaterials);
	static_assert(FSkinMeshMaterials_SkinMaterials_Offset == 0x8, "FSkinMeshMaterials::SkinMaterials offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
