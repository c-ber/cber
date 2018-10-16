#pragma once
#include "FSoundAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundAttenuation // Size: 0x160
	: public UObject // Size: 0x30
{
private:
	typedef USoundAttenuation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1817); // id32("Class Engine.SoundAttenuation")
		return ptr;
	}
	FSoundAttenuationSettings Attenuation; /* Ofs: 0x30 Size: 0x130 - StructProperty Engine.SoundAttenuation.Attenuation */


	inline bool SetAttenuation(t_structHelper inst, FSoundAttenuationSettings value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundAttenuation = sizeof(USoundAttenuation); // 352
    static_assert(sizeof(USoundAttenuation) == 0x160, "Size of USoundAttenuation is not correct.");
	auto constexpr USoundAttenuation_Attenuation_Offset = offsetof(USoundAttenuation, Attenuation);
	static_assert(USoundAttenuation_Attenuation_Offset == 0x30, "USoundAttenuation::Attenuation offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
