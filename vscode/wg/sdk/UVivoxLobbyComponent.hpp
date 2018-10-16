#pragma once
#include "UVivoxBaseComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVivoxLobbyComponent // Size: 0x360
	: public UVivoxBaseComponent // Size: 0x2A0
{
private:
	typedef UVivoxLobbyComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69); // id32("Class TslGame.VivoxLobbyComponent")
		return ptr;
	}
	uint8_t UnknownData2A0[0xC0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVivoxLobbyComponent = sizeof(UVivoxLobbyComponent); // 864
    static_assert(sizeof(UVivoxLobbyComponent) == 0x360, "Size of UVivoxLobbyComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
