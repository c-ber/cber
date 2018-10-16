#pragma once
#include "UEditableGameplayTagQueryExpression.hpp"
#include "FGameplayTagContainer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableGameplayTagQueryExpression_NoTagsMatch // Size: 0x50
	: public UEditableGameplayTagQueryExpression // Size: 0x30
{
private:
	typedef UEditableGameplayTagQueryExpression_NoTagsMatch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(171); // id32("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch")
		return ptr;
	}
	FGameplayTagContainer Tags; /* Ofs: 0x30 Size: 0x20 - StructProperty GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch.Tags */


	inline bool SetTags(t_structHelper inst, FGameplayTagContainer value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableGameplayTagQueryExpression_NoTagsMatch = sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch); // 80
    static_assert(sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch) == 0x50, "Size of UEditableGameplayTagQueryExpression_NoTagsMatch is not correct.");
	auto constexpr UEditableGameplayTagQueryExpression_NoTagsMatch_Tags_Offset = offsetof(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags);
	static_assert(UEditableGameplayTagQueryExpression_NoTagsMatch_Tags_Offset == 0x30, "UEditableGameplayTagQueryExpression_NoTagsMatch::Tags offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
