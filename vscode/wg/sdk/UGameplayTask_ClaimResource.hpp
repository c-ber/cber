#pragma once
#include "UGameplayTask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTask_ClaimResource // Size: 0x70
	: public UGameplayTask // Size: 0x70
{
private:
	typedef UGameplayTask_ClaimResource t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2006); // id32("Class GameplayTasks.GameplayTask_ClaimResource")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTask_ClaimResource = sizeof(UGameplayTask_ClaimResource); // 112
    static_assert(sizeof(UGameplayTask_ClaimResource) == 0x70, "Size of UGameplayTask_ClaimResource is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
