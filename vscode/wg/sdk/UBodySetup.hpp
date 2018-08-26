#pragma once
#include "FKAggregateGeom.hpp"
#include "EPhysicsType.hpp"
#include "EBodyCollisionResponse.hpp"
#include "ECollisionTraceFlag.hpp"
#include "FBodyInstance.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBodySetup // Size: 0x3C0
	: public UObject // Size: 0x30
{
private:
	typedef UBodySetup t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(676); // id32("Class Engine.BodySetup")
		return ptr;
	}
	FKAggregateGeom AggGeom; /* Ofs: 0x30 Size: 0x48 - StructProperty Engine.BodySetup.AggGeom */
	FName BoneName; /* Ofs: 0x78 Size: 0x8 - NameProperty Engine.BodySetup.BoneName */
	TEnumAsByte<enum EPhysicsType> PhysicsType; /* Ofs: 0x80 Size: 0x1 - ByteProperty Engine.BodySetup.PhysicsType */
	uint8_t UnknownData81[0x3];
	uint8_t boolField84;
	uint8_t UnknownData85[0x3];
	ExternalPtr<struct UPhysicalMaterial> PhysMaterial; /* Ofs: 0x88 Size: 0x8 - ObjectProperty Engine.BodySetup.PhysMaterial */
	TEnumAsByte<enum EBodyCollisionResponse> CollisionReponse; /* Ofs: 0x90 Size: 0x1 - ByteProperty Engine.BodySetup.CollisionReponse */
	TEnumAsByte<enum ECollisionTraceFlag> CollisionTraceFlag; /* Ofs: 0x91 Size: 0x1 - ByteProperty Engine.BodySetup.CollisionTraceFlag */
	uint8_t UnknownData92[0xE];
	FBodyInstance DefaultInstance; /* Ofs: 0xA0 Size: 0x240 - StructProperty Engine.BodySetup.DefaultInstance */
	FWalkableSlopeOverride WalkableSlopeOverride; /* Ofs: 0x2E0 Size: 0x10 - StructProperty Engine.BodySetup.WalkableSlopeOverride */
	float BuildScale; /* Ofs: 0x2F0 Size: 0x4 - FloatProperty Engine.BodySetup.BuildScale */
	FVector BuildScale3D; /* Ofs: 0x2F4 Size: 0xC - StructProperty Engine.BodySetup.BuildScale3D */
	uint8_t UnknownData300[0xC0];


	inline bool SetAggGeom(t_structHelper inst, FKAggregateGeom value) { inst.WriteOffset(0x30, value); }
	inline bool SetBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x78, value); }
	inline bool SetPhysicsType(t_structHelper inst, TEnumAsByte<enum EPhysicsType> value) { inst.WriteOffset(0x80, value); }
	inline bool bAlwaysFullAnimWeight()
	{
		return boolField84& 0x1;
	}
	inline bool SetbAlwaysFullAnimWeight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bConsiderForBounds()
	{
		return boolField84& 0x2;
	}
	inline bool SetbConsiderForBounds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bMeshCollideAll()
	{
		return boolField84& 0x4;
	}
	inline bool SetbMeshCollideAll(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDoubleSidedGeometry()
	{
		return boolField84& 0x8;
	}
	inline bool SetbDoubleSidedGeometry(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bGenerateNonMirroredCollision()
	{
		return boolField84& 0x10;
	}
	inline bool SetbGenerateNonMirroredCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSharedCookedData()
	{
		return boolField84& 0x20;
	}
	inline bool SetbSharedCookedData(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bGenerateMirroredCollision()
	{
		return boolField84& 0x40;
	}
	inline bool SetbGenerateMirroredCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetPhysMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0x88, value); }
	inline bool SetCollisionReponse(t_structHelper inst, TEnumAsByte<enum EBodyCollisionResponse> value) { inst.WriteOffset(0x90, value); }
	inline bool SetCollisionTraceFlag(t_structHelper inst, TEnumAsByte<enum ECollisionTraceFlag> value) { inst.WriteOffset(0x91, value); }
	inline bool SetDefaultInstance(t_structHelper inst, FBodyInstance value) { inst.WriteOffset(0xA0, value); }
	inline bool SetWalkableSlopeOverride(t_structHelper inst, FWalkableSlopeOverride value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetBuildScale(t_structHelper inst, float value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetBuildScale3D(t_structHelper inst, FVector value) { inst.WriteOffset(0x2F4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBodySetup = sizeof(UBodySetup); // 960
    static_assert(sizeof(UBodySetup) == 0x3C0, "Size of UBodySetup is not correct.");
	auto constexpr UBodySetup_AggGeom_Offset = offsetof(UBodySetup, AggGeom);
	static_assert(UBodySetup_AggGeom_Offset == 0x30, "UBodySetup::AggGeom offset is not 30");
	auto constexpr UBodySetup_BoneName_Offset = offsetof(UBodySetup, BoneName);
	static_assert(UBodySetup_BoneName_Offset == 0x78, "UBodySetup::BoneName offset is not 78");
	auto constexpr UBodySetup_PhysicsType_Offset = offsetof(UBodySetup, PhysicsType);
	static_assert(UBodySetup_PhysicsType_Offset == 0x80, "UBodySetup::PhysicsType offset is not 80");
	auto constexpr UBodySetup_boolField84_Offset = offsetof(UBodySetup, boolField84);
	static_assert(UBodySetup_boolField84_Offset == 0x84, "UBodySetup::boolField84 offset is not 84");
	auto constexpr UBodySetup_PhysMaterial_Offset = offsetof(UBodySetup, PhysMaterial);
	static_assert(UBodySetup_PhysMaterial_Offset == 0x88, "UBodySetup::PhysMaterial offset is not 88");
	auto constexpr UBodySetup_CollisionReponse_Offset = offsetof(UBodySetup, CollisionReponse);
	static_assert(UBodySetup_CollisionReponse_Offset == 0x90, "UBodySetup::CollisionReponse offset is not 90");
	auto constexpr UBodySetup_CollisionTraceFlag_Offset = offsetof(UBodySetup, CollisionTraceFlag);
	static_assert(UBodySetup_CollisionTraceFlag_Offset == 0x91, "UBodySetup::CollisionTraceFlag offset is not 91");
	auto constexpr UBodySetup_DefaultInstance_Offset = offsetof(UBodySetup, DefaultInstance);
	static_assert(UBodySetup_DefaultInstance_Offset == 0xa0, "UBodySetup::DefaultInstance offset is not a0");
	auto constexpr UBodySetup_WalkableSlopeOverride_Offset = offsetof(UBodySetup, WalkableSlopeOverride);
	static_assert(UBodySetup_WalkableSlopeOverride_Offset == 0x2e0, "UBodySetup::WalkableSlopeOverride offset is not 2e0");
	auto constexpr UBodySetup_BuildScale_Offset = offsetof(UBodySetup, BuildScale);
	static_assert(UBodySetup_BuildScale_Offset == 0x2f0, "UBodySetup::BuildScale offset is not 2f0");
	auto constexpr UBodySetup_BuildScale3D_Offset = offsetof(UBodySetup, BuildScale3D);
	static_assert(UBodySetup_BuildScale3D_Offset == 0x2f4, "UBodySetup::BuildScale3D offset is not 2f4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
