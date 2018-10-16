#pragma once
#include "UVolume.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStartActivationVolume // Size: 0x450
	: public UVolume // Size: 0x440
{
private:
	typedef UStartActivationVolume t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1962); // id32("Class TslGame.StartActivationVolume")
		return ptr;
	}
	uint8_t UnknownData440[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStartActivationVolume = sizeof(UStartActivationVolume); // 1104
    static_assert(sizeof(UStartActivationVolume) == 0x450, "Size of UStartActivationVolume is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
