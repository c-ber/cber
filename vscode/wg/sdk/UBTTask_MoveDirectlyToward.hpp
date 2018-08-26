#pragma once
#include "UBTTask_MoveTo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_MoveDirectlyToward // Size: 0xC0
	: public UBTTask_MoveTo // Size: 0xB8
{
private:
	typedef UBTTask_MoveDirectlyToward t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(597); // id32("Class AIModule.BTTask_MoveDirectlyToward")
		return ptr;
	}
	uint8_t boolFieldB8;
	uint8_t UnknownDataB9[0x7];


	inline bool bDisablePathUpdateOnGoalLocationChange()
	{
		return boolFieldB8& 0x1;
	}
	inline bool SetbDisablePathUpdateOnGoalLocationChange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bProjectVectorGoalToNavigation()
	{
		return boolFieldB8& 0x2;
	}
	inline bool SetbProjectVectorGoalToNavigation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUpdatedDeprecatedProperties()
	{
		return boolFieldB8& 0x4;
	}
	inline bool SetbUpdatedDeprecatedProperties(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_MoveDirectlyToward = sizeof(UBTTask_MoveDirectlyToward); // 192
    static_assert(sizeof(UBTTask_MoveDirectlyToward) == 0xC0, "Size of UBTTask_MoveDirectlyToward is not correct.");
	auto constexpr UBTTask_MoveDirectlyToward_boolFieldB8_Offset = offsetof(UBTTask_MoveDirectlyToward, boolFieldB8);
	static_assert(UBTTask_MoveDirectlyToward_boolFieldB8_Offset == 0xb8, "UBTTask_MoveDirectlyToward::boolFieldB8 offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
