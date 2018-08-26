#pragma once
#include "UNavigationData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationGraph // Size: 0x5B0
	: public UNavigationData // Size: 0x5B0
{
private:
	typedef UNavigationGraph t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1760); // id32("Class Engine.NavigationGraph")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationGraph = sizeof(UNavigationGraph); // 1456
    static_assert(sizeof(UNavigationGraph) == 0x5B0, "Size of UNavigationGraph is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
