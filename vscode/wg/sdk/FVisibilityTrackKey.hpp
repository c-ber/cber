#pragma once
#include "EVisibilityTrackAction.hpp"
#include "EVisibilityTrackCondition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVisibilityTrackKey // Size: 0x8
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.VisibilityTrackKey.Time */
    TEnumAsByte<enum EVisibilityTrackAction> Action; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.VisibilityTrackKey.Action */
    TEnumAsByte<enum EVisibilityTrackCondition> ActiveCondition; /* Ofs: 0x5 Size: 0x1 ByteProperty Engine.VisibilityTrackKey.ActiveCondition */
    uint8_t UnknownData6[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVisibilityTrackKey = sizeof(FVisibilityTrackKey); // 8
    static_assert(sizeof(FVisibilityTrackKey) == 0x8, "Size of FVisibilityTrackKey is not correct.");
	auto constexpr FVisibilityTrackKey_Time_Offset = offsetof(FVisibilityTrackKey, Time);
	static_assert(FVisibilityTrackKey_Time_Offset == 0x0, "FVisibilityTrackKey::Time offset is not 0");
	auto constexpr FVisibilityTrackKey_Action_Offset = offsetof(FVisibilityTrackKey, Action);
	static_assert(FVisibilityTrackKey_Action_Offset == 0x4, "FVisibilityTrackKey::Action offset is not 4");
	auto constexpr FVisibilityTrackKey_ActiveCondition_Offset = offsetof(FVisibilityTrackKey, ActiveCondition);
	static_assert(FVisibilityTrackKey_ActiveCondition_Offset == 0x5, "FVisibilityTrackKey::ActiveCondition offset is not 5");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
