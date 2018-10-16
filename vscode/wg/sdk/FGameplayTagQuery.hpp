#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGameplayTagQuery // Size: 0x48
{
public:
    int32_t TokenStreamVersion; /* Ofs: 0x0 Size: 0x4 IntProperty GameplayTags.GameplayTagQuery.TokenStreamVersion */
    uint8_t UnknownData4[0x4];
    TArray<struct FGameplayTag> TagDictionary; /* Ofs: 0x8 Size: 0x10 ArrayProperty GameplayTags.GameplayTagQuery.TagDictionary */
    TArray<uint8_t> QueryTokenStream; /* Ofs: 0x18 Size: 0x10 ArrayProperty GameplayTags.GameplayTagQuery.QueryTokenStream */
    FString UserDescription; /* Ofs: 0x28 Size: 0x10 StrProperty GameplayTags.GameplayTagQuery.UserDescription */
    FString AutoDescription; /* Ofs: 0x38 Size: 0x10 StrProperty GameplayTags.GameplayTagQuery.AutoDescription */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGameplayTagQuery = sizeof(FGameplayTagQuery); // 72
    static_assert(sizeof(FGameplayTagQuery) == 0x48, "Size of FGameplayTagQuery is not correct.");
	auto constexpr FGameplayTagQuery_TokenStreamVersion_Offset = offsetof(FGameplayTagQuery, TokenStreamVersion);
	static_assert(FGameplayTagQuery_TokenStreamVersion_Offset == 0x0, "FGameplayTagQuery::TokenStreamVersion offset is not 0");
	auto constexpr FGameplayTagQuery_TagDictionary_Offset = offsetof(FGameplayTagQuery, TagDictionary);
	static_assert(FGameplayTagQuery_TagDictionary_Offset == 0x8, "FGameplayTagQuery::TagDictionary offset is not 8");
	auto constexpr FGameplayTagQuery_QueryTokenStream_Offset = offsetof(FGameplayTagQuery, QueryTokenStream);
	static_assert(FGameplayTagQuery_QueryTokenStream_Offset == 0x18, "FGameplayTagQuery::QueryTokenStream offset is not 18");
	auto constexpr FGameplayTagQuery_UserDescription_Offset = offsetof(FGameplayTagQuery, UserDescription);
	static_assert(FGameplayTagQuery_UserDescription_Offset == 0x28, "FGameplayTagQuery::UserDescription offset is not 28");
	auto constexpr FGameplayTagQuery_AutoDescription_Offset = offsetof(FGameplayTagQuery, AutoDescription);
	static_assert(FGameplayTagQuery_AutoDescription_Offset == 0x38, "FGameplayTagQuery::AutoDescription offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
