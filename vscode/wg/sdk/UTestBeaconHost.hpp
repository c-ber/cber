#pragma once
#include "UOnlineBeaconHostObject.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTestBeaconHost // Size: 0x430
	: public UOnlineBeaconHostObject // Size: 0x430
{
private:
	typedef UTestBeaconHost t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2112); // id32("Class OnlineSubsystemUtils.TestBeaconHost")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTestBeaconHost = sizeof(UTestBeaconHost); // 1072
    static_assert(sizeof(UTestBeaconHost) == 0x430, "Size of UTestBeaconHost is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
