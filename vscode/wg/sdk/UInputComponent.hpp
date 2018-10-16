#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputComponent // Size: 0x260
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UInputComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1731); // id32("Class Engine.InputComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x70];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputComponent = sizeof(UInputComponent); // 608
    static_assert(sizeof(UInputComponent) == 0x260, "Size of UInputComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
