#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionExtractionStep // Size: 0x10
{
public:
    ExternalPtr<struct UAnimSequence> AnimSequence; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.RootMotionExtractionStep.AnimSequence */
    float StartPosition; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.RootMotionExtractionStep.StartPosition */
    float EndPosition; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.RootMotionExtractionStep.EndPosition */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionExtractionStep = sizeof(FRootMotionExtractionStep); // 16
    static_assert(sizeof(FRootMotionExtractionStep) == 0x10, "Size of FRootMotionExtractionStep is not correct.");
	auto constexpr FRootMotionExtractionStep_AnimSequence_Offset = offsetof(FRootMotionExtractionStep, AnimSequence);
	static_assert(FRootMotionExtractionStep_AnimSequence_Offset == 0x0, "FRootMotionExtractionStep::AnimSequence offset is not 0");
	auto constexpr FRootMotionExtractionStep_StartPosition_Offset = offsetof(FRootMotionExtractionStep, StartPosition);
	static_assert(FRootMotionExtractionStep_StartPosition_Offset == 0x8, "FRootMotionExtractionStep::StartPosition offset is not 8");
	auto constexpr FRootMotionExtractionStep_EndPosition_Offset = offsetof(FRootMotionExtractionStep, EndPosition);
	static_assert(FRootMotionExtractionStep_EndPosition_Offset == 0xc, "FRootMotionExtractionStep::EndPosition offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
