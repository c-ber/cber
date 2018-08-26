#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_BulletCamActor_C // Size: 0x438
	: public UActor // Size: 0x410
{
private:
	typedef UBP_BulletCamActor_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88735); // id32("BlueprintGeneratedClass BP_BulletCamActor.BP_BulletCamActor_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty BP_BulletCamActor.BP_BulletCamActor_C.UberGraphFrame */
	ExternalPtr<struct UCameraComponent> Camera; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_BulletCamActor.BP_BulletCamActor_C.Camera */
	ExternalPtr<struct USpringArmComponent> SpringArm; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_BulletCamActor.BP_BulletCamActor_C.SpringArm */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_BulletCamActor.BP_BulletCamActor_C.DefaultSceneRoot */
	ExternalPtr<struct UTslWeapon_Trajectory> WeaponRef; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_BulletCamActor.BP_BulletCamActor_C.WeaponRef */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetCamera(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetWeaponRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Trajectory> value) { inst.WriteOffset(0x430, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_BulletCamActor_C = sizeof(UBP_BulletCamActor_C); // 1080
    static_assert(sizeof(UBP_BulletCamActor_C) == 0x438, "Size of UBP_BulletCamActor_C is not correct.");
	auto constexpr UBP_BulletCamActor_C_UberGraphFrame_Offset = offsetof(UBP_BulletCamActor_C, UberGraphFrame);
	static_assert(UBP_BulletCamActor_C_UberGraphFrame_Offset == 0x410, "UBP_BulletCamActor_C::UberGraphFrame offset is not 410");
	auto constexpr UBP_BulletCamActor_C_Camera_Offset = offsetof(UBP_BulletCamActor_C, Camera);
	static_assert(UBP_BulletCamActor_C_Camera_Offset == 0x418, "UBP_BulletCamActor_C::Camera offset is not 418");
	auto constexpr UBP_BulletCamActor_C_SpringArm_Offset = offsetof(UBP_BulletCamActor_C, SpringArm);
	static_assert(UBP_BulletCamActor_C_SpringArm_Offset == 0x420, "UBP_BulletCamActor_C::SpringArm offset is not 420");
	auto constexpr UBP_BulletCamActor_C_DefaultSceneRoot_Offset = offsetof(UBP_BulletCamActor_C, DefaultSceneRoot);
	static_assert(UBP_BulletCamActor_C_DefaultSceneRoot_Offset == 0x428, "UBP_BulletCamActor_C::DefaultSceneRoot offset is not 428");
	auto constexpr UBP_BulletCamActor_C_WeaponRef_Offset = offsetof(UBP_BulletCamActor_C, WeaponRef);
	static_assert(UBP_BulletCamActor_C_WeaponRef_Offset == 0x430, "UBP_BulletCamActor_C::WeaponRef offset is not 430");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
