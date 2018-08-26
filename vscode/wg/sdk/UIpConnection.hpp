#pragma once
#include "UNetConnection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UIpConnection // Size: 0x656A0
	: public UNetConnection // Size: 0x65680
{
private:
	typedef UIpConnection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2097); // id32("Class OnlineSubsystemUtils.IpConnection")
		return ptr;
	}
	uint8_t UnknownData65680[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUIpConnection = sizeof(UIpConnection); // 415392
    static_assert(sizeof(UIpConnection) == 0x656A0, "Size of UIpConnection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
