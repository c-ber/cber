#pragma once
#include "FMinimalViewInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTViewTarget // Size: 0x5A0
{
public:
    ExternalPtr<struct UActor> Target; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.TViewTarget.Target */
    uint8_t UnknownData8[0x8];
    FMinimalViewInfo POV; /* Ofs: 0x10 Size: 0x580 StructProperty Engine.TViewTarget.POV */
    ExternalPtr<struct UPlayerState> PlayerState; /* Ofs: 0x590 Size: 0x8 ObjectProperty Engine.TViewTarget.PlayerState */
    uint8_t UnknownData598[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTViewTarget = sizeof(FTViewTarget); // 1440
    static_assert(sizeof(FTViewTarget) == 0x5A0, "Size of FTViewTarget is not correct.");
	auto constexpr FTViewTarget_Target_Offset = offsetof(FTViewTarget, Target);
	static_assert(FTViewTarget_Target_Offset == 0x0, "FTViewTarget::Target offset is not 0");
	auto constexpr FTViewTarget_POV_Offset = offsetof(FTViewTarget, POV);
	static_assert(FTViewTarget_POV_Offset == 0x10, "FTViewTarget::POV offset is not 10");
	auto constexpr FTViewTarget_PlayerState_Offset = offsetof(FTViewTarget, PlayerState);
	static_assert(FTViewTarget_PlayerState_Offset == 0x590, "FTViewTarget::PlayerState offset is not 590");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
