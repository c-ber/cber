#pragma once
#include "UParticleModuleTypeDataBase.hpp"
#include "EMeshScreenAlignment.hpp"
#include "FRawDistributionVector.hpp"
#include "EParticleAxisLock.hpp"
#include "EMeshCameraFacingUpAxis.hpp"
#include "EMeshCameraFacingOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleTypeDataMesh // Size: 0xC0
	: public UParticleModuleTypeDataBase // Size: 0x38
{
private:
	typedef UParticleModuleTypeDataMesh t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1155); // id32("Class Engine.ParticleModuleTypeDataMesh")
		return ptr;
	}
	ExternalPtr<struct UStaticMesh> Mesh; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleModuleTypeDataMesh.Mesh */
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	TEnumAsByte<enum EMeshScreenAlignment> MeshAlignment; /* Ofs: 0x44 Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataMesh.MeshAlignment */
	uint8_t UnknownData45[0x3];
	uint8_t boolField48;
	uint8_t UnknownData49[0x3];
	float Pitch; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataMesh.Pitch */
	float Roll; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataMesh.Roll */
	float Yaw; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataMesh.Yaw */
	FRawDistributionVector RollPitchYawRange; /* Ofs: 0x58 Size: 0x50 - StructProperty Engine.ParticleModuleTypeDataMesh.RollPitchYawRange */
	uint8_t UnknownDataA8[0x8];
	TEnumAsByte<enum EParticleAxisLock> AxisLockOption; /* Ofs: 0xB0 Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataMesh.AxisLockOption */
	uint8_t UnknownDataB1[0x3];
	uint8_t boolFieldB4;
	uint8_t UnknownDataB5[0x3];
	TEnumAsByte<enum EMeshCameraFacingUpAxis> CameraFacingUpAxisOption; /* Ofs: 0xB8 Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataMesh.CameraFacingUpAxisOption */
	TEnumAsByte<enum EMeshCameraFacingOptions> CameraFacingOption; /* Ofs: 0xB9 Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataMesh.CameraFacingOption */
	uint8_t UnknownDataBA[0x2];
	uint8_t boolFieldBC;
	uint8_t UnknownDataBD[0x3];


	inline bool SetMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0x38, value); }
	inline bool CastShadows()
	{
		return boolField40& 0x1;
	}
	inline bool SetCastShadows(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool DoCollisions()
	{
		return boolField40& 0x2;
	}
	inline bool SetDoCollisions(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMeshAlignment(t_structHelper inst, TEnumAsByte<enum EMeshScreenAlignment> value) { inst.WriteOffset(0x44, value); }
	inline bool bOverrideMaterial()
	{
		return boolField48& 0x1;
	}
	inline bool SetbOverrideMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverrideDefaultMotionBlurSettings()
	{
		return boolField48& 0x2;
	}
	inline bool SetbOverrideDefaultMotionBlurSettings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bEnableMotionBlur()
	{
		return boolField48& 0x4;
	}
	inline bool SetbEnableMotionBlur(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetPitch(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetRoll(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetYaw(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetRollPitchYawRange(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x58, value); }
	inline bool SetAxisLockOption(t_structHelper inst, TEnumAsByte<enum EParticleAxisLock> value) { inst.WriteOffset(0xB0, value); }
	inline bool bCameraFacing()
	{
		return boolFieldB4& 0x1;
	}
	inline bool SetbCameraFacing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCameraFacingUpAxisOption(t_structHelper inst, TEnumAsByte<enum EMeshCameraFacingUpAxis> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetCameraFacingOption(t_structHelper inst, TEnumAsByte<enum EMeshCameraFacingOptions> value) { inst.WriteOffset(0xB9, value); }
	inline bool bApplyParticleRotationAsSpin()
	{
		return boolFieldBC& 0x1;
	}
	inline bool SetbApplyParticleRotationAsSpin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bFaceCameraDirectionRatherThanPosition()
	{
		return boolFieldBC& 0x2;
	}
	inline bool SetbFaceCameraDirectionRatherThanPosition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bCollisionsConsiderPartilceSize()
	{
		return boolFieldBC& 0x4;
	}
	inline bool SetbCollisionsConsiderPartilceSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleTypeDataMesh = sizeof(UParticleModuleTypeDataMesh); // 192
    static_assert(sizeof(UParticleModuleTypeDataMesh) == 0xC0, "Size of UParticleModuleTypeDataMesh is not correct.");
	auto constexpr UParticleModuleTypeDataMesh_Mesh_Offset = offsetof(UParticleModuleTypeDataMesh, Mesh);
	static_assert(UParticleModuleTypeDataMesh_Mesh_Offset == 0x38, "UParticleModuleTypeDataMesh::Mesh offset is not 38");
	auto constexpr UParticleModuleTypeDataMesh_boolField40_Offset = offsetof(UParticleModuleTypeDataMesh, boolField40);
	static_assert(UParticleModuleTypeDataMesh_boolField40_Offset == 0x40, "UParticleModuleTypeDataMesh::boolField40 offset is not 40");
	auto constexpr UParticleModuleTypeDataMesh_MeshAlignment_Offset = offsetof(UParticleModuleTypeDataMesh, MeshAlignment);
	static_assert(UParticleModuleTypeDataMesh_MeshAlignment_Offset == 0x44, "UParticleModuleTypeDataMesh::MeshAlignment offset is not 44");
	auto constexpr UParticleModuleTypeDataMesh_boolField48_Offset = offsetof(UParticleModuleTypeDataMesh, boolField48);
	static_assert(UParticleModuleTypeDataMesh_boolField48_Offset == 0x48, "UParticleModuleTypeDataMesh::boolField48 offset is not 48");
	auto constexpr UParticleModuleTypeDataMesh_Pitch_Offset = offsetof(UParticleModuleTypeDataMesh, Pitch);
	static_assert(UParticleModuleTypeDataMesh_Pitch_Offset == 0x4c, "UParticleModuleTypeDataMesh::Pitch offset is not 4c");
	auto constexpr UParticleModuleTypeDataMesh_Roll_Offset = offsetof(UParticleModuleTypeDataMesh, Roll);
	static_assert(UParticleModuleTypeDataMesh_Roll_Offset == 0x50, "UParticleModuleTypeDataMesh::Roll offset is not 50");
	auto constexpr UParticleModuleTypeDataMesh_Yaw_Offset = offsetof(UParticleModuleTypeDataMesh, Yaw);
	static_assert(UParticleModuleTypeDataMesh_Yaw_Offset == 0x54, "UParticleModuleTypeDataMesh::Yaw offset is not 54");
	auto constexpr UParticleModuleTypeDataMesh_RollPitchYawRange_Offset = offsetof(UParticleModuleTypeDataMesh, RollPitchYawRange);
	static_assert(UParticleModuleTypeDataMesh_RollPitchYawRange_Offset == 0x58, "UParticleModuleTypeDataMesh::RollPitchYawRange offset is not 58");
	auto constexpr UParticleModuleTypeDataMesh_AxisLockOption_Offset = offsetof(UParticleModuleTypeDataMesh, AxisLockOption);
	static_assert(UParticleModuleTypeDataMesh_AxisLockOption_Offset == 0xb0, "UParticleModuleTypeDataMesh::AxisLockOption offset is not b0");
	auto constexpr UParticleModuleTypeDataMesh_boolFieldB4_Offset = offsetof(UParticleModuleTypeDataMesh, boolFieldB4);
	static_assert(UParticleModuleTypeDataMesh_boolFieldB4_Offset == 0xb4, "UParticleModuleTypeDataMesh::boolFieldB4 offset is not b4");
	auto constexpr UParticleModuleTypeDataMesh_CameraFacingUpAxisOption_Offset = offsetof(UParticleModuleTypeDataMesh, CameraFacingUpAxisOption);
	static_assert(UParticleModuleTypeDataMesh_CameraFacingUpAxisOption_Offset == 0xb8, "UParticleModuleTypeDataMesh::CameraFacingUpAxisOption offset is not b8");
	auto constexpr UParticleModuleTypeDataMesh_CameraFacingOption_Offset = offsetof(UParticleModuleTypeDataMesh, CameraFacingOption);
	static_assert(UParticleModuleTypeDataMesh_CameraFacingOption_Offset == 0xb9, "UParticleModuleTypeDataMesh::CameraFacingOption offset is not b9");
	auto constexpr UParticleModuleTypeDataMesh_boolFieldBC_Offset = offsetof(UParticleModuleTypeDataMesh, boolFieldBC);
	static_assert(UParticleModuleTypeDataMesh_boolFieldBC_Offset == 0xbc, "UParticleModuleTypeDataMesh::boolFieldBC offset is not bc");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
