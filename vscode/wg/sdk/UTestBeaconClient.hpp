#pragma once
#include "UOnlineBeaconClient.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTestBeaconClient // Size: 0x4C0
	: public UOnlineBeaconClient // Size: 0x4C0
{
private:
	typedef UTestBeaconClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2108); // id32("Class OnlineSubsystemUtils.TestBeaconClient")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTestBeaconClient = sizeof(UTestBeaconClient); // 1216
    static_assert(sizeof(UTestBeaconClient) == 0x4C0, "Size of UTestBeaconClient is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
