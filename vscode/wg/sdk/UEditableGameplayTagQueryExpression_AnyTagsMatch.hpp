#pragma once
#include "UEditableGameplayTagQueryExpression.hpp"
#include "FGameplayTagContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableGameplayTagQueryExpression_AnyTagsMatch // Size: 0x50
	: public UEditableGameplayTagQueryExpression // Size: 0x30
{
private:
	typedef UEditableGameplayTagQueryExpression_AnyTagsMatch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169); // id32("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch")
		return ptr;
	}
	FGameplayTagContainer Tags; /* Ofs: 0x30 Size: 0x20 - StructProperty GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch.Tags */


	inline bool SetTags(t_structHelper inst, FGameplayTagContainer value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableGameplayTagQueryExpression_AnyTagsMatch = sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch); // 80
    static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch) == 0x50, "Size of UEditableGameplayTagQueryExpression_AnyTagsMatch is not correct.");
	auto constexpr UEditableGameplayTagQueryExpression_AnyTagsMatch_Tags_Offset = offsetof(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags);
	static_assert(UEditableGameplayTagQueryExpression_AnyTagsMatch_Tags_Offset == 0x30, "UEditableGameplayTagQueryExpression_AnyTagsMatch::Tags offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
