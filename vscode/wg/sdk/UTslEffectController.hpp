#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslEffectController // Size: 0x510
	: public UActor // Size: 0x410
{
private:
	typedef UTslEffectController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1366); // id32("Class TslGame.TslEffectController")
		return ptr;
	}
	uint8_t UnknownData410[0x8];
	ExternalPtr<struct USceneComponent> SceneRoot; /* Ofs: 0x418 Size: 0x8 - ObjectProperty TslGame.TslEffectController.SceneRoot */
	TArray<struct FRotator> InitialTraceArray; /* Ofs: 0x420 Size: 0x10 - ArrayProperty TslGame.TslEffectController.InitialTraceArray */
	int32_t StepsPerTick; /* Ofs: 0x430 Size: 0x4 - IntProperty TslGame.TslEffectController.StepsPerTick */
	int32_t SpreadDirectionCount; /* Ofs: 0x434 Size: 0x4 - IntProperty TslGame.TslEffectController.SpreadDirectionCount */
	int32_t MaxInstanceCount; /* Ofs: 0x438 Size: 0x4 - IntProperty TslGame.TslEffectController.MaxInstanceCount */
	int32_t AbsoluteMaxInstanceCount; /* Ofs: 0x43C Size: 0x4 - IntProperty TslGame.TslEffectController.AbsoluteMaxInstanceCount */
	int32_t MaxMaterialAdditiveInstanceCount; /* Ofs: 0x440 Size: 0x4 - IntProperty TslGame.TslEffectController.MaxMaterialAdditiveInstanceCount */
	float InitialTraceLenClamp; /* Ofs: 0x444 Size: 0x4 - FloatProperty TslGame.TslEffectController.InitialTraceLenClamp */
	FName BlockingTag; /* Ofs: 0x448 Size: 0x8 - NameProperty TslGame.TslEffectController.BlockingTag */
	float NormalLimitZ; /* Ofs: 0x450 Size: 0x4 - FloatProperty TslGame.TslEffectController.NormalLimitZ */
	float GroundTraceNormalScale_Start; /* Ofs: 0x454 Size: 0x4 - FloatProperty TslGame.TslEffectController.GroundTraceNormalScale_Start */
	float InitialGroundTraceHeightZ; /* Ofs: 0x458 Size: 0x4 - FloatProperty TslGame.TslEffectController.InitialGroundTraceHeightZ */
	float ConcurrentGroundTraceHeightZ; /* Ofs: 0x45C Size: 0x4 - FloatProperty TslGame.TslEffectController.ConcurrentGroundTraceHeightZ */
	float ProcessedHitLenClamp; /* Ofs: 0x460 Size: 0x4 - FloatProperty TslGame.TslEffectController.ProcessedHitLenClamp */
	float SphereRadius; /* Ofs: 0x464 Size: 0x4 - FloatProperty TslGame.TslEffectController.SphereRadius */
	float SpreadXY; /* Ofs: 0x468 Size: 0x4 - FloatProperty TslGame.TslEffectController.SpreadXY */
	float SpreadZ; /* Ofs: 0x46C Size: 0x4 - FloatProperty TslGame.TslEffectController.SpreadZ */
	ExternalPtr<struct UClass> DamageFieldClass; /* Ofs: 0x470 Size: 0x8 - ClassProperty TslGame.TslEffectController.DamageFieldClass */
	float DamageTickInterval; /* Ofs: 0x478 Size: 0x4 - FloatProperty TslGame.TslEffectController.DamageTickInterval */
	uint8_t boolField47C;
	uint8_t UnknownData47D[0x3];
	float InitialEffectLifetime; /* Ofs: 0x480 Size: 0x4 - FloatProperty TslGame.TslEffectController.InitialEffectLifetime */
	float MinEffectLifetimeForStart; /* Ofs: 0x484 Size: 0x4 - FloatProperty TslGame.TslEffectController.MinEffectLifetimeForStart */
	float EffectLifetimeVariation; /* Ofs: 0x488 Size: 0x4 - FloatProperty TslGame.TslEffectController.EffectLifetimeVariation */
	uint8_t UnknownData48C[0x84];


	inline bool SetSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetInitialTraceArray(t_structHelper inst, TArray<struct FRotator> value) { inst.WriteOffset(0x420, value); }
	inline bool SetStepsPerTick(t_structHelper inst, int32_t value) { inst.WriteOffset(0x430, value); }
	inline bool SetSpreadDirectionCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x434, value); }
	inline bool SetMaxInstanceCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x438, value); }
	inline bool SetAbsoluteMaxInstanceCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x43C, value); }
	inline bool SetMaxMaterialAdditiveInstanceCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x440, value); }
	inline bool SetInitialTraceLenClamp(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetBlockingTag(t_structHelper inst, FName value) { inst.WriteOffset(0x448, value); }
	inline bool SetNormalLimitZ(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetGroundTraceNormalScale_Start(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetInitialGroundTraceHeightZ(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetConcurrentGroundTraceHeightZ(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetProcessedHitLenClamp(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetSphereRadius(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetSpreadXY(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetSpreadZ(t_structHelper inst, float value) { inst.WriteOffset(0x46C, value); }
	inline bool SetDamageFieldClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x470, value); }
	inline bool SetDamageTickInterval(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool bModifyEffectLifetime()
	{
		return boolField47C& 0x1;
	}
	inline bool SetbModifyEffectLifetime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x47C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetInitialEffectLifetime(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool SetMinEffectLifetimeForStart(t_structHelper inst, float value) { inst.WriteOffset(0x484, value); }
	inline bool SetEffectLifetimeVariation(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslEffectController = sizeof(UTslEffectController); // 1296
    static_assert(sizeof(UTslEffectController) == 0x510, "Size of UTslEffectController is not correct.");
	auto constexpr UTslEffectController_SceneRoot_Offset = offsetof(UTslEffectController, SceneRoot);
	static_assert(UTslEffectController_SceneRoot_Offset == 0x418, "UTslEffectController::SceneRoot offset is not 418");
	auto constexpr UTslEffectController_InitialTraceArray_Offset = offsetof(UTslEffectController, InitialTraceArray);
	static_assert(UTslEffectController_InitialTraceArray_Offset == 0x420, "UTslEffectController::InitialTraceArray offset is not 420");
	auto constexpr UTslEffectController_StepsPerTick_Offset = offsetof(UTslEffectController, StepsPerTick);
	static_assert(UTslEffectController_StepsPerTick_Offset == 0x430, "UTslEffectController::StepsPerTick offset is not 430");
	auto constexpr UTslEffectController_SpreadDirectionCount_Offset = offsetof(UTslEffectController, SpreadDirectionCount);
	static_assert(UTslEffectController_SpreadDirectionCount_Offset == 0x434, "UTslEffectController::SpreadDirectionCount offset is not 434");
	auto constexpr UTslEffectController_MaxInstanceCount_Offset = offsetof(UTslEffectController, MaxInstanceCount);
	static_assert(UTslEffectController_MaxInstanceCount_Offset == 0x438, "UTslEffectController::MaxInstanceCount offset is not 438");
	auto constexpr UTslEffectController_AbsoluteMaxInstanceCount_Offset = offsetof(UTslEffectController, AbsoluteMaxInstanceCount);
	static_assert(UTslEffectController_AbsoluteMaxInstanceCount_Offset == 0x43c, "UTslEffectController::AbsoluteMaxInstanceCount offset is not 43c");
	auto constexpr UTslEffectController_MaxMaterialAdditiveInstanceCount_Offset = offsetof(UTslEffectController, MaxMaterialAdditiveInstanceCount);
	static_assert(UTslEffectController_MaxMaterialAdditiveInstanceCount_Offset == 0x440, "UTslEffectController::MaxMaterialAdditiveInstanceCount offset is not 440");
	auto constexpr UTslEffectController_InitialTraceLenClamp_Offset = offsetof(UTslEffectController, InitialTraceLenClamp);
	static_assert(UTslEffectController_InitialTraceLenClamp_Offset == 0x444, "UTslEffectController::InitialTraceLenClamp offset is not 444");
	auto constexpr UTslEffectController_BlockingTag_Offset = offsetof(UTslEffectController, BlockingTag);
	static_assert(UTslEffectController_BlockingTag_Offset == 0x448, "UTslEffectController::BlockingTag offset is not 448");
	auto constexpr UTslEffectController_NormalLimitZ_Offset = offsetof(UTslEffectController, NormalLimitZ);
	static_assert(UTslEffectController_NormalLimitZ_Offset == 0x450, "UTslEffectController::NormalLimitZ offset is not 450");
	auto constexpr UTslEffectController_GroundTraceNormalScale_Start_Offset = offsetof(UTslEffectController, GroundTraceNormalScale_Start);
	static_assert(UTslEffectController_GroundTraceNormalScale_Start_Offset == 0x454, "UTslEffectController::GroundTraceNormalScale_Start offset is not 454");
	auto constexpr UTslEffectController_InitialGroundTraceHeightZ_Offset = offsetof(UTslEffectController, InitialGroundTraceHeightZ);
	static_assert(UTslEffectController_InitialGroundTraceHeightZ_Offset == 0x458, "UTslEffectController::InitialGroundTraceHeightZ offset is not 458");
	auto constexpr UTslEffectController_ConcurrentGroundTraceHeightZ_Offset = offsetof(UTslEffectController, ConcurrentGroundTraceHeightZ);
	static_assert(UTslEffectController_ConcurrentGroundTraceHeightZ_Offset == 0x45c, "UTslEffectController::ConcurrentGroundTraceHeightZ offset is not 45c");
	auto constexpr UTslEffectController_ProcessedHitLenClamp_Offset = offsetof(UTslEffectController, ProcessedHitLenClamp);
	static_assert(UTslEffectController_ProcessedHitLenClamp_Offset == 0x460, "UTslEffectController::ProcessedHitLenClamp offset is not 460");
	auto constexpr UTslEffectController_SphereRadius_Offset = offsetof(UTslEffectController, SphereRadius);
	static_assert(UTslEffectController_SphereRadius_Offset == 0x464, "UTslEffectController::SphereRadius offset is not 464");
	auto constexpr UTslEffectController_SpreadXY_Offset = offsetof(UTslEffectController, SpreadXY);
	static_assert(UTslEffectController_SpreadXY_Offset == 0x468, "UTslEffectController::SpreadXY offset is not 468");
	auto constexpr UTslEffectController_SpreadZ_Offset = offsetof(UTslEffectController, SpreadZ);
	static_assert(UTslEffectController_SpreadZ_Offset == 0x46c, "UTslEffectController::SpreadZ offset is not 46c");
	auto constexpr UTslEffectController_DamageFieldClass_Offset = offsetof(UTslEffectController, DamageFieldClass);
	static_assert(UTslEffectController_DamageFieldClass_Offset == 0x470, "UTslEffectController::DamageFieldClass offset is not 470");
	auto constexpr UTslEffectController_DamageTickInterval_Offset = offsetof(UTslEffectController, DamageTickInterval);
	static_assert(UTslEffectController_DamageTickInterval_Offset == 0x478, "UTslEffectController::DamageTickInterval offset is not 478");
	auto constexpr UTslEffectController_boolField47C_Offset = offsetof(UTslEffectController, boolField47C);
	static_assert(UTslEffectController_boolField47C_Offset == 0x47c, "UTslEffectController::boolField47C offset is not 47c");
	auto constexpr UTslEffectController_InitialEffectLifetime_Offset = offsetof(UTslEffectController, InitialEffectLifetime);
	static_assert(UTslEffectController_InitialEffectLifetime_Offset == 0x480, "UTslEffectController::InitialEffectLifetime offset is not 480");
	auto constexpr UTslEffectController_MinEffectLifetimeForStart_Offset = offsetof(UTslEffectController, MinEffectLifetimeForStart);
	static_assert(UTslEffectController_MinEffectLifetimeForStart_Offset == 0x484, "UTslEffectController::MinEffectLifetimeForStart offset is not 484");
	auto constexpr UTslEffectController_EffectLifetimeVariation_Offset = offsetof(UTslEffectController, EffectLifetimeVariation);
	static_assert(UTslEffectController_EffectLifetimeVariation_Offset == 0x488, "UTslEffectController::EffectLifetimeVariation offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
