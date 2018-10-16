#pragma once
#include "UTslVehicleSeatActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMotoSeatActor // Size: 0x4A0
	: public UTslVehicleSeatActor // Size: 0x4A0
{
private:
	typedef UTslMotoSeatActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(57); // id32("Class TslGame.TslMotoSeatActor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMotoSeatActor = sizeof(UTslMotoSeatActor); // 1184
    static_assert(sizeof(UTslMotoSeatActor) == 0x4A0, "Size of UTslMotoSeatActor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
