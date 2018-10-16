#pragma once
#include "UEmitter.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEmitterCameraLensEffectBase // Size: 0x4C0
	: public UEmitter // Size: 0x460
{
private:
	typedef UEmitterCameraLensEffectBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1739); // id32("Class Engine.EmitterCameraLensEffectBase")
		return ptr;
	}
//	ExternalPtr<struct UParticleSystem> PS_CameraEffect; /* Ofs: 0x458 Size: 0x8 - ObjectProperty Engine.EmitterCameraLensEffectBase.PS_CameraEffect */
	ExternalPtr<struct UParticleSystem> PS_CameraEffectNonExtremeContent; /* Ofs: 0x460 Size: 0x8 - ObjectProperty Engine.EmitterCameraLensEffectBase.PS_CameraEffectNonExtremeContent */
	ExternalPtr<struct UPlayerCameraManager> BaseCamera; /* Ofs: 0x468 Size: 0x8 - ObjectProperty Engine.EmitterCameraLensEffectBase.BaseCamera */
	FTransform RelativeTransform; /* Ofs: 0x470 Size: 0x30 - StructProperty Engine.EmitterCameraLensEffectBase.RelativeTransform */
	float BaseFOV; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty Engine.EmitterCameraLensEffectBase.BaseFOV */
	uint8_t boolField4A4;
	uint8_t UnknownData4A5[0x3];
	TArray<ExternalPtr<struct UClass>> EmittersToTreatAsSame; /* Ofs: 0x4A8 Size: 0x10 - ArrayProperty Engine.EmitterCameraLensEffectBase.EmittersToTreatAsSame */
	float DistFromCamera; /* Ofs: 0x4B8 Size: 0x4 - FloatProperty Engine.EmitterCameraLensEffectBase.DistFromCamera */
	uint8_t UnknownData4BC[0x4];


//	inline bool SetPS_CameraEffect(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x458, value); }
	inline bool SetPS_CameraEffectNonExtremeContent(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x460, value); }
	inline bool SetBaseCamera(t_structHelper inst, ExternalPtr<struct UPlayerCameraManager> value) { inst.WriteOffset(0x468, value); }
	inline bool SetRelativeTransform(t_structHelper inst, FTransform value) { inst.WriteOffset(0x470, value); }
	inline bool SetBaseFOV(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool bAllowMultipleInstances()
	{
		return boolField4A4& 0x1;
	}
	inline bool SetbAllowMultipleInstances(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bResetWhenRetriggered()
	{
		return boolField4A4& 0x2;
	}
	inline bool SetbResetWhenRetriggered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetEmittersToTreatAsSame(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetDistFromCamera(t_structHelper inst, float value) { inst.WriteOffset(0x4B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEmitterCameraLensEffectBase = sizeof(UEmitterCameraLensEffectBase); // 1216
    static_assert(sizeof(UEmitterCameraLensEffectBase) == 0x4C0, "Size of UEmitterCameraLensEffectBase is not correct.");
//	auto constexpr UEmitterCameraLensEffectBase_PS_CameraEffect_Offset = offsetof(UEmitterCameraLensEffectBase, PS_CameraEffect);
//	static_assert(UEmitterCameraLensEffectBase_PS_CameraEffect_Offset == 0x458, "UEmitterCameraLensEffectBase::PS_CameraEffect offset is not 458");
	auto constexpr UEmitterCameraLensEffectBase_PS_CameraEffectNonExtremeContent_Offset = offsetof(UEmitterCameraLensEffectBase, PS_CameraEffectNonExtremeContent);
	static_assert(UEmitterCameraLensEffectBase_PS_CameraEffectNonExtremeContent_Offset == 0x460, "UEmitterCameraLensEffectBase::PS_CameraEffectNonExtremeContent offset is not 460");
	auto constexpr UEmitterCameraLensEffectBase_BaseCamera_Offset = offsetof(UEmitterCameraLensEffectBase, BaseCamera);
	static_assert(UEmitterCameraLensEffectBase_BaseCamera_Offset == 0x468, "UEmitterCameraLensEffectBase::BaseCamera offset is not 468");
	auto constexpr UEmitterCameraLensEffectBase_RelativeTransform_Offset = offsetof(UEmitterCameraLensEffectBase, RelativeTransform);
	static_assert(UEmitterCameraLensEffectBase_RelativeTransform_Offset == 0x470, "UEmitterCameraLensEffectBase::RelativeTransform offset is not 470");
	auto constexpr UEmitterCameraLensEffectBase_BaseFOV_Offset = offsetof(UEmitterCameraLensEffectBase, BaseFOV);
	static_assert(UEmitterCameraLensEffectBase_BaseFOV_Offset == 0x4a0, "UEmitterCameraLensEffectBase::BaseFOV offset is not 4a0");
	auto constexpr UEmitterCameraLensEffectBase_boolField4A4_Offset = offsetof(UEmitterCameraLensEffectBase, boolField4A4);
	static_assert(UEmitterCameraLensEffectBase_boolField4A4_Offset == 0x4a4, "UEmitterCameraLensEffectBase::boolField4A4 offset is not 4a4");
	auto constexpr UEmitterCameraLensEffectBase_EmittersToTreatAsSame_Offset = offsetof(UEmitterCameraLensEffectBase, EmittersToTreatAsSame);
	static_assert(UEmitterCameraLensEffectBase_EmittersToTreatAsSame_Offset == 0x4a8, "UEmitterCameraLensEffectBase::EmittersToTreatAsSame offset is not 4a8");
	auto constexpr UEmitterCameraLensEffectBase_DistFromCamera_Offset = offsetof(UEmitterCameraLensEffectBase, DistFromCamera);
	static_assert(UEmitterCameraLensEffectBase_DistFromCamera_Offset == 0x4b8, "UEmitterCameraLensEffectBase::DistFromCamera offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
