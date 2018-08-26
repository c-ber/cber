#pragma once
#include "ETickingGroup.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTickFunction // Size: 0x50
{
public:
    uint8_t UnknownData0[0x8];
    TEnumAsByte<enum ETickingGroup> TickGroup; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.TickFunction.TickGroup */
    TEnumAsByte<enum ETickingGroup> EndTickGroup; /* Ofs: 0x9 Size: 0x1 ByteProperty Engine.TickFunction.EndTickGroup */
    uint8_t UnknownDataA[0x2];
    bool bTickEvenWhenPaused : 1; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.TickFunction.bTickEvenWhenPaused */
    bool bCanEverTick : 1; /* Ofs: 0xC Size: 0x1 BitMask: 02 BoolProperty Engine.TickFunction.bCanEverTick */
    bool bStartWithTickEnabled : 1; /* Ofs: 0xC Size: 0x1 BitMask: 04 BoolProperty Engine.TickFunction.bStartWithTickEnabled */
    bool bAllowTickOnDedicatedServer : 1; /* Ofs: 0xC Size: 0x1 BitMask: 08 BoolProperty Engine.TickFunction.bAllowTickOnDedicatedServer */
    uint8_t UnknownDataD[0x33];
    float TickInterval; /* Ofs: 0x40 Size: 0x4 FloatProperty Engine.TickFunction.TickInterval */
    uint8_t UnknownData44[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTickFunction = sizeof(FTickFunction); // 80
    static_assert(sizeof(FTickFunction) == 0x50, "Size of FTickFunction is not correct.");
	auto constexpr FTickFunction_TickGroup_Offset = offsetof(FTickFunction, TickGroup);
	static_assert(FTickFunction_TickGroup_Offset == 0x8, "FTickFunction::TickGroup offset is not 8");
	auto constexpr FTickFunction_EndTickGroup_Offset = offsetof(FTickFunction, EndTickGroup);
	static_assert(FTickFunction_EndTickGroup_Offset == 0x9, "FTickFunction::EndTickGroup offset is not 9");
	auto constexpr FTickFunction_TickInterval_Offset = offsetof(FTickFunction, TickInterval);
	static_assert(FTickFunction_TickInterval_Offset == 0x40, "FTickFunction::TickInterval offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
