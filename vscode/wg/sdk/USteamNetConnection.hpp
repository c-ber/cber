#pragma once
#include "UIpConnection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USteamNetConnection // Size: 0x656A0
	: public UIpConnection // Size: 0x656A0
{
private:
	typedef USteamNetConnection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2122); // id32("Class OnlineSubsystemSteam.SteamNetConnection")
		return ptr;
	}
//	uint8_t boolField65698;
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSteamNetConnection = sizeof(USteamNetConnection); // 415392
    static_assert(sizeof(USteamNetConnection) == 0x656A0, "Size of USteamNetConnection is not correct.");
//	auto constexpr USteamNetConnection_boolField65698_Offset = offsetof(USteamNetConnection, boolField65698);
//	static_assert(USteamNetConnection_boolField65698_Offset == 0x65698, "USteamNetConnection::boolField65698 offset is not 65698");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
