#pragma once
#include "UActorComponent.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActorSequenceComponent // Size: 0x230
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UActorSequenceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(426); // id32("Class ActorSequence.ActorSequenceComponent")
		return ptr;
	}
//	FMovieSceneSequencePlaybackSettings PlaybackSettings; /* Ofs: 0x1E8 Size: 0x28 - StructProperty ActorSequence.ActorSequenceComponent.PlaybackSettings */
	uint8_t UnknownData1F0[0x20];
	ExternalPtr<struct UActorSequence> Sequence; /* Ofs: 0x210 Size: 0x8 - ObjectProperty ActorSequence.ActorSequenceComponent.Sequence */
	ExternalPtr<struct UActorSequencePlayer> SequencePlayer; /* Ofs: 0x218 Size: 0x8 - ObjectProperty ActorSequence.ActorSequenceComponent.SequencePlayer */
	uint8_t boolField220;
	uint8_t UnknownData221[0xF];


//	inline bool SetPlaybackSettings(t_structHelper inst, FMovieSceneSequencePlaybackSettings value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetSequence(t_structHelper inst, ExternalPtr<struct UActorSequence> value) { inst.WriteOffset(0x210, value); }
	inline bool SetSequencePlayer(t_structHelper inst, ExternalPtr<struct UActorSequencePlayer> value) { inst.WriteOffset(0x218, value); }
	inline bool bAutoPlay()
	{
		return boolField220& 0x1;
	}
	inline bool SetbAutoPlay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x220, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActorSequenceComponent = sizeof(UActorSequenceComponent); // 560
    static_assert(sizeof(UActorSequenceComponent) == 0x230, "Size of UActorSequenceComponent is not correct.");
//	auto constexpr UActorSequenceComponent_PlaybackSettings_Offset = offsetof(UActorSequenceComponent, PlaybackSettings);
//	static_assert(UActorSequenceComponent_PlaybackSettings_Offset == 0x1e8, "UActorSequenceComponent::PlaybackSettings offset is not 1e8");
	auto constexpr UActorSequenceComponent_Sequence_Offset = offsetof(UActorSequenceComponent, Sequence);
	static_assert(UActorSequenceComponent_Sequence_Offset == 0x210, "UActorSequenceComponent::Sequence offset is not 210");
	auto constexpr UActorSequenceComponent_SequencePlayer_Offset = offsetof(UActorSequenceComponent, SequencePlayer);
	static_assert(UActorSequenceComponent_SequencePlayer_Offset == 0x218, "UActorSequenceComponent::SequencePlayer offset is not 218");
	auto constexpr UActorSequenceComponent_boolField220_Offset = offsetof(UActorSequenceComponent, boolField220);
	static_assert(UActorSequenceComponent_boolField220_Offset == 0x220, "UActorSequenceComponent::boolField220 offset is not 220");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
