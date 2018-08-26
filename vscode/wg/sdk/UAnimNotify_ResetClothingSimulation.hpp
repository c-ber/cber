#pragma once
#include "UAnimNotify.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_ResetClothingSimulation // Size: 0x40
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_ResetClothingSimulation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(274); // id32("Class Engine.AnimNotify_ResetClothingSimulation")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_ResetClothingSimulation = sizeof(UAnimNotify_ResetClothingSimulation); // 64
    static_assert(sizeof(UAnimNotify_ResetClothingSimulation) == 0x40, "Size of UAnimNotify_ResetClothingSimulation is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
