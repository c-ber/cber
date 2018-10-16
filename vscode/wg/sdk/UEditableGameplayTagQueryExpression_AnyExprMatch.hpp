#pragma once
#include "UEditableGameplayTagQueryExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableGameplayTagQueryExpression_AnyExprMatch // Size: 0x40
	: public UEditableGameplayTagQueryExpression // Size: 0x30
{
private:
	typedef UEditableGameplayTagQueryExpression_AnyExprMatch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(172); // id32("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch")
		return ptr;
	}
	TArray<ExternalPtr<struct UEditableGameplayTagQueryExpression>> Expressions; /* Ofs: 0x30 Size: 0x10 - ArrayProperty GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch.Expressions */


	inline bool SetExpressions(t_structHelper inst, TArray<ExternalPtr<struct UEditableGameplayTagQueryExpression>> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableGameplayTagQueryExpression_AnyExprMatch = sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch); // 64
    static_assert(sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch) == 0x40, "Size of UEditableGameplayTagQueryExpression_AnyExprMatch is not correct.");
	auto constexpr UEditableGameplayTagQueryExpression_AnyExprMatch_Expressions_Offset = offsetof(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions);
	static_assert(UEditableGameplayTagQueryExpression_AnyExprMatch_Expressions_Offset == 0x30, "UEditableGameplayTagQueryExpression_AnyExprMatch::Expressions offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
