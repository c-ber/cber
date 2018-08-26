#pragma once
#include "UBlackboardKeyType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardKeyType_NativeEnum // Size: 0x50
	: public UBlackboardKeyType // Size: 0x38
{
private:
	typedef UBlackboardKeyType_NativeEnum t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(564); // id32("Class AIModule.BlackboardKeyType_NativeEnum")
		return ptr;
	}
	FString EnumName; /* Ofs: 0x38 Size: 0x10 - StrProperty AIModule.BlackboardKeyType_NativeEnum.EnumName */
	ExternalPtr<struct UEnum> EnumType; /* Ofs: 0x48 Size: 0x8 - ObjectProperty AIModule.BlackboardKeyType_NativeEnum.EnumType */


	inline bool SetEnumName(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetEnumType(t_structHelper inst, ExternalPtr<struct UEnum> value) { inst.WriteOffset(0x48, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardKeyType_NativeEnum = sizeof(UBlackboardKeyType_NativeEnum); // 80
    static_assert(sizeof(UBlackboardKeyType_NativeEnum) == 0x50, "Size of UBlackboardKeyType_NativeEnum is not correct.");
	auto constexpr UBlackboardKeyType_NativeEnum_EnumName_Offset = offsetof(UBlackboardKeyType_NativeEnum, EnumName);
	static_assert(UBlackboardKeyType_NativeEnum_EnumName_Offset == 0x38, "UBlackboardKeyType_NativeEnum::EnumName offset is not 38");
	auto constexpr UBlackboardKeyType_NativeEnum_EnumType_Offset = offsetof(UBlackboardKeyType_NativeEnum, EnumType);
	static_assert(UBlackboardKeyType_NativeEnum_EnumType_Offset == 0x48, "UBlackboardKeyType_NativeEnum::EnumType offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
