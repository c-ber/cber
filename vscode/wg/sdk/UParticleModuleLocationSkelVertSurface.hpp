#pragma once
#include "UParticleModuleLocationBase.hpp"
#include "ELocationSkelVertSurfaceSource.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleLocationSkelVertSurface // Size: 0x98
	: public UParticleModuleLocationBase // Size: 0x38
{
private:
	typedef UParticleModuleLocationSkelVertSurface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1109); // id32("Class Engine.ParticleModuleLocationSkelVertSurface")
		return ptr;
	}
	TEnumAsByte<enum ELocationSkelVertSurfaceSource> SourceType; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleLocationSkelVertSurface.SourceType */
	uint8_t UnknownData39[0x3];
	FVector UniversalOffset; /* Ofs: 0x3C Size: 0xC - StructProperty Engine.ParticleModuleLocationSkelVertSurface.UniversalOffset */
	uint8_t boolField48;
	uint8_t UnknownData49[0x3];
	float InheritVelocityScale; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.ParticleModuleLocationSkelVertSurface.InheritVelocityScale */
	FName SkelMeshActorParamName; /* Ofs: 0x50 Size: 0x8 - NameProperty Engine.ParticleModuleLocationSkelVertSurface.SkelMeshActorParamName */
	TArray<struct FName> ValidAssociatedBones; /* Ofs: 0x58 Size: 0x10 - ArrayProperty Engine.ParticleModuleLocationSkelVertSurface.ValidAssociatedBones */
	uint8_t boolField68;
	uint8_t UnknownData69[0x3];
	FVector NormalToCompare; /* Ofs: 0x6C Size: 0xC - StructProperty Engine.ParticleModuleLocationSkelVertSurface.NormalToCompare */
	float NormalCheckToleranceDegrees; /* Ofs: 0x78 Size: 0x4 - FloatProperty Engine.ParticleModuleLocationSkelVertSurface.NormalCheckToleranceDegrees */
	float NormalCheckTolerance; /* Ofs: 0x7C Size: 0x4 - FloatProperty Engine.ParticleModuleLocationSkelVertSurface.NormalCheckTolerance */
	TArray<int32_t> ValidMaterialIndices; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.ParticleModuleLocationSkelVertSurface.ValidMaterialIndices */
	uint8_t boolField90;
	uint8_t UnknownData91[0x3];
	uint32_t InheritUVChannel; /* Ofs: 0x94 Size: 0x4 - UInt32Property Engine.ParticleModuleLocationSkelVertSurface.InheritUVChannel */


	inline bool SetSourceType(t_structHelper inst, TEnumAsByte<enum ELocationSkelVertSurfaceSource> value) { inst.WriteOffset(0x38, value); }
	inline bool SetUniversalOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x3C, value); }
	inline bool bUpdatePositionEachFrame()
	{
		return boolField48& 0x1;
	}
	inline bool SetbUpdatePositionEachFrame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOrientMeshEmitters()
	{
		return boolField48& 0x2;
	}
	inline bool SetbOrientMeshEmitters(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bInheritBoneVelocity()
	{
		return boolField48& 0x4;
	}
	inline bool SetbInheritBoneVelocity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetInheritVelocityScale(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetSkelMeshActorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x50, value); }
	inline bool SetValidAssociatedBones(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x58, value); }
	inline bool bEnforceNormalCheck()
	{
		return boolField68& 0x1;
	}
	inline bool SetbEnforceNormalCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNormalToCompare(t_structHelper inst, FVector value) { inst.WriteOffset(0x6C, value); }
	inline bool SetNormalCheckToleranceDegrees(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool SetNormalCheckTolerance(t_structHelper inst, float value) { inst.WriteOffset(0x7C, value); }
	inline bool SetValidMaterialIndices(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x80, value); }
	inline bool bInheritVertexColor()
	{
		return boolField90& 0x1;
	}
	inline bool SetbInheritVertexColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bInheritUV()
	{
		return boolField90& 0x2;
	}
	inline bool SetbInheritUV(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x90, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetInheritUVChannel(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x94, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleLocationSkelVertSurface = sizeof(UParticleModuleLocationSkelVertSurface); // 152
    static_assert(sizeof(UParticleModuleLocationSkelVertSurface) == 0x98, "Size of UParticleModuleLocationSkelVertSurface is not correct.");
	auto constexpr UParticleModuleLocationSkelVertSurface_SourceType_Offset = offsetof(UParticleModuleLocationSkelVertSurface, SourceType);
	static_assert(UParticleModuleLocationSkelVertSurface_SourceType_Offset == 0x38, "UParticleModuleLocationSkelVertSurface::SourceType offset is not 38");
	auto constexpr UParticleModuleLocationSkelVertSurface_UniversalOffset_Offset = offsetof(UParticleModuleLocationSkelVertSurface, UniversalOffset);
	static_assert(UParticleModuleLocationSkelVertSurface_UniversalOffset_Offset == 0x3c, "UParticleModuleLocationSkelVertSurface::UniversalOffset offset is not 3c");
	auto constexpr UParticleModuleLocationSkelVertSurface_boolField48_Offset = offsetof(UParticleModuleLocationSkelVertSurface, boolField48);
	static_assert(UParticleModuleLocationSkelVertSurface_boolField48_Offset == 0x48, "UParticleModuleLocationSkelVertSurface::boolField48 offset is not 48");
	auto constexpr UParticleModuleLocationSkelVertSurface_InheritVelocityScale_Offset = offsetof(UParticleModuleLocationSkelVertSurface, InheritVelocityScale);
	static_assert(UParticleModuleLocationSkelVertSurface_InheritVelocityScale_Offset == 0x4c, "UParticleModuleLocationSkelVertSurface::InheritVelocityScale offset is not 4c");
	auto constexpr UParticleModuleLocationSkelVertSurface_SkelMeshActorParamName_Offset = offsetof(UParticleModuleLocationSkelVertSurface, SkelMeshActorParamName);
	static_assert(UParticleModuleLocationSkelVertSurface_SkelMeshActorParamName_Offset == 0x50, "UParticleModuleLocationSkelVertSurface::SkelMeshActorParamName offset is not 50");
	auto constexpr UParticleModuleLocationSkelVertSurface_ValidAssociatedBones_Offset = offsetof(UParticleModuleLocationSkelVertSurface, ValidAssociatedBones);
	static_assert(UParticleModuleLocationSkelVertSurface_ValidAssociatedBones_Offset == 0x58, "UParticleModuleLocationSkelVertSurface::ValidAssociatedBones offset is not 58");
	auto constexpr UParticleModuleLocationSkelVertSurface_boolField68_Offset = offsetof(UParticleModuleLocationSkelVertSurface, boolField68);
	static_assert(UParticleModuleLocationSkelVertSurface_boolField68_Offset == 0x68, "UParticleModuleLocationSkelVertSurface::boolField68 offset is not 68");
	auto constexpr UParticleModuleLocationSkelVertSurface_NormalToCompare_Offset = offsetof(UParticleModuleLocationSkelVertSurface, NormalToCompare);
	static_assert(UParticleModuleLocationSkelVertSurface_NormalToCompare_Offset == 0x6c, "UParticleModuleLocationSkelVertSurface::NormalToCompare offset is not 6c");
	auto constexpr UParticleModuleLocationSkelVertSurface_NormalCheckToleranceDegrees_Offset = offsetof(UParticleModuleLocationSkelVertSurface, NormalCheckToleranceDegrees);
	static_assert(UParticleModuleLocationSkelVertSurface_NormalCheckToleranceDegrees_Offset == 0x78, "UParticleModuleLocationSkelVertSurface::NormalCheckToleranceDegrees offset is not 78");
	auto constexpr UParticleModuleLocationSkelVertSurface_NormalCheckTolerance_Offset = offsetof(UParticleModuleLocationSkelVertSurface, NormalCheckTolerance);
	static_assert(UParticleModuleLocationSkelVertSurface_NormalCheckTolerance_Offset == 0x7c, "UParticleModuleLocationSkelVertSurface::NormalCheckTolerance offset is not 7c");
	auto constexpr UParticleModuleLocationSkelVertSurface_ValidMaterialIndices_Offset = offsetof(UParticleModuleLocationSkelVertSurface, ValidMaterialIndices);
	static_assert(UParticleModuleLocationSkelVertSurface_ValidMaterialIndices_Offset == 0x80, "UParticleModuleLocationSkelVertSurface::ValidMaterialIndices offset is not 80");
	auto constexpr UParticleModuleLocationSkelVertSurface_boolField90_Offset = offsetof(UParticleModuleLocationSkelVertSurface, boolField90);
	static_assert(UParticleModuleLocationSkelVertSurface_boolField90_Offset == 0x90, "UParticleModuleLocationSkelVertSurface::boolField90 offset is not 90");
	auto constexpr UParticleModuleLocationSkelVertSurface_InheritUVChannel_Offset = offsetof(UParticleModuleLocationSkelVertSurface, InheritUVChannel);
	static_assert(UParticleModuleLocationSkelVertSurface_InheritUVChannel_Offset == 0x94, "UParticleModuleLocationSkelVertSurface::InheritUVChannel offset is not 94");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
