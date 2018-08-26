#pragma once
#include "USoundEffectPreset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundEffectSubmixPreset // Size: 0x48
	: public USoundEffectPreset // Size: 0x48
{
private:
	typedef USoundEffectSubmixPreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(364); // id32("Class Engine.SoundEffectSubmixPreset")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundEffectSubmixPreset = sizeof(USoundEffectSubmixPreset); // 72
    static_assert(sizeof(USoundEffectSubmixPreset) == 0x48, "Size of USoundEffectSubmixPreset is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
