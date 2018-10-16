#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_PlaySound // Size: 0x80
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_PlaySound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(606); // id32("Class AIModule.BTTask_PlaySound")
		return ptr;
	}
	ExternalPtr<struct USoundCue> SoundToPlay; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTTask_PlaySound.SoundToPlay */


	inline bool SetSoundToPlay(t_structHelper inst, ExternalPtr<struct USoundCue> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_PlaySound = sizeof(UBTTask_PlaySound); // 128
    static_assert(sizeof(UBTTask_PlaySound) == 0x80, "Size of UBTTask_PlaySound is not correct.");
	auto constexpr UBTTask_PlaySound_SoundToPlay_Offset = offsetof(UBTTask_PlaySound, SoundToPlay);
	static_assert(UBTTask_PlaySound_SoundToPlay_Offset == 0x78, "UBTTask_PlaySound::SoundToPlay offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
