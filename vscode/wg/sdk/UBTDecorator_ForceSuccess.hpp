#pragma once
#include "UBTDecorator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_ForceSuccess // Size: 0x70
	: public UBTDecorator // Size: 0x70
{
private:
	typedef UBTDecorator_ForceSuccess t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(581); // id32("Class AIModule.BTDecorator_ForceSuccess")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_ForceSuccess = sizeof(UBTDecorator_ForceSuccess); // 112
    static_assert(sizeof(UBTDecorator_ForceSuccess) == 0x70, "Size of UBTDecorator_ForceSuccess is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
