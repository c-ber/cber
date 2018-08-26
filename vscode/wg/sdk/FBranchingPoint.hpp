#pragma once
#include "FAnimLinkableElement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBranchingPoint // Size: 0x40
 : public FAnimLinkableElement // Size: 0x30
{
public:
    FName EventName; /* Ofs: 0x30 Size: 0x8 NameProperty Engine.BranchingPoint.EventName */
    float DisplayTime; /* Ofs: 0x38 Size: 0x4 FloatProperty Engine.BranchingPoint.DisplayTime */
    float TriggerTimeOffset; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.BranchingPoint.TriggerTimeOffset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBranchingPoint = sizeof(FBranchingPoint); // 64
    static_assert(sizeof(FBranchingPoint) == 0x40, "Size of FBranchingPoint is not correct.");
	auto constexpr FBranchingPoint_EventName_Offset = offsetof(FBranchingPoint, EventName);
	static_assert(FBranchingPoint_EventName_Offset == 0x30, "FBranchingPoint::EventName offset is not 30");
	auto constexpr FBranchingPoint_DisplayTime_Offset = offsetof(FBranchingPoint, DisplayTime);
	static_assert(FBranchingPoint_DisplayTime_Offset == 0x38, "FBranchingPoint::DisplayTime offset is not 38");
	auto constexpr FBranchingPoint_TriggerTimeOffset_Offset = offsetof(FBranchingPoint, TriggerTimeOffset);
	static_assert(FBranchingPoint_TriggerTimeOffset_Offset == 0x3c, "FBranchingPoint::TriggerTimeOffset offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
