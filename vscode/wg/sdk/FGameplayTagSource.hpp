#pragma once
#include "EGameplayTagSourceType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagSource // Size: 0x18
{
public:
    FName SourceName; /* Ofs: 0x0 Size: 0x8 NameProperty GameplayTags.GameplayTagSource.SourceName */
    TEnumAsByte<enum EGameplayTagSourceType> SourceType; /* Ofs: 0x8 Size: 0x1 EnumProperty GameplayTags.GameplayTagSource.SourceType */
    uint8_t UnknownData9[0x7];
    ExternalPtr<struct UGameplayTagsList> SourceTagList; /* Ofs: 0x10 Size: 0x8 ObjectProperty GameplayTags.GameplayTagSource.SourceTagList */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagSource = sizeof(FGameplayTagSource); // 24
    static_assert(sizeof(FGameplayTagSource) == 0x18, "Size of FGameplayTagSource is not correct.");
	auto constexpr FGameplayTagSource_SourceName_Offset = offsetof(FGameplayTagSource, SourceName);
	static_assert(FGameplayTagSource_SourceName_Offset == 0x0, "FGameplayTagSource::SourceName offset is not 0");
	auto constexpr FGameplayTagSource_SourceType_Offset = offsetof(FGameplayTagSource, SourceType);
	static_assert(FGameplayTagSource_SourceType_Offset == 0x8, "FGameplayTagSource::SourceType offset is not 8");
	auto constexpr FGameplayTagSource_SourceTagList_Offset = offsetof(FGameplayTagSource, SourceTagList);
	static_assert(FGameplayTagSource_SourceTagList_Offset == 0x10, "FGameplayTagSource::SourceTagList offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
