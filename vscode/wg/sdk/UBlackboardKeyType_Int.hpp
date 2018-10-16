#pragma once
#include "UBlackboardKeyType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardKeyType_Int // Size: 0x38
	: public UBlackboardKeyType // Size: 0x38
{
private:
	typedef UBlackboardKeyType_Int t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(562); // id32("Class AIModule.BlackboardKeyType_Int")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardKeyType_Int = sizeof(UBlackboardKeyType_Int); // 56
    static_assert(sizeof(UBlackboardKeyType_Int) == 0x38, "Size of UBlackboardKeyType_Int is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
