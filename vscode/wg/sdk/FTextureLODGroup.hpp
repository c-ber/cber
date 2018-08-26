#pragma once
#include "TextureGroup.hpp"
#include "TextureMipGenSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTextureLODGroup // Size: 0x38
{
public:
    TEnumAsByte<enum TextureGroup> Group; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.TextureLODGroup.Group */
    uint8_t UnknownData1[0xB];
    int32_t LODBias; /* Ofs: 0xC Size: 0x4 IntProperty Engine.TextureLODGroup.LODBias */
    uint8_t UnknownData10[0x4];
    int32_t NumStreamedMips; /* Ofs: 0x14 Size: 0x4 IntProperty Engine.TextureLODGroup.NumStreamedMips */
    TEnumAsByte<enum TextureMipGenSettings> MipGenSettings; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.TextureLODGroup.MipGenSettings */
    uint8_t UnknownData19[0x3];
    int32_t MinLODSize; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.TextureLODGroup.MinLODSize */
    int32_t MaxLODSize; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.TextureLODGroup.MaxLODSize */
    uint8_t UnknownData24[0x4];
    FName MinMagFilter; /* Ofs: 0x28 Size: 0x8 NameProperty Engine.TextureLODGroup.MinMagFilter */
    FName MipFilter; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.TextureLODGroup.MipFilter */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTextureLODGroup = sizeof(FTextureLODGroup); // 56
    static_assert(sizeof(FTextureLODGroup) == 0x38, "Size of FTextureLODGroup is not correct.");
	auto constexpr FTextureLODGroup_Group_Offset = offsetof(FTextureLODGroup, Group);
	static_assert(FTextureLODGroup_Group_Offset == 0x0, "FTextureLODGroup::Group offset is not 0");
	auto constexpr FTextureLODGroup_LODBias_Offset = offsetof(FTextureLODGroup, LODBias);
	static_assert(FTextureLODGroup_LODBias_Offset == 0xc, "FTextureLODGroup::LODBias offset is not c");
	auto constexpr FTextureLODGroup_NumStreamedMips_Offset = offsetof(FTextureLODGroup, NumStreamedMips);
	static_assert(FTextureLODGroup_NumStreamedMips_Offset == 0x14, "FTextureLODGroup::NumStreamedMips offset is not 14");
	auto constexpr FTextureLODGroup_MipGenSettings_Offset = offsetof(FTextureLODGroup, MipGenSettings);
	static_assert(FTextureLODGroup_MipGenSettings_Offset == 0x18, "FTextureLODGroup::MipGenSettings offset is not 18");
	auto constexpr FTextureLODGroup_MinLODSize_Offset = offsetof(FTextureLODGroup, MinLODSize);
	static_assert(FTextureLODGroup_MinLODSize_Offset == 0x1c, "FTextureLODGroup::MinLODSize offset is not 1c");
	auto constexpr FTextureLODGroup_MaxLODSize_Offset = offsetof(FTextureLODGroup, MaxLODSize);
	static_assert(FTextureLODGroup_MaxLODSize_Offset == 0x20, "FTextureLODGroup::MaxLODSize offset is not 20");
	auto constexpr FTextureLODGroup_MinMagFilter_Offset = offsetof(FTextureLODGroup, MinMagFilter);
	static_assert(FTextureLODGroup_MinMagFilter_Offset == 0x28, "FTextureLODGroup::MinMagFilter offset is not 28");
	auto constexpr FTextureLODGroup_MipFilter_Offset = offsetof(FTextureLODGroup, MipFilter);
	static_assert(FTextureLODGroup_MipFilter_Offset == 0x30, "FTextureLODGroup::MipFilter offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
