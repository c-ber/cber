#pragma once
#include "FGameplayTagQuery.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEditableGameplayTagQuery // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UEditableGameplayTagQuery t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(167); // id32("Class GameplayTags.EditableGameplayTagQuery")
		return ptr;
	}
	FString UserDescription; /* Ofs: 0x30 Size: 0x10 - StrProperty GameplayTags.EditableGameplayTagQuery.UserDescription */
	uint8_t UnknownData40[0x10];
	ExternalPtr<struct UEditableGameplayTagQueryExpression> RootExpression; /* Ofs: 0x50 Size: 0x8 - ObjectProperty GameplayTags.EditableGameplayTagQuery.RootExpression */
	FGameplayTagQuery TagQueryExportText_Helper; /* Ofs: 0x58 Size: 0x48 - StructProperty GameplayTags.EditableGameplayTagQuery.TagQueryExportText_Helper */


	inline bool SetUserDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x30, value); }
	inline bool SetRootExpression(t_structHelper inst, ExternalPtr<struct UEditableGameplayTagQueryExpression> value) { inst.WriteOffset(0x50, value); }
	inline bool SetTagQueryExportText_Helper(t_structHelper inst, FGameplayTagQuery value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEditableGameplayTagQuery = sizeof(UEditableGameplayTagQuery); // 160
    static_assert(sizeof(UEditableGameplayTagQuery) == 0xA0, "Size of UEditableGameplayTagQuery is not correct.");
	auto constexpr UEditableGameplayTagQuery_UserDescription_Offset = offsetof(UEditableGameplayTagQuery, UserDescription);
	static_assert(UEditableGameplayTagQuery_UserDescription_Offset == 0x30, "UEditableGameplayTagQuery::UserDescription offset is not 30");
	auto constexpr UEditableGameplayTagQuery_RootExpression_Offset = offsetof(UEditableGameplayTagQuery, RootExpression);
	static_assert(UEditableGameplayTagQuery_RootExpression_Offset == 0x50, "UEditableGameplayTagQuery::RootExpression offset is not 50");
	auto constexpr UEditableGameplayTagQuery_TagQueryExportText_Helper_Offset = offsetof(UEditableGameplayTagQuery, TagQueryExportText_Helper);
	static_assert(UEditableGameplayTagQuery_TagQueryExportText_Helper_Offset == 0x58, "UEditableGameplayTagQuery::TagQueryExportText_Helper offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
