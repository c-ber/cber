#pragma once
#include "FForceFeedbackAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UForceFeedbackAttenuation // Size: 0xD8
	: public UObject // Size: 0x30
{
private:
	typedef UForceFeedbackAttenuation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(184); // id32("Class Engine.ForceFeedbackAttenuation")
		return ptr;
	}
	FForceFeedbackAttenuationSettings Attenuation; /* Ofs: 0x30 Size: 0xA8 - StructProperty Engine.ForceFeedbackAttenuation.Attenuation */


	inline bool SetAttenuation(t_structHelper inst, FForceFeedbackAttenuationSettings value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUForceFeedbackAttenuation = sizeof(UForceFeedbackAttenuation); // 216
    static_assert(sizeof(UForceFeedbackAttenuation) == 0xD8, "Size of UForceFeedbackAttenuation is not correct.");
	auto constexpr UForceFeedbackAttenuation_Attenuation_Offset = offsetof(UForceFeedbackAttenuation, Attenuation);
	static_assert(UForceFeedbackAttenuation_Attenuation_Offset == 0x30, "UForceFeedbackAttenuation::Attenuation offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
