#pragma once
#include "USoundWave.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundWaveProcedural // Size: 0x310
	: public USoundWave // Size: 0x288
{
private:
	typedef USoundWaveProcedural t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(370); // id32("Class Engine.SoundWaveProcedural")
		return ptr;
	}
	uint8_t UnknownData288[0x88];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundWaveProcedural = sizeof(USoundWaveProcedural); // 784
    static_assert(sizeof(USoundWaveProcedural) == 0x310, "Size of USoundWaveProcedural is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
