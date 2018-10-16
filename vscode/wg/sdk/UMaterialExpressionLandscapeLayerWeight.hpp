#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "FVector.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeLayerWeight // Size: 0x100
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeLayerWeight t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1306); // id32("Class Landscape.MaterialExpressionLandscapeLayerWeight")
		return ptr;
	}
	FExpressionInput Base; /* Ofs: 0x68 Size: 0x38 - StructProperty Landscape.MaterialExpressionLandscapeLayerWeight.Base */
	FExpressionInput Layer; /* Ofs: 0xA0 Size: 0x38 - StructProperty Landscape.MaterialExpressionLandscapeLayerWeight.Layer */
	FName ParameterName; /* Ofs: 0xD8 Size: 0x8 - NameProperty Landscape.MaterialExpressionLandscapeLayerWeight.ParameterName */
	float PreviewWeight; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Landscape.MaterialExpressionLandscapeLayerWeight.PreviewWeight */
	FVector ConstBase; /* Ofs: 0xE4 Size: 0xC - StructProperty Landscape.MaterialExpressionLandscapeLayerWeight.ConstBase */
	FGuid ExpressionGUID; /* Ofs: 0xF0 Size: 0x10 - StructProperty Landscape.MaterialExpressionLandscapeLayerWeight.ExpressionGUID */


	inline bool SetBase(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetLayer(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0xD8, value); }
	inline bool SetPreviewWeight(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetConstBase(t_structHelper inst, FVector value) { inst.WriteOffset(0xE4, value); }
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0xF0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeLayerWeight = sizeof(UMaterialExpressionLandscapeLayerWeight); // 256
    static_assert(sizeof(UMaterialExpressionLandscapeLayerWeight) == 0x100, "Size of UMaterialExpressionLandscapeLayerWeight is not correct.");
	auto constexpr UMaterialExpressionLandscapeLayerWeight_Base_Offset = offsetof(UMaterialExpressionLandscapeLayerWeight, Base);
	static_assert(UMaterialExpressionLandscapeLayerWeight_Base_Offset == 0x68, "UMaterialExpressionLandscapeLayerWeight::Base offset is not 68");
	auto constexpr UMaterialExpressionLandscapeLayerWeight_Layer_Offset = offsetof(UMaterialExpressionLandscapeLayerWeight, Layer);
	static_assert(UMaterialExpressionLandscapeLayerWeight_Layer_Offset == 0xa0, "UMaterialExpressionLandscapeLayerWeight::Layer offset is not a0");
	auto constexpr UMaterialExpressionLandscapeLayerWeight_ParameterName_Offset = offsetof(UMaterialExpressionLandscapeLayerWeight, ParameterName);
	static_assert(UMaterialExpressionLandscapeLayerWeight_ParameterName_Offset == 0xd8, "UMaterialExpressionLandscapeLayerWeight::ParameterName offset is not d8");
	auto constexpr UMaterialExpressionLandscapeLayerWeight_PreviewWeight_Offset = offsetof(UMaterialExpressionLandscapeLayerWeight, PreviewWeight);
	static_assert(UMaterialExpressionLandscapeLayerWeight_PreviewWeight_Offset == 0xe0, "UMaterialExpressionLandscapeLayerWeight::PreviewWeight offset is not e0");
	auto constexpr UMaterialExpressionLandscapeLayerWeight_ConstBase_Offset = offsetof(UMaterialExpressionLandscapeLayerWeight, ConstBase);
	static_assert(UMaterialExpressionLandscapeLayerWeight_ConstBase_Offset == 0xe4, "UMaterialExpressionLandscapeLayerWeight::ConstBase offset is not e4");
	auto constexpr UMaterialExpressionLandscapeLayerWeight_ExpressionGUID_Offset = offsetof(UMaterialExpressionLandscapeLayerWeight, ExpressionGUID);
	static_assert(UMaterialExpressionLandscapeLayerWeight_ExpressionGUID_Offset == 0xf0, "UMaterialExpressionLandscapeLayerWeight::ExpressionGUID offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
