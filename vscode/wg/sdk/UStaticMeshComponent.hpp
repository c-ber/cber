#pragma once
#include "UMeshComponent.hpp"
#include "FColor.hpp"
#include "FLightmassPrimitiveSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStaticMeshComponent // Size: 0xA80
	: public UMeshComponent // Size: 0x9F0
{
private:
	typedef UStaticMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(210); // id32("Class Engine.StaticMeshComponent")
		return ptr;
	}
	int32_t ForcedLodModel; /* Ofs: 0x9F0 Size: 0x4 - IntProperty Engine.StaticMeshComponent.ForcedLodModel */
	int32_t PreviousLODLevel; /* Ofs: 0x9F4 Size: 0x4 - IntProperty Engine.StaticMeshComponent.PreviousLODLevel */
	uint8_t boolField9F8;
	uint8_t UnknownData9F9[0x3];
	int32_t MinLOD; /* Ofs: 0x9FC Size: 0x4 - IntProperty Engine.StaticMeshComponent.MinLOD */
	ExternalPtr<struct UStaticMesh> StaticMesh; /* Ofs: 0xA00 Size: 0x8 - ObjectProperty Engine.StaticMeshComponent.StaticMesh */
	uint8_t boolFieldA08;
	uint8_t UnknownDataA09[0x3];
	FColor WireframeColorOverride; /* Ofs: 0xA0C Size: 0x4 - StructProperty Engine.StaticMeshComponent.WireframeColorOverride */
	uint8_t boolFieldA10;
	uint8_t UnknownDataA11[0x3];
	int32_t OverriddenLightMapRes; /* Ofs: 0xA14 Size: 0x4 - IntProperty Engine.StaticMeshComponent.OverriddenLightMapRes */
	uint8_t boolFieldA18;
	uint8_t UnknownDataA19[0x3];
	float DistanceFieldIndirectShadowMinVisibility; /* Ofs: 0xA1C Size: 0x4 - FloatProperty Engine.StaticMeshComponent.DistanceFieldIndirectShadowMinVisibility */
	float StreamingDistanceMultiplier; /* Ofs: 0xA20 Size: 0x4 - FloatProperty Engine.StaticMeshComponent.StreamingDistanceMultiplier */
	int32_t SubDivisionStepSize; /* Ofs: 0xA24 Size: 0x4 - IntProperty Engine.StaticMeshComponent.SubDivisionStepSize */
	uint8_t boolFieldA28;
	uint8_t UnknownDataA29[0x7];
	TArray<struct FGuid> IrrelevantLights; /* Ofs: 0xA30 Size: 0x10 - ArrayProperty Engine.StaticMeshComponent.IrrelevantLights */
	TArray<struct FStaticMeshComponentLODInfo> LODData; /* Ofs: 0xA40 Size: 0x10 - ArrayProperty Engine.StaticMeshComponent.LODData */
	TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; /* Ofs: 0xA50 Size: 0x10 - ArrayProperty Engine.StaticMeshComponent.StreamingTextureData */
	uint8_t boolFieldA60;
	uint8_t UnknownDataA61[0x3];
	FLightmassPrimitiveSettings LightmassSettings; /* Ofs: 0xA64 Size: 0x18 - StructProperty Engine.StaticMeshComponent.LightmassSettings */
	uint8_t UnknownDataA7C[0x4];


	inline bool SetForcedLodModel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F0, value); }
	inline bool SetPreviousLODLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9F4, value); }
	inline bool bOverrideMinLOD()
	{
		return boolField9F8& 0x1;
	}
	inline bool SetbOverrideMinLOD(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x9F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinLOD(t_structHelper inst, int32_t value) { inst.WriteOffset(0x9FC, value); }
	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMesh> value) { inst.WriteOffset(0xA00, value); }
	inline bool bOverrideWireframeColor()
	{
		return boolFieldA08& 0x1;
	}
	inline bool SetbOverrideWireframeColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA08, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetWireframeColorOverride(t_structHelper inst, FColor value) { inst.WriteOffset(0xA0C, value); }
	inline bool bOverrideNavigationExport()
	{
		return boolFieldA10& 0x1;
	}
	inline bool SetbOverrideNavigationExport(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA10, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bForceNavigationObstacle()
	{
		return boolFieldA10& 0x2;
	}
	inline bool SetbForceNavigationObstacle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA10, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDisallowMeshPaintPerInstance()
	{
		return boolFieldA10& 0x4;
	}
	inline bool SetbDisallowMeshPaintPerInstance(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA10, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bIgnoreInstanceForTextureStreaming()
	{
		return boolFieldA10& 0x8;
	}
	inline bool SetbIgnoreInstanceForTextureStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA10, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bOverrideLightMapRes()
	{
		return boolFieldA10& 0x10;
	}
	inline bool SetbOverrideLightMapRes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA10, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetOverriddenLightMapRes(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA14, value); }
	inline bool bCastDistanceFieldIndirectShadow()
	{
		return boolFieldA18& 0x1;
	}
	inline bool SetbCastDistanceFieldIndirectShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA18, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDistanceFieldIndirectShadowMinVisibility(t_structHelper inst, float value) { inst.WriteOffset(0xA1C, value); }
	inline bool SetStreamingDistanceMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xA20, value); }
	inline bool SetSubDivisionStepSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0xA24, value); }
	inline bool bUseSubDivisions()
	{
		return boolFieldA28& 0x1;
	}
	inline bool SetbUseSubDivisions(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA28, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetIrrelevantLights(t_structHelper inst, TArray<struct FGuid> value) { inst.WriteOffset(0xA30, value); }
	inline bool SetLODData(t_structHelper inst, TArray<struct FStaticMeshComponentLODInfo> value) { inst.WriteOffset(0xA40, value); }
	inline bool SetStreamingTextureData(t_structHelper inst, TArray<struct FStreamingTextureBuildInfo> value) { inst.WriteOffset(0xA50, value); }
	inline bool bUseDefaultCollision()
	{
		return boolFieldA60& 0x1;
	}
	inline bool SetbUseDefaultCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLightmassSettings(t_structHelper inst, FLightmassPrimitiveSettings value) { inst.WriteOffset(0xA64, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStaticMeshComponent = sizeof(UStaticMeshComponent); // 2688
    static_assert(sizeof(UStaticMeshComponent) == 0xA80, "Size of UStaticMeshComponent is not correct.");
	auto constexpr UStaticMeshComponent_ForcedLodModel_Offset = offsetof(UStaticMeshComponent, ForcedLodModel);
	static_assert(UStaticMeshComponent_ForcedLodModel_Offset == 0x9f0, "UStaticMeshComponent::ForcedLodModel offset is not 9f0");
	auto constexpr UStaticMeshComponent_PreviousLODLevel_Offset = offsetof(UStaticMeshComponent, PreviousLODLevel);
	static_assert(UStaticMeshComponent_PreviousLODLevel_Offset == 0x9f4, "UStaticMeshComponent::PreviousLODLevel offset is not 9f4");
	auto constexpr UStaticMeshComponent_boolField9F8_Offset = offsetof(UStaticMeshComponent, boolField9F8);
	static_assert(UStaticMeshComponent_boolField9F8_Offset == 0x9f8, "UStaticMeshComponent::boolField9F8 offset is not 9f8");
	auto constexpr UStaticMeshComponent_MinLOD_Offset = offsetof(UStaticMeshComponent, MinLOD);
	static_assert(UStaticMeshComponent_MinLOD_Offset == 0x9fc, "UStaticMeshComponent::MinLOD offset is not 9fc");
	auto constexpr UStaticMeshComponent_StaticMesh_Offset = offsetof(UStaticMeshComponent, StaticMesh);
	static_assert(UStaticMeshComponent_StaticMesh_Offset == 0xa00, "UStaticMeshComponent::StaticMesh offset is not a00");
	auto constexpr UStaticMeshComponent_boolFieldA08_Offset = offsetof(UStaticMeshComponent, boolFieldA08);
	static_assert(UStaticMeshComponent_boolFieldA08_Offset == 0xa08, "UStaticMeshComponent::boolFieldA08 offset is not a08");
	auto constexpr UStaticMeshComponent_WireframeColorOverride_Offset = offsetof(UStaticMeshComponent, WireframeColorOverride);
	static_assert(UStaticMeshComponent_WireframeColorOverride_Offset == 0xa0c, "UStaticMeshComponent::WireframeColorOverride offset is not a0c");
	auto constexpr UStaticMeshComponent_boolFieldA10_Offset = offsetof(UStaticMeshComponent, boolFieldA10);
	static_assert(UStaticMeshComponent_boolFieldA10_Offset == 0xa10, "UStaticMeshComponent::boolFieldA10 offset is not a10");
	auto constexpr UStaticMeshComponent_OverriddenLightMapRes_Offset = offsetof(UStaticMeshComponent, OverriddenLightMapRes);
	static_assert(UStaticMeshComponent_OverriddenLightMapRes_Offset == 0xa14, "UStaticMeshComponent::OverriddenLightMapRes offset is not a14");
	auto constexpr UStaticMeshComponent_boolFieldA18_Offset = offsetof(UStaticMeshComponent, boolFieldA18);
	static_assert(UStaticMeshComponent_boolFieldA18_Offset == 0xa18, "UStaticMeshComponent::boolFieldA18 offset is not a18");
	auto constexpr UStaticMeshComponent_DistanceFieldIndirectShadowMinVisibility_Offset = offsetof(UStaticMeshComponent, DistanceFieldIndirectShadowMinVisibility);
	static_assert(UStaticMeshComponent_DistanceFieldIndirectShadowMinVisibility_Offset == 0xa1c, "UStaticMeshComponent::DistanceFieldIndirectShadowMinVisibility offset is not a1c");
	auto constexpr UStaticMeshComponent_StreamingDistanceMultiplier_Offset = offsetof(UStaticMeshComponent, StreamingDistanceMultiplier);
	static_assert(UStaticMeshComponent_StreamingDistanceMultiplier_Offset == 0xa20, "UStaticMeshComponent::StreamingDistanceMultiplier offset is not a20");
	auto constexpr UStaticMeshComponent_SubDivisionStepSize_Offset = offsetof(UStaticMeshComponent, SubDivisionStepSize);
	static_assert(UStaticMeshComponent_SubDivisionStepSize_Offset == 0xa24, "UStaticMeshComponent::SubDivisionStepSize offset is not a24");
	auto constexpr UStaticMeshComponent_boolFieldA28_Offset = offsetof(UStaticMeshComponent, boolFieldA28);
	static_assert(UStaticMeshComponent_boolFieldA28_Offset == 0xa28, "UStaticMeshComponent::boolFieldA28 offset is not a28");
	auto constexpr UStaticMeshComponent_IrrelevantLights_Offset = offsetof(UStaticMeshComponent, IrrelevantLights);
	static_assert(UStaticMeshComponent_IrrelevantLights_Offset == 0xa30, "UStaticMeshComponent::IrrelevantLights offset is not a30");
	auto constexpr UStaticMeshComponent_LODData_Offset = offsetof(UStaticMeshComponent, LODData);
	static_assert(UStaticMeshComponent_LODData_Offset == 0xa40, "UStaticMeshComponent::LODData offset is not a40");
	auto constexpr UStaticMeshComponent_StreamingTextureData_Offset = offsetof(UStaticMeshComponent, StreamingTextureData);
	static_assert(UStaticMeshComponent_StreamingTextureData_Offset == 0xa50, "UStaticMeshComponent::StreamingTextureData offset is not a50");
	auto constexpr UStaticMeshComponent_boolFieldA60_Offset = offsetof(UStaticMeshComponent, boolFieldA60);
	static_assert(UStaticMeshComponent_boolFieldA60_Offset == 0xa60, "UStaticMeshComponent::boolFieldA60 offset is not a60");
	auto constexpr UStaticMeshComponent_LightmassSettings_Offset = offsetof(UStaticMeshComponent, LightmassSettings);
	static_assert(UStaticMeshComponent_LightmassSettings_Offset == 0xa64, "UStaticMeshComponent::LightmassSettings offset is not a64");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
