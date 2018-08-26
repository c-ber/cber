#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizedMaterialTexture2D // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty CustomizableObject.CustomizedMaterialTexture2D.Name */
    ExternalPtr<struct UTexture2D> Texture; /* Ofs: 0x8 Size: 0x8 ObjectProperty CustomizableObject.CustomizedMaterialTexture2D.Texture */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizedMaterialTexture2D = sizeof(FCustomizedMaterialTexture2D); // 16
    static_assert(sizeof(FCustomizedMaterialTexture2D) == 0x10, "Size of FCustomizedMaterialTexture2D is not correct.");
	auto constexpr FCustomizedMaterialTexture2D_Name_Offset = offsetof(FCustomizedMaterialTexture2D, Name);
	static_assert(FCustomizedMaterialTexture2D_Name_Offset == 0x0, "FCustomizedMaterialTexture2D::Name offset is not 0");
	auto constexpr FCustomizedMaterialTexture2D_Texture_Offset = offsetof(FCustomizedMaterialTexture2D, Texture);
	static_assert(FCustomizedMaterialTexture2D_Texture_Offset == 0x8, "FCustomizedMaterialTexture2D::Texture offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
