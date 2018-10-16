#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSegment // Size: 0x20
{
public:
    ExternalPtr<struct UAnimSequenceBase> AnimReference; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.AnimSegment.AnimReference */
    float StartPos; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.AnimSegment.StartPos */
    float AnimStartTime; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.AnimSegment.AnimStartTime */
    float AnimEndTime; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.AnimSegment.AnimEndTime */
    float AnimPlayRate; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.AnimSegment.AnimPlayRate */
    int32_t LoopingCount; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.AnimSegment.LoopingCount */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSegment = sizeof(FAnimSegment); // 32
    static_assert(sizeof(FAnimSegment) == 0x20, "Size of FAnimSegment is not correct.");
	auto constexpr FAnimSegment_AnimReference_Offset = offsetof(FAnimSegment, AnimReference);
	static_assert(FAnimSegment_AnimReference_Offset == 0x0, "FAnimSegment::AnimReference offset is not 0");
	auto constexpr FAnimSegment_StartPos_Offset = offsetof(FAnimSegment, StartPos);
	static_assert(FAnimSegment_StartPos_Offset == 0x8, "FAnimSegment::StartPos offset is not 8");
	auto constexpr FAnimSegment_AnimStartTime_Offset = offsetof(FAnimSegment, AnimStartTime);
	static_assert(FAnimSegment_AnimStartTime_Offset == 0xc, "FAnimSegment::AnimStartTime offset is not c");
	auto constexpr FAnimSegment_AnimEndTime_Offset = offsetof(FAnimSegment, AnimEndTime);
	static_assert(FAnimSegment_AnimEndTime_Offset == 0x10, "FAnimSegment::AnimEndTime offset is not 10");
	auto constexpr FAnimSegment_AnimPlayRate_Offset = offsetof(FAnimSegment, AnimPlayRate);
	static_assert(FAnimSegment_AnimPlayRate_Offset == 0x14, "FAnimSegment::AnimPlayRate offset is not 14");
	auto constexpr FAnimSegment_LoopingCount_Offset = offsetof(FAnimSegment, LoopingCount);
	static_assert(FAnimSegment_LoopingCount_Offset == 0x18, "FAnimSegment::LoopingCount offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
