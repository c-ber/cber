#pragma once
#include "UTslPlayerController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDemoSpectator // Size: 0xCF0
	: public UTslPlayerController // Size: 0xCD0
{
private:
	typedef UTslDemoSpectator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1328); // id32("Class TslGame.TslDemoSpectator")
		return ptr;
	}
	uint8_t UnknownDataCD0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDemoSpectator = sizeof(UTslDemoSpectator); // 3312
    static_assert(sizeof(UTslDemoSpectator) == 0xCF0, "Size of UTslDemoSpectator is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
