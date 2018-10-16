#pragma once
#include "EAnimNotifyEventType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBranchingPointMarker // Size: 0xC
{
public:
    int32_t NotifyIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.BranchingPointMarker.NotifyIndex */
    float TriggerTime; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.BranchingPointMarker.TriggerTime */
    TEnumAsByte<enum EAnimNotifyEventType> NotifyEventType; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.BranchingPointMarker.NotifyEventType */
    uint8_t UnknownData9[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBranchingPointMarker = sizeof(FBranchingPointMarker); // 12
    static_assert(sizeof(FBranchingPointMarker) == 0xC, "Size of FBranchingPointMarker is not correct.");
	auto constexpr FBranchingPointMarker_NotifyIndex_Offset = offsetof(FBranchingPointMarker, NotifyIndex);
	static_assert(FBranchingPointMarker_NotifyIndex_Offset == 0x0, "FBranchingPointMarker::NotifyIndex offset is not 0");
	auto constexpr FBranchingPointMarker_TriggerTime_Offset = offsetof(FBranchingPointMarker, TriggerTime);
	static_assert(FBranchingPointMarker_TriggerTime_Offset == 0x4, "FBranchingPointMarker::TriggerTime offset is not 4");
	auto constexpr FBranchingPointMarker_NotifyEventType_Offset = offsetof(FBranchingPointMarker, NotifyEventType);
	static_assert(FBranchingPointMarker_NotifyEventType_Offset == 0x8, "FBranchingPointMarker::NotifyEventType offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
