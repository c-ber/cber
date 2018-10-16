#pragma once
#include "UTslWeapon_Gun.hpp"
#include "FRecoilInfo.hpp"
#include "FTrajectoryWeaponData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslWeapon_Trajectory // Size: 0xF10
	: public UTslWeapon_Gun // Size: 0xCB0
{
private:
	typedef UTslWeapon_Trajectory t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1988); // id32("Class TslGame.TslWeapon_Trajectory")
		return ptr;
	}
//	float TrajectoryGravityZ; /* Ofs: 0xCA8 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.TrajectoryGravityZ */
	uint8_t UnknownDataCB0[0x10];
	TMap<float, struct UClass> UnderWaterTrailFXClassPerLength; /* Ofs: 0xCC0 Size: 0x50 - MapProperty TslGame.TslWeapon_Trajectory.UnderWaterTrailFXClassPerLength */
	ExternalPtr<struct UClass> ImpactTemplate; /* Ofs: 0xD10 Size: 0x8 - ClassProperty TslGame.TslWeapon_Trajectory.ImpactTemplate */
	float ProneSpreadModifier; /* Ofs: 0xD18 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.ProneSpreadModifier */
	uint8_t boolFieldD1C;
	uint8_t UnknownDataD1D[0x1B];
	float JumpSpread; /* Ofs: 0xD38 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.JumpSpread */
	float RecoilSpreadScale; /* Ofs: 0xD3C Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.RecoilSpreadScale */
	uint8_t UnknownDataD40[0x18];
	float WalkSpread; /* Ofs: 0xD58 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.WalkSpread */
	uint8_t UnknownDataD5C[0x18];
	float DefaultTimerFrequency; /* Ofs: 0xD74 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.DefaultTimerFrequency */
	uint8_t UnknownDataD78[0x18];
	FName TrailTargetParam; /* Ofs: 0xD90 Size: 0x8 - NameProperty TslGame.TslWeapon_Trajectory.TrailTargetParam */
	uint8_t UnknownDataD98[0x8];
	FRecoilInfo RecoilInfo; /* Ofs: 0xDA0 Size: 0xA0 - StructProperty TslGame.TslWeapon_Trajectory.RecoilInfo */
	ExternalPtr<struct UParticleSystem> TrailFX; /* Ofs: 0xE40 Size: 0x8 - ObjectProperty TslGame.TslWeapon_Trajectory.TrailFX */
	uint8_t UnknownDataE48[0x14];
	float CrouchSpreadModifier; /* Ofs: 0xE5C Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.CrouchSpreadModifier */
	uint8_t UnknownDataE60[0x4];
	float RunSpread; /* Ofs: 0xE64 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.RunSpread */
	FScriptMulticastDelegate OnWeaponRecoil; /* Ofs: 0xE68 Size: 0x10 - MulticastDelegateProperty TslGame.TslWeapon_Trajectory.OnWeaponRecoil */
	float WeaponSpread; /* Ofs: 0xE78 Size: 0x4 - FloatProperty TslGame.TslWeapon_Trajectory.WeaponSpread */
	uint8_t UnknownDataE7C[0x4];
	FTrajectoryWeaponData TrajectoryConfig; /* Ofs: 0xE80 Size: 0x80 - StructProperty TslGame.TslWeapon_Trajectory.TrajectoryConfig */
	uint8_t UnknownDataF00[0x10];


