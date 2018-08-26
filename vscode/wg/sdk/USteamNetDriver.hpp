#pragma once
#include "UIpNetDriver.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USteamNetDriver // Size: 0x4A0
	: public UIpNetDriver // Size: 0x480
{
private:
	typedef USteamNetDriver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2123); // id32("Class OnlineSubsystemSteam.SteamNetDriver")
		return ptr;
	}
	uint8_t UnknownData480[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSteamNetDriver = sizeof(USteamNetDriver); // 1184
    static_assert(sizeof(USteamNetDriver) == 0x4A0, "Size of USteamNetDriver is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
