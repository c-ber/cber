#pragma once
#include "UTslAlivePlayerInfoWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAliveHumansInfoWidget // Size: 0x400
	: public UTslAlivePlayerInfoWidget // Size: 0x400
{
private:
	typedef UAliveHumansInfoWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1549); // id32("Class TslGame.AliveHumansInfoWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAliveHumansInfoWidget = sizeof(UAliveHumansInfoWidget); // 1024
    static_assert(sizeof(UAliveHumansInfoWidget) == 0x400, "Size of UAliveHumansInfoWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
