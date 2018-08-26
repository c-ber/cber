#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardData // Size: 0x58
	: public UDataAsset // Size: 0x38
{
private:
	typedef UBlackboardData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(556); // id32("Class AIModule.BlackboardData")
		return ptr;
	}
	ExternalPtr<struct UBlackboardData> Parent; /* Ofs: 0x38 Size: 0x8 - ObjectProperty AIModule.BlackboardData.Parent */
	TArray<struct FBlackboardEntry> Keys; /* Ofs: 0x40 Size: 0x10 - ArrayProperty AIModule.BlackboardData.Keys */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UBlackboardData> value) { inst.WriteOffset(0x38, value); }
	inline bool SetKeys(t_structHelper inst, TArray<struct FBlackboardEntry> value) { inst.WriteOffset(0x40, value); }
	inline bool bHasSynchronizedKeys()
	{
		return boolField50& 0x1;
	}
	inline bool SetbHasSynchronizedKeys(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardData = sizeof(UBlackboardData); // 88
    static_assert(sizeof(UBlackboardData) == 0x58, "Size of UBlackboardData is not correct.");
	auto constexpr UBlackboardData_Parent_Offset = offsetof(UBlackboardData, Parent);
	static_assert(UBlackboardData_Parent_Offset == 0x38, "UBlackboardData::Parent offset is not 38");
	auto constexpr UBlackboardData_Keys_Offset = offsetof(UBlackboardData, Keys);
	static_assert(UBlackboardData_Keys_Offset == 0x40, "UBlackboardData::Keys offset is not 40");
	auto constexpr UBlackboardData_boolField50_Offset = offsetof(UBlackboardData, boolField50);
	static_assert(UBlackboardData_boolField50_Offset == 0x50, "UBlackboardData::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
