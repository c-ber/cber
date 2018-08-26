#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCameraSettings // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UCameraSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1825); // id32("Class TslGame.CameraSettings")
		return ptr;
	}
	float CameraPitchMinStand; /* Ofs: 0x30 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraPitchMinStand */
	float CameraPitchMaxStand; /* Ofs: 0x34 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraPitchMaxStand */
	float CameraYawMinStand; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraYawMinStand */
	float CameraYawMaxStand; /* Ofs: 0x3C Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraYawMaxStand */
	float CameraPitchMinProne; /* Ofs: 0x40 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraPitchMinProne */
	float CameraPitchMaxProne; /* Ofs: 0x44 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraPitchMaxProne */
	float CameraYawMinProne; /* Ofs: 0x48 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraYawMinProne */
	float CameraYawMaxProne; /* Ofs: 0x4C Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraYawMaxProne */
	float FPSShowOnHighScopingFOV; /* Ofs: 0x50 Size: 0x4 - FloatProperty TslGame.CameraSettings.FPSShowOnHighScopingFOV */
	float TPSShowOnHighScopingFOV; /* Ofs: 0x54 Size: 0x4 - FloatProperty TslGame.CameraSettings.TPSShowOnHighScopingFOV */
	float CameraPitchMinInVehicle; /* Ofs: 0x58 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraPitchMinInVehicle */
	float CameraPitchMaxInVehicle; /* Ofs: 0x5C Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraPitchMaxInVehicle */
	float CameraYawMinInVehicle; /* Ofs: 0x60 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraYawMinInVehicle */
	float CameraYawMaxInVehicle; /* Ofs: 0x64 Size: 0x4 - FloatProperty TslGame.CameraSettings.CameraYawMaxInVehicle */
	FName HeadBoneName; /* Ofs: 0x68 Size: 0x8 - NameProperty TslGame.CameraSettings.HeadBoneName */
	TArray<struct FString> HideMaterialsWhenCameraIsInHead; /* Ofs: 0x70 Size: 0x10 - ArrayProperty TslGame.CameraSettings.HideMaterialsWhenCameraIsInHead */
	TArray<struct FString> HideMaterialsOnScopeMode; /* Ofs: 0x80 Size: 0x10 - ArrayProperty TslGame.CameraSettings.HideMaterialsOnScopeMode */
	TArray<struct FString> HideMaterialsOnHighScopeMode; /* Ofs: 0x90 Size: 0x10 - ArrayProperty TslGame.CameraSettings.HideMaterialsOnHighScopeMode */


	inline bool SetCameraPitchMinStand(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetCameraPitchMaxStand(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetCameraYawMinStand(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetCameraYawMaxStand(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetCameraPitchMinProne(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetCameraPitchMaxProne(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetCameraYawMinProne(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetCameraYawMaxProne(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetFPSShowOnHighScopingFOV(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetTPSShowOnHighScopingFOV(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetCameraPitchMinInVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetCameraPitchMaxInVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetCameraYawMinInVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetCameraYawMaxInVehicle(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetHeadBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x68, value); }
	inline bool SetHideMaterialsWhenCameraIsInHead(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x70, value); }
	inline bool SetHideMaterialsOnScopeMode(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x80, value); }
	inline bool SetHideMaterialsOnHighScopeMode(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x90, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCameraSettings = sizeof(UCameraSettings); // 160
    static_assert(sizeof(UCameraSettings) == 0xA0, "Size of UCameraSettings is not correct.");
	auto constexpr UCameraSettings_CameraPitchMinStand_Offset = offsetof(UCameraSettings, CameraPitchMinStand);
	static_assert(UCameraSettings_CameraPitchMinStand_Offset == 0x30, "UCameraSettings::CameraPitchMinStand offset is not 30");
	auto constexpr UCameraSettings_CameraPitchMaxStand_Offset = offsetof(UCameraSettings, CameraPitchMaxStand);
	static_assert(UCameraSettings_CameraPitchMaxStand_Offset == 0x34, "UCameraSettings::CameraPitchMaxStand offset is not 34");
	auto constexpr UCameraSettings_CameraYawMinStand_Offset = offsetof(UCameraSettings, CameraYawMinStand);
	static_assert(UCameraSettings_CameraYawMinStand_Offset == 0x38, "UCameraSettings::CameraYawMinStand offset is not 38");
	auto constexpr UCameraSettings_CameraYawMaxStand_Offset = offsetof(UCameraSettings, CameraYawMaxStand);
	static_assert(UCameraSettings_CameraYawMaxStand_Offset == 0x3c, "UCameraSettings::CameraYawMaxStand offset is not 3c");
	auto constexpr UCameraSettings_CameraPitchMinProne_Offset = offsetof(UCameraSettings, CameraPitchMinProne);
	static_assert(UCameraSettings_CameraPitchMinProne_Offset == 0x40, "UCameraSettings::CameraPitchMinProne offset is not 40");
	auto constexpr UCameraSettings_CameraPitchMaxProne_Offset = offsetof(UCameraSettings, CameraPitchMaxProne);
	static_assert(UCameraSettings_CameraPitchMaxProne_Offset == 0x44, "UCameraSettings::CameraPitchMaxProne offset is not 44");
	auto constexpr UCameraSettings_CameraYawMinProne_Offset = offsetof(UCameraSettings, CameraYawMinProne);
	static_assert(UCameraSettings_CameraYawMinProne_Offset == 0x48, "UCameraSettings::CameraYawMinProne offset is not 48");
	auto constexpr UCameraSettings_CameraYawMaxProne_Offset = offsetof(UCameraSettings, CameraYawMaxProne);
	static_assert(UCameraSettings_CameraYawMaxProne_Offset == 0x4c, "UCameraSettings::CameraYawMaxProne offset is not 4c");
	auto constexpr UCameraSettings_FPSShowOnHighScopingFOV_Offset = offsetof(UCameraSettings, FPSShowOnHighScopingFOV);
	static_assert(UCameraSettings_FPSShowOnHighScopingFOV_Offset == 0x50, "UCameraSettings::FPSShowOnHighScopingFOV offset is not 50");
	auto constexpr UCameraSettings_TPSShowOnHighScopingFOV_Offset = offsetof(UCameraSettings, TPSShowOnHighScopingFOV);
	static_assert(UCameraSettings_TPSShowOnHighScopingFOV_Offset == 0x54, "UCameraSettings::TPSShowOnHighScopingFOV offset is not 54");
	auto constexpr UCameraSettings_CameraPitchMinInVehicle_Offset = offsetof(UCameraSettings, CameraPitchMinInVehicle);
	static_assert(UCameraSettings_CameraPitchMinInVehicle_Offset == 0x58, "UCameraSettings::CameraPitchMinInVehicle offset is not 58");
	auto constexpr UCameraSettings_CameraPitchMaxInVehicle_Offset = offsetof(UCameraSettings, CameraPitchMaxInVehicle);
	static_assert(UCameraSettings_CameraPitchMaxInVehicle_Offset == 0x5c, "UCameraSettings::CameraPitchMaxInVehicle offset is not 5c");
	auto constexpr UCameraSettings_CameraYawMinInVehicle_Offset = offsetof(UCameraSettings, CameraYawMinInVehicle);
	static_assert(UCameraSettings_CameraYawMinInVehicle_Offset == 0x60, "UCameraSettings::CameraYawMinInVehicle offset is not 60");
	auto constexpr UCameraSettings_CameraYawMaxInVehicle_Offset = offsetof(UCameraSettings, CameraYawMaxInVehicle);
	static_assert(UCameraSettings_CameraYawMaxInVehicle_Offset == 0x64, "UCameraSettings::CameraYawMaxInVehicle offset is not 64");
	auto constexpr UCameraSettings_HeadBoneName_Offset = offsetof(UCameraSettings, HeadBoneName);
	static_assert(UCameraSettings_HeadBoneName_Offset == 0x68, "UCameraSettings::HeadBoneName offset is not 68");
	auto constexpr UCameraSettings_HideMaterialsWhenCameraIsInHead_Offset = offsetof(UCameraSettings, HideMaterialsWhenCameraIsInHead);
	static_assert(UCameraSettings_HideMaterialsWhenCameraIsInHead_Offset == 0x70, "UCameraSettings::HideMaterialsWhenCameraIsInHead offset is not 70");
	auto constexpr UCameraSettings_HideMaterialsOnScopeMode_Offset = offsetof(UCameraSettings, HideMaterialsOnScopeMode);
	static_assert(UCameraSettings_HideMaterialsOnScopeMode_Offset == 0x80, "UCameraSettings::HideMaterialsOnScopeMode offset is not 80");
	auto constexpr UCameraSettings_HideMaterialsOnHighScopeMode_Offset = offsetof(UCameraSettings, HideMaterialsOnHighScopeMode);
	static_assert(UCameraSettings_HideMaterialsOnHighScopeMode_Offset == 0x90, "UCameraSettings::HideMaterialsOnHighScopeMode offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
