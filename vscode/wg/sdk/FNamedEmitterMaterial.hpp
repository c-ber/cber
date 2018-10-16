#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedEmitterMaterial // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.NamedEmitterMaterial.Name */
    ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.NamedEmitterMaterial.Material */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedEmitterMaterial = sizeof(FNamedEmitterMaterial); // 16
    static_assert(sizeof(FNamedEmitterMaterial) == 0x10, "Size of FNamedEmitterMaterial is not correct.");
	auto constexpr FNamedEmitterMaterial_Name_Offset = offsetof(FNamedEmitterMaterial, Name);
	static_assert(FNamedEmitterMaterial_Name_Offset == 0x0, "FNamedEmitterMaterial::Name offset is not 0");
	auto constexpr FNamedEmitterMaterial_Material_Offset = offsetof(FNamedEmitterMaterial, Material);
	static_assert(FNamedEmitterMaterial_Material_Offset == 0x8, "FNamedEmitterMaterial::Material offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
