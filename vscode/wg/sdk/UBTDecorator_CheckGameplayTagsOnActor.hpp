#pragma once
#include "UBTDecorator.hpp"
#include "FBlackboardKeySelector.hpp"
#include "EGameplayContainerMatchType.hpp"
#include "FGameplayTagContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_CheckGameplayTagsOnActor // Size: 0xD0
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_CheckGameplayTagsOnActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(576); // id32("Class AIModule.BTDecorator_CheckGameplayTagsOnActor")
		return ptr;
	}
	FBlackboardKeySelector ActorToCheck; /* Ofs: 0x70 Size: 0x28 - StructProperty AIModule.BTDecorator_CheckGameplayTagsOnActor.ActorToCheck */
	TEnumAsByte<enum EGameplayContainerMatchType> TagsToMatch; /* Ofs: 0x98 Size: 0x1 - EnumProperty AIModule.BTDecorator_CheckGameplayTagsOnActor.TagsToMatch */
	uint8_t UnknownData99[0x7];
	FGameplayTagContainer GameplayTags; /* Ofs: 0xA0 Size: 0x20 - StructProperty AIModule.BTDecorator_CheckGameplayTagsOnActor.GameplayTags */
	FString CachedDescription; /* Ofs: 0xC0 Size: 0x10 - StrProperty AIModule.BTDecorator_CheckGameplayTagsOnActor.CachedDescription */


	inline bool SetActorToCheck(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x70, value); }
	inline bool SetTagsToMatch(t_structHelper inst, TEnumAsByte<enum EGameplayContainerMatchType> value) { inst.WriteOffset(0x98, value); }
	inline bool SetGameplayTags(t_structHelper inst, FGameplayTagContainer value) { inst.WriteOffset(0xA0, value); }
	inline bool SetCachedDescription(t_structHelper inst, FString value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_CheckGameplayTagsOnActor = sizeof(UBTDecorator_CheckGameplayTagsOnActor); // 208
    static_assert(sizeof(UBTDecorator_CheckGameplayTagsOnActor) == 0xD0, "Size of UBTDecorator_CheckGameplayTagsOnActor is not correct.");
	auto constexpr UBTDecorator_CheckGameplayTagsOnActor_ActorToCheck_Offset = offsetof(UBTDecorator_CheckGameplayTagsOnActor, ActorToCheck);
	static_assert(UBTDecorator_CheckGameplayTagsOnActor_ActorToCheck_Offset == 0x70, "UBTDecorator_CheckGameplayTagsOnActor::ActorToCheck offset is not 70");
	auto constexpr UBTDecorator_CheckGameplayTagsOnActor_TagsToMatch_Offset = offsetof(UBTDecorator_CheckGameplayTagsOnActor, TagsToMatch);
	static_assert(UBTDecorator_CheckGameplayTagsOnActor_TagsToMatch_Offset == 0x98, "UBTDecorator_CheckGameplayTagsOnActor::TagsToMatch offset is not 98");
	auto constexpr UBTDecorator_CheckGameplayTagsOnActor_GameplayTags_Offset = offsetof(UBTDecorator_CheckGameplayTagsOnActor, GameplayTags);
	static_assert(UBTDecorator_CheckGameplayTagsOnActor_GameplayTags_Offset == 0xa0, "UBTDecorator_CheckGameplayTagsOnActor::GameplayTags offset is not a0");
	auto constexpr UBTDecorator_CheckGameplayTagsOnActor_CachedDescription_Offset = offsetof(UBTDecorator_CheckGameplayTagsOnActor, CachedDescription);
	static_assert(UBTDecorator_CheckGameplayTagsOnActor_CachedDescription_Offset == 0xc0, "UBTDecorator_CheckGameplayTagsOnActor::CachedDescription offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
