#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagRedirect // Size: 0x10
{
public:
    FName OldTagName; /* Ofs: 0x0 Size: 0x8 NameProperty GameplayTags.GameplayTagRedirect.OldTagName */
    FName NewTagName; /* Ofs: 0x8 Size: 0x8 NameProperty GameplayTags.GameplayTagRedirect.NewTagName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagRedirect = sizeof(FGameplayTagRedirect); // 16
    static_assert(sizeof(FGameplayTagRedirect) == 0x10, "Size of FGameplayTagRedirect is not correct.");
	auto constexpr FGameplayTagRedirect_OldTagName_Offset = offsetof(FGameplayTagRedirect, OldTagName);
	static_assert(FGameplayTagRedirect_OldTagName_Offset == 0x0, "FGameplayTagRedirect::OldTagName offset is not 0");
	auto constexpr FGameplayTagRedirect_NewTagName_Offset = offsetof(FGameplayTagRedirect, NewTagName);
	static_assert(FGameplayTagRedirect_NewTagName_Offset == 0x8, "FGameplayTagRedirect::NewTagName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
