#pragma once
#include "UParticleModuleTypeDataBase.hpp"
#include "EBeam2Method.hpp"
#include "FRawDistributionFloat.hpp"
#include "EBeamTaperMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleTypeDataBeam2 // Size: 0x170
	: public UParticleModuleTypeDataBase // Size: 0x38
{
private:
	typedef UParticleModuleTypeDataBeam2 t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1153); // id32("Class Engine.ParticleModuleTypeDataBeam2")
		return ptr;
	}
	TEnumAsByte<enum EBeam2Method> BeamMethod; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataBeam2.BeamMethod */
	uint8_t UnknownData39[0x3];
	int32_t TextureTile; /* Ofs: 0x3C Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataBeam2.TextureTile */
	float TextureTileDistance; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataBeam2.TextureTileDistance */
	int32_t Sheets; /* Ofs: 0x44 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataBeam2.Sheets */
	int32_t MaxBeamCount; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataBeam2.MaxBeamCount */
	float Speed; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataBeam2.Speed */
	int32_t InterpolationPoints; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataBeam2.InterpolationPoints */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];
	int32_t UpVectorStepSize; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataBeam2.UpVectorStepSize */
	uint8_t UnknownData5C[0x4];
	FName BranchParentName; /* Ofs: 0x60 Size: 0x8 - NameProperty Engine.ParticleModuleTypeDataBeam2.BranchParentName */
	FRawDistributionFloat Distance; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.ParticleModuleTypeDataBeam2.Distance */
	TEnumAsByte<enum EBeamTaperMethod> TaperMethod; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataBeam2.TaperMethod */
	uint8_t UnknownDataA1[0x7];
	FRawDistributionFloat TaperFactor; /* Ofs: 0xA8 Size: 0x38 - StructProperty Engine.ParticleModuleTypeDataBeam2.TaperFactor */
	FRawDistributionFloat TaperScale; /* Ofs: 0xE0 Size: 0x38 - StructProperty Engine.ParticleModuleTypeDataBeam2.TaperScale */
	uint8_t boolField118;
	uint8_t UnknownData119[0x57];


	inline bool SetBeamMethod(t_structHelper inst, TEnumAsByte<enum EBeam2Method> value) { inst.WriteOffset(0x38, value); }
	inline bool SetTextureTile(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetTextureTileDistance(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetSheets(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetMaxBeamCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetInterpolationPoints(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool bAlwaysOn()
	{
		return boolField54& 0x1;
	}
	inline bool SetbAlwaysOn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUpVectorStepSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetBranchParentName(t_structHelper inst, FName value) { inst.WriteOffset(0x60, value); }
	inline bool SetDistance(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x68, value); }
	inline bool SetTaperMethod(t_structHelper inst, TEnumAsByte<enum EBeamTaperMethod> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetTaperFactor(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xA8, value); }
	inline bool SetTaperScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0xE0, value); }
	inline bool RenderGeometry()
	{
		return boolField118& 0x1;
	}
	inline bool SetRenderGeometry(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool RenderDirectLine()
	{
		return boolField118& 0x2;
	}
	inline bool SetRenderDirectLine(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool RenderLines()
	{
		return boolField118& 0x4;
	}
	inline bool SetRenderLines(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool RenderTessellation()
	{
		return boolField118& 0x8;
	}
	inline bool SetRenderTessellation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x118, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleTypeDataBeam2 = sizeof(UParticleModuleTypeDataBeam2); // 368
    static_assert(sizeof(UParticleModuleTypeDataBeam2) == 0x170, "Size of UParticleModuleTypeDataBeam2 is not correct.");
	auto constexpr UParticleModuleTypeDataBeam2_BeamMethod_Offset = offsetof(UParticleModuleTypeDataBeam2, BeamMethod);
	static_assert(UParticleModuleTypeDataBeam2_BeamMethod_Offset == 0x38, "UParticleModuleTypeDataBeam2::BeamMethod offset is not 38");
	auto constexpr UParticleModuleTypeDataBeam2_TextureTile_Offset = offsetof(UParticleModuleTypeDataBeam2, TextureTile);
	static_assert(UParticleModuleTypeDataBeam2_TextureTile_Offset == 0x3c, "UParticleModuleTypeDataBeam2::TextureTile offset is not 3c");
	auto constexpr UParticleModuleTypeDataBeam2_TextureTileDistance_Offset = offsetof(UParticleModuleTypeDataBeam2, TextureTileDistance);
	static_assert(UParticleModuleTypeDataBeam2_TextureTileDistance_Offset == 0x40, "UParticleModuleTypeDataBeam2::TextureTileDistance offset is not 40");
	auto constexpr UParticleModuleTypeDataBeam2_Sheets_Offset = offsetof(UParticleModuleTypeDataBeam2, Sheets);
	static_assert(UParticleModuleTypeDataBeam2_Sheets_Offset == 0x44, "UParticleModuleTypeDataBeam2::Sheets offset is not 44");
	auto constexpr UParticleModuleTypeDataBeam2_MaxBeamCount_Offset = offsetof(UParticleModuleTypeDataBeam2, MaxBeamCount);
	static_assert(UParticleModuleTypeDataBeam2_MaxBeamCount_Offset == 0x48, "UParticleModuleTypeDataBeam2::MaxBeamCount offset is not 48");
	auto constexpr UParticleModuleTypeDataBeam2_Speed_Offset = offsetof(UParticleModuleTypeDataBeam2, Speed);
	static_assert(UParticleModuleTypeDataBeam2_Speed_Offset == 0x4c, "UParticleModuleTypeDataBeam2::Speed offset is not 4c");
	auto constexpr UParticleModuleTypeDataBeam2_InterpolationPoints_Offset = offsetof(UParticleModuleTypeDataBeam2, InterpolationPoints);
	static_assert(UParticleModuleTypeDataBeam2_InterpolationPoints_Offset == 0x50, "UParticleModuleTypeDataBeam2::InterpolationPoints offset is not 50");
	auto constexpr UParticleModuleTypeDataBeam2_boolField54_Offset = offsetof(UParticleModuleTypeDataBeam2, boolField54);
	static_assert(UParticleModuleTypeDataBeam2_boolField54_Offset == 0x54, "UParticleModuleTypeDataBeam2::boolField54 offset is not 54");
	auto constexpr UParticleModuleTypeDataBeam2_UpVectorStepSize_Offset = offsetof(UParticleModuleTypeDataBeam2, UpVectorStepSize);
	static_assert(UParticleModuleTypeDataBeam2_UpVectorStepSize_Offset == 0x58, "UParticleModuleTypeDataBeam2::UpVectorStepSize offset is not 58");
	auto constexpr UParticleModuleTypeDataBeam2_BranchParentName_Offset = offsetof(UParticleModuleTypeDataBeam2, BranchParentName);
	static_assert(UParticleModuleTypeDataBeam2_BranchParentName_Offset == 0x60, "UParticleModuleTypeDataBeam2::BranchParentName offset is not 60");
	auto constexpr UParticleModuleTypeDataBeam2_Distance_Offset = offsetof(UParticleModuleTypeDataBeam2, Distance);
	static_assert(UParticleModuleTypeDataBeam2_Distance_Offset == 0x68, "UParticleModuleTypeDataBeam2::Distance offset is not 68");
	auto constexpr UParticleModuleTypeDataBeam2_TaperMethod_Offset = offsetof(UParticleModuleTypeDataBeam2, TaperMethod);
	static_assert(UParticleModuleTypeDataBeam2_TaperMethod_Offset == 0xa0, "UParticleModuleTypeDataBeam2::TaperMethod offset is not a0");
	auto constexpr UParticleModuleTypeDataBeam2_TaperFactor_Offset = offsetof(UParticleModuleTypeDataBeam2, TaperFactor);
	static_assert(UParticleModuleTypeDataBeam2_TaperFactor_Offset == 0xa8, "UParticleModuleTypeDataBeam2::TaperFactor offset is not a8");
	auto constexpr UParticleModuleTypeDataBeam2_TaperScale_Offset = offsetof(UParticleModuleTypeDataBeam2, TaperScale);
	static_assert(UParticleModuleTypeDataBeam2_TaperScale_Offset == 0xe0, "UParticleModuleTypeDataBeam2::TaperScale offset is not e0");
	auto constexpr UParticleModuleTypeDataBeam2_boolField118_Offset = offsetof(UParticleModuleTypeDataBeam2, boolField118);
	static_assert(UParticleModuleTypeDataBeam2_boolField118_Offset == 0x118, "UParticleModuleTypeDataBeam2::boolField118 offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
