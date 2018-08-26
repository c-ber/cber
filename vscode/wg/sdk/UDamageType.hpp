#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDamageType // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UDamageType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1317); // id32("Class Engine.DamageType")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x3];
	float DamageImpulse; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.DamageType.DamageImpulse */
	float DestructibleImpulse; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.DamageType.DestructibleImpulse */
	float DestructibleDamageSpreadScale; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.DamageType.DestructibleDamageSpreadScale */
	float DamageFalloff; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.DamageType.DamageFalloff */
	uint8_t UnknownData44[0x4];


	inline bool bCausedByWorld()
	{
		return boolField30& 0x1;
	}
	inline bool SetbCausedByWorld(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bScaleMomentumByMass()
	{
		return boolField30& 0x2;
	}
	inline bool SetbScaleMomentumByMass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bRadialDamageVelChange()
	{
		return boolField30& 0x4;
	}
	inline bool SetbRadialDamageVelChange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetDamageImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetDestructibleImpulse(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetDestructibleDamageSpreadScale(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetDamageFalloff(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDamageType = sizeof(UDamageType); // 72
    static_assert(sizeof(UDamageType) == 0x48, "Size of UDamageType is not correct.");
	auto constexpr UDamageType_boolField30_Offset = offsetof(UDamageType, boolField30);
	static_assert(UDamageType_boolField30_Offset == 0x30, "UDamageType::boolField30 offset is not 30");
	auto constexpr UDamageType_DamageImpulse_Offset = offsetof(UDamageType, DamageImpulse);
	static_assert(UDamageType_DamageImpulse_Offset == 0x34, "UDamageType::DamageImpulse offset is not 34");
	auto constexpr UDamageType_DestructibleImpulse_Offset = offsetof(UDamageType, DestructibleImpulse);
	static_assert(UDamageType_DestructibleImpulse_Offset == 0x38, "UDamageType::DestructibleImpulse offset is not 38");
	auto constexpr UDamageType_DestructibleDamageSpreadScale_Offset = offsetof(UDamageType, DestructibleDamageSpreadScale);
	static_assert(UDamageType_DestructibleDamageSpreadScale_Offset == 0x3c, "UDamageType::DestructibleDamageSpreadScale offset is not 3c");
	auto constexpr UDamageType_DamageFalloff_Offset = offsetof(UDamageType, DamageFalloff);
	static_assert(UDamageType_DamageFalloff_Offset == 0x40, "UDamageType::DamageFalloff offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
