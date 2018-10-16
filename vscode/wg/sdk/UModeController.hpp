#pragma once
#include "UAIController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UModeController // Size: 0x520
	: public UAIController // Size: 0x520
{
private:
	typedef UModeController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1884); // id32("Class TslGame.ModeController")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUModeController = sizeof(UModeController); // 1312
    static_assert(sizeof(UModeController) == 0x520, "Size of UModeController is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
