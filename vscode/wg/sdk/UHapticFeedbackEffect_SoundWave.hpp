#pragma once
#include "UHapticFeedbackEffect_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UHapticFeedbackEffect_SoundWave // Size: 0x68
	: public UHapticFeedbackEffect_Base // Size: 0x30
{
private:
	typedef UHapticFeedbackEffect_SoundWave t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(781); // id32("Class Engine.HapticFeedbackEffect_SoundWave")
		return ptr;
	}
	ExternalPtr<struct USoundWave> SoundWave; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.HapticFeedbackEffect_SoundWave.SoundWave */
	uint8_t UnknownData38[0x30];


	inline bool SetSoundWave(t_structHelper inst, ExternalPtr<struct USoundWave> value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUHapticFeedbackEffect_SoundWave = sizeof(UHapticFeedbackEffect_SoundWave); // 104
    static_assert(sizeof(UHapticFeedbackEffect_SoundWave) == 0x68, "Size of UHapticFeedbackEffect_SoundWave is not correct.");
	auto constexpr UHapticFeedbackEffect_SoundWave_SoundWave_Offset = offsetof(UHapticFeedbackEffect_SoundWave, SoundWave);
	static_assert(UHapticFeedbackEffect_SoundWave_SoundWave_Offset == 0x30, "UHapticFeedbackEffect_SoundWave::SoundWave offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