//	inline bool SetTrajectoryGravityZ(t_structHelper inst, float value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetUnderWaterTrailFXClassPerLength(t_structHelper inst, TMap<float, struct UClass> value) { inst.WriteOffset(0xCC0, value); }
	inline bool SetImpactTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xD10, value); }
	inline bool SetProneSpreadModifier(t_structHelper inst, float value) { inst.WriteOffset(0xD18, value); }
	inline bool FireAtViewPoint()
	{
		return boolFieldD1C& 0x1;
	}
	inline bool SetFireAtViewPoint(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD1C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetJumpSpread(t_structHelper inst, float value) { inst.WriteOffset(0xD38, value); }
	inline bool SetRecoilSpreadScale(t_structHelper inst, float value) { inst.WriteOffset(0xD3C, value); }
	inline bool SetWalkSpread(t_structHelper inst, float value) { inst.WriteOffset(0xD58, value); }
	inline bool SetDefaultTimerFrequency(t_structHelper inst, float value) { inst.WriteOffset(0xD74, value); }
	inline bool SetTrailTargetParam(t_structHelper inst, FName value) { inst.WriteOffset(0xD90, value); }
	inline bool SetRecoilInfo(t_structHelper inst, FRecoilInfo value) { inst.WriteOffset(0xDA0, value); }
	inline bool SetTrailFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0xE40, value); }
	inline bool SetCrouchSpreadModifier(t_structHelper inst, float value) { inst.WriteOffset(0xE5C, value); }
	inline bool SetRunSpread(t_structHelper inst, float value) { inst.WriteOffset(0xE64, value); }
	inline bool SetOnWeaponRecoil(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xE68, value); }
	inline bool SetWeaponSpread(t_structHelper inst, float value) { inst.WriteOffset(0xE78, value); }
	inline bool SetTrajectoryConfig(t_structHelper inst, FTrajectoryWeaponData value) { inst.WriteOffset(0xE80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslWeapon_Trajectory = sizeof(UTslWeapon_Trajectory); // 3856
    static_assert(sizeof(UTslWeapon_Trajectory) == 0xF10, "Size of UTslWeapon_Trajectory is not correct.");
//	auto constexpr UTslWeapon_Trajectory_TrajectoryGravityZ_Offset = offsetof(UTslWeapon_Trajectory, TrajectoryGravityZ);
//	static_assert(UTslWeapon_Trajectory_TrajectoryGravityZ_Offset == 0xca8, "UTslWeapon_Trajectory::TrajectoryGravityZ offset is not ca8");
	auto constexpr UTslWeapon_Trajectory_UnderWaterTrailFXClassPerLength_Offset = offsetof(UTslWeapon_Trajectory, UnderWaterTrailFXClassPerLength);
	static_assert(UTslWeapon_Trajectory_UnderWaterTrailFXClassPerLength_Offset == 0xcc0, "UTslWeapon_Trajectory::UnderWaterTrailFXClassPerLength offset is not cc0");
	auto constexpr UTslWeapon_Trajectory_ImpactTemplate_Offset = offsetof(UTslWeapon_Trajectory, ImpactTemplate);
	static_assert(UTslWeapon_Trajectory_ImpactTemplate_Offset == 0xd10, "UTslWeapon_Trajectory::ImpactTemplate offset is not d10");
	auto constexpr UTslWeapon_Trajectory_ProneSpreadModifier_Offset = offsetof(UTslWeapon_Trajectory, ProneSpreadModifier);
	static_assert(UTslWeapon_Trajectory_ProneSpreadModifier_Offset == 0xd18, "UTslWeapon_Trajectory::ProneSpreadModifier offset is not d18");
	auto constexpr UTslWeapon_Trajectory_boolFieldD1C_Offset = offsetof(UTslWeapon_Trajectory, boolFieldD1C);
	static_assert(UTslWeapon_Trajectory_boolFieldD1C_Offset == 0xd1c, "UTslWeapon_Trajectory::boolFieldD1C offset is not d1c");
	auto constexpr UTslWeapon_Trajectory_JumpSpread_Offset = offsetof(UTslWeapon_Trajectory, JumpSpread);
	static_assert(UTslWeapon_Trajectory_JumpSpread_Offset == 0xd38, "UTslWeapon_Trajectory::JumpSpread offset is not d38");
	auto constexpr UTslWeapon_Trajectory_RecoilSpreadScale_Offset = offsetof(UTslWeapon_Trajectory, RecoilSpreadScale);
	static_assert(UTslWeapon_Trajectory_RecoilSpreadScale_Offset == 0xd3c, "UTslWeapon_Trajectory::RecoilSpreadScale offset is not d3c");
	auto constexpr UTslWeapon_Trajectory_WalkSpread_Offset = offsetof(UTslWeapon_Trajectory, WalkSpread);
	static_assert(UTslWeapon_Trajectory_WalkSpread_Offset == 0xd58, "UTslWeapon_Trajectory::WalkSpread offset is not d58");
	auto constexpr UTslWeapon_Trajectory_DefaultTimerFrequency_Offset = offsetof(UTslWeapon_Trajectory, DefaultTimerFrequency);
	static_assert(UTslWeapon_Trajectory_DefaultTimerFrequency_Offset == 0xd74, "UTslWeapon_Trajectory::DefaultTimerFrequency offset is not d74");
	auto constexpr UTslWeapon_Trajectory_TrailTargetParam_Offset = offsetof(UTslWeapon_Trajectory, TrailTargetParam);
	static_assert(UTslWeapon_Trajectory_TrailTargetParam_Offset == 0xd90, "UTslWeapon_Trajectory::TrailTargetParam offset is not d90");
	auto constexpr UTslWeapon_Trajectory_RecoilInfo_Offset = offsetof(UTslWeapon_Trajectory, RecoilInfo);
	static_assert(UTslWeapon_Trajectory_RecoilInfo_Offset == 0xda0, "UTslWeapon_Trajectory::RecoilInfo offset is not da0");
	auto constexpr UTslWeapon_Trajectory_TrailFX_Offset = offsetof(UTslWeapon_Trajectory, TrailFX);
	static_assert(UTslWeapon_Trajectory_TrailFX_Offset == 0xe40, "UTslWeapon_Trajectory::TrailFX offset is not e40");
	auto constexpr UTslWeapon_Trajectory_CrouchSpreadModifier_Offset = offsetof(UTslWeapon_Trajectory, CrouchSpreadModifier);
	static_assert(UTslWeapon_Trajectory_CrouchSpreadModifier_Offset == 0xe5c, "UTslWeapon_Trajectory::CrouchSpreadModifier offset is not e5c");
	auto constexpr UTslWeapon_Trajectory_RunSpread_Offset = offsetof(UTslWeapon_Trajectory, RunSpread);
	static_assert(UTslWeapon_Trajectory_RunSpread_Offset == 0xe64, "UTslWeapon_Trajectory::RunSpread offset is not e64");
	auto constexpr UTslWeapon_Trajectory_OnWeaponRecoil_Offset = offsetof(UTslWeapon_Trajectory, OnWeaponRecoil);
	static_assert(UTslWeapon_Trajectory_OnWeaponRecoil_Offset == 0xe68, "UTslWeapon_Trajectory::OnWeaponRecoil offset is not e68");
	auto constexpr UTslWeapon_Trajectory_WeaponSpread_Offset = offsetof(UTslWeapon_Trajectory, WeaponSpread);
	static_assert(UTslWeapon_Trajectory_WeaponSpread_Offset == 0xe78, "UTslWeapon_Trajectory::WeaponSpread offset is not e78");
	auto constexpr UTslWeapon_Trajectory_TrajectoryConfig_Offset = offsetof(UTslWeapon_Trajectory, TrajectoryConfig);
	static_assert(UTslWeapon_Trajectory_TrajectoryConfig_Offset == 0xe80, "UTslWeapon_Trajectory::TrajectoryConfig offset is not e80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
