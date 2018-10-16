#pragma once
#include "UAnimNotifyState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotifyState_DisableRootMotion // Size: 0x38
	: public UAnimNotifyState // Size: 0x38
{
private:
	typedef UAnimNotifyState_DisableRootMotion t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(276); // id32("Class Engine.AnimNotifyState_DisableRootMotion")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotifyState_DisableRootMotion = sizeof(UAnimNotifyState_DisableRootMotion); // 56
    static_assert(sizeof(UAnimNotifyState_DisableRootMotion) == 0x38, "Size of UAnimNotifyState_DisableRootMotion is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
