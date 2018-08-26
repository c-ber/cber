#pragma once
#include "UVivoxResponse.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UChannelResponse // Size: 0xF0
	: public UVivoxResponse // Size: 0xA0
{
private:
	typedef UChannelResponse t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64); // id32("Class TslGame.ChannelResponse")
		return ptr;
	}
	uint8_t UnknownDataA0[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUChannelResponse = sizeof(UChannelResponse); // 240
    static_assert(sizeof(UChannelResponse) == 0xF0, "Size of UChannelResponse is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
