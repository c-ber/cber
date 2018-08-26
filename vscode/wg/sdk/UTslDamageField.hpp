#pragma once
#include "UActor.hpp"
#include "EDamageFieldType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDamageField // Size: 0x460
	: public UActor // Size: 0x410
{
private:
	typedef UTslDamageField t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1358); // id32("Class TslGame.TslDamageField")
		return ptr;
	}
//	float DamageRadius; /* Ofs: 0x40C Size: 0x4 - FloatProperty TslGame.TslDamageField.DamageRadius */
	ExternalPtr<struct UParticleSystem> DamageFieldFX; /* Ofs: 0x410 Size: 0x8 - ObjectProperty TslGame.TslDamageField.DamageFieldFX */
	TEnumAsByte<enum EDamageFieldType> DamageFieldType; /* Ofs: 0x418 Size: 0x1 - EnumProperty TslGame.TslDamageField.DamageFieldType */
	uint8_t UnknownData419[0x3];
	int32_t Damage; /* Ofs: 0x41C Size: 0x4 - IntProperty TslGame.TslDamageField.Damage */
	float DamageInterval; /* Ofs: 0x420 Size: 0x4 - FloatProperty TslGame.TslDamageField.DamageInterval */
	uint8_t UnknownData424[0x4];
	ExternalPtr<struct UClass> DamageType; /* Ofs: 0x428 Size: 0x8 - ClassProperty TslGame.TslDamageField.DamageType */
	uint8_t UnknownData430[0x10];
	ExternalPtr<struct UClass> DebuffTemplate; /* Ofs: 0x440 Size: 0x8 - ClassProperty TslGame.TslDamageField.DebuffTemplate */
	ExternalPtr<struct USphereComponent> SphereCollision; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.TslDamageField.SphereCollision */
	uint8_t UnknownData450[0x10];


//	inline bool SetDamageRadius(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetDamageFieldFX(t_structHelper inst, ExternalPtr<struct UParticleSystem> value) { inst.WriteOffset(0x410, value); }
	inline bool SetDamageFieldType(t_structHelper inst, TEnumAsByte<enum EDamageFieldType> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDamage(t_structHelper inst, int32_t value) { inst.WriteOffset(0x41C, value); }
	inline bool SetDamageInterval(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetDamageType(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x428, value); }
	inline bool SetDebuffTemplate(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x440, value); }
	inline bool SetSphereCollision(t_structHelper inst, ExternalPtr<struct USphereComponent> value) { inst.WriteOffset(0x448, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDamageField = sizeof(UTslDamageField); // 1120
    static_assert(sizeof(UTslDamageField) == 0x460, "Size of UTslDamageField is not correct.");
//	auto constexpr UTslDamageField_DamageRadius_Offset = offsetof(UTslDamageField, DamageRadius);
//	static_assert(UTslDamageField_DamageRadius_Offset == 0x40c, "UTslDamageField::DamageRadius offset is not 40c");
	auto constexpr UTslDamageField_DamageFieldFX_Offset = offsetof(UTslDamageField, DamageFieldFX);
	static_assert(UTslDamageField_DamageFieldFX_Offset == 0x410, "UTslDamageField::DamageFieldFX offset is not 410");
	auto constexpr UTslDamageField_DamageFieldType_Offset = offsetof(UTslDamageField, DamageFieldType);
	static_assert(UTslDamageField_DamageFieldType_Offset == 0x418, "UTslDamageField::DamageFieldType offset is not 418");
	auto constexpr UTslDamageField_Damage_Offset = offsetof(UTslDamageField, Damage);
	static_assert(UTslDamageField_Damage_Offset == 0x41c, "UTslDamageField::Damage offset is not 41c");
	auto constexpr UTslDamageField_DamageInterval_Offset = offsetof(UTslDamageField, DamageInterval);
	static_assert(UTslDamageField_DamageInterval_Offset == 0x420, "UTslDamageField::DamageInterval offset is not 420");
	auto constexpr UTslDamageField_DamageType_Offset = offsetof(UTslDamageField, DamageType);
	static_assert(UTslDamageField_DamageType_Offset == 0x428, "UTslDamageField::DamageType offset is not 428");
	auto constexpr UTslDamageField_DebuffTemplate_Offset = offsetof(UTslDamageField, DebuffTemplate);
	static_assert(UTslDamageField_DebuffTemplate_Offset == 0x440, "UTslDamageField::DebuffTemplate offset is not 440");
	auto constexpr UTslDamageField_SphereCollision_Offset = offsetof(UTslDamageField, SphereCollision);
	static_assert(UTslDamageField_SphereCollision_Offset == 0x448, "UTslDamageField::SphereCollision offset is not 448");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
