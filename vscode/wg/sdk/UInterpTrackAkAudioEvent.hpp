#pragma once
#include "UInterpTrackVectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackAkAudioEvent // Size: 0xB0
	: public UInterpTrackVectorBase // Size: 0x98
{
private:
	typedef UInterpTrackAkAudioEvent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2142); // id32("Class AkAudio.InterpTrackAkAudioEvent")
		return ptr;
	}
	TArray<struct FAkAudioEventTrackKey> Events; /* Ofs: 0x98 Size: 0x10 - ArrayProperty AkAudio.InterpTrackAkAudioEvent.Events */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x7];


	inline bool SetEvents(t_structHelper inst, TArray<struct FAkAudioEventTrackKey> value) { inst.WriteOffset(0x98, value); }
	inline bool bContinueEventOnMatineeEnd()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbContinueEventOnMatineeEnd(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackAkAudioEvent = sizeof(UInterpTrackAkAudioEvent); // 176
    static_assert(sizeof(UInterpTrackAkAudioEvent) == 0xB0, "Size of UInterpTrackAkAudioEvent is not correct.");
	auto constexpr UInterpTrackAkAudioEvent_Events_Offset = offsetof(UInterpTrackAkAudioEvent, Events);
	static_assert(UInterpTrackAkAudioEvent_Events_Offset == 0x98, "UInterpTrackAkAudioEvent::Events offset is not 98");
	auto constexpr UInterpTrackAkAudioEvent_boolFieldA8_Offset = offsetof(UInterpTrackAkAudioEvent, boolFieldA8);
	static_assert(UInterpTrackAkAudioEvent_boolFieldA8_Offset == 0xa8, "UInterpTrackAkAudioEvent::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
