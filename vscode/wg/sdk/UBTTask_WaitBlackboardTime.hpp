#pragma once
#include "UBTTask_Wait.hpp"
#include "FBlackboardKeySelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_WaitBlackboardTime // Size: 0xA8
	: public UBTTask_Wait // Size: 0x80
{
private:
	typedef UBTTask_WaitBlackboardTime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(611); // id32("Class AIModule.BTTask_WaitBlackboardTime")
		return ptr;
	}
	FBlackboardKeySelector BlackboardKey; /* Ofs: 0x80 Size: 0x28 - StructProperty AIModule.BTTask_WaitBlackboardTime.BlackboardKey */


	inline bool SetBlackboardKey(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_WaitBlackboardTime = sizeof(UBTTask_WaitBlackboardTime); // 168
    static_assert(sizeof(UBTTask_WaitBlackboardTime) == 0xA8, "Size of UBTTask_WaitBlackboardTime is not correct.");
	auto constexpr UBTTask_WaitBlackboardTime_BlackboardKey_Offset = offsetof(UBTTask_WaitBlackboardTime, BlackboardKey);
	static_assert(UBTTask_WaitBlackboardTime_BlackboardKey_Offset == 0x80, "UBTTask_WaitBlackboardTime::BlackboardKey offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
