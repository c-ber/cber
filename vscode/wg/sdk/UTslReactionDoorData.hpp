#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslReactionDoorData // Size: 0x78
	: public UDataAsset // Size: 0x38
{
private:
	typedef UTslReactionDoorData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1849); // id32("Class TslGame.TslReactionDoorData")
		return ptr;
	}
	float PointDamageImpulse; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.PointDamageImpulse */
	float PointDamageRadius; /* Ofs: 0x3C Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.PointDamageRadius */
	float BreakingRadius; /* Ofs: 0x40 Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.BreakingRadius */
	float BreakingImpulse; /* Ofs: 0x44 Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.BreakingImpulse */
	float BreakingMinDamage; /* Ofs: 0x48 Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.BreakingMinDamage */
	float DamageAccumulateTimeout; /* Ofs: 0x4C Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.DamageAccumulateTimeout */
	float ZombieDamageAccumulateTimeout; /* Ofs: 0x50 Size: 0x4 - FloatProperty TslGame.TslReactionDoorData.ZombieDamageAccumulateTimeout */
	uint8_t UnknownData54[0x4];
	FName TopImpactSoketName; /* Ofs: 0x58 Size: 0x8 - NameProperty TslGame.TslReactionDoorData.TopImpactSoketName */
	FName CenterImpactSoketName; /* Ofs: 0x60 Size: 0x8 - NameProperty TslGame.TslReactionDoorData.CenterImpactSoketName */
	FName BottomImpactSoketName; /* Ofs: 0x68 Size: 0x8 - NameProperty TslGame.TslReactionDoorData.BottomImpactSoketName */
	ExternalPtr<struct UAkAudioEvent> DestructibleSoundAk; /* Ofs: 0x70 Size: 0x8 - ObjectProperty TslGame.TslReactionDoorData.DestructibleSoundAk */


	inline bool SetPointDamageImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetPointDamageRadius(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetBreakingRadius(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetBreakingImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetBreakingMinDamage(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetDamageAccumulateTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetZombieDamageAccumulateTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetTopImpactSoketName(t_structHelper inst, FName value) { inst.WriteOffset(0x58, value); }
	inline bool SetCenterImpactSoketName(t_structHelper inst, FName value) { inst.WriteOffset(0x60, value); }
	inline bool SetBottomImpactSoketName(t_structHelper inst, FName value) { inst.WriteOffset(0x68, value); }
	inline bool SetDestructibleSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslReactionDoorData = sizeof(UTslReactionDoorData); // 120
    static_assert(sizeof(UTslReactionDoorData) == 0x78, "Size of UTslReactionDoorData is not correct.");
	auto constexpr UTslReactionDoorData_PointDamageImpulse_Offset = offsetof(UTslReactionDoorData, PointDamageImpulse);
	static_assert(UTslReactionDoorData_PointDamageImpulse_Offset == 0x38, "UTslReactionDoorData::PointDamageImpulse offset is not 38");
	auto constexpr UTslReactionDoorData_PointDamageRadius_Offset = offsetof(UTslReactionDoorData, PointDamageRadius);
	static_assert(UTslReactionDoorData_PointDamageRadius_Offset == 0x3c, "UTslReactionDoorData::PointDamageRadius offset is not 3c");
	auto constexpr UTslReactionDoorData_BreakingRadius_Offset = offsetof(UTslReactionDoorData, BreakingRadius);
	static_assert(UTslReactionDoorData_BreakingRadius_Offset == 0x40, "UTslReactionDoorData::BreakingRadius offset is not 40");
	auto constexpr UTslReactionDoorData_BreakingImpulse_Offset = offsetof(UTslReactionDoorData, BreakingImpulse);
	static_assert(UTslReactionDoorData_BreakingImpulse_Offset == 0x44, "UTslReactionDoorData::BreakingImpulse offset is not 44");
	auto constexpr UTslReactionDoorData_BreakingMinDamage_Offset = offsetof(UTslReactionDoorData, BreakingMinDamage);
	static_assert(UTslReactionDoorData_BreakingMinDamage_Offset == 0x48, "UTslReactionDoorData::BreakingMinDamage offset is not 48");
	auto constexpr UTslReactionDoorData_DamageAccumulateTimeout_Offset = offsetof(UTslReactionDoorData, DamageAccumulateTimeout);
	static_assert(UTslReactionDoorData_DamageAccumulateTimeout_Offset == 0x4c, "UTslReactionDoorData::DamageAccumulateTimeout offset is not 4c");
	auto constexpr UTslReactionDoorData_ZombieDamageAccumulateTimeout_Offset = offsetof(UTslReactionDoorData, ZombieDamageAccumulateTimeout);
	static_assert(UTslReactionDoorData_ZombieDamageAccumulateTimeout_Offset == 0x50, "UTslReactionDoorData::ZombieDamageAccumulateTimeout offset is not 50");
	auto constexpr UTslReactionDoorData_TopImpactSoketName_Offset = offsetof(UTslReactionDoorData, TopImpactSoketName);
	static_assert(UTslReactionDoorData_TopImpactSoketName_Offset == 0x58, "UTslReactionDoorData::TopImpactSoketName offset is not 58");
	auto constexpr UTslReactionDoorData_CenterImpactSoketName_Offset = offsetof(UTslReactionDoorData, CenterImpactSoketName);
	static_assert(UTslReactionDoorData_CenterImpactSoketName_Offset == 0x60, "UTslReactionDoorData::CenterImpactSoketName offset is not 60");
	auto constexpr UTslReactionDoorData_BottomImpactSoketName_Offset = offsetof(UTslReactionDoorData, BottomImpactSoketName);
	static_assert(UTslReactionDoorData_BottomImpactSoketName_Offset == 0x68, "UTslReactionDoorData::BottomImpactSoketName offset is not 68");
	auto constexpr UTslReactionDoorData_DestructibleSoundAk_Offset = offsetof(UTslReactionDoorData, DestructibleSoundAk);
	static_assert(UTslReactionDoorData_DestructibleSoundAk_Offset == 0x70, "UTslReactionDoorData::DestructibleSoundAk offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
