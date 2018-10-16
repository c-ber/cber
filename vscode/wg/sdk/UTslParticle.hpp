#pragma once
#include "UActor.hpp"
#include "EAttachParent.hpp"
#include "EAttachmentRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParticle // Size: 0x470
	: public UActor // Size: 0x410
{
private:
	typedef UTslParticle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1462); // id32("Class TslGame.TslParticle")
		return ptr;
	}
	uint8_t boolField410;
	uint8_t boolField411;
	uint8_t UnknownData412[0x6];
	TArray<struct FParticleParameter> DefaultParameters; /* Ofs: 0x418 Size: 0x10 - ArrayProperty TslGame.TslParticle.DefaultParameters */
	TEnumAsByte<enum EAttachParent> AttachParentType; /* Ofs: 0x428 Size: 0x1 - EnumProperty TslGame.TslParticle.AttachParentType */
	uint8_t UnknownData429[0x7];
	FName AttachSocketName; /* Ofs: 0x430 Size: 0x8 - NameProperty TslGame.TslParticle.AttachSocketName */
	TEnumAsByte<enum EAttachmentRule> AttachLocationRule; /* Ofs: 0x438 Size: 0x1 - EnumProperty TslGame.TslParticle.AttachLocationRule */
	TEnumAsByte<enum EAttachmentRule> AttachRotationRule; /* Ofs: 0x439 Size: 0x1 - EnumProperty TslGame.TslParticle.AttachRotationRule */
	TEnumAsByte<enum EAttachmentRule> AttachScaleRule; /* Ofs: 0x43A Size: 0x1 - EnumProperty TslGame.TslParticle.AttachScaleRule */
	uint8_t UnknownData43B[0xD];
	ExternalPtr<struct UParticleSystemComponent> ParticleSystem; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.TslParticle.ParticleSystem */
	ExternalPtr<struct UAkComponent> AkSound; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.TslParticle.AkSound */
	uint8_t UnknownData458[0x18];


	inline bool bAutoDestroyOnParticleFinish()
	{
		return boolField410& 0x1;
	}
	inline bool SetbAutoDestroyOnParticleFinish(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoPlaySound()
	{
		return boolField411& 0x1;
	}
	inline bool SetbAutoPlaySound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x411, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultParameters(t_structHelper inst, TArray<struct FParticleParameter> value) { inst.WriteOffset(0x418, value); }
	inline bool SetAttachParentType(t_structHelper inst, TEnumAsByte<enum EAttachParent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetAttachSocketName(t_structHelper inst, FName value) { inst.WriteOffset(0x430, value); }
	inline bool SetAttachLocationRule(t_structHelper inst, TEnumAsByte<enum EAttachmentRule> value) { inst.WriteOffset(0x438, value); }
	inline bool SetAttachRotationRule(t_structHelper inst, TEnumAsByte<enum EAttachmentRule> value) { inst.WriteOffset(0x439, value); }
	inline bool SetAttachScaleRule(t_structHelper inst, TEnumAsByte<enum EAttachmentRule> value) { inst.WriteOffset(0x43A, value); }
	inline bool SetParticleSystem(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x448, value); }
	inline bool SetAkSound(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParticle = sizeof(UTslParticle); // 1136
    static_assert(sizeof(UTslParticle) == 0x470, "Size of UTslParticle is not correct.");
	auto constexpr UTslParticle_boolField410_Offset = offsetof(UTslParticle, boolField410);
	static_assert(UTslParticle_boolField410_Offset == 0x410, "UTslParticle::boolField410 offset is not 410");
	auto constexpr UTslParticle_boolField411_Offset = offsetof(UTslParticle, boolField411);
	static_assert(UTslParticle_boolField411_Offset == 0x411, "UTslParticle::boolField411 offset is not 411");
	auto constexpr UTslParticle_DefaultParameters_Offset = offsetof(UTslParticle, DefaultParameters);
	static_assert(UTslParticle_DefaultParameters_Offset == 0x418, "UTslParticle::DefaultParameters offset is not 418");
	auto constexpr UTslParticle_AttachParentType_Offset = offsetof(UTslParticle, AttachParentType);
	static_assert(UTslParticle_AttachParentType_Offset == 0x428, "UTslParticle::AttachParentType offset is not 428");
	auto constexpr UTslParticle_AttachSocketName_Offset = offsetof(UTslParticle, AttachSocketName);
	static_assert(UTslParticle_AttachSocketName_Offset == 0x430, "UTslParticle::AttachSocketName offset is not 430");
	auto constexpr UTslParticle_AttachLocationRule_Offset = offsetof(UTslParticle, AttachLocationRule);
	static_assert(UTslParticle_AttachLocationRule_Offset == 0x438, "UTslParticle::AttachLocationRule offset is not 438");
	auto constexpr UTslParticle_AttachRotationRule_Offset = offsetof(UTslParticle, AttachRotationRule);
	static_assert(UTslParticle_AttachRotationRule_Offset == 0x439, "UTslParticle::AttachRotationRule offset is not 439");
	auto constexpr UTslParticle_AttachScaleRule_Offset = offsetof(UTslParticle, AttachScaleRule);
	static_assert(UTslParticle_AttachScaleRule_Offset == 0x43a, "UTslParticle::AttachScaleRule offset is not 43a");
	auto constexpr UTslParticle_ParticleSystem_Offset = offsetof(UTslParticle, ParticleSystem);
	static_assert(UTslParticle_ParticleSystem_Offset == 0x448, "UTslParticle::ParticleSystem offset is not 448");
	auto constexpr UTslParticle_AkSound_Offset = offsetof(UTslParticle, AkSound);
	static_assert(UTslParticle_AkSound_Offset == 0x450, "UTslParticle::AkSound offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
