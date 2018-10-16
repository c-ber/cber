#pragma once
#include "FAnimNode_AssetPlayerBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_SequencePlayer // Size: 0x70
 : public FAnimNode_AssetPlayerBase // Size: 0x58
{
public:
    ExternalPtr<struct UAnimSequenceBase> Sequence; /* Ofs: 0x58 Size: 0x8 ObjectProperty Engine.AnimNode_SequencePlayer.Sequence */
    bool bLoopAnimation; /* Ofs: 0x60 Size: 0x1 BitMask: 01 BoolProperty Engine.AnimNode_SequencePlayer.bLoopAnimation */
    uint8_t UnknownData61[0x3];
    float PlayRate; /* Ofs: 0x64 Size: 0x4 FloatProperty Engine.AnimNode_SequencePlayer.PlayRate */
    float StartPosition; /* Ofs: 0x68 Size: 0x4 FloatProperty Engine.AnimNode_SequencePlayer.StartPosition */
    uint8_t UnknownData6C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_SequencePlayer = sizeof(FAnimNode_SequencePlayer); // 112
    static_assert(sizeof(FAnimNode_SequencePlayer) == 0x70, "Size of FAnimNode_SequencePlayer is not correct.");
	auto constexpr FAnimNode_SequencePlayer_Sequence_Offset = offsetof(FAnimNode_SequencePlayer, Sequence);
	static_assert(FAnimNode_SequencePlayer_Sequence_Offset == 0x58, "FAnimNode_SequencePlayer::Sequence offset is not 58");
	auto constexpr FAnimNode_SequencePlayer_PlayRate_Offset = offsetof(FAnimNode_SequencePlayer, PlayRate);
	static_assert(FAnimNode_SequencePlayer_PlayRate_Offset == 0x64, "FAnimNode_SequencePlayer::PlayRate offset is not 64");
	auto constexpr FAnimNode_SequencePlayer_StartPosition_Offset = offsetof(FAnimNode_SequencePlayer, StartPosition);
	static_assert(FAnimNode_SequencePlayer_StartPosition_Offset == 0x68, "FAnimNode_SequencePlayer::StartPosition offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
