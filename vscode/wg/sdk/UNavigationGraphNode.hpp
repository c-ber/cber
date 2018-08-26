#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationGraphNode // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UNavigationGraphNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1762); // id32("Class Engine.NavigationGraphNode")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationGraphNode = sizeof(UNavigationGraphNode); // 1040
    static_assert(sizeof(UNavigationGraphNode) == 0x410, "Size of UNavigationGraphNode is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
