#pragma once
#include "UTslAlivePlayerInfoWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAliveZombiesInfoWidget // Size: 0x400
	: public UTslAlivePlayerInfoWidget // Size: 0x400
{
private:
	typedef UAliveZombiesInfoWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1550); // id32("Class TslGame.AliveZombiesInfoWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAliveZombiesInfoWidget = sizeof(UAliveZombiesInfoWidget); // 1024
    static_assert(sizeof(UAliveZombiesInfoWidget) == 0x400, "Size of UAliveZombiesInfoWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
