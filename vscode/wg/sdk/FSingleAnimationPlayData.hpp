#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSingleAnimationPlayData // Size: 0x18
{
public:
    ExternalPtr<struct UAnimationAsset> AnimToPlay; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.SingleAnimationPlayData.AnimToPlay */
    bool bSavedLooping : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.SingleAnimationPlayData.bSavedLooping */
    bool bSavedPlaying : 1; /* Ofs: 0x8 Size: 0x1 BitMask: 02 BoolProperty Engine.SingleAnimationPlayData.bSavedPlaying */
    uint8_t UnknownData9[0x3];
    float SavedPosition; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.SingleAnimationPlayData.SavedPosition */
    float SavedPlayRate; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.SingleAnimationPlayData.SavedPlayRate */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSingleAnimationPlayData = sizeof(FSingleAnimationPlayData); // 24
    static_assert(sizeof(FSingleAnimationPlayData) == 0x18, "Size of FSingleAnimationPlayData is not correct.");
	auto constexpr FSingleAnimationPlayData_AnimToPlay_Offset = offsetof(FSingleAnimationPlayData, AnimToPlay);
	static_assert(FSingleAnimationPlayData_AnimToPlay_Offset == 0x0, "FSingleAnimationPlayData::AnimToPlay offset is not 0");
	auto constexpr FSingleAnimationPlayData_SavedPosition_Offset = offsetof(FSingleAnimationPlayData, SavedPosition);
	static_assert(FSingleAnimationPlayData_SavedPosition_Offset == 0xc, "FSingleAnimationPlayData::SavedPosition offset is not c");
	auto constexpr FSingleAnimationPlayData_SavedPlayRate_Offset = offsetof(FSingleAnimationPlayData, SavedPlayRate);
	static_assert(FSingleAnimationPlayData_SavedPlayRate_Offset == 0x10, "FSingleAnimationPlayData::SavedPlayRate offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
