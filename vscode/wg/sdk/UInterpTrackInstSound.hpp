#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstSound // Size: 0x40
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstSound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(841); // id32("Class Engine.InterpTrackInstSound")
		return ptr;
	}
	float LastUpdatePosition; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.InterpTrackInstSound.LastUpdatePosition */
	uint8_t UnknownData34[0x4];
	ExternalPtr<struct UAudioComponent> PlayAudioComp; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.InterpTrackInstSound.PlayAudioComp */


	inline bool SetLastUpdatePosition(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetPlayAudioComp(t_structHelper inst, ExternalPtr<struct UAudioComponent> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstSound = sizeof(UInterpTrackInstSound); // 64
    static_assert(sizeof(UInterpTrackInstSound) == 0x40, "Size of UInterpTrackInstSound is not correct.");
	auto constexpr UInterpTrackInstSound_LastUpdatePosition_Offset = offsetof(UInterpTrackInstSound, LastUpdatePosition);
	static_assert(UInterpTrackInstSound_LastUpdatePosition_Offset == 0x30, "UInterpTrackInstSound::LastUpdatePosition offset is not 30");
	auto constexpr UInterpTrackInstSound_PlayAudioComp_Offset = offsetof(UInterpTrackInstSound, PlayAudioComp);
	static_assert(UInterpTrackInstSound_PlayAudioComp_Offset == 0x38, "UInterpTrackInstSound::PlayAudioComp offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
