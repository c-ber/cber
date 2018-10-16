#pragma once
#include "UGameplayTaskResource.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIResource_Movement // Size: 0x40
	: public UGameplayTaskResource // Size: 0x40
{
private:
	typedef UAIResource_Movement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1679); // id32("Class AIModule.AIResource_Movement")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIResource_Movement = sizeof(UAIResource_Movement); // 64
    static_assert(sizeof(UAIResource_Movement) == 0x40, "Size of UAIResource_Movement is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
