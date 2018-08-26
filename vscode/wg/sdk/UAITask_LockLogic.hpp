#pragma once
#include "UAITask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAITask_LockLogic // Size: 0x78
	: public UAITask // Size: 0x78
{
private:
	typedef UAITask_LockLogic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(543); // id32("Class AIModule.AITask_LockLogic")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAITask_LockLogic = sizeof(UAITask_LockLogic); // 120
    static_assert(sizeof(UAITask_LockLogic) == 0x78, "Size of UAITask_LockLogic is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
