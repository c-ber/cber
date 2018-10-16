#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionLandscapeLayerSwitch // Size: 0xF8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionLandscapeLayerSwitch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1305); // id32("Class Landscape.MaterialExpressionLandscapeLayerSwitch")
		return ptr;
	}
	FExpressionInput LayerUsed; /* Ofs: 0x68 Size: 0x38 - StructProperty Landscape.MaterialExpressionLandscapeLayerSwitch.LayerUsed */
	FExpressionInput LayerNotUsed; /* Ofs: 0xA0 Size: 0x38 - StructProperty Landscape.MaterialExpressionLandscapeLayerSwitch.LayerNotUsed */
	FName ParameterName; /* Ofs: 0xD8 Size: 0x8 - NameProperty Landscape.MaterialExpressionLandscapeLayerSwitch.ParameterName */
	uint8_t boolFieldE0;
	uint8_t UnknownDataE1[0x3];
	FGuid ExpressionGUID; /* Ofs: 0xE4 Size: 0x10 - StructProperty Landscape.MaterialExpressionLandscapeLayerSwitch.ExpressionGUID */
	uint8_t UnknownDataF4[0x4];


	inline bool SetLayerUsed(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetLayerNotUsed(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetParameterName(t_structHelper inst, FName value) { inst.WriteOffset(0xD8, value); }
	inline bool PreviewUsed()
	{
		return boolFieldE0& 0x1;
	}
	inline bool SetPreviewUsed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetExpressionGUID(t_structHelper inst, FGuid value) { inst.WriteOffset(0xE4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionLandscapeLayerSwitch = sizeof(UMaterialExpressionLandscapeLayerSwitch); // 248
    static_assert(sizeof(UMaterialExpressionLandscapeLayerSwitch) == 0xF8, "Size of UMaterialExpressionLandscapeLayerSwitch is not correct.");
	auto constexpr UMaterialExpressionLandscapeLayerSwitch_LayerUsed_Offset = offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerUsed);
	static_assert(UMaterialExpressionLandscapeLayerSwitch_LayerUsed_Offset == 0x68, "UMaterialExpressionLandscapeLayerSwitch::LayerUsed offset is not 68");
	auto constexpr UMaterialExpressionLandscapeLayerSwitch_LayerNotUsed_Offset = offsetof(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed);
	static_assert(UMaterialExpressionLandscapeLayerSwitch_LayerNotUsed_Offset == 0xa0, "UMaterialExpressionLandscapeLayerSwitch::LayerNotUsed offset is not a0");
	auto constexpr UMaterialExpressionLandscapeLayerSwitch_ParameterName_Offset = offsetof(UMaterialExpressionLandscapeLayerSwitch, ParameterName);
	static_assert(UMaterialExpressionLandscapeLayerSwitch_ParameterName_Offset == 0xd8, "UMaterialExpressionLandscapeLayerSwitch::ParameterName offset is not d8");
	auto constexpr UMaterialExpressionLandscapeLayerSwitch_boolFieldE0_Offset = offsetof(UMaterialExpressionLandscapeLayerSwitch, boolFieldE0);
	static_assert(UMaterialExpressionLandscapeLayerSwitch_boolFieldE0_Offset == 0xe0, "UMaterialExpressionLandscapeLayerSwitch::boolFieldE0 offset is not e0");
	auto constexpr UMaterialExpressionLandscapeLayerSwitch_ExpressionGUID_Offset = offsetof(UMaterialExpressionLandscapeLayerSwitch, ExpressionGUID);
	static_assert(UMaterialExpressionLandscapeLayerSwitch_ExpressionGUID_Offset == 0xe4, "UMaterialExpressionLandscapeLayerSwitch::ExpressionGUID offset is not e4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
