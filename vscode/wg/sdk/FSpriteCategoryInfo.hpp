#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpriteCategoryInfo // Size: 0x38
{
public:
    FName Category; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.SpriteCategoryInfo.Category */
    FText DisplayName; /* Ofs: 0x8 Size: 0x18 TextProperty Engine.SpriteCategoryInfo.DisplayName */
    FText Description; /* Ofs: 0x20 Size: 0x18 TextProperty Engine.SpriteCategoryInfo.Description */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpriteCategoryInfo = sizeof(FSpriteCategoryInfo); // 56
    static_assert(sizeof(FSpriteCategoryInfo) == 0x38, "Size of FSpriteCategoryInfo is not correct.");
	auto constexpr FSpriteCategoryInfo_Category_Offset = offsetof(FSpriteCategoryInfo, Category);
	static_assert(FSpriteCategoryInfo_Category_Offset == 0x0, "FSpriteCategoryInfo::Category offset is not 0");
	auto constexpr FSpriteCategoryInfo_DisplayName_Offset = offsetof(FSpriteCategoryInfo, DisplayName);
	static_assert(FSpriteCategoryInfo_DisplayName_Offset == 0x8, "FSpriteCategoryInfo::DisplayName offset is not 8");
	auto constexpr FSpriteCategoryInfo_Description_Offset = offsetof(FSpriteCategoryInfo, Description);
	static_assert(FSpriteCategoryInfo_Description_Offset == 0x20, "FSpriteCategoryInfo::Description offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
