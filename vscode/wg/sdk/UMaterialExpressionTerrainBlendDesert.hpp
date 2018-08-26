#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTerrainBlendDesert // Size: 0xC8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTerrainBlendDesert t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(993); // id32("Class Engine.MaterialExpressionTerrainBlendDesert")
		return ptr;
	}
	FExpressionInput UV; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTerrainBlendDesert.UV */
	TArray<struct FTerrainLayerDesert> Inputs; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty Engine.MaterialExpressionTerrainBlendDesert.Inputs */
	uint32_t ConstCoordinate; /* Ofs: 0xB0 Size: 0x4 - UInt32Property Engine.MaterialExpressionTerrainBlendDesert.ConstCoordinate */
	uint8_t UnknownDataB4[0x14];


	inline bool SetUV(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetInputs(t_structHelper inst, TArray<struct FTerrainLayerDesert> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetConstCoordinate(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTerrainBlendDesert = sizeof(UMaterialExpressionTerrainBlendDesert); // 200
    static_assert(sizeof(UMaterialExpressionTerrainBlendDesert) == 0xC8, "Size of UMaterialExpressionTerrainBlendDesert is not correct.");
	auto constexpr UMaterialExpressionTerrainBlendDesert_UV_Offset = offsetof(UMaterialExpressionTerrainBlendDesert, UV);
	static_assert(UMaterialExpressionTerrainBlendDesert_UV_Offset == 0x68, "UMaterialExpressionTerrainBlendDesert::UV offset is not 68");
	auto constexpr UMaterialExpressionTerrainBlendDesert_Inputs_Offset = offsetof(UMaterialExpressionTerrainBlendDesert, Inputs);
	static_assert(UMaterialExpressionTerrainBlendDesert_Inputs_Offset == 0xa0, "UMaterialExpressionTerrainBlendDesert::Inputs offset is not a0");
	auto constexpr UMaterialExpressionTerrainBlendDesert_ConstCoordinate_Offset = offsetof(UMaterialExpressionTerrainBlendDesert, ConstCoordinate);
	static_assert(UMaterialExpressionTerrainBlendDesert_ConstCoordinate_Offset == 0xb0, "UMaterialExpressionTerrainBlendDesert::ConstCoordinate offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
