#pragma once
#include "UMaterialExpression.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeLayerSample // Size: 0x88
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeLayerSample t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1304); // id32("Class Landscape.MaterialExpressionLandscapeLayerSample")
		return ptr;
	}
	FName ParameterName; /* Ofs: 0x68 Size: 0x8 - NameProperty Landscape.MaterialExpressionLandscapeLayerSample.ParameterName */
	float PreviewWeight; /* Ofs: 0x70 Size: 0x4 - FloatProperty Landscape.MaterialExpressionLandscapeLayerSample.PreviewWeight */
	FGuid ExpressionGUID; /* Ofs: 0x74 Size: 0x10 - StructProperty Landscape.MaterialExpressionLandscapeLayerSample.ExpressionGUID */
	uint8_t UnknownData84[0x4];


	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0x68, value); }
	inline bool SetPreviewWeight(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x74, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeLayerSample = sizeof(UMaterialExpressionLandscapeLayerSample); // 136
    static_assert(sizeof(UMaterialExpressionLandscapeLayerSample) == 0x88, "Size of UMaterialExpressionLandscapeLayerSample is not correct.");
	auto constexpr UMaterialExpressionLandscapeLayerSample_ParameterName_Offset = offsetof(UMaterialExpressionLandscapeLayerSample, ParameterName);
	static_assert(UMaterialExpressionLandscapeLayerSample_ParameterName_Offset == 0x68, "UMaterialExpressionLandscapeLayerSample::ParameterName offset is not 68");
	auto constexpr UMaterialExpressionLandscapeLayerSample_PreviewWeight_Offset = offsetof(UMaterialExpressionLandscapeLayerSample, PreviewWeight);
	static_assert(UMaterialExpressionLandscapeLayerSample_PreviewWeight_Offset == 0x70, "UMaterialExpressionLandscapeLayerSample::PreviewWeight offset is not 70");
	auto constexpr UMaterialExpressionLandscapeLayerSample_ExpressionGUID_Offset = offsetof(UMaterialExpressionLandscapeLayerSample, ExpressionGUID);
	static_assert(UMaterialExpressionLandscapeLayerSample_ExpressionGUID_Offset == 0x74, "UMaterialExpressionLandscapeLayerSample::ExpressionGUID offset is not 74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
