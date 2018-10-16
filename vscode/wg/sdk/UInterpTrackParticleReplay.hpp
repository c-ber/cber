#pragma once
#include "UInterpTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterpTrackParticleReplay // Size: 0x88
	: public UInterpTrack // Size: 0x78
{
private:
	typedef UInterpTrackParticleReplay t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(812); // id32("Class Engine.InterpTrackParticleReplay")
		return ptr;
	}
	TArray<struct FParticleReplayTrackKey> TrackKeys; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.InterpTrackParticleReplay.TrackKeys */


	inline bool SetTrackKeys(t_structHelper inst, TArray<struct FParticleReplayTrackKey> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterpTrackParticleReplay = sizeof(UInterpTrackParticleReplay); // 136
    static_assert(sizeof(UInterpTrackParticleReplay) == 0x88, "Size of UInterpTrackParticleReplay is not correct.");
	auto constexpr UInterpTrackParticleReplay_TrackKeys_Offset = offsetof(UInterpTrackParticleReplay, TrackKeys);
	static_assert(UInterpTrackParticleReplay_TrackKeys_Offset == 0x78, "UInterpTrackParticleReplay::TrackKeys offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
