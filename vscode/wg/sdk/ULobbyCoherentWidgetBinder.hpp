#pragma once
#include "UCoherentWidgetBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULobbyCoherentWidgetBinder // Size: 0xB0
	: public UCoherentWidgetBinder // Size: 0xB0
{
private:
	typedef ULobbyCoherentWidgetBinder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1833); // id32("Class TslGame.LobbyCoherentWidgetBinder")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULobbyCoherentWidgetBinder = sizeof(ULobbyCoherentWidgetBinder); // 176
    static_assert(sizeof(ULobbyCoherentWidgetBinder) == 0xB0, "Size of ULobbyCoherentWidgetBinder is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
