#pragma once
#include "ETrackToggleAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FToggleTrackKey // Size: 0x8
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ToggleTrackKey.Time */
    TEnumAsByte<enum ETrackToggleAction> ToggleAction; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.ToggleTrackKey.ToggleAction */
    uint8_t UnknownData5[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFToggleTrackKey = sizeof(FToggleTrackKey); // 8
    static_assert(sizeof(FToggleTrackKey) == 0x8, "Size of FToggleTrackKey is not correct.");
	auto constexpr FToggleTrackKey_Time_Offset = offsetof(FToggleTrackKey, Time);
	static_assert(FToggleTrackKey_Time_Offset == 0x0, "FToggleTrackKey::Time offset is not 0");
	auto constexpr FToggleTrackKey_ToggleAction_Offset = offsetof(FToggleTrackKey, ToggleAction);
	static_assert(FToggleTrackKey_ToggleAction_Offset == 0x4, "FToggleTrackKey::ToggleAction offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
