#pragma once
#include "UInterpTrackInst.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackInstAkAudioEvent // Size: 0x38
	: public UInterpTrackInst // Size: 0x30
{
private:
	typedef UInterpTrackInstAkAudioEvent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2144); // id32("Class AkAudio.InterpTrackInstAkAudioEvent")
		return ptr;
	}
	float LastUpdatePosition; /* Ofs: 0x30 Size: 0x4 - FloatProperty AkAudio.InterpTrackInstAkAudioEvent.LastUpdatePosition */
	uint8_t UnknownData34[0x4];


	inline bool SetLastUpdatePosition(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackInstAkAudioEvent = sizeof(UInterpTrackInstAkAudioEvent); // 56
    static_assert(sizeof(UInterpTrackInstAkAudioEvent) == 0x38, "Size of UInterpTrackInstAkAudioEvent is not correct.");
	auto constexpr UInterpTrackInstAkAudioEvent_LastUpdatePosition_Offset = offsetof(UInterpTrackInstAkAudioEvent, LastUpdatePosition);
	static_assert(UInterpTrackInstAkAudioEvent_LastUpdatePosition_Offset == 0x30, "UInterpTrackInstAkAudioEvent::LastUpdatePosition offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
