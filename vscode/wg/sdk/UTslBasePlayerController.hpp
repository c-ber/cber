#pragma once
#include "UPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBasePlayerController // Size: 0x790
	: public UPlayerController // Size: 0x780
{
private:
	typedef UTslBasePlayerController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1324); // id32("Class TslGame.TslBasePlayerController")
		return ptr;
	}
	uint8_t UnknownData780[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBasePlayerController = sizeof(UTslBasePlayerController); // 1936
    static_assert(sizeof(UTslBasePlayerController) == 0x790, "Size of UTslBasePlayerController is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
