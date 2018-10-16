#pragma once
#include "UTslPassAreaRectangle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPassBlueZoneAreaRectangle // Size: 0x420
	: public UTslPassAreaRectangle // Size: 0x420
{
private:
	typedef UTslPassBlueZoneAreaRectangle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1471); // id32("Class TslGame.TslPassBlueZoneAreaRectangle")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPassBlueZoneAreaRectangle = sizeof(UTslPassBlueZoneAreaRectangle); // 1056
    static_assert(sizeof(UTslPassBlueZoneAreaRectangle) == 0x420, "Size of UTslPassBlueZoneAreaRectangle is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
