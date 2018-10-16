#pragma once
#include "UParticleModuleCollisionBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"
#include "EParticleCollisionComplete.hpp"
#include "EObjectTypeQuery.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleCollision // Size: 0x1C0
	: public UParticleModuleCollisionBase // Size: 0x38
{
private:
	typedef UParticleModuleCollision t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1073); // id32("Class Engine.ParticleModuleCollision")
		return ptr;
	}
	FRawDistributionVector DampingFactor; /* Ofs: 0x38 Size: 0x50 - StructProperty Engine.ParticleModuleCollision.DampingFactor */
	FRawDistributionVector DampingFactorRotation; /* Ofs: 0x88 Size: 0x50 - StructProperty Engine.ParticleModuleCollision.DampingFactorRotation */
	FRawDistributionFloat MaxCollisions; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.ParticleModuleCollision.MaxCollisions */
	TEnumAsByte<enum EParticleCollisionComplete> CollisionCompletionOption; /* Ofs: 0x110 Size: 0x1 - ByteProperty Engine.ParticleModuleCollision.CollisionCompletionOption */
	uint8_t UnknownData111[0x7];
	TArray<EObjectTypeQuery> CollisionTypes; /* Ofs: 0x118 Size: 0x10 - ArrayProperty Engine.ParticleModuleCollision.CollisionTypes */
	uint8_t UnknownData128[0x8];
	uint8_t boolField130;
	uint8_t UnknownData131[0x7];
	FRawDistributionFloat ParticleMass; /* Ofs: 0x138 Size: 0x38 - StructProperty Engine.ParticleModuleCollision.ParticleMass */
	float DirScalar; /* Ofs: 0x170 Size: 0x4 - FloatProperty Engine.ParticleModuleCollision.DirScalar */
	uint8_t boolField174;
	uint8_t UnknownData175[0x3];
	float VerticalFudgeFactor; /* Ofs: 0x178 Size: 0x4 - FloatProperty Engine.ParticleModuleCollision.VerticalFudgeFactor */
	uint8_t UnknownData17C[0x4];
	FRawDistributionFloat DelayAmount; /* Ofs: 0x180 Size: 0x38 - StructProperty Engine.ParticleModuleCollision.DelayAmount */
	uint8_t boolField1B8;
	uint8_t UnknownData1B9[0x3];
	float MaxCollisionDistance; /* Ofs: 0x1BC Size: 0x4 - FloatProperty Engine.ParticleModuleCollision.MaxCollisionDistance */


	inline bool SetDampingFactor(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x38, value); }
	inline bool SetDampingFactorRotation(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x88, value); }
	inline bool SetMaxCollisions(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xD8, value); }
	inline bool SetCollisionCompletionOption(t_structHelper inst, TEnumAsByte<enum EParticleCollisionComplete> value) { inst.WriteOffset(0x110, value); }
	inline bool SetCollisionTypes(t_structHelper inst, TArray<EObjectTypeQuery> value) { inst.WriteOffset(0x118, value); }
	inline bool bApplyPhysics()
	{
		return boolField130& 0x1;
	}
	inline bool SetbApplyPhysics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIgnoreTriggerVolumes()
	{
		return boolField130& 0x2;
	}
	inline bool SetbIgnoreTriggerVolumes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetParticleMass(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x138, value); }
	inline bool SetDirScalar(t_structHelper inst, float value) { inst.WriteOffset(0x170, value); }
	inline bool bPawnsDoNotDecrementCount()
	{
		return boolField174& 0x1;
	}
	inline bool SetbPawnsDoNotDecrementCount(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x174, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOnlyVerticalNormalsDecrementCount()
	{
		return boolField174& 0x2;
	}
	inline bool SetbOnlyVerticalNormalsDecrementCount(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x174, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetVerticalFudgeFactor(t_structHelper inst, float value) { inst.WriteOffset(0x178, value); }
	inline bool SetDelayAmount(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x180, value); }
	inline bool bDropDetail()
	{
		return boolField1B8& 0x1;
	}
	inline bool SetbDropDetail(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCollideOnlyIfVisible()
	{
		return boolField1B8& 0x2;
	}
	inline bool SetbCollideOnlyIfVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIgnoreSourceActor()
	{
		return boolField1B8& 0x4;
	}
	inline bool SetbIgnoreSourceActor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetMaxCollisionDistance(t_structHelper inst, float value) { inst.WriteOffset(0x1BC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleCollision = sizeof(UParticleModuleCollision); // 448
    static_assert(sizeof(UParticleModuleCollision) == 0x1C0, "Size of UParticleModuleCollision is not correct.");
	auto constexpr UParticleModuleCollision_DampingFactor_Offset = offsetof(UParticleModuleCollision, DampingFactor);
	static_assert(UParticleModuleCollision_DampingFactor_Offset == 0x38, "UParticleModuleCollision::DampingFactor offset is not 38");
	auto constexpr UParticleModuleCollision_DampingFactorRotation_Offset = offsetof(UParticleModuleCollision, DampingFactorRotation);
	static_assert(UParticleModuleCollision_DampingFactorRotation_Offset == 0x88, "UParticleModuleCollision::DampingFactorRotation offset is not 88");
	auto constexpr UParticleModuleCollision_MaxCollisions_Offset = offsetof(UParticleModuleCollision, MaxCollisions);
	static_assert(UParticleModuleCollision_MaxCollisions_Offset == 0xd8, "UParticleModuleCollision::MaxCollisions offset is not d8");
	auto constexpr UParticleModuleCollision_CollisionCompletionOption_Offset = offsetof(UParticleModuleCollision, CollisionCompletionOption);
	static_assert(UParticleModuleCollision_CollisionCompletionOption_Offset == 0x110, "UParticleModuleCollision::CollisionCompletionOption offset is not 110");
	auto constexpr UParticleModuleCollision_CollisionTypes_Offset = offsetof(UParticleModuleCollision, CollisionTypes);
	static_assert(UParticleModuleCollision_CollisionTypes_Offset == 0x118, "UParticleModuleCollision::CollisionTypes offset is not 118");
	auto constexpr UParticleModuleCollision_boolField130_Offset = offsetof(UParticleModuleCollision, boolField130);
	static_assert(UParticleModuleCollision_boolField130_Offset == 0x130, "UParticleModuleCollision::boolField130 offset is not 130");
	auto constexpr UParticleModuleCollision_ParticleMass_Offset = offsetof(UParticleModuleCollision, ParticleMass);
	static_assert(UParticleModuleCollision_ParticleMass_Offset == 0x138, "UParticleModuleCollision::ParticleMass offset is not 138");
	auto constexpr UParticleModuleCollision_DirScalar_Offset = offsetof(UParticleModuleCollision, DirScalar);
	static_assert(UParticleModuleCollision_DirScalar_Offset == 0x170, "UParticleModuleCollision::DirScalar offset is not 170");
	auto constexpr UParticleModuleCollision_boolField174_Offset = offsetof(UParticleModuleCollision, boolField174);
	static_assert(UParticleModuleCollision_boolField174_Offset == 0x174, "UParticleModuleCollision::boolField174 offset is not 174");
	auto constexpr UParticleModuleCollision_VerticalFudgeFactor_Offset = offsetof(UParticleModuleCollision, VerticalFudgeFactor);
	static_assert(UParticleModuleCollision_VerticalFudgeFactor_Offset == 0x178, "UParticleModuleCollision::VerticalFudgeFactor offset is not 178");
	auto constexpr UParticleModuleCollision_DelayAmount_Offset = offsetof(UParticleModuleCollision, DelayAmount);
	static_assert(UParticleModuleCollision_DelayAmount_Offset == 0x180, "UParticleModuleCollision::DelayAmount offset is not 180");
	auto constexpr UParticleModuleCollision_boolField1B8_Offset = offsetof(UParticleModuleCollision, boolField1B8);
	static_assert(UParticleModuleCollision_boolField1B8_Offset == 0x1b8, "UParticleModuleCollision::boolField1B8 offset is not 1b8");
	auto constexpr UParticleModuleCollision_MaxCollisionDistance_Offset = offsetof(UParticleModuleCollision, MaxCollisionDistance);
	static_assert(UParticleModuleCollision_MaxCollisionDistance_Offset == 0x1bc, "UParticleModuleCollision::MaxCollisionDistance offset is not 1bc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
