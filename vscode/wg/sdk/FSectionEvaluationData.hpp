#pragma once
#include "ESectionEvaluationFlags.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSectionEvaluationData // Size: 0xC
{
public:
    int32_t ImplIndex; /* Ofs: 0x0 Size: 0x4 IntProperty MovieScene.SectionEvaluationData.ImplIndex */
    float ForcedTime; /* Ofs: 0x4 Size: 0x4 FloatProperty MovieScene.SectionEvaluationData.ForcedTime */
    TEnumAsByte<enum ESectionEvaluationFlags> Flags; /* Ofs: 0x8 Size: 0x1 EnumProperty MovieScene.SectionEvaluationData.Flags */
    uint8_t UnknownData9[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSectionEvaluationData = sizeof(FSectionEvaluationData); // 12
    static_assert(sizeof(FSectionEvaluationData) == 0xC, "Size of FSectionEvaluationData is not correct.");
	auto constexpr FSectionEvaluationData_ImplIndex_Offset = offsetof(FSectionEvaluationData, ImplIndex);
	static_assert(FSectionEvaluationData_ImplIndex_Offset == 0x0, "FSectionEvaluationData::ImplIndex offset is not 0");
	auto constexpr FSectionEvaluationData_ForcedTime_Offset = offsetof(FSectionEvaluationData, ForcedTime);
	static_assert(FSectionEvaluationData_ForcedTime_Offset == 0x4, "FSectionEvaluationData::ForcedTime offset is not 4");
	auto constexpr FSectionEvaluationData_Flags_Offset = offsetof(FSectionEvaluationData, Flags);
	static_assert(FSectionEvaluationData_Flags_Offset == 0x8, "FSectionEvaluationData::Flags offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
