#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_Wait // Size: 0x80
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_Wait t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(610); // id32("Class AIModule.BTTask_Wait")
		return ptr;
	}
	float WaitTime; /* Ofs: 0x78 Size: 0x4 - FloatProperty AIModule.BTTask_Wait.WaitTime */
	float RandomDeviation; /* Ofs: 0x7C Size: 0x4 - FloatProperty AIModule.BTTask_Wait.RandomDeviation */


	inline bool SetWaitTime(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool SetRandomDeviation(t_structHelper inst, float value) { inst.WriteOffset(0x7C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_Wait = sizeof(UBTTask_Wait); // 128
    static_assert(sizeof(UBTTask_Wait) == 0x80, "Size of UBTTask_Wait is not correct.");
	auto constexpr UBTTask_Wait_WaitTime_Offset = offsetof(UBTTask_Wait, WaitTime);
	static_assert(UBTTask_Wait_WaitTime_Offset == 0x78, "UBTTask_Wait::WaitTime offset is not 78");
	auto constexpr UBTTask_Wait_RandomDeviation_Offset = offsetof(UBTTask_Wait, RandomDeviation);
	static_assert(UBTTask_Wait_RandomDeviation_Offset == 0x7c, "UBTTask_Wait::RandomDeviation offset is not 7c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
