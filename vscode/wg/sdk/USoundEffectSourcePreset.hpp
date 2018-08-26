#pragma once
#include "USoundEffectPreset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundEffectSourcePreset // Size: 0x48
	: public USoundEffectPreset // Size: 0x48
{
private:
	typedef USoundEffectSourcePreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1208); // id32("Class Engine.SoundEffectSourcePreset")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundEffectSourcePreset = sizeof(USoundEffectSourcePreset); // 72
    static_assert(sizeof(USoundEffectSourcePreset) == 0x48, "Size of USoundEffectSourcePreset is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
