#pragma once
#include "UBTDecorator_Blackboard.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_ConditionalLoop // Size: 0xC8
	: public UBTDecorator_Blackboard // Size: 0xC8
{
private:
	typedef UBTDecorator_ConditionalLoop t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(572); // id32("Class AIModule.BTDecorator_ConditionalLoop")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_ConditionalLoop = sizeof(UBTDecorator_ConditionalLoop); // 200
    static_assert(sizeof(UBTDecorator_ConditionalLoop) == 0xC8, "Size of UBTDecorator_ConditionalLoop is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
