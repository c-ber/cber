#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGeneratedTexture // Size: 0x20
{
public:
    int32_t ID; /* Ofs: 0x0 Size: 0x4 IntProperty CustomizableObject.GeneratedTexture.ID */
    uint8_t UnknownData4[0x4];
    FString Name; /* Ofs: 0x8 Size: 0x10 StrProperty CustomizableObject.GeneratedTexture.Name */
    ExternalPtr<struct UTexture2D> Texture; /* Ofs: 0x18 Size: 0x8 ObjectProperty CustomizableObject.GeneratedTexture.Texture */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGeneratedTexture = sizeof(FGeneratedTexture); // 32
    static_assert(sizeof(FGeneratedTexture) == 0x20, "Size of FGeneratedTexture is not correct.");
	auto constexpr FGeneratedTexture_ID_Offset = offsetof(FGeneratedTexture, ID);
	static_assert(FGeneratedTexture_ID_Offset == 0x0, "FGeneratedTexture::ID offset is not 0");
	auto constexpr FGeneratedTexture_Name_Offset = offsetof(FGeneratedTexture, Name);
	static_assert(FGeneratedTexture_Name_Offset == 0x8, "FGeneratedTexture::Name offset is not 8");
	auto constexpr FGeneratedTexture_Texture_Offset = offsetof(FGeneratedTexture, Texture);
	static_assert(FGeneratedTexture_Texture_Offset == 0x18, "FGeneratedTexture::Texture offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
