#pragma once
#include "EFrictionCombineMode.hpp"
#include "EPhysicalSurface.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicalMaterial // Size: 0x88
	: public UObject // Size: 0x30
{
private:
	typedef UPhysicalMaterial t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1173); // id32("Class Engine.PhysicalMaterial")
		return ptr;
	}
	float Friction; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.PhysicalMaterial.Friction */
	TEnumAsByte<enum EFrictionCombineMode> FrictionCombineMode; /* Ofs: 0x34 Size: 0x1 - ByteProperty Engine.PhysicalMaterial.FrictionCombineMode */
	uint8_t boolField35;
	uint8_t UnknownData36[0x2];
	float Restitution; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.PhysicalMaterial.Restitution */
	TEnumAsByte<enum EFrictionCombineMode> RestitutionCombineMode; /* Ofs: 0x3C Size: 0x1 - ByteProperty Engine.PhysicalMaterial.RestitutionCombineMode */
	uint8_t boolField3D;
	uint8_t UnknownData3E[0x2];
	float Density; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.PhysicalMaterial.Density */
	float RaiseMassToPower; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.PhysicalMaterial.RaiseMassToPower */
	float DestructibleDamageThresholdScale; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.PhysicalMaterial.DestructibleDamageThresholdScale */
	uint8_t UnknownData4C[0x4];
	ExternalPtr<struct UPhysicalMaterialPropertyBase> PhysicalMaterialProperty; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.PhysicalMaterial.PhysicalMaterialProperty */
	TEnumAsByte<enum EPhysicalSurface> SurfaceType; /* Ofs: 0x58 Size: 0x1 - ByteProperty Engine.PhysicalMaterial.SurfaceType */
	uint8_t UnknownData59[0x3];
	float TireFrictionScale; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.PhysicalMaterial.TireFrictionScale */
	TArray<struct FTireFrictionScalePair> TireFrictionScales; /* Ofs: 0x60 Size: 0x10 - ArrayProperty Engine.PhysicalMaterial.TireFrictionScales */
	uint8_t UnknownData70[0x18];


	inline bool SetFriction(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetFrictionCombineMode(t_structHelper inst, TEnumAsByte<enum EFrictionCombineMode> value) { inst.WriteOffset(0x34, value); }
	inline bool bOverrideFrictionCombineMode()
	{
		return boolField35& 0x1;
	}
	inline bool SetbOverrideFrictionCombineMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x35, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRestitution(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetRestitutionCombineMode(t_structHelper inst, TEnumAsByte<enum EFrictionCombineMode> value) { inst.WriteOffset(0x3C, value); }
	inline bool bOverrideRestitutionCombineMode()
	{
		return boolField3D& 0x1;
	}
	inline bool SetbOverrideRestitutionCombineMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDensity(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetRaiseMassToPower(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetDestructibleDamageThresholdScale(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetPhysicalMaterialProperty(t_structHelper inst, ExternalPtr<struct UPhysicalMaterialPropertyBase> value) { inst.WriteOffset(0x50, value); }
	inline bool SetSurfaceType(t_structHelper inst, TEnumAsByte<enum EPhysicalSurface> value) { inst.WriteOffset(0x58, value); }
	inline bool SetTireFrictionScale(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetTireFrictionScales(t_structHelper inst, TArray<struct FTireFrictionScalePair> value) { inst.WriteOffset(0x60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicalMaterial = sizeof(UPhysicalMaterial); // 136
    static_assert(sizeof(UPhysicalMaterial) == 0x88, "Size of UPhysicalMaterial is not correct.");
	auto constexpr UPhysicalMaterial_Friction_Offset = offsetof(UPhysicalMaterial, Friction);
	static_assert(UPhysicalMaterial_Friction_Offset == 0x30, "UPhysicalMaterial::Friction offset is not 30");
	auto constexpr UPhysicalMaterial_FrictionCombineMode_Offset = offsetof(UPhysicalMaterial, FrictionCombineMode);
	static_assert(UPhysicalMaterial_FrictionCombineMode_Offset == 0x34, "UPhysicalMaterial::FrictionCombineMode offset is not 34");
	auto constexpr UPhysicalMaterial_boolField35_Offset = offsetof(UPhysicalMaterial, boolField35);
	static_assert(UPhysicalMaterial_boolField35_Offset == 0x35, "UPhysicalMaterial::boolField35 offset is not 35");
	auto constexpr UPhysicalMaterial_Restitution_Offset = offsetof(UPhysicalMaterial, Restitution);
	static_assert(UPhysicalMaterial_Restitution_Offset == 0x38, "UPhysicalMaterial::Restitution offset is not 38");
	auto constexpr UPhysicalMaterial_RestitutionCombineMode_Offset = offsetof(UPhysicalMaterial, RestitutionCombineMode);
	static_assert(UPhysicalMaterial_RestitutionCombineMode_Offset == 0x3c, "UPhysicalMaterial::RestitutionCombineMode offset is not 3c");
	auto constexpr UPhysicalMaterial_boolField3D_Offset = offsetof(UPhysicalMaterial, boolField3D);
	static_assert(UPhysicalMaterial_boolField3D_Offset == 0x3d, "UPhysicalMaterial::boolField3D offset is not 3d");
	auto constexpr UPhysicalMaterial_Density_Offset = offsetof(UPhysicalMaterial, Density);
	static_assert(UPhysicalMaterial_Density_Offset == 0x40, "UPhysicalMaterial::Density offset is not 40");
	auto constexpr UPhysicalMaterial_RaiseMassToPower_Offset = offsetof(UPhysicalMaterial, RaiseMassToPower);
	static_assert(UPhysicalMaterial_RaiseMassToPower_Offset == 0x44, "UPhysicalMaterial::RaiseMassToPower offset is not 44");
	auto constexpr UPhysicalMaterial_DestructibleDamageThresholdScale_Offset = offsetof(UPhysicalMaterial, DestructibleDamageThresholdScale);
	static_assert(UPhysicalMaterial_DestructibleDamageThresholdScale_Offset == 0x48, "UPhysicalMaterial::DestructibleDamageThresholdScale offset is not 48");
	auto constexpr UPhysicalMaterial_PhysicalMaterialProperty_Offset = offsetof(UPhysicalMaterial, PhysicalMaterialProperty);
	static_assert(UPhysicalMaterial_PhysicalMaterialProperty_Offset == 0x50, "UPhysicalMaterial::PhysicalMaterialProperty offset is not 50");
	auto constexpr UPhysicalMaterial_SurfaceType_Offset = offsetof(UPhysicalMaterial, SurfaceType);
	static_assert(UPhysicalMaterial_SurfaceType_Offset == 0x58, "UPhysicalMaterial::SurfaceType offset is not 58");
	auto constexpr UPhysicalMaterial_TireFrictionScale_Offset = offsetof(UPhysicalMaterial, TireFrictionScale);
	static_assert(UPhysicalMaterial_TireFrictionScale_Offset == 0x5c, "UPhysicalMaterial::TireFrictionScale offset is not 5c");
	auto constexpr UPhysicalMaterial_TireFrictionScales_Offset = offsetof(UPhysicalMaterial, TireFrictionScales);
	static_assert(UPhysicalMaterial_TireFrictionScales_Offset == 0x60, "UPhysicalMaterial::TireFrictionScales offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
