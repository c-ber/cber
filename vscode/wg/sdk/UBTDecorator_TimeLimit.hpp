#pragma once
#include "UBTDecorator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_TimeLimit // Size: 0x78
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_TimeLimit t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(587); // id32("Class AIModule.BTDecorator_TimeLimit")
		return ptr;
	}
	float TimeLimit; /* Ofs: 0x70 Size: 0x4 - FloatProperty AIModule.BTDecorator_TimeLimit.TimeLimit */
	uint8_t UnknownData74[0x4];


	inline bool SetTimeLimit(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_TimeLimit = sizeof(UBTDecorator_TimeLimit); // 120
    static_assert(sizeof(UBTDecorator_TimeLimit) == 0x78, "Size of UBTDecorator_TimeLimit is not correct.");
	auto constexpr UBTDecorator_TimeLimit_TimeLimit_Offset = offsetof(UBTDecorator_TimeLimit, TimeLimit);
	static_assert(UBTDecorator_TimeLimit_TimeLimit_Offset == 0x70, "UBTDecorator_TimeLimit::TimeLimit offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
