#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionMakeMaterialAttributes // Size: 0x5E0
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionMakeMaterialAttributes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(930); // id32("Class Engine.MaterialExpressionMakeMaterialAttributes")
		return ptr;
	}
	FExpressionInput BaseColor; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.BaseColor */
	FExpressionInput Metallic; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.Metallic */
	FExpressionInput Specular; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.Specular */
	FExpressionInput Roughness; /* Ofs: 0x110 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.Roughness */
	FExpressionInput EmissiveColor; /* Ofs: 0x148 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.EmissiveColor */
	FExpressionInput Opacity; /* Ofs: 0x180 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.Opacity */
	FExpressionInput OpacityMask; /* Ofs: 0x1B8 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.OpacityMask */
	FExpressionInput Normal; /* Ofs: 0x1F0 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.Normal */
	FExpressionInput WorldPositionOffset; /* Ofs: 0x228 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.WorldPositionOffset */
	FExpressionInput WorldDisplacement; /* Ofs: 0x260 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.WorldDisplacement */
	FExpressionInput TessellationMultiplier; /* Ofs: 0x298 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.TessellationMultiplier */
	FExpressionInput SubsurfaceColor; /* Ofs: 0x2D0 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.SubsurfaceColor */
	FExpressionInput ClearCoat; /* Ofs: 0x308 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.ClearCoat */
	FExpressionInput ClearCoatRoughness; /* Ofs: 0x340 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.ClearCoatRoughness */
	FExpressionInput AmbientOcclusion; /* Ofs: 0x378 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.AmbientOcclusion */
	FExpressionInput Refraction; /* Ofs: 0x3B0 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.Refraction */
	FExpressionInput CustomizedUVs[8]; /* Ofs: 0x8 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.CustomizedUVs */
	FExpressionInput PixelDepthOffset; /* Ofs: 0x5A8 Size: 0x38 - StructProperty Engine.MaterialExpressionMakeMaterialAttributes.PixelDepthOffset */


	inline bool SetBaseColor(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetMetallic(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetSpecular(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetRoughness(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x110, value); }
	inline bool SetEmissiveColor(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x148, value); }
	inline bool SetOpacity(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x180, value); }
	inline bool SetOpacityMask(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetNormal(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetWorldPositionOffset(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x228, value); }
	inline bool SetWorldDisplacement(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x260, value); }
	inline bool SetTessellationMultiplier(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x298, value); }
	inline bool SetSubsurfaceColor(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetClearCoat(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x308, value); }
	inline bool SetClearCoatRoughness(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x340, value); }
	inline bool SetAmbientOcclusion(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x378, value); }
	inline bool SetRefraction(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetPixelDepthOffset(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x5A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionMakeMaterialAttributes = sizeof(UMaterialExpressionMakeMaterialAttributes); // 1504
    static_assert(sizeof(UMaterialExpressionMakeMaterialAttributes) == 0x5E0, "Size of UMaterialExpressionMakeMaterialAttributes is not correct.");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_BaseColor_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, BaseColor);
	static_assert(UMaterialExpressionMakeMaterialAttributes_BaseColor_Offset == 0x68, "UMaterialExpressionMakeMaterialAttributes::BaseColor offset is not 68");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_Metallic_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, Metallic);
	static_assert(UMaterialExpressionMakeMaterialAttributes_Metallic_Offset == 0xa0, "UMaterialExpressionMakeMaterialAttributes::Metallic offset is not a0");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_Specular_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, Specular);
	static_assert(UMaterialExpressionMakeMaterialAttributes_Specular_Offset == 0xd8, "UMaterialExpressionMakeMaterialAttributes::Specular offset is not d8");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_Roughness_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, Roughness);
	static_assert(UMaterialExpressionMakeMaterialAttributes_Roughness_Offset == 0x110, "UMaterialExpressionMakeMaterialAttributes::Roughness offset is not 110");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_EmissiveColor_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, EmissiveColor);
	static_assert(UMaterialExpressionMakeMaterialAttributes_EmissiveColor_Offset == 0x148, "UMaterialExpressionMakeMaterialAttributes::EmissiveColor offset is not 148");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_Opacity_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, Opacity);
	static_assert(UMaterialExpressionMakeMaterialAttributes_Opacity_Offset == 0x180, "UMaterialExpressionMakeMaterialAttributes::Opacity offset is not 180");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_OpacityMask_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, OpacityMask);
	static_assert(UMaterialExpressionMakeMaterialAttributes_OpacityMask_Offset == 0x1b8, "UMaterialExpressionMakeMaterialAttributes::OpacityMask offset is not 1b8");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_Normal_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, Normal);
	static_assert(UMaterialExpressionMakeMaterialAttributes_Normal_Offset == 0x1f0, "UMaterialExpressionMakeMaterialAttributes::Normal offset is not 1f0");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_WorldPositionOffset_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, WorldPositionOffset);
	static_assert(UMaterialExpressionMakeMaterialAttributes_WorldPositionOffset_Offset == 0x228, "UMaterialExpressionMakeMaterialAttributes::WorldPositionOffset offset is not 228");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_WorldDisplacement_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, WorldDisplacement);
	static_assert(UMaterialExpressionMakeMaterialAttributes_WorldDisplacement_Offset == 0x260, "UMaterialExpressionMakeMaterialAttributes::WorldDisplacement offset is not 260");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_TessellationMultiplier_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, TessellationMultiplier);
	static_assert(UMaterialExpressionMakeMaterialAttributes_TessellationMultiplier_Offset == 0x298, "UMaterialExpressionMakeMaterialAttributes::TessellationMultiplier offset is not 298");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_SubsurfaceColor_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, SubsurfaceColor);
	static_assert(UMaterialExpressionMakeMaterialAttributes_SubsurfaceColor_Offset == 0x2d0, "UMaterialExpressionMakeMaterialAttributes::SubsurfaceColor offset is not 2d0");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_ClearCoat_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, ClearCoat);
	static_assert(UMaterialExpressionMakeMaterialAttributes_ClearCoat_Offset == 0x308, "UMaterialExpressionMakeMaterialAttributes::ClearCoat offset is not 308");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_ClearCoatRoughness_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, ClearCoatRoughness);
	static_assert(UMaterialExpressionMakeMaterialAttributes_ClearCoatRoughness_Offset == 0x340, "UMaterialExpressionMakeMaterialAttributes::ClearCoatRoughness offset is not 340");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_AmbientOcclusion_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, AmbientOcclusion);
	static_assert(UMaterialExpressionMakeMaterialAttributes_AmbientOcclusion_Offset == 0x378, "UMaterialExpressionMakeMaterialAttributes::AmbientOcclusion offset is not 378");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_Refraction_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, Refraction);
	static_assert(UMaterialExpressionMakeMaterialAttributes_Refraction_Offset == 0x3b0, "UMaterialExpressionMakeMaterialAttributes::Refraction offset is not 3b0");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_CustomizedUVs_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, CustomizedUVs);
	static_assert(UMaterialExpressionMakeMaterialAttributes_CustomizedUVs_Offset == 0x3e8, "UMaterialExpressionMakeMaterialAttributes::CustomizedUVs offset is not 3e8");
	auto constexpr UMaterialExpressionMakeMaterialAttributes_PixelDepthOffset_Offset = offsetof(UMaterialExpressionMakeMaterialAttributes, PixelDepthOffset);
	static_assert(UMaterialExpressionMakeMaterialAttributes_PixelDepthOffset_Offset == 0x5a8, "UMaterialExpressionMakeMaterialAttributes::PixelDepthOffset offset is not 5a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
