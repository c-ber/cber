#pragma once
#include "UBlackboardKeyType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardKeyType_String // Size: 0x48
	: public UBlackboardKeyType // Size: 0x38
{
private:
	typedef UBlackboardKeyType_String t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(567); // id32("Class AIModule.BlackboardKeyType_String")
		return ptr;
	}
	FString StringValue; /* Ofs: 0x38 Size: 0x10 - StrProperty AIModule.BlackboardKeyType_String.StringValue */


	inline bool SetStringValue(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardKeyType_String = sizeof(UBlackboardKeyType_String); // 72
    static_assert(sizeof(UBlackboardKeyType_String) == 0x48, "Size of UBlackboardKeyType_String is not correct.");
	auto constexpr UBlackboardKeyType_String_StringValue_Offset = offsetof(UBlackboardKeyType_String, StringValue);
	static_assert(UBlackboardKeyType_String_StringValue_Offset == 0x38, "UBlackboardKeyType_String::StringValue offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
