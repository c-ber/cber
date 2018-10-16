#pragma once
#include "FMatrix.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpriteInstanceData // Size: 0x50
{
public:
    FMatrix Transform; /* Ofs: 0x0 Size: 0x40 StructProperty Paper2D.SpriteInstanceData.Transform */
    ExternalPtr<struct UPaperSprite> SourceSprite; /* Ofs: 0x40 Size: 0x8 ObjectProperty Paper2D.SpriteInstanceData.SourceSprite */
    FColor VertexColor; /* Ofs: 0x48 Size: 0x4 StructProperty Paper2D.SpriteInstanceData.VertexColor */
    int32_t MaterialIndex; /* Ofs: 0x4C Size: 0x4 IntProperty Paper2D.SpriteInstanceData.MaterialIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpriteInstanceData = sizeof(FSpriteInstanceData); // 80
    static_assert(sizeof(FSpriteInstanceData) == 0x50, "Size of FSpriteInstanceData is not correct.");
	auto constexpr FSpriteInstanceData_Transform_Offset = offsetof(FSpriteInstanceData, Transform);
	static_assert(FSpriteInstanceData_Transform_Offset == 0x0, "FSpriteInstanceData::Transform offset is not 0");
	auto constexpr FSpriteInstanceData_SourceSprite_Offset = offsetof(FSpriteInstanceData, SourceSprite);
	static_assert(FSpriteInstanceData_SourceSprite_Offset == 0x40, "FSpriteInstanceData::SourceSprite offset is not 40");
	auto constexpr FSpriteInstanceData_VertexColor_Offset = offsetof(FSpriteInstanceData, VertexColor);
	static_assert(FSpriteInstanceData_VertexColor_Offset == 0x48, "FSpriteInstanceData::VertexColor offset is not 48");
	auto constexpr FSpriteInstanceData_MaterialIndex_Offset = offsetof(FSpriteInstanceData, MaterialIndex);
	static_assert(FSpriteInstanceData_MaterialIndex_Offset == 0x4c, "FSpriteInstanceData::MaterialIndex offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
