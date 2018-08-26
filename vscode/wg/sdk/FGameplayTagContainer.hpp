#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagContainer // Size: 0x20
{
public:
    TArray<struct FGameplayTag> GameplayTags; /* Ofs: 0x0 Size: 0x10 ArrayProperty GameplayTags.GameplayTagContainer.GameplayTags */
    TArray<struct FGameplayTag> ParentTags; /* Ofs: 0x10 Size: 0x10 ArrayProperty GameplayTags.GameplayTagContainer.ParentTags */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagContainer = sizeof(FGameplayTagContainer); // 32
    static_assert(sizeof(FGameplayTagContainer) == 0x20, "Size of FGameplayTagContainer is not correct.");
	auto constexpr FGameplayTagContainer_GameplayTags_Offset = offsetof(FGameplayTagContainer, GameplayTags);
	static_assert(FGameplayTagContainer_GameplayTags_Offset == 0x0, "FGameplayTagContainer::GameplayTags offset is not 0");
	auto constexpr FGameplayTagContainer_ParentTags_Offset = offsetof(FGameplayTagContainer, ParentTags);
	static_assert(FGameplayTagContainer_ParentTags_Offset == 0x10, "FGameplayTagContainer::ParentTags offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
