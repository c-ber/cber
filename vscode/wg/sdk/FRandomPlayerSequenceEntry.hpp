#pragma once
#include "FAlphaBlend.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRandomPlayerSequenceEntry // Size: 0x58
{
public:
    ExternalPtr<struct UAnimSequence> Sequence; /* Ofs: 0x0 Size: 0x8 ObjectProperty AnimGraphRuntime.RandomPlayerSequenceEntry.Sequence */
    float ChanceToPlay; /* Ofs: 0x8 Size: 0x4 FloatProperty AnimGraphRuntime.RandomPlayerSequenceEntry.ChanceToPlay */
    int32_t MinLoopCount; /* Ofs: 0xC Size: 0x4 IntProperty AnimGraphRuntime.RandomPlayerSequenceEntry.MinLoopCount */
    int32_t MaxLoopCount; /* Ofs: 0x10 Size: 0x4 IntProperty AnimGraphRuntime.RandomPlayerSequenceEntry.MaxLoopCount */
    float MinPlayRate; /* Ofs: 0x14 Size: 0x4 FloatProperty AnimGraphRuntime.RandomPlayerSequenceEntry.MinPlayRate */
    float MaxPlayRate; /* Ofs: 0x18 Size: 0x4 FloatProperty AnimGraphRuntime.RandomPlayerSequenceEntry.MaxPlayRate */
    uint8_t UnknownData1C[0x4];
    FAlphaBlend BlendIn; /* Ofs: 0x20 Size: 0x38 StructProperty AnimGraphRuntime.RandomPlayerSequenceEntry.BlendIn */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRandomPlayerSequenceEntry = sizeof(FRandomPlayerSequenceEntry); // 88
    static_assert(sizeof(FRandomPlayerSequenceEntry) == 0x58, "Size of FRandomPlayerSequenceEntry is not correct.");
	auto constexpr FRandomPlayerSequenceEntry_Sequence_Offset = offsetof(FRandomPlayerSequenceEntry, Sequence);
	static_assert(FRandomPlayerSequenceEntry_Sequence_Offset == 0x0, "FRandomPlayerSequenceEntry::Sequence offset is not 0");
	auto constexpr FRandomPlayerSequenceEntry_ChanceToPlay_Offset = offsetof(FRandomPlayerSequenceEntry, ChanceToPlay);
	static_assert(FRandomPlayerSequenceEntry_ChanceToPlay_Offset == 0x8, "FRandomPlayerSequenceEntry::ChanceToPlay offset is not 8");
	auto constexpr FRandomPlayerSequenceEntry_MinLoopCount_Offset = offsetof(FRandomPlayerSequenceEntry, MinLoopCount);
	static_assert(FRandomPlayerSequenceEntry_MinLoopCount_Offset == 0xc, "FRandomPlayerSequenceEntry::MinLoopCount offset is not c");
	auto constexpr FRandomPlayerSequenceEntry_MaxLoopCount_Offset = offsetof(FRandomPlayerSequenceEntry, MaxLoopCount);
	static_assert(FRandomPlayerSequenceEntry_MaxLoopCount_Offset == 0x10, "FRandomPlayerSequenceEntry::MaxLoopCount offset is not 10");
	auto constexpr FRandomPlayerSequenceEntry_MinPlayRate_Offset = offsetof(FRandomPlayerSequenceEntry, MinPlayRate);
	static_assert(FRandomPlayerSequenceEntry_MinPlayRate_Offset == 0x14, "FRandomPlayerSequenceEntry::MinPlayRate offset is not 14");
	auto constexpr FRandomPlayerSequenceEntry_MaxPlayRate_Offset = offsetof(FRandomPlayerSequenceEntry, MaxPlayRate);
	static_assert(FRandomPlayerSequenceEntry_MaxPlayRate_Offset == 0x18, "FRandomPlayerSequenceEntry::MaxPlayRate offset is not 18");
	auto constexpr FRandomPlayerSequenceEntry_BlendIn_Offset = offsetof(FRandomPlayerSequenceEntry, BlendIn);
	static_assert(FRandomPlayerSequenceEntry_BlendIn_Offset == 0x20, "FRandomPlayerSequenceEntry::BlendIn offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
