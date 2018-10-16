#pragma once
#include "UMaterialExpression.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeLayerBlend // Size: 0x88
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeLayerBlend t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1302); // id32("Class Landscape.MaterialExpressionLandscapeLayerBlend")
		return ptr;
	}
	TArray<struct FLayerBlendInput> Layers; /* Ofs: 0x68 Size: 0x10 - ArrayProperty Landscape.MaterialExpressionLandscapeLayerBlend.Layers */
	FGuid ExpressionGUID; /* Ofs: 0x78 Size: 0x10 - StructProperty Landscape.MaterialExpressionLandscapeLayerBlend.ExpressionGUID */


	inline bool SetLayers(t_structHelper inst, TArray<struct FLayerBlendInput> value) { inst.WriteOffset(0x68, value); }
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeLayerBlend = sizeof(UMaterialExpressionLandscapeLayerBlend); // 136
    static_assert(sizeof(UMaterialExpressionLandscapeLayerBlend) == 0x88, "Size of UMaterialExpressionLandscapeLayerBlend is not correct.");
	auto constexpr UMaterialExpressionLandscapeLayerBlend_Layers_Offset = offsetof(UMaterialExpressionLandscapeLayerBlend, Layers);
	static_assert(UMaterialExpressionLandscapeLayerBlend_Layers_Offset == 0x68, "UMaterialExpressionLandscapeLayerBlend::Layers offset is not 68");
	auto constexpr UMaterialExpressionLandscapeLayerBlend_ExpressionGUID_Offset = offsetof(UMaterialExpressionLandscapeLayerBlend, ExpressionGUID);
	static_assert(UMaterialExpressionLandscapeLayerBlend_ExpressionGUID_Offset == 0x78, "UMaterialExpressionLandscapeLayerBlend::ExpressionGUID offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
