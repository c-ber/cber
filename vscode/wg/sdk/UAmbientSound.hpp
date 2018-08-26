#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAmbientSound // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UAmbientSound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1705); // id32("Class Engine.AmbientSound")
		return ptr;
	}
//	ExternalPtr<struct UAudioComponent> AudioComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.AmbientSound.AudioComponent */


//	inline bool SetAudioComponent(t_structHelper inst, ExternalPtr<struct UAudioComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAmbientSound = sizeof(UAmbientSound); // 1040
    static_assert(sizeof(UAmbientSound) == 0x410, "Size of UAmbientSound is not correct.");
//	auto constexpr UAmbientSound_AudioComponent_Offset = offsetof(UAmbientSound, AudioComponent);
//	static_assert(UAmbientSound_AudioComponent_Offset == 0x408, "UAmbientSound::AudioComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
