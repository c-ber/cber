#pragma once
#include "UEnvQueryTest.hpp"
#include "FGameplayTagQuery.hpp"
#include "EGameplayContainerMatchType.hpp"
#include "FGameplayTagContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_GameplayTags // Size: 0x238
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_GameplayTags t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(642); // id32("Class AIModule.EnvQueryTest_GameplayTags")
		return ptr;
	}
	FGameplayTagQuery TagQueryToMatch; /* Ofs: 0x1C8 Size: 0x48 - StructProperty AIModule.EnvQueryTest_GameplayTags.TagQueryToMatch */
	uint8_t boolField210;
	TEnumAsByte<enum EGameplayContainerMatchType> TagsToMatch; /* Ofs: 0x211 Size: 0x1 - EnumProperty AIModule.EnvQueryTest_GameplayTags.TagsToMatch */
	uint8_t UnknownData212[0x6];
	FGameplayTagContainer GameplayTags; /* Ofs: 0x218 Size: 0x20 - StructProperty AIModule.EnvQueryTest_GameplayTags.GameplayTags */


	inline bool SetTagQueryToMatch(t_structHelper inst, FGameplayTagQuery value) { inst.WriteOffset(0x1C8, value); }
	inline bool bUpdatedToUseQuery()
	{
		return boolField210& 0x1;
	}
	inline bool SetbUpdatedToUseQuery(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x210, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTagsToMatch(t_structHelper inst, TEnumAsByte<enum EGameplayContainerMatchType> value) { inst.WriteOffset(0x211, value); }
	inline bool SetGameplayTags(t_structHelper inst, FGameplayTagContainer value) { inst.WriteOffset(0x218, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_GameplayTags = sizeof(UEnvQueryTest_GameplayTags); // 568
    static_assert(sizeof(UEnvQueryTest_GameplayTags) == 0x238, "Size of UEnvQueryTest_GameplayTags is not correct.");
	auto constexpr UEnvQueryTest_GameplayTags_TagQueryToMatch_Offset = offsetof(UEnvQueryTest_GameplayTags, TagQueryToMatch);
	static_assert(UEnvQueryTest_GameplayTags_TagQueryToMatch_Offset == 0x1c8, "UEnvQueryTest_GameplayTags::TagQueryToMatch offset is not 1c8");
	auto constexpr UEnvQueryTest_GameplayTags_boolField210_Offset = offsetof(UEnvQueryTest_GameplayTags, boolField210);
	static_assert(UEnvQueryTest_GameplayTags_boolField210_Offset == 0x210, "UEnvQueryTest_GameplayTags::boolField210 offset is not 210");
	auto constexpr UEnvQueryTest_GameplayTags_TagsToMatch_Offset = offsetof(UEnvQueryTest_GameplayTags, TagsToMatch);
	static_assert(UEnvQueryTest_GameplayTags_TagsToMatch_Offset == 0x211, "UEnvQueryTest_GameplayTags::TagsToMatch offset is not 211");
	auto constexpr UEnvQueryTest_GameplayTags_GameplayTags_Offset = offsetof(UEnvQueryTest_GameplayTags, GameplayTags);
	static_assert(UEnvQueryTest_GameplayTags_GameplayTags_Offset == 0x218, "UEnvQueryTest_GameplayTags::GameplayTags offset is not 218");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
