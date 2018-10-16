#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraRig_Crane // Size: 0x440
	: public UActor // Size: 0x410
{
private:
	typedef UCameraRig_Crane t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1266); // id32("Class CinematicCamera.CameraRig_Crane")
		return ptr;
	}
//	float CranePitch; /* Ofs: 0x408 Size: 0x4 - FloatProperty CinematicCamera.CameraRig_Crane.CranePitch */
//	float CraneYaw; /* Ofs: 0x40C Size: 0x4 - FloatProperty CinematicCamera.CameraRig_Crane.CraneYaw */
	float CraneArmLength; /* Ofs: 0x410 Size: 0x4 - FloatProperty CinematicCamera.CameraRig_Crane.CraneArmLength */
	uint8_t boolField414;
	uint8_t boolField415;
	uint8_t UnknownData416[0x2];
	ExternalPtr<struct USceneComponent> TransformComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Crane.TransformComponent */
	ExternalPtr<struct USceneComponent> CraneYawControl; /* Ofs: 0x420 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Crane.CraneYawControl */
	ExternalPtr<struct USceneComponent> CranePitchControl; /* Ofs: 0x428 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Crane.CranePitchControl */
	ExternalPtr<struct USceneComponent> CraneCameraMount; /* Ofs: 0x430 Size: 0x8 - ObjectProperty CinematicCamera.CameraRig_Crane.CraneCameraMount */
	uint8_t UnknownData438[0x8];


//	inline bool SetCranePitch(t_structHelper inst, float value) { inst.WriteOffset(0x408, value); }
//	inline bool SetCraneYaw(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetCraneArmLength(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool bLockMountPitch()
	{
		return boolField414& 0x1;
	}
	inline bool SetbLockMountPitch(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x414, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLockMountYaw()
	{
		return boolField415& 0x1;
	}
	inline bool SetbLockMountYaw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x415, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTransformComponent(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetCraneYawControl(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetCranePitchControl(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetCraneCameraMount(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x430, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraRig_Crane = sizeof(UCameraRig_Crane); // 1088
    static_assert(sizeof(UCameraRig_Crane) == 0x440, "Size of UCameraRig_Crane is not correct.");
//	auto constexpr UCameraRig_Crane_CranePitch_Offset = offsetof(UCameraRig_Crane, CranePitch);
//	static_assert(UCameraRig_Crane_CranePitch_Offset == 0x408, "UCameraRig_Crane::CranePitch offset is not 408");
//	auto constexpr UCameraRig_Crane_CraneYaw_Offset = offsetof(UCameraRig_Crane, CraneYaw);
//	static_assert(UCameraRig_Crane_CraneYaw_Offset == 0x40c, "UCameraRig_Crane::CraneYaw offset is not 40c");
	auto constexpr UCameraRig_Crane_CraneArmLength_Offset = offsetof(UCameraRig_Crane, CraneArmLength);
	static_assert(UCameraRig_Crane_CraneArmLength_Offset == 0x410, "UCameraRig_Crane::CraneArmLength offset is not 410");
	auto constexpr UCameraRig_Crane_boolField414_Offset = offsetof(UCameraRig_Crane, boolField414);
	static_assert(UCameraRig_Crane_boolField414_Offset == 0x414, "UCameraRig_Crane::boolField414 offset is not 414");
	auto constexpr UCameraRig_Crane_boolField415_Offset = offsetof(UCameraRig_Crane, boolField415);
	static_assert(UCameraRig_Crane_boolField415_Offset == 0x415, "UCameraRig_Crane::boolField415 offset is not 415");
	auto constexpr UCameraRig_Crane_TransformComponent_Offset = offsetof(UCameraRig_Crane, TransformComponent);
	static_assert(UCameraRig_Crane_TransformComponent_Offset == 0x418, "UCameraRig_Crane::TransformComponent offset is not 418");
	auto constexpr UCameraRig_Crane_CraneYawControl_Offset = offsetof(UCameraRig_Crane, CraneYawControl);
	static_assert(UCameraRig_Crane_CraneYawControl_Offset == 0x420, "UCameraRig_Crane::CraneYawControl offset is not 420");
	auto constexpr UCameraRig_Crane_CranePitchControl_Offset = offsetof(UCameraRig_Crane, CranePitchControl);
	static_assert(UCameraRig_Crane_CranePitchControl_Offset == 0x428, "UCameraRig_Crane::CranePitchControl offset is not 428");
	auto constexpr UCameraRig_Crane_CraneCameraMount_Offset = offsetof(UCameraRig_Crane, CraneCameraMount);
	static_assert(UCameraRig_Crane_CraneCameraMount_Offset == 0x430, "UCameraRig_Crane::CraneCameraMount offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
