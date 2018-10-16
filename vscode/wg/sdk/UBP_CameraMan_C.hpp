#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_CameraMan_C // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UBP_CameraMan_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117311); // id32("BlueprintGeneratedClass BP_CameraMan.BP_CameraMan_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty BP_CameraMan.BP_CameraMan_C.UberGraphFrame */
	ExternalPtr<struct UCameraComponent> Camera; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_CameraMan.BP_CameraMan_C.Camera */
	ExternalPtr<struct USpringArmComponent> SpringArm; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_CameraMan.BP_CameraMan_C.SpringArm */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_CameraMan.BP_CameraMan_C.DefaultSceneRoot */
	ExternalPtr<struct UTslCharacter> ParentRef; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_CameraMan.BP_CameraMan_C.ParentRef */
	uint8_t boolField438;
	uint8_t boolField439;
	uint8_t boolField43A;
	uint8_t boolField43B;
	uint8_t UnknownData43C[0x4];
	ExternalPtr<struct UCurveFloat> DistanceZoomCurve; /* Ofs: 0x440 Size: 0x8 - ObjectProperty BP_CameraMan.BP_CameraMan_C.DistanceZoomCurve */
	float YawRotation; /* Ofs: 0x448 Size: 0x4 - FloatProperty BP_CameraMan.BP_CameraMan_C.YawRotation */
	float YawRotationRate; /* Ofs: 0x44C Size: 0x4 - FloatProperty BP_CameraMan.BP_CameraMan_C.YawRotationRate */
	float TargetOffsetZ; /* Ofs: 0x450 Size: 0x4 - FloatProperty BP_CameraMan.BP_CameraMan_C.TargetOffsetZ */
	uint8_t UnknownData454[0x4];
	ExternalPtr<struct UBP_Motorbike_03_C> ParentRefMoto; /* Ofs: 0x458 Size: 0x8 - ObjectProperty BP_CameraMan.BP_CameraMan_C.ParentRefMoto */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetCamera(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetParentRef(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x430, value); }
	inline bool bInitialized()
	{
		return boolField438& 0x1;
	}
	inline bool SetbInitialized(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x438, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsAttached()
	{
		return boolField439& 0x1;
	}
	inline bool SetbIsAttached(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x439, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLookAtTarget()
	{
		return boolField43A& 0x1;
	}
	inline bool SetbLookAtTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoZoom()
	{
		return boolField43B& 0x1;
	}
	inline bool SetbAutoZoom(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x43B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDistanceZoomCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x440, value); }
	inline bool SetYawRotation(t_structHelper inst, float value) { inst.WriteOffset(0x448, value); }
	inline bool SetYawRotationRate(t_structHelper inst, float value) { inst.WriteOffset(0x44C, value); }
	inline bool SetTargetOffsetZ(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetParentRefMoto(t_structHelper inst, ExternalPtr<struct UBP_Motorbike_03_C> value) { inst.WriteOffset(0x458, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_CameraMan_C = sizeof(UBP_CameraMan_C); // 1120
    static_assert(sizeof(UBP_CameraMan_C) == 0x460, "Size of UBP_CameraMan_C is not correct.");
	auto constexpr UBP_CameraMan_C_UberGraphFrame_Offset = offsetof(UBP_CameraMan_C, UberGraphFrame);
	static_assert(UBP_CameraMan_C_UberGraphFrame_Offset == 0x410, "UBP_CameraMan_C::UberGraphFrame offset is not 410");
	auto constexpr UBP_CameraMan_C_Camera_Offset = offsetof(UBP_CameraMan_C, Camera);
	static_assert(UBP_CameraMan_C_Camera_Offset == 0x418, "UBP_CameraMan_C::Camera offset is not 418");
	auto constexpr UBP_CameraMan_C_SpringArm_Offset = offsetof(UBP_CameraMan_C, SpringArm);
	static_assert(UBP_CameraMan_C_SpringArm_Offset == 0x420, "UBP_CameraMan_C::SpringArm offset is not 420");
	auto constexpr UBP_CameraMan_C_DefaultSceneRoot_Offset = offsetof(UBP_CameraMan_C, DefaultSceneRoot);
	static_assert(UBP_CameraMan_C_DefaultSceneRoot_Offset == 0x428, "UBP_CameraMan_C::DefaultSceneRoot offset is not 428");
	auto constexpr UBP_CameraMan_C_ParentRef_Offset = offsetof(UBP_CameraMan_C, ParentRef);
	static_assert(UBP_CameraMan_C_ParentRef_Offset == 0x430, "UBP_CameraMan_C::ParentRef offset is not 430");
	auto constexpr UBP_CameraMan_C_boolField438_Offset = offsetof(UBP_CameraMan_C, boolField438);
	static_assert(UBP_CameraMan_C_boolField438_Offset == 0x438, "UBP_CameraMan_C::boolField438 offset is not 438");
	auto constexpr UBP_CameraMan_C_boolField439_Offset = offsetof(UBP_CameraMan_C, boolField439);
	static_assert(UBP_CameraMan_C_boolField439_Offset == 0x439, "UBP_CameraMan_C::boolField439 offset is not 439");
	auto constexpr UBP_CameraMan_C_boolField43A_Offset = offsetof(UBP_CameraMan_C, boolField43A);
	static_assert(UBP_CameraMan_C_boolField43A_Offset == 0x43a, "UBP_CameraMan_C::boolField43A offset is not 43a");
	auto constexpr UBP_CameraMan_C_boolField43B_Offset = offsetof(UBP_CameraMan_C, boolField43B);
	static_assert(UBP_CameraMan_C_boolField43B_Offset == 0x43b, "UBP_CameraMan_C::boolField43B offset is not 43b");
	auto constexpr UBP_CameraMan_C_DistanceZoomCurve_Offset = offsetof(UBP_CameraMan_C, DistanceZoomCurve);
	static_assert(UBP_CameraMan_C_DistanceZoomCurve_Offset == 0x440, "UBP_CameraMan_C::DistanceZoomCurve offset is not 440");
	auto constexpr UBP_CameraMan_C_YawRotation_Offset = offsetof(UBP_CameraMan_C, YawRotation);
	static_assert(UBP_CameraMan_C_YawRotation_Offset == 0x448, "UBP_CameraMan_C::YawRotation offset is not 448");
	auto constexpr UBP_CameraMan_C_YawRotationRate_Offset = offsetof(UBP_CameraMan_C, YawRotationRate);
	static_assert(UBP_CameraMan_C_YawRotationRate_Offset == 0x44c, "UBP_CameraMan_C::YawRotationRate offset is not 44c");
	auto constexpr UBP_CameraMan_C_TargetOffsetZ_Offset = offsetof(UBP_CameraMan_C, TargetOffsetZ);
	static_assert(UBP_CameraMan_C_TargetOffsetZ_Offset == 0x450, "UBP_CameraMan_C::TargetOffsetZ offset is not 450");
	auto constexpr UBP_CameraMan_C_ParentRefMoto_Offset = offsetof(UBP_CameraMan_C, ParentRefMoto);
	static_assert(UBP_CameraMan_C_ParentRefMoto_Offset == 0x458, "UBP_CameraMan_C::ParentRefMoto offset is not 458");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
