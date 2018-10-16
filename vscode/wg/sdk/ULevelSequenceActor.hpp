#pragma once
#include "UActor.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelSequenceActor // Size: 0x480
	: public UActor // Size: 0x410
{
private:
	typedef ULevelSequenceActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1624); // id32("Class LevelSequence.LevelSequenceActor")
		return ptr;
	}
	uint8_t boolField410;
	uint8_t UnknownData411[0x7];
	FMovieSceneSequencePlaybackSettings PlaybackSettings; /* Ofs: 0x418 Size: 0x28 - StructProperty LevelSequence.LevelSequenceActor.PlaybackSettings */
	ExternalPtr<struct ULevelSequencePlayer> SequencePlayer; /* Ofs: 0x440 Size: 0x8 - ObjectProperty LevelSequence.LevelSequenceActor.SequencePlayer */
	FStringAssetReference LevelSequence; /* Ofs: 0x448 Size: 0x10 - StructProperty LevelSequence.LevelSequenceActor.LevelSequence */
	TArray<ExternalPtr<struct UActor>> AdditionalEventReceivers; /* Ofs: 0x458 Size: 0x10 - ArrayProperty LevelSequence.LevelSequenceActor.AdditionalEventReceivers */
	ExternalPtr<struct ULevelSequenceBurnInOptions> BurnInOptions; /* Ofs: 0x468 Size: 0x8 - ObjectProperty LevelSequence.LevelSequenceActor.BurnInOptions */
	ExternalPtr<struct UMovieSceneBindingOverrides> BindingOverrides; /* Ofs: 0x470 Size: 0x8 - ObjectProperty LevelSequence.LevelSequenceActor.BindingOverrides */
	ExternalPtr<struct ULevelSequenceBurnIn> BurnInInstance; /* Ofs: 0x478 Size: 0x8 - ObjectProperty LevelSequence.LevelSequenceActor.BurnInInstance */


	inline bool bAutoPlay()
	{
		return boolField410& 0x1;
	}
	inline bool SetbAutoPlay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPlaybackSettings(t_structHelper inst, FMovieSceneSequencePlaybackSettings value) { inst.WriteOffset(0x418, value); }
	inline bool SetSequencePlayer(t_structHelper inst, ExternalPtr<struct ULevelSequencePlayer> value) { inst.WriteOffset(0x440, value); }
	inline bool SetLevelSequence(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x448, value); }
	inline bool SetAdditionalEventReceivers(t_structHelper inst, TArray<ExternalPtr<struct UActor>> value) { inst.WriteOffset(0x458, value); }
	inline bool SetBurnInOptions(t_structHelper inst, ExternalPtr<struct ULevelSequenceBurnInOptions> value) { inst.WriteOffset(0x468, value); }
	inline bool SetBindingOverrides(t_structHelper inst, ExternalPtr<struct UMovieSceneBindingOverrides> value) { inst.WriteOffset(0x470, value); }
	inline bool SetBurnInInstance(t_structHelper inst, ExternalPtr<struct ULevelSequenceBurnIn> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelSequenceActor = sizeof(ULevelSequenceActor); // 1152
    static_assert(sizeof(ULevelSequenceActor) == 0x480, "Size of ULevelSequenceActor is not correct.");
	auto constexpr ULevelSequenceActor_boolField410_Offset = offsetof(ULevelSequenceActor, boolField410);
	static_assert(ULevelSequenceActor_boolField410_Offset == 0x410, "ULevelSequenceActor::boolField410 offset is not 410");
	auto constexpr ULevelSequenceActor_PlaybackSettings_Offset = offsetof(ULevelSequenceActor, PlaybackSettings);
	static_assert(ULevelSequenceActor_PlaybackSettings_Offset == 0x418, "ULevelSequenceActor::PlaybackSettings offset is not 418");
	auto constexpr ULevelSequenceActor_SequencePlayer_Offset = offsetof(ULevelSequenceActor, SequencePlayer);
	static_assert(ULevelSequenceActor_SequencePlayer_Offset == 0x440, "ULevelSequenceActor::SequencePlayer offset is not 440");
	auto constexpr ULevelSequenceActor_LevelSequence_Offset = offsetof(ULevelSequenceActor, LevelSequence);
	static_assert(ULevelSequenceActor_LevelSequence_Offset == 0x448, "ULevelSequenceActor::LevelSequence offset is not 448");
	auto constexpr ULevelSequenceActor_AdditionalEventReceivers_Offset = offsetof(ULevelSequenceActor, AdditionalEventReceivers);
	static_assert(ULevelSequenceActor_AdditionalEventReceivers_Offset == 0x458, "ULevelSequenceActor::AdditionalEventReceivers offset is not 458");
	auto constexpr ULevelSequenceActor_BurnInOptions_Offset = offsetof(ULevelSequenceActor, BurnInOptions);
	static_assert(ULevelSequenceActor_BurnInOptions_Offset == 0x468, "ULevelSequenceActor::BurnInOptions offset is not 468");
	auto constexpr ULevelSequenceActor_BindingOverrides_Offset = offsetof(ULevelSequenceActor, BindingOverrides);
	static_assert(ULevelSequenceActor_BindingOverrides_Offset == 0x470, "ULevelSequenceActor::BindingOverrides offset is not 470");
	auto constexpr ULevelSequenceActor_BurnInInstance_Offset = offsetof(ULevelSequenceActor, BurnInInstance);
	static_assert(ULevelSequenceActor_BurnInInstance_Offset == 0x478, "ULevelSequenceActor::BurnInInstance offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
