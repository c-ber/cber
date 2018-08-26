#pragma once
#include "UTslPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPlayerController_Menu // Size: 0xCD0
	: public UTslPlayerController // Size: 0xCD0
{
private:
	typedef UTslPlayerController_Menu t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1329); // id32("Class TslGame.TslPlayerController_Menu")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPlayerController_Menu = sizeof(UTslPlayerController_Menu); // 3280
    static_assert(sizeof(UTslPlayerController_Menu) == 0xCD0, "Size of UTslPlayerController_Menu is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
