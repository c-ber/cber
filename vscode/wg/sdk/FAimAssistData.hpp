#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAimAssistData // Size: 0x30
{
public:
    float MinDistance; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.AimAssistData.MinDistance */
    float MaxDistance; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.AimAssistData.MaxDistance */
    float TrackingModifier; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.AimAssistData.TrackingModifier */
    float AdhesionSpeed; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.AimAssistData.AdhesionSpeed */
    float DeadZoneValue; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.AimAssistData.DeadZoneValue */
    bool bUseTrackingModifierCurve; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty TslGame.AimAssistData.bUseTrackingModifierCurve */
    uint8_t UnknownData15[0x3];
    ExternalPtr<struct UCurveFloat> TrackingModifierCurve; /* Ofs: 0x18 Size: 0x8 ObjectProperty TslGame.AimAssistData.TrackingModifierCurve */
    bool bUseAdhesionSpeedCurve; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty TslGame.AimAssistData.bUseAdhesionSpeedCurve */
    uint8_t UnknownData21[0x7];
    ExternalPtr<struct UCurveFloat> AdhesionSpeedCurve; /* Ofs: 0x28 Size: 0x8 ObjectProperty TslGame.AimAssistData.AdhesionSpeedCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAimAssistData = sizeof(FAimAssistData); // 48
    static_assert(sizeof(FAimAssistData) == 0x30, "Size of FAimAssistData is not correct.");
	auto constexpr FAimAssistData_MinDistance_Offset = offsetof(FAimAssistData, MinDistance);
	static_assert(FAimAssistData_MinDistance_Offset == 0x0, "FAimAssistData::MinDistance offset is not 0");
	auto constexpr FAimAssistData_MaxDistance_Offset = offsetof(FAimAssistData, MaxDistance);
	static_assert(FAimAssistData_MaxDistance_Offset == 0x4, "FAimAssistData::MaxDistance offset is not 4");
	auto constexpr FAimAssistData_TrackingModifier_Offset = offsetof(FAimAssistData, TrackingModifier);
	static_assert(FAimAssistData_TrackingModifier_Offset == 0x8, "FAimAssistData::TrackingModifier offset is not 8");
	auto constexpr FAimAssistData_AdhesionSpeed_Offset = offsetof(FAimAssistData, AdhesionSpeed);
	static_assert(FAimAssistData_AdhesionSpeed_Offset == 0xc, "FAimAssistData::AdhesionSpeed offset is not c");
	auto constexpr FAimAssistData_DeadZoneValue_Offset = offsetof(FAimAssistData, DeadZoneValue);
	static_assert(FAimAssistData_DeadZoneValue_Offset == 0x10, "FAimAssistData::DeadZoneValue offset is not 10");
	auto constexpr FAimAssistData_TrackingModifierCurve_Offset = offsetof(FAimAssistData, TrackingModifierCurve);
	static_assert(FAimAssistData_TrackingModifierCurve_Offset == 0x18, "FAimAssistData::TrackingModifierCurve offset is not 18");
	auto constexpr FAimAssistData_AdhesionSpeedCurve_Offset = offsetof(FAimAssistData, AdhesionSpeedCurve);
	static_assert(FAimAssistData_AdhesionSpeedCurve_Offset == 0x28, "FAimAssistData::AdhesionSpeedCurve offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
