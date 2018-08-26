#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSkinMaterialData // Size: 0x10
{
public:
    FName MaterialSlotName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.SkinMaterialData.MaterialSlotName */
    ExternalPtr<struct UMaterialInstance> Material; /* Ofs: 0x8 Size: 0x8 ObjectProperty TslGame.SkinMaterialData.Material */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSkinMaterialData = sizeof(FSkinMaterialData); // 16
    static_assert(sizeof(FSkinMaterialData) == 0x10, "Size of FSkinMaterialData is not correct.");
	auto constexpr FSkinMaterialData_MaterialSlotName_Offset = offsetof(FSkinMaterialData, MaterialSlotName);
	static_assert(FSkinMaterialData_MaterialSlotName_Offset == 0x0, "FSkinMaterialData::MaterialSlotName offset is not 0");
	auto constexpr FSkinMaterialData_Material_Offset = offsetof(FSkinMaterialData, Material);
	static_assert(FSkinMaterialData_Material_Offset == 0x8, "FSkinMaterialData::Material offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
