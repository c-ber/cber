#pragma once
#include "UMaterialInterface.hpp"
#include "FMaterialInstanceBasePropertyOverrides.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialInstance // Size: 0x1B8
	: public UMaterialInterface // Size: 0x78
{
private:
	typedef UMaterialInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1020); // id32("Class Engine.MaterialInstance")
		return ptr;
	}
	ExternalPtr<struct UPhysicalMaterial> PhysMaterial; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Engine.MaterialInstance.PhysMaterial */
	ExternalPtr<struct UMaterialInterface> Parent; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Engine.MaterialInstance.Parent */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];
	TArray<struct FFontParameterValue> FontParameterValues; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.MaterialInstance.FontParameterValues */
	TArray<struct FScalarParameterValue> ScalarParameterValues; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty Engine.MaterialInstance.ScalarParameterValues */
	TArray<struct FTextureParameterValue> TextureParameterValues; /* Ofs: 0xB0 Size: 0x10 - ArrayProperty Engine.MaterialInstance.TextureParameterValues */
	TArray<struct FVectorParameterValue> VectorParameterValues; /* Ofs: 0xC0 Size: 0x10 - ArrayProperty Engine.MaterialInstance.VectorParameterValues */
	uint8_t boolFieldD0;
	uint8_t UnknownDataD1[0x3];
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; /* Ofs: 0xD4 Size: 0x14 - StructProperty Engine.MaterialInstance.BasePropertyOverrides */
	uint8_t UnknownDataE8[0xD0];


	inline bool SetPhysMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0x78, value); }
	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x80, value); }
	inline bool bHasStaticPermutationResource()
	{
		return boolField88& 0x1;
	}
	inline bool SetbHasStaticPermutationResource(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverrideSubsurfaceProfile()
	{
		return boolField88& 0x4;
	}
	inline bool SetbOverrideSubsurfaceProfile(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetFontParameterValues(t_structHelper inst, TArray<struct FFontParameterValue> value) { inst.WriteOffset(0x90, value); }
	inline bool SetScalarParameterValues(t_structHelper inst, TArray<struct FScalarParameterValue> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetTextureParameterValues(t_structHelper inst, TArray<struct FTextureParameterValue> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetVectorParameterValues(t_structHelper inst, TArray<struct FVectorParameterValue> value) { inst.WriteOffset(0xC0, value); }
	inline bool bOverrideBaseProperties()
	{
		return boolFieldD0& 0x1;
	}
	inline bool SetbOverrideBaseProperties(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBasePropertyOverrides(t_structHelper inst, FMaterialInstanceBasePropertyOverrides value) { inst.WriteOffset(0xD4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialInstance = sizeof(UMaterialInstance); // 440
    static_assert(sizeof(UMaterialInstance) == 0x1B8, "Size of UMaterialInstance is not correct.");
	auto constexpr UMaterialInstance_PhysMaterial_Offset = offsetof(UMaterialInstance, PhysMaterial);
	static_assert(UMaterialInstance_PhysMaterial_Offset == 0x78, "UMaterialInstance::PhysMaterial offset is not 78");
	auto constexpr UMaterialInstance_Parent_Offset = offsetof(UMaterialInstance, Parent);
	static_assert(UMaterialInstance_Parent_Offset == 0x80, "UMaterialInstance::Parent offset is not 80");
	auto constexpr UMaterialInstance_boolField88_Offset = offsetof(UMaterialInstance, boolField88);
	static_assert(UMaterialInstance_boolField88_Offset == 0x88, "UMaterialInstance::boolField88 offset is not 88");
	auto constexpr UMaterialInstance_FontParameterValues_Offset = offsetof(UMaterialInstance, FontParameterValues);
	static_assert(UMaterialInstance_FontParameterValues_Offset == 0x90, "UMaterialInstance::FontParameterValues offset is not 90");
	auto constexpr UMaterialInstance_ScalarParameterValues_Offset = offsetof(UMaterialInstance, ScalarParameterValues);
	static_assert(UMaterialInstance_ScalarParameterValues_Offset == 0xa0, "UMaterialInstance::ScalarParameterValues offset is not a0");
	auto constexpr UMaterialInstance_TextureParameterValues_Offset = offsetof(UMaterialInstance, TextureParameterValues);
	static_assert(UMaterialInstance_TextureParameterValues_Offset == 0xb0, "UMaterialInstance::TextureParameterValues offset is not b0");
	auto constexpr UMaterialInstance_VectorParameterValues_Offset = offsetof(UMaterialInstance, VectorParameterValues);
	static_assert(UMaterialInstance_VectorParameterValues_Offset == 0xc0, "UMaterialInstance::VectorParameterValues offset is not c0");
	auto constexpr UMaterialInstance_boolFieldD0_Offset = offsetof(UMaterialInstance, boolFieldD0);
	static_assert(UMaterialInstance_boolFieldD0_Offset == 0xd0, "UMaterialInstance::boolFieldD0 offset is not d0");
	auto constexpr UMaterialInstance_BasePropertyOverrides_Offset = offsetof(UMaterialInstance, BasePropertyOverrides);
	static_assert(UMaterialInstance_BasePropertyOverrides_Offset == 0xd4, "UMaterialInstance::BasePropertyOverrides offset is not d4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
