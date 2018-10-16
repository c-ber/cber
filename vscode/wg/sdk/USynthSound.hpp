#pragma once
#include "USoundWaveProcedural.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USynthSound // Size: 0x330
	: public USoundWaveProcedural // Size: 0x310
{
private:
	typedef USynthSound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(371); // id32("Class AudioMixer.SynthSound")
		return ptr;
	}
	uint8_t UnknownData310[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSynthSound = sizeof(USynthSound); // 816
    static_assert(sizeof(USynthSound) == 0x330, "Size of USynthSound is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
