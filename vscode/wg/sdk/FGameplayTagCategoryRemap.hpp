#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagCategoryRemap // Size: 0x20
{
public:
    FString BaseCategory; /* Ofs: 0x0 Size: 0x10 StrProperty GameplayTags.GameplayTagCategoryRemap.BaseCategory */
    TArray<struct FString> RemapCategories; /* Ofs: 0x10 Size: 0x10 ArrayProperty GameplayTags.GameplayTagCategoryRemap.RemapCategories */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagCategoryRemap = sizeof(FGameplayTagCategoryRemap); // 32
    static_assert(sizeof(FGameplayTagCategoryRemap) == 0x20, "Size of FGameplayTagCategoryRemap is not correct.");
	auto constexpr FGameplayTagCategoryRemap_BaseCategory_Offset = offsetof(FGameplayTagCategoryRemap, BaseCategory);
	static_assert(FGameplayTagCategoryRemap_BaseCategory_Offset == 0x0, "FGameplayTagCategoryRemap::BaseCategory offset is not 0");
	auto constexpr FGameplayTagCategoryRemap_RemapCategories_Offset = offsetof(FGameplayTagCategoryRemap, RemapCategories);
	static_assert(FGameplayTagCategoryRemap_RemapCategories_Offset == 0x10, "FGameplayTagCategoryRemap::RemapCategories offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
