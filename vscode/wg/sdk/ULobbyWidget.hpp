#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyWidget // Size: 0x248
	: public UUserWidget // Size: 0x248
{
private:
	typedef ULobbyWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1925); // id32("Class TslGame.LobbyWidget")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyWidget = sizeof(ULobbyWidget); // 584
    static_assert(sizeof(ULobbyWidget) == 0x248, "Size of ULobbyWidget is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
