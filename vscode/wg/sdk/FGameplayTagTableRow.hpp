#pragma once
#include "FTableRowBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagTableRow // Size: 0x20
 : public FTableRowBase // Size: 0x8
{
public:
    FName Tag; /* Ofs: 0x8 Size: 0x8 NameProperty GameplayTags.GameplayTagTableRow.Tag */
    FString DevComment; /* Ofs: 0x10 Size: 0x10 StrProperty GameplayTags.GameplayTagTableRow.DevComment */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagTableRow = sizeof(FGameplayTagTableRow); // 32
    static_assert(sizeof(FGameplayTagTableRow) == 0x20, "Size of FGameplayTagTableRow is not correct.");
	auto constexpr FGameplayTagTableRow_Tag_Offset = offsetof(FGameplayTagTableRow, Tag);
	static_assert(FGameplayTagTableRow_Tag_Offset == 0x8, "FGameplayTagTableRow::Tag offset is not 8");
	auto constexpr FGameplayTagTableRow_DevComment_Offset = offsetof(FGameplayTagTableRow, DevComment);
	static_assert(FGameplayTagTableRow_DevComment_Offset == 0x10, "FGameplayTagTableRow::DevComment offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
