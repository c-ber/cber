#pragma once
#include "UEdGraphNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEdGraphNode_Documentation // Size: 0xC8
	: public UEdGraphNode // Size: 0xA8
{
private:
	typedef UEdGraphNode_Documentation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(765); // id32("Class Engine.EdGraphNode_Documentation")
		return ptr;
	}
	FString Link; /* Ofs: 0xA8 Size: 0x10 - StrProperty Engine.EdGraphNode_Documentation.Link */
	FString Excerpt; /* Ofs: 0xB8 Size: 0x10 - StrProperty Engine.EdGraphNode_Documentation.Excerpt */


	inline bool SetLink(t_structHelper inst, FString value) { inst.WriteOffset(0xA8, value); }
	inline bool SetExcerpt(t_structHelper inst, FString value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEdGraphNode_Documentation = sizeof(UEdGraphNode_Documentation); // 200
    static_assert(sizeof(UEdGraphNode_Documentation) == 0xC8, "Size of UEdGraphNode_Documentation is not correct.");
	auto constexpr UEdGraphNode_Documentation_Link_Offset = offsetof(UEdGraphNode_Documentation, Link);
	static_assert(UEdGraphNode_Documentation_Link_Offset == 0xa8, "UEdGraphNode_Documentation::Link offset is not a8");
	auto constexpr UEdGraphNode_Documentation_Excerpt_Offset = offsetof(UEdGraphNode_Documentation, Excerpt);
	static_assert(UEdGraphNode_Documentation_Excerpt_Offset == 0xb8, "UEdGraphNode_Documentation::Excerpt offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
