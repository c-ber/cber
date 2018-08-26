#pragma once
#include "UEditableGameplayTagQueryExpression.hpp"
#include "FGameplayTagContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableGameplayTagQueryExpression_AllTagsMatch // Size: 0x50
	: public UEditableGameplayTagQueryExpression // Size: 0x30
{
private:
	typedef UEditableGameplayTagQueryExpression_AllTagsMatch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(170); // id32("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch")
		return ptr;
	}
	FGameplayTagContainer Tags; /* Ofs: 0x30 Size: 0x20 - StructProperty GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch.Tags */


	inline bool SetTags(t_structHelper inst, FGameplayTagContainer value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableGameplayTagQueryExpression_AllTagsMatch = sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch); // 80
    static_assert(sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch) == 0x50, "Size of UEditableGameplayTagQueryExpression_AllTagsMatch is not correct.");
	auto constexpr UEditableGameplayTagQueryExpression_AllTagsMatch_Tags_Offset = offsetof(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags);
	static_assert(UEditableGameplayTagQueryExpression_AllTagsMatch_Tags_Offset == 0x30, "UEditableGameplayTagQueryExpression_AllTagsMatch::Tags offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
