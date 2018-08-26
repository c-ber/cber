#pragma once
#include "UHUD.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDebugCameraHUD // Size: 0x4F0
	: public UHUD // Size: 0x4F0
{
private:
	typedef UDebugCameraHUD t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1740); // id32("Class Engine.DebugCameraHUD")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDebugCameraHUD = sizeof(UDebugCameraHUD); // 1264
    static_assert(sizeof(UDebugCameraHUD) == 0x4F0, "Size of UDebugCameraHUD is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
