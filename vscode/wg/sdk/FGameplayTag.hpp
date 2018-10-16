#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTag // Size: 0x8
{
public:
    FName TagName; /* Ofs: 0x0 Size: 0x8 NameProperty GameplayTags.GameplayTag.TagName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTag = sizeof(FGameplayTag); // 8
    static_assert(sizeof(FGameplayTag) == 0x8, "Size of FGameplayTag is not correct.");
	auto constexpr FGameplayTag_TagName_Offset = offsetof(FGameplayTag, TagName);
	static_assert(FGameplayTag_TagName_Offset == 0x0, "FGameplayTag::TagName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
