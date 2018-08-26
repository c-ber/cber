#pragma once
#include "UAITask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAITask_RunEQS // Size: 0x150
	: public UAITask // Size: 0x78
{
private:
	typedef UAITask_RunEQS t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(549); // id32("Class AIModule.AITask_RunEQS")
		return ptr;
	}
	uint8_t UnknownData78[0xD8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAITask_RunEQS = sizeof(UAITask_RunEQS); // 336
    static_assert(sizeof(UAITask_RunEQS) == 0x150, "Size of UAITask_RunEQS is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
