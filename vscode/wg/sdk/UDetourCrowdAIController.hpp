#pragma once
#include "UAIController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDetourCrowdAIController // Size: 0x520
	: public UAIController // Size: 0x520
{
private:
	typedef UDetourCrowdAIController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1668); // id32("Class AIModule.DetourCrowdAIController")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDetourCrowdAIController = sizeof(UDetourCrowdAIController); // 1312
    static_assert(sizeof(UDetourCrowdAIController) == 0x520, "Size of UDetourCrowdAIController is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
