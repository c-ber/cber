#pragma once
#include "USoundNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeDoppler // Size: 0x48
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeDoppler t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1220); // id32("Class Engine.SoundNodeDoppler")
		return ptr;
	}
	float DopplerIntensity; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.SoundNodeDoppler.DopplerIntensity */
	uint8_t UnknownData44[0x4];


	inline bool SetDopplerIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeDoppler = sizeof(USoundNodeDoppler); // 72
    static_assert(sizeof(USoundNodeDoppler) == 0x48, "Size of USoundNodeDoppler is not correct.");
	auto constexpr USoundNodeDoppler_DopplerIntensity_Offset = offsetof(USoundNodeDoppler, DopplerIntensity);
	static_assert(USoundNodeDoppler_DopplerIntensity_Offset == 0x40, "USoundNodeDoppler::DopplerIntensity offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
