#pragma once
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRecoilInfo // Size: 0xA0
{
public:
    float VerticalRecoilMax; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoilMax */
    float RecoilHorizontalMinScalar; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilHorizontalMinScalar */
    float RecoilModifier_Stand; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilModifier_Stand */
    float VerticalRecoveryClamp; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoveryClamp */
    FVector2D RecoilStartTimeOutMap; /* Ofs: 0x10 Size: 0x8 StructProperty TslGame.RecoilInfo.RecoilStartTimeOutMap */
    float VerticalRecoilRecoveryMin; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoilRecoveryMin */
    float LeftMax; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.RecoilInfo.LeftMax */
    float VerticalRecoveryMax; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoveryMax */
    float VerticalRecoveryModifier; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoveryModifier */
    float RecoilValue_Climb; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilValue_Climb */
    bool bSwitchOnTime; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty TslGame.RecoilInfo.bSwitchOnTime */
    uint8_t UnknownData2D[0x3];
    float RecoilValue_Fall; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilValue_Fall */
    float RightMax; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.RecoilInfo.RightMax */
    float HorizontalTendency; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.RecoilInfo.HorizontalTendency */
    float RecoverySpeed_Vertical; /* Ofs: 0x3C Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoverySpeed_Vertical */
    float RecoilSpeed_Vertical; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilSpeed_Vertical */
    uint8_t UnknownData44[0xC];
    EncryptedExternalPtr<struct UCurveVector> RecoilCurve; /* Ofs: 0x50 Size: 0x10 EncryptedObjectProperty TslGame.RecoilInfo.RecoilCurve */
    FVector2D RecoilStartTimeInMap; /* Ofs: 0x60 Size: 0x8 StructProperty TslGame.RecoilInfo.RecoilStartTimeInMap */
    FVector2D RecoilBlendInInMap; /* Ofs: 0x68 Size: 0x8 StructProperty TslGame.RecoilInfo.RecoilBlendInInMap */
    float TimePerSwitch; /* Ofs: 0x70 Size: 0x4 FloatProperty TslGame.RecoilInfo.TimePerSwitch */
    float RecoilSpeed_Horizontal; /* Ofs: 0x74 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilSpeed_Horizontal */
    int32_t BulletsPerSwitch; /* Ofs: 0x78 Size: 0x4 IntProperty TslGame.RecoilInfo.BulletsPerSwitch */
    FVector2D RecoilBlendInOutMap; /* Ofs: 0x7C Size: 0x8 StructProperty TslGame.RecoilInfo.RecoilBlendInOutMap */
    float VerticalRecoilMin; /* Ofs: 0x84 Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoilMin */
    float RecoilModifier_Prone; /* Ofs: 0x88 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilModifier_Prone */
    uint8_t UnknownData8C[0x4];
    float VerticalRecoilVariation; /* Ofs: 0x90 Size: 0x4 FloatProperty TslGame.RecoilInfo.VerticalRecoilVariation */
    float RecoilModifier_Crouch; /* Ofs: 0x94 Size: 0x4 FloatProperty TslGame.RecoilInfo.RecoilModifier_Crouch */
    uint8_t UnknownData98[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRecoilInfo = sizeof(FRecoilInfo); // 160
    static_assert(sizeof(FRecoilInfo) == 0xA0, "Size of FRecoilInfo is not correct.");
	auto constexpr FRecoilInfo_VerticalRecoilMax_Offset = offsetof(FRecoilInfo, VerticalRecoilMax);
	static_assert(FRecoilInfo_VerticalRecoilMax_Offset == 0x0, "FRecoilInfo::VerticalRecoilMax offset is not 0");
	auto constexpr FRecoilInfo_RecoilHorizontalMinScalar_Offset = offsetof(FRecoilInfo, RecoilHorizontalMinScalar);
	static_assert(FRecoilInfo_RecoilHorizontalMinScalar_Offset == 0x4, "FRecoilInfo::RecoilHorizontalMinScalar offset is not 4");
	auto constexpr FRecoilInfo_RecoilModifier_Stand_Offset = offsetof(FRecoilInfo, RecoilModifier_Stand);
	static_assert(FRecoilInfo_RecoilModifier_Stand_Offset == 0x8, "FRecoilInfo::RecoilModifier_Stand offset is not 8");
	auto constexpr FRecoilInfo_VerticalRecoveryClamp_Offset = offsetof(FRecoilInfo, VerticalRecoveryClamp);
	static_assert(FRecoilInfo_VerticalRecoveryClamp_Offset == 0xc, "FRecoilInfo::VerticalRecoveryClamp offset is not c");
	auto constexpr FRecoilInfo_RecoilStartTimeOutMap_Offset = offsetof(FRecoilInfo, RecoilStartTimeOutMap);
	static_assert(FRecoilInfo_RecoilStartTimeOutMap_Offset == 0x10, "FRecoilInfo::RecoilStartTimeOutMap offset is not 10");
	auto constexpr FRecoilInfo_VerticalRecoilRecoveryMin_Offset = offsetof(FRecoilInfo, VerticalRecoilRecoveryMin);
	static_assert(FRecoilInfo_VerticalRecoilRecoveryMin_Offset == 0x18, "FRecoilInfo::VerticalRecoilRecoveryMin offset is not 18");
	auto constexpr FRecoilInfo_LeftMax_Offset = offsetof(FRecoilInfo, LeftMax);
	static_assert(FRecoilInfo_LeftMax_Offset == 0x1c, "FRecoilInfo::LeftMax offset is not 1c");
	auto constexpr FRecoilInfo_VerticalRecoveryMax_Offset = offsetof(FRecoilInfo, VerticalRecoveryMax);
	static_assert(FRecoilInfo_VerticalRecoveryMax_Offset == 0x20, "FRecoilInfo::VerticalRecoveryMax offset is not 20");
	auto constexpr FRecoilInfo_VerticalRecoveryModifier_Offset = offsetof(FRecoilInfo, VerticalRecoveryModifier);
	static_assert(FRecoilInfo_VerticalRecoveryModifier_Offset == 0x24, "FRecoilInfo::VerticalRecoveryModifier offset is not 24");
	auto constexpr FRecoilInfo_RecoilValue_Climb_Offset = offsetof(FRecoilInfo, RecoilValue_Climb);
	static_assert(FRecoilInfo_RecoilValue_Climb_Offset == 0x28, "FRecoilInfo::RecoilValue_Climb offset is not 28");
	auto constexpr FRecoilInfo_RecoilValue_Fall_Offset = offsetof(FRecoilInfo, RecoilValue_Fall);
	static_assert(FRecoilInfo_RecoilValue_Fall_Offset == 0x30, "FRecoilInfo::RecoilValue_Fall offset is not 30");
	auto constexpr FRecoilInfo_RightMax_Offset = offsetof(FRecoilInfo, RightMax);
	static_assert(FRecoilInfo_RightMax_Offset == 0x34, "FRecoilInfo::RightMax offset is not 34");
	auto constexpr FRecoilInfo_HorizontalTendency_Offset = offsetof(FRecoilInfo, HorizontalTendency);
	static_assert(FRecoilInfo_HorizontalTendency_Offset == 0x38, "FRecoilInfo::HorizontalTendency offset is not 38");
	auto constexpr FRecoilInfo_RecoverySpeed_Vertical_Offset = offsetof(FRecoilInfo, RecoverySpeed_Vertical);
	static_assert(FRecoilInfo_RecoverySpeed_Vertical_Offset == 0x3c, "FRecoilInfo::RecoverySpeed_Vertical offset is not 3c");
	auto constexpr FRecoilInfo_RecoilSpeed_Vertical_Offset = offsetof(FRecoilInfo, RecoilSpeed_Vertical);
	static_assert(FRecoilInfo_RecoilSpeed_Vertical_Offset == 0x40, "FRecoilInfo::RecoilSpeed_Vertical offset is not 40");
	auto constexpr FRecoilInfo_RecoilCurve_Offset = offsetof(FRecoilInfo, RecoilCurve);
	static_assert(FRecoilInfo_RecoilCurve_Offset == 0x50, "FRecoilInfo::RecoilCurve offset is not 50");
	auto constexpr FRecoilInfo_RecoilStartTimeInMap_Offset = offsetof(FRecoilInfo, RecoilStartTimeInMap);
	static_assert(FRecoilInfo_RecoilStartTimeInMap_Offset == 0x60, "FRecoilInfo::RecoilStartTimeInMap offset is not 60");
	auto constexpr FRecoilInfo_RecoilBlendInInMap_Offset = offsetof(FRecoilInfo, RecoilBlendInInMap);
	static_assert(FRecoilInfo_RecoilBlendInInMap_Offset == 0x68, "FRecoilInfo::RecoilBlendInInMap offset is not 68");
	auto constexpr FRecoilInfo_TimePerSwitch_Offset = offsetof(FRecoilInfo, TimePerSwitch);
	static_assert(FRecoilInfo_TimePerSwitch_Offset == 0x70, "FRecoilInfo::TimePerSwitch offset is not 70");
	auto constexpr FRecoilInfo_RecoilSpeed_Horizontal_Offset = offsetof(FRecoilInfo, RecoilSpeed_Horizontal);
	static_assert(FRecoilInfo_RecoilSpeed_Horizontal_Offset == 0x74, "FRecoilInfo::RecoilSpeed_Horizontal offset is not 74");
	auto constexpr FRecoilInfo_BulletsPerSwitch_Offset = offsetof(FRecoilInfo, BulletsPerSwitch);
	static_assert(FRecoilInfo_BulletsPerSwitch_Offset == 0x78, "FRecoilInfo::BulletsPerSwitch offset is not 78");
	auto constexpr FRecoilInfo_RecoilBlendInOutMap_Offset = offsetof(FRecoilInfo, RecoilBlendInOutMap);
	static_assert(FRecoilInfo_RecoilBlendInOutMap_Offset == 0x7c, "FRecoilInfo::RecoilBlendInOutMap offset is not 7c");
	auto constexpr FRecoilInfo_VerticalRecoilMin_Offset = offsetof(FRecoilInfo, VerticalRecoilMin);
	static_assert(FRecoilInfo_VerticalRecoilMin_Offset == 0x84, "FRecoilInfo::VerticalRecoilMin offset is not 84");
	auto constexpr FRecoilInfo_RecoilModifier_Prone_Offset = offsetof(FRecoilInfo, RecoilModifier_Prone);
	static_assert(FRecoilInfo_RecoilModifier_Prone_Offset == 0x88, "FRecoilInfo::RecoilModifier_Prone offset is not 88");
	auto constexpr FRecoilInfo_VerticalRecoilVariation_Offset = offsetof(FRecoilInfo, VerticalRecoilVariation);
	static_assert(FRecoilInfo_VerticalRecoilVariation_Offset == 0x90, "FRecoilInfo::VerticalRecoilVariation offset is not 90");
	auto constexpr FRecoilInfo_RecoilModifier_Crouch_Offset = offsetof(FRecoilInfo, RecoilModifier_Crouch);
	static_assert(FRecoilInfo_RecoilModifier_Crouch_Offset == 0x94, "FRecoilInfo::RecoilModifier_Crouch offset is not 94");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
