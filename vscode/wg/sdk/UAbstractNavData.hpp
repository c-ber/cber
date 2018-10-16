#pragma once
#include "UNavigationData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAbstractNavData // Size: 0x5B0
	: public UNavigationData // Size: 0x5B0
{
private:
	typedef UAbstractNavData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1759); // id32("Class Engine.AbstractNavData")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAbstractNavData = sizeof(UAbstractNavData); // 1456
    static_assert(sizeof(UAbstractNavData) == 0x5B0, "Size of UAbstractNavData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
