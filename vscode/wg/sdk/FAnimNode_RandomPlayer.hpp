#pragma once
#include "FAnimNode_Base.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_RandomPlayer // Size: 0x90
 : public FAnimNode_Base // Size: 0x30
{
public:
    bool bShuffleMode; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_RandomPlayer.bShuffleMode */
    uint8_t UnknownData31[0x7];
    TArray<struct FRandomPlayerSequenceEntry> Entries; /* Ofs: 0x38 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_RandomPlayer.Entries */
    uint8_t UnknownData48[0x48];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_RandomPlayer = sizeof(FAnimNode_RandomPlayer); // 144
    static_assert(sizeof(FAnimNode_RandomPlayer) == 0x90, "Size of FAnimNode_RandomPlayer is not correct.");
	auto constexpr FAnimNode_RandomPlayer_Entries_Offset = offsetof(FAnimNode_RandomPlayer, Entries);
	static_assert(FAnimNode_RandomPlayer_Entries_Offset == 0x38, "FAnimNode_RandomPlayer::Entries offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
