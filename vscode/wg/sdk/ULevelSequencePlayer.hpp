#pragma once
#include "UMovieSceneSequencePlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULevelSequencePlayer // Size: 0x780
	: public UMovieSceneSequencePlayer // Size: 0x700
{
private:
	typedef ULevelSequencePlayer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1621); // id32("Class LevelSequence.LevelSequencePlayer")
		return ptr;
	}
	uint8_t UnknownData700[0x20];
	TArray<ExternalPtr<struct UObject>> AdditionalEventReceivers; /* Ofs: 0x720 Size: 0x10 - ArrayProperty LevelSequence.LevelSequencePlayer.AdditionalEventReceivers */
	uint8_t UnknownData730[0x50];


	inline bool SetAdditionalEventReceivers(t_structHelper inst, TArray<ExternalPtr<struct UObject>> value) { inst.WriteOffset(0x720, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULevelSequencePlayer = sizeof(ULevelSequencePlayer); // 1920
    static_assert(sizeof(ULevelSequencePlayer) == 0x780, "Size of ULevelSequencePlayer is not correct.");
	auto constexpr ULevelSequencePlayer_AdditionalEventReceivers_Offset = offsetof(ULevelSequencePlayer, AdditionalEventReceivers);
	static_assert(ULevelSequencePlayer_AdditionalEventReceivers_Offset == 0x720, "ULevelSequencePlayer::AdditionalEventReceivers offset is not 720");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
