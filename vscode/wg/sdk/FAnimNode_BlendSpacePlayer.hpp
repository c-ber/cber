#pragma once
#include "FAnimNode_AssetPlayerBase.hpp"
#include "FBlendFilter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BlendSpacePlayer // Size: 0x128
 : public FAnimNode_AssetPlayerBase // Size: 0x58
{
public:
    float X; /* Ofs: 0x58 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.X */
    float Y; /* Ofs: 0x5C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.Y */
    float Z; /* Ofs: 0x60 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.Z */
    float PlayRate; /* Ofs: 0x64 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.PlayRate */
    bool bLoop; /* Ofs: 0x68 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.bLoop */
    uint8_t UnknownData69[0x3];
    float StartPosition; /* Ofs: 0x6C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.StartPosition */
    ExternalPtr<struct UBlendSpaceBase> BlendSpace; /* Ofs: 0x70 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.BlendSpace */
    bool bResetPlayTimeWhenBlendSpaceChanges; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.bResetPlayTimeWhenBlendSpaceChanges */
    uint8_t UnknownData79[0x7];
    FBlendFilter BlendFilter; /* Ofs: 0x80 Size: 0x90 StructProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.BlendFilter */
    TArray<struct FBlendSampleData> BlendSampleDataCache; /* Ofs: 0x110 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.BlendSampleDataCache */
    ExternalPtr<struct UBlendSpaceBase> PreviousBlendSpace; /* Ofs: 0x120 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_BlendSpacePlayer.PreviousBlendSpace */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BlendSpacePlayer = sizeof(FAnimNode_BlendSpacePlayer); // 296
    static_assert(sizeof(FAnimNode_BlendSpacePlayer) == 0x128, "Size of FAnimNode_BlendSpacePlayer is not correct.");
	auto constexpr FAnimNode_BlendSpacePlayer_X_Offset = offsetof(FAnimNode_BlendSpacePlayer, X);
	static_assert(FAnimNode_BlendSpacePlayer_X_Offset == 0x58, "FAnimNode_BlendSpacePlayer::X offset is not 58");
	auto constexpr FAnimNode_BlendSpacePlayer_Y_Offset = offsetof(FAnimNode_BlendSpacePlayer, Y);
	static_assert(FAnimNode_BlendSpacePlayer_Y_Offset == 0x5c, "FAnimNode_BlendSpacePlayer::Y offset is not 5c");
	auto constexpr FAnimNode_BlendSpacePlayer_Z_Offset = offsetof(FAnimNode_BlendSpacePlayer, Z);
	static_assert(FAnimNode_BlendSpacePlayer_Z_Offset == 0x60, "FAnimNode_BlendSpacePlayer::Z offset is not 60");
	auto constexpr FAnimNode_BlendSpacePlayer_PlayRate_Offset = offsetof(FAnimNode_BlendSpacePlayer, PlayRate);
	static_assert(FAnimNode_BlendSpacePlayer_PlayRate_Offset == 0x64, "FAnimNode_BlendSpacePlayer::PlayRate offset is not 64");
	auto constexpr FAnimNode_BlendSpacePlayer_StartPosition_Offset = offsetof(FAnimNode_BlendSpacePlayer, StartPosition);
	static_assert(FAnimNode_BlendSpacePlayer_StartPosition_Offset == 0x6c, "FAnimNode_BlendSpacePlayer::StartPosition offset is not 6c");
	auto constexpr FAnimNode_BlendSpacePlayer_BlendSpace_Offset = offsetof(FAnimNode_BlendSpacePlayer, BlendSpace);
	static_assert(FAnimNode_BlendSpacePlayer_BlendSpace_Offset == 0x70, "FAnimNode_BlendSpacePlayer::BlendSpace offset is not 70");
	auto constexpr FAnimNode_BlendSpacePlayer_BlendFilter_Offset = offsetof(FAnimNode_BlendSpacePlayer, BlendFilter);
	static_assert(FAnimNode_BlendSpacePlayer_BlendFilter_Offset == 0x80, "FAnimNode_BlendSpacePlayer::BlendFilter offset is not 80");
	auto constexpr FAnimNode_BlendSpacePlayer_BlendSampleDataCache_Offset = offsetof(FAnimNode_BlendSpacePlayer, BlendSampleDataCache);
	static_assert(FAnimNode_BlendSpacePlayer_BlendSampleDataCache_Offset == 0x110, "FAnimNode_BlendSpacePlayer::BlendSampleDataCache offset is not 110");
	auto constexpr FAnimNode_BlendSpacePlayer_PreviousBlendSpace_Offset = offsetof(FAnimNode_BlendSpacePlayer, PreviousBlendSpace);
	static_assert(FAnimNode_BlendSpacePlayer_PreviousBlendSpace_Offset == 0x120, "FAnimNode_BlendSpacePlayer::PreviousBlendSpace offset is not 120");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
