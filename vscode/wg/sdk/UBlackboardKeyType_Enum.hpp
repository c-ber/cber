#pragma once
#include "UBlackboardKeyType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardKeyType_Enum // Size: 0x58
	: public UBlackboardKeyType // Size: 0x38
{
private:
	typedef UBlackboardKeyType_Enum t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(560); // id32("Class AIModule.BlackboardKeyType_Enum")
		return ptr;
	}
	ExternalPtr<struct UEnum> EnumType; /* Ofs: 0x38 Size: 0x8 - ObjectProperty AIModule.BlackboardKeyType_Enum.EnumType */
	FString EnumName; /* Ofs: 0x40 Size: 0x10 - StrProperty AIModule.BlackboardKeyType_Enum.EnumName */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetEnumType(t_structHelper inst, ExternalPtr<struct UEnum> value) { inst.WriteOffset(0x38, value); }
	inline bool SetEnumName(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool bIsEnumNameValid()
	{
		return boolField50& 0x1;
	}
	inline bool SetbIsEnumNameValid(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardKeyType_Enum = sizeof(UBlackboardKeyType_Enum); // 88
    static_assert(sizeof(UBlackboardKeyType_Enum) == 0x58, "Size of UBlackboardKeyType_Enum is not correct.");
	auto constexpr UBlackboardKeyType_Enum_EnumType_Offset = offsetof(UBlackboardKeyType_Enum, EnumType);
	static_assert(UBlackboardKeyType_Enum_EnumType_Offset == 0x38, "UBlackboardKeyType_Enum::EnumType offset is not 38");
	auto constexpr UBlackboardKeyType_Enum_EnumName_Offset = offsetof(UBlackboardKeyType_Enum, EnumName);
	static_assert(UBlackboardKeyType_Enum_EnumName_Offset == 0x40, "UBlackboardKeyType_Enum::EnumName offset is not 40");
	auto constexpr UBlackboardKeyType_Enum_boolField50_Offset = offsetof(UBlackboardKeyType_Enum, boolField50);
	static_assert(UBlackboardKeyType_Enum_boolField50_Offset == 0x50, "UBlackboardKeyType_Enum::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
