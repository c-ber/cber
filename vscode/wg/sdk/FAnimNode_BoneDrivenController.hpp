#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "EComponentType.hpp"
#include "EDrivenDestinationMode.hpp"
#include "EDrivenBoneModificationMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_BoneDrivenController // Size: 0xE8
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    FBoneReference SourceBone; /* Ofs: 0x70 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_BoneDrivenController.SourceBone */
    TEnumAsByte<enum EComponentType> SourceComponent; /* Ofs: 0x88 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_BoneDrivenController.SourceComponent */
    uint8_t UnknownData89[0x7];
    ExternalPtr<struct UCurveFloat> DrivingCurve; /* Ofs: 0x90 Size: 0x8 ObjectProperty AnimGraphRuntime.AnimNode_BoneDrivenController.DrivingCurve */
    float Multiplier; /* Ofs: 0x98 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BoneDrivenController.Multiplier */
    bool bUseRange; /* Ofs: 0x9C Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bUseRange */
    uint8_t UnknownData9D[0x3];
    float RangeMin; /* Ofs: 0xA0 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BoneDrivenController.RangeMin */
    float RangeMax; /* Ofs: 0xA4 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BoneDrivenController.RangeMax */
    float RemappedMin; /* Ofs: 0xA8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BoneDrivenController.RemappedMin */
    float RemappedMax; /* Ofs: 0xAC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_BoneDrivenController.RemappedMax */
    TEnumAsByte<enum EDrivenDestinationMode> DestinationMode; /* Ofs: 0xB0 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_BoneDrivenController.DestinationMode */
    uint8_t UnknownDataB1[0x7];
    FName ParameterName; /* Ofs: 0xB8 Size: 0x8 NameProperty AnimGraphRuntime.AnimNode_BoneDrivenController.ParameterName */
    FBoneReference TargetBone; /* Ofs: 0xC0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_BoneDrivenController.TargetBone */
    TEnumAsByte<enum EComponentType> TargetComponent; /* Ofs: 0xD8 Size: 0x1 ByteProperty AnimGraphRuntime.AnimNode_BoneDrivenController.TargetComponent */
    uint8_t UnknownDataD9[0x3];
    bool bAffectTargetTranslationX : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetTranslationX */
    bool bAffectTargetTranslationY : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 02 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetTranslationY */
    bool bAffectTargetTranslationZ : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 04 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetTranslationZ */
    bool bAffectTargetRotationX : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 08 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetRotationX */
    bool bAffectTargetRotationY : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 10 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetRotationY */
    bool bAffectTargetRotationZ : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 20 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetRotationZ */
    bool bAffectTargetScaleX : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 40 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetScaleX */
    bool bAffectTargetScaleY : 1; /* Ofs: 0xDC Size: 0x1 BitMask: 80 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetScaleY */
    bool bAffectTargetScaleZ; /* Ofs: 0xDD Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_BoneDrivenController.bAffectTargetScaleZ */
    uint8_t UnknownDataDE[0x2];
    TEnumAsByte<enum EDrivenBoneModificationMode> ModificationMode; /* Ofs: 0xE0 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_BoneDrivenController.ModificationMode */
    uint8_t UnknownDataE1[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_BoneDrivenController = sizeof(FAnimNode_BoneDrivenController); // 232
    static_assert(sizeof(FAnimNode_BoneDrivenController) == 0xE8, "Size of FAnimNode_BoneDrivenController is not correct.");
	auto constexpr FAnimNode_BoneDrivenController_SourceBone_Offset = offsetof(FAnimNode_BoneDrivenController, SourceBone);
	static_assert(FAnimNode_BoneDrivenController_SourceBone_Offset == 0x70, "FAnimNode_BoneDrivenController::SourceBone offset is not 70");
	auto constexpr FAnimNode_BoneDrivenController_SourceComponent_Offset = offsetof(FAnimNode_BoneDrivenController, SourceComponent);
	static_assert(FAnimNode_BoneDrivenController_SourceComponent_Offset == 0x88, "FAnimNode_BoneDrivenController::SourceComponent offset is not 88");
	auto constexpr FAnimNode_BoneDrivenController_DrivingCurve_Offset = offsetof(FAnimNode_BoneDrivenController, DrivingCurve);
	static_assert(FAnimNode_BoneDrivenController_DrivingCurve_Offset == 0x90, "FAnimNode_BoneDrivenController::DrivingCurve offset is not 90");
	auto constexpr FAnimNode_BoneDrivenController_Multiplier_Offset = offsetof(FAnimNode_BoneDrivenController, Multiplier);
	static_assert(FAnimNode_BoneDrivenController_Multiplier_Offset == 0x98, "FAnimNode_BoneDrivenController::Multiplier offset is not 98");
	auto constexpr FAnimNode_BoneDrivenController_RangeMin_Offset = offsetof(FAnimNode_BoneDrivenController, RangeMin);
	static_assert(FAnimNode_BoneDrivenController_RangeMin_Offset == 0xa0, "FAnimNode_BoneDrivenController::RangeMin offset is not a0");
	auto constexpr FAnimNode_BoneDrivenController_RangeMax_Offset = offsetof(FAnimNode_BoneDrivenController, RangeMax);
	static_assert(FAnimNode_BoneDrivenController_RangeMax_Offset == 0xa4, "FAnimNode_BoneDrivenController::RangeMax offset is not a4");
	auto constexpr FAnimNode_BoneDrivenController_RemappedMin_Offset = offsetof(FAnimNode_BoneDrivenController, RemappedMin);
	static_assert(FAnimNode_BoneDrivenController_RemappedMin_Offset == 0xa8, "FAnimNode_BoneDrivenController::RemappedMin offset is not a8");
	auto constexpr FAnimNode_BoneDrivenController_RemappedMax_Offset = offsetof(FAnimNode_BoneDrivenController, RemappedMax);
	static_assert(FAnimNode_BoneDrivenController_RemappedMax_Offset == 0xac, "FAnimNode_BoneDrivenController::RemappedMax offset is not ac");
	auto constexpr FAnimNode_BoneDrivenController_DestinationMode_Offset = offsetof(FAnimNode_BoneDrivenController, DestinationMode);
	static_assert(FAnimNode_BoneDrivenController_DestinationMode_Offset == 0xb0, "FAnimNode_BoneDrivenController::DestinationMode offset is not b0");
	auto constexpr FAnimNode_BoneDrivenController_ParameterName_Offset = offsetof(FAnimNode_BoneDrivenController, ParameterName);
	static_assert(FAnimNode_BoneDrivenController_ParameterName_Offset == 0xb8, "FAnimNode_BoneDrivenController::ParameterName offset is not b8");
	auto constexpr FAnimNode_BoneDrivenController_TargetBone_Offset = offsetof(FAnimNode_BoneDrivenController, TargetBone);
	static_assert(FAnimNode_BoneDrivenController_TargetBone_Offset == 0xc0, "FAnimNode_BoneDrivenController::TargetBone offset is not c0");
	auto constexpr FAnimNode_BoneDrivenController_TargetComponent_Offset = offsetof(FAnimNode_BoneDrivenController, TargetComponent);
	static_assert(FAnimNode_BoneDrivenController_TargetComponent_Offset == 0xd8, "FAnimNode_BoneDrivenController::TargetComponent offset is not d8");
	auto constexpr FAnimNode_BoneDrivenController_ModificationMode_Offset = offsetof(FAnimNode_BoneDrivenController, ModificationMode);
	static_assert(FAnimNode_BoneDrivenController_ModificationMode_Offset == 0xe0, "FAnimNode_BoneDrivenController::ModificationMode offset is not e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
