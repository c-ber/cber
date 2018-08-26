#pragma once
#include "ERootMotionAccumulateMode.hpp"
#include "FRootMotionSourceStatus.hpp"
#include "FRootMotionSourceSettings.hpp"
#include "FRootMotionMovementParams.hpp"
#include "FRootMotionFinishVelocitySettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSource // Size: 0xA0
{
public:
    uint8_t UnknownData0[0x10];
    uint16_t Priority; /* Ofs: 0x10 Size: 0x2 UInt16Property Engine.RootMotionSource.Priority */
    uint16_t LocalID; /* Ofs: 0x12 Size: 0x2 UInt16Property Engine.RootMotionSource.LocalID */
    TEnumAsByte<enum ERootMotionAccumulateMode> AccumulateMode; /* Ofs: 0x14 Size: 0x1 EnumProperty Engine.RootMotionSource.AccumulateMode */
    uint8_t UnknownData15[0x3];
    FName InstanceName; /* Ofs: 0x18 Size: 0x8 NameProperty Engine.RootMotionSource.InstanceName */
    float StartTime; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.RootMotionSource.StartTime */
    float CurrentTime; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.RootMotionSource.CurrentTime */
    float PreviousTime; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.RootMotionSource.PreviousTime */
    float Duration; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.RootMotionSource.Duration */
    FRootMotionSourceStatus Status; /* Ofs: 0x30 Size: 0x1 StructProperty Engine.RootMotionSource.Status */
    FRootMotionSourceSettings Settings; /* Ofs: 0x31 Size: 0x1 StructProperty Engine.RootMotionSource.Settings */
    bool bInLocalSpace; /* Ofs: 0x32 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource.bInLocalSpace */
    uint8_t UnknownData33[0xD];
    FRootMotionMovementParams RootMotionParams; /* Ofs: 0x40 Size: 0x40 StructProperty Engine.RootMotionSource.RootMotionParams */
    FRootMotionFinishVelocitySettings FinishVelocityParams; /* Ofs: 0x80 Size: 0x14 StructProperty Engine.RootMotionSource.FinishVelocityParams */
    uint8_t UnknownData94[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSource = sizeof(FRootMotionSource); // 160
    static_assert(sizeof(FRootMotionSource) == 0xA0, "Size of FRootMotionSource is not correct.");
	auto constexpr FRootMotionSource_Priority_Offset = offsetof(FRootMotionSource, Priority);
	static_assert(FRootMotionSource_Priority_Offset == 0x10, "FRootMotionSource::Priority offset is not 10");
	auto constexpr FRootMotionSource_LocalID_Offset = offsetof(FRootMotionSource, LocalID);
	static_assert(FRootMotionSource_LocalID_Offset == 0x12, "FRootMotionSource::LocalID offset is not 12");
	auto constexpr FRootMotionSource_AccumulateMode_Offset = offsetof(FRootMotionSource, AccumulateMode);
	static_assert(FRootMotionSource_AccumulateMode_Offset == 0x14, "FRootMotionSource::AccumulateMode offset is not 14");
	auto constexpr FRootMotionSource_InstanceName_Offset = offsetof(FRootMotionSource, InstanceName);
	static_assert(FRootMotionSource_InstanceName_Offset == 0x18, "FRootMotionSource::InstanceName offset is not 18");
	auto constexpr FRootMotionSource_StartTime_Offset = offsetof(FRootMotionSource, StartTime);
	static_assert(FRootMotionSource_StartTime_Offset == 0x20, "FRootMotionSource::StartTime offset is not 20");
	auto constexpr FRootMotionSource_CurrentTime_Offset = offsetof(FRootMotionSource, CurrentTime);
	static_assert(FRootMotionSource_CurrentTime_Offset == 0x24, "FRootMotionSource::CurrentTime offset is not 24");
	auto constexpr FRootMotionSource_PreviousTime_Offset = offsetof(FRootMotionSource, PreviousTime);
	static_assert(FRootMotionSource_PreviousTime_Offset == 0x28, "FRootMotionSource::PreviousTime offset is not 28");
	auto constexpr FRootMotionSource_Duration_Offset = offsetof(FRootMotionSource, Duration);
	static_assert(FRootMotionSource_Duration_Offset == 0x2c, "FRootMotionSource::Duration offset is not 2c");
	auto constexpr FRootMotionSource_Status_Offset = offsetof(FRootMotionSource, Status);
	static_assert(FRootMotionSource_Status_Offset == 0x30, "FRootMotionSource::Status offset is not 30");
	auto constexpr FRootMotionSource_Settings_Offset = offsetof(FRootMotionSource, Settings);
	static_assert(FRootMotionSource_Settings_Offset == 0x31, "FRootMotionSource::Settings offset is not 31");
	auto constexpr FRootMotionSource_RootMotionParams_Offset = offsetof(FRootMotionSource, RootMotionParams);
	static_assert(FRootMotionSource_RootMotionParams_Offset == 0x40, "FRootMotionSource::RootMotionParams offset is not 40");
	auto constexpr FRootMotionSource_FinishVelocityParams_Offset = offsetof(FRootMotionSource, FinishVelocityParams);
	static_assert(FRootMotionSource_FinishVelocityParams_Offset == 0x80, "FRootMotionSource::FinishVelocityParams offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
