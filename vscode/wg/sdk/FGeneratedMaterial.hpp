#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeneratedMaterial // Size: 0x10
{
public:
    TArray<struct FGeneratedTexture> Textures; /* Ofs: 0x0 Size: 0x10 ArrayProperty CustomizableObject.GeneratedMaterial.Textures */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeneratedMaterial = sizeof(FGeneratedMaterial); // 16
    static_assert(sizeof(FGeneratedMaterial) == 0x10, "Size of FGeneratedMaterial is not correct.");
	auto constexpr FGeneratedMaterial_Textures_Offset = offsetof(FGeneratedMaterial, Textures);
	static_assert(FGeneratedMaterial_Textures_Offset == 0x0, "FGeneratedMaterial::Textures offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
