#pragma once
#include "UNavigationQueryFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavFilter_AIControllerDefault // Size: 0x50
	: public UNavigationQueryFilter // Size: 0x50
{
private:
	typedef UNavFilter_AIControllerDefault t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(654); // id32("Class AIModule.NavFilter_AIControllerDefault")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavFilter_AIControllerDefault = sizeof(UNavFilter_AIControllerDefault); // 80
    static_assert(sizeof(UNavFilter_AIControllerDefault) == 0x50, "Size of UNavFilter_AIControllerDefault is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
