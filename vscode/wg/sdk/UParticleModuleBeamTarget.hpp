#pragma once
#include "UParticleModuleBeamBase.hpp"
#include "Beam2SourceTargetMethod.hpp"
#include "FRawDistributionVector.hpp"
#include "Beam2SourceTargetTangentMethod.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleBeamTarget // Size: 0x140
	: public UParticleModuleBeamBase // Size: 0x38
{
private:
	typedef UParticleModuleBeamTarget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1069); // id32("Class Engine.ParticleModuleBeamTarget")
		return ptr;
	}
	TEnumAsByte<enum Beam2SourceTargetMethod> TargetMethod; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleBeamTarget.TargetMethod */
	uint8_t UnknownData39[0x7];
	FName TargetName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.ParticleModuleBeamTarget.TargetName */
	FRawDistributionVector Target; /* Ofs: 0x48 Size: 0x50 - StructProperty Engine.ParticleModuleBeamTarget.Target */
	uint8_t boolField98;
	uint8_t UnknownData99[0x3];
	TEnumAsByte<enum Beam2SourceTargetTangentMethod> TargetTangentMethod; /* Ofs: 0x9C Size: 0x1 - ByteProperty Engine.ParticleModuleBeamTarget.TargetTangentMethod */
	uint8_t UnknownData9D[0x3];
	FRawDistributionVector TargetTangent; /* Ofs: 0xA0 Size: 0x50 - StructProperty Engine.ParticleModuleBeamTarget.TargetTangent */
	uint8_t boolFieldF0;
	uint8_t UnknownDataF1[0x7];
	FRawDistributionFloat TargetStrength; /* Ofs: 0xF8 Size: 0x38 - StructProperty Engine.ParticleModuleBeamTarget.TargetStrength */
	uint8_t boolField130;
	uint8_t UnknownData131[0x3];
	float LockRadius; /* Ofs: 0x134 Size: 0x4 - FloatProperty Engine.ParticleModuleBeamTarget.LockRadius */
	uint8_t UnknownData138[0x8];


	inline bool SetTargetMethod(t_structHelper inst, TEnumAsByte<enum Beam2SourceTargetMethod> value) { inst.WriteOffset(0x38, value); }
	inline bool SetTargetName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
	inline bool SetTarget(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x48, value); }
	inline bool bTargetAbsolute()
	{
		return boolField98& 0x1;
	}
	inline bool SetbTargetAbsolute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLockTarget()
	{
		return boolField98& 0x2;
	}
	inline bool SetbLockTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetTargetTangentMethod(t_structHelper inst, TEnumAsByte<enum Beam2SourceTargetTangentMethod> value) { inst.WriteOffset(0x9C, value); }
	inline bool SetTargetTangent(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0xA0, value); }
	inline bool bLockTargetTangent()
	{
		return boolFieldF0& 0x1;
	}
	inline bool SetbLockTargetTangent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTargetStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xF8, value); }
	inline bool bLockTargetStength()
	{
		return boolField130& 0x1;
	}
	inline bool SetbLockTargetStength(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLockRadius(t_structHelper inst, float value) { inst.WriteOffset(0x134, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleBeamTarget = sizeof(UParticleModuleBeamTarget); // 320
    static_assert(sizeof(UParticleModuleBeamTarget) == 0x140, "Size of UParticleModuleBeamTarget is not correct.");
	auto constexpr UParticleModuleBeamTarget_TargetMethod_Offset = offsetof(UParticleModuleBeamTarget, TargetMethod);
	static_assert(UParticleModuleBeamTarget_TargetMethod_Offset == 0x38, "UParticleModuleBeamTarget::TargetMethod offset is not 38");
	auto constexpr UParticleModuleBeamTarget_TargetName_Offset = offsetof(UParticleModuleBeamTarget, TargetName);
	static_assert(UParticleModuleBeamTarget_TargetName_Offset == 0x40, "UParticleModuleBeamTarget::TargetName offset is not 40");
	auto constexpr UParticleModuleBeamTarget_Target_Offset = offsetof(UParticleModuleBeamTarget, Target);
	static_assert(UParticleModuleBeamTarget_Target_Offset == 0x48, "UParticleModuleBeamTarget::Target offset is not 48");
	auto constexpr UParticleModuleBeamTarget_boolField98_Offset = offsetof(UParticleModuleBeamTarget, boolField98);
	static_assert(UParticleModuleBeamTarget_boolField98_Offset == 0x98, "UParticleModuleBeamTarget::boolField98 offset is not 98");
	auto constexpr UParticleModuleBeamTarget_TargetTangentMethod_Offset = offsetof(UParticleModuleBeamTarget, TargetTangentMethod);
	static_assert(UParticleModuleBeamTarget_TargetTangentMethod_Offset == 0x9c, "UParticleModuleBeamTarget::TargetTangentMethod offset is not 9c");
	auto constexpr UParticleModuleBeamTarget_TargetTangent_Offset = offsetof(UParticleModuleBeamTarget, TargetTangent);
	static_assert(UParticleModuleBeamTarget_TargetTangent_Offset == 0xa0, "UParticleModuleBeamTarget::TargetTangent offset is not a0");
	auto constexpr UParticleModuleBeamTarget_boolFieldF0_Offset = offsetof(UParticleModuleBeamTarget, boolFieldF0);
	static_assert(UParticleModuleBeamTarget_boolFieldF0_Offset == 0xf0, "UParticleModuleBeamTarget::boolFieldF0 offset is not f0");
	auto constexpr UParticleModuleBeamTarget_TargetStrength_Offset = offsetof(UParticleModuleBeamTarget, TargetStrength);
	static_assert(UParticleModuleBeamTarget_TargetStrength_Offset == 0xf8, "UParticleModuleBeamTarget::TargetStrength offset is not f8");
	auto constexpr UParticleModuleBeamTarget_boolField130_Offset = offsetof(UParticleModuleBeamTarget, boolField130);
	static_assert(UParticleModuleBeamTarget_boolField130_Offset == 0x130, "UParticleModuleBeamTarget::boolField130 offset is not 130");
	auto constexpr UParticleModuleBeamTarget_LockRadius_Offset = offsetof(UParticleModuleBeamTarget, LockRadius);
	static_assert(UParticleModuleBeamTarget_LockRadius_Offset == 0x134, "UParticleModuleBeamTarget::LockRadius offset is not 134");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
