#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimControlTrackKey // Size: 0x20
{
public:
    float StartTime; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.AnimControlTrackKey.StartTime */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UAnimSequence> AnimSeq; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.AnimControlTrackKey.AnimSeq */
    float AnimStartOffset; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.AnimControlTrackKey.AnimStartOffset */
    float AnimEndOffset; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.AnimControlTrackKey.AnimEndOffset */
    float AnimPlayRate; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.AnimControlTrackKey.AnimPlayRate */
    bool bLooping : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Engine.AnimControlTrackKey.bLooping */
    bool bReverse : 1; /* Ofs: 0x1C Size: 0x1 BitMask: 02 BoolProperty Engine.AnimControlTrackKey.bReverse */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimControlTrackKey = sizeof(FAnimControlTrackKey); // 32
    static_assert(sizeof(FAnimControlTrackKey) == 0x20, "Size of FAnimControlTrackKey is not correct.");
	auto constexpr FAnimControlTrackKey_StartTime_Offset = offsetof(FAnimControlTrackKey, StartTime);
	static_assert(FAnimControlTrackKey_StartTime_Offset == 0x0, "FAnimControlTrackKey::StartTime offset is not 0");
	auto constexpr FAnimControlTrackKey_AnimSeq_Offset = offsetof(FAnimControlTrackKey, AnimSeq);
	static_assert(FAnimControlTrackKey_AnimSeq_Offset == 0x8, "FAnimControlTrackKey::AnimSeq offset is not 8");
	auto constexpr FAnimControlTrackKey_AnimStartOffset_Offset = offsetof(FAnimControlTrackKey, AnimStartOffset);
	static_assert(FAnimControlTrackKey_AnimStartOffset_Offset == 0x10, "FAnimControlTrackKey::AnimStartOffset offset is not 10");
	auto constexpr FAnimControlTrackKey_AnimEndOffset_Offset = offsetof(FAnimControlTrackKey, AnimEndOffset);
	static_assert(FAnimControlTrackKey_AnimEndOffset_Offset == 0x14, "FAnimControlTrackKey::AnimEndOffset offset is not 14");
	auto constexpr FAnimControlTrackKey_AnimPlayRate_Offset = offsetof(FAnimControlTrackKey, AnimPlayRate);
	static_assert(FAnimControlTrackKey_AnimPlayRate_Offset == 0x18, "FAnimControlTrackKey::AnimPlayRate offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
